package space.kscience.kmath.geometry

import space.kscience.kmath.structures.asSequence
import space.kscience.kmath.structures.toList
import kotlin.test.assertEquals
import kotlin.test.Test

internal class Vector2DTest {
    private val vector = Vector2D(1.0, -7.999)

    @Test
    fun size() {
        assertEquals(2, vector.size)
    }

    @Test
    fun get() {
        assertEquals(1.0, vector[0])
        assertEquals(-7.999, vector[1])
    }

    @Test
    fun iterator() {
        assertEquals(listOf(1.0, -7.999), vector.toList())
    }

    @Test
    fun x() {
        assertEquals(1.0, vector.x)
    }

    @Test
    fun y() {
        assertEquals(-7.999, vector.y)
    }
}