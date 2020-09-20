package scientifik.kmath.chains

import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.flow.runningReduce
import kotlinx.coroutines.flow.scan
import scientifik.kmath.operations.Space
import scientifik.kmath.operations.SpaceOperations
import scientifik.kmath.operations.invoke

@ExperimentalCoroutinesApi
public fun <T> Flow<T>.cumulativeSum(space: SpaceOperations<T>): Flow<T> =
    space { runningReduce { sum, element -> sum + element } }

@ExperimentalCoroutinesApi
public fun <T> Flow<T>.mean(space: Space<T>): Flow<T> = space {
    data class Accumulator(var sum: T, var num: Int)

    scan(Accumulator(zero, 0)) { sum, element ->
        sum.apply {
            this.sum += element
            this.num += 1
        }
    }.map { it.sum / it.num }
}
