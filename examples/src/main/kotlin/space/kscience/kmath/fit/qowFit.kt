/*
 * Copyright 2018-2021 KMath contributors.
 * Use of this source code is governed by the Apache 2.0 license that can be found in the license/LICENSE.txt file.
 */

package space.kscience.kmath.fit

import kotlinx.html.br
import kotlinx.html.h3
import space.kscience.kmath.commons.expressions.DSProcessor
import space.kscience.kmath.data.XYErrorColumnarData
import space.kscience.kmath.distributions.NormalDistribution
import space.kscience.kmath.expressions.Symbol
import space.kscience.kmath.expressions.binding
import space.kscience.kmath.expressions.symbol
import space.kscience.kmath.optimization.QowOptimizer
import space.kscience.kmath.optimization.fitWith
import space.kscience.kmath.optimization.resultPoint
import space.kscience.kmath.real.map
import space.kscience.kmath.real.step
import space.kscience.kmath.stat.RandomGenerator
import space.kscience.kmath.structures.asIterable
import space.kscience.kmath.structures.toList
import space.kscience.plotly.*
import space.kscience.plotly.models.ScatterMode
import kotlin.math.abs
import kotlin.math.pow
import kotlin.math.sqrt

// Forward declaration of symbols that will be used in expressions.
private val a by symbol
private val b by symbol
private val c by symbol


/**
 * Least squares fie with auto-differentiation. Uses `kmath-commons` and `kmath-for-real` modules.
 */
suspend fun main() {
    //A generator for a normally distributed values
    val generator = NormalDistribution(0.0, 1.0)

    //A chain/flow of random values with the given seed
    val chain = generator.sample(RandomGenerator.default(112667))


    //Create a uniformly distributed x values like numpy.arrange
    val x = 1.0..100.0 step 1.0


    //Perform an operation on each x value (much more effective, than numpy)
    val y = x.map { it ->
        val value = it.pow(2) + it + 100
        value + chain.next() * sqrt(value)
    }
    // this will also work, but less effective:
    // val y = x.pow(2)+ x + 1 + chain.nextDouble()

    // create same errors for all xs
    val yErr = y.map { sqrt(abs(it)) }
    require(yErr.asIterable().all { it > 0 }) { "All errors must be strictly positive" }

    val result = XYErrorColumnarData.of(x, y, yErr).fitWith(
        QowOptimizer,
        DSProcessor,
        mapOf(a to 1.0, b to 1.2, c to 99.0)
    ) { arg ->
        //bind variables to autodiff context
        val a by binding
        val b by binding
        //Include default value for c if it is not provided as a parameter
        val c = bindSymbolOrNull(c) ?: one
        a * arg.pow(2) + b * arg + c
    }

    //display a page with plot and numerical results
    val page = Plotly.page {
        plot {
            scatter {
                mode = ScatterMode.markers
                x(x)
                y(y)
                error_y {
                    array = yErr.toList()
                }
                name = "data"
            }
            scatter {
                mode = ScatterMode.lines
                x(x)
                y(x.map { result.model(result.resultPoint + (Symbol.x to it)) })
                name = "fit"
            }
        }
        br()
        h3 {
            +"Fit result: ${result.resultPoint}"
        }
//        h3 {
//            +"Chi2/dof = ${result.resultValue / (x.size - 3)}"
//        }
    }

    page.makeFile()
}