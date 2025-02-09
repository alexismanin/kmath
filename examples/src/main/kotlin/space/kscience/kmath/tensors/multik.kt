/*
 * Copyright 2018-2021 KMath contributors.
 * Use of this source code is governed by the Apache 2.0 license that can be found in the LICENSE file.
 */

package space.kscience.kmath.tensors

import org.jetbrains.kotlinx.multik.api.Multik
import org.jetbrains.kotlinx.multik.api.ndarray
import space.kscience.kmath.multik.multikND
import space.kscience.kmath.nd.one
import space.kscience.kmath.operations.DoubleField

fun main(): Unit = with(DoubleField.multikND) {
    val a = Multik.ndarray(intArrayOf(1, 2, 3)).asType<Double>().wrap()
    val b = Multik.ndarray(doubleArrayOf(1.0, 2.0, 3.0)).wrap()
    one(a.shape) - a + b * 3
}
