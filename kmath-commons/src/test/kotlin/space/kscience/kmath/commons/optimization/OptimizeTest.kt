/*
 * Copyright 2018-2021 KMath contributors.
 * Use of this source code is governed by the Apache 2.0 license that can be found in the LICENSE file.
 */

package space.kscience.kmath.commons.optimization

import kotlinx.coroutines.runBlocking
import space.kscience.kmath.commons.expressions.DSProcessor
import space.kscience.kmath.commons.expressions.DerivativeStructureExpression
import space.kscience.kmath.distributions.NormalDistribution
import space.kscience.kmath.expressions.Symbol.Companion.x
import space.kscience.kmath.expressions.Symbol.Companion.y
import space.kscience.kmath.expressions.chiSquaredExpression
import space.kscience.kmath.expressions.symbol
import space.kscience.kmath.operations.map
import space.kscience.kmath.optimization.*
import space.kscience.kmath.stat.RandomGenerator
import space.kscience.kmath.structures.DoubleBuffer
import space.kscience.kmath.structures.asBuffer
import kotlin.math.pow
import kotlin.test.Test

internal class OptimizeTest {
    val normal = DerivativeStructureExpression {
        exp(-bindSymbol(x).pow(2) / 2) + exp(-bindSymbol(y).pow(2) / 2)
    }

    @Test
    fun testGradientOptimization() = runBlocking {
        val result = normal.optimizeWith(CMOptimizer, x to 1.0, y to 1.0)
        println(result.resultPoint)
        println(result.resultValue)
    }

    @Test
    fun testSimplexOptimization() = runBlocking {
        val result = normal.optimizeWith(CMOptimizer, x to 1.0, y to 1.0) {
            simplexSteps(x to 2.0, y to 0.5)
            //this sets simplex optimizer
        }

        println(result.resultPoint)
        println(result.resultValue)
    }

    @Test
    fun testCmFit() = runBlocking {
        val a by symbol
        val b by symbol
        val c by symbol

        val sigma = 1.0
        val generator = NormalDistribution(0.0, sigma)
        val chain = generator.sample(RandomGenerator.default(112667))
        val x = (1..100).map(Int::toDouble).asBuffer()

        val y = x.map {
            it.pow(2) + it + 1 + chain.next()
        }

        val yErr = DoubleBuffer(x.size) { sigma }

        val chi2 = DSProcessor.chiSquaredExpression(
            x, y, yErr
        ) { arg ->
            val cWithDefault = bindSymbolOrNull(c) ?: one
            bindSymbol(a) * arg.pow(2) + bindSymbol(b) * arg + cWithDefault
        }

        val result: FunctionOptimization<Double> = chi2.optimizeWith(
            CMOptimizer,
            mapOf(a to 1.5, b to 0.9, c to 1.0),
            FunctionOptimizationTarget.MINIMIZE
        )
        println(result)
        println("Chi2/dof = ${result.resultValue / (x.size - 3)}")
    }
}
