package space.kscience.kmath.tensors

import space.kscience.kmath.linear.BufferMatrix
import space.kscience.kmath.linear.RealMatrixContext.toBufferMatrix
import space.kscience.kmath.nd.Matrix
import space.kscience.kmath.nd.MutableNDBuffer
import space.kscience.kmath.nd.Structure2D
import space.kscience.kmath.nd.as2D
import space.kscience.kmath.structures.Buffer
import space.kscience.kmath.structures.BufferAccessor2D
import space.kscience.kmath.structures.MutableBuffer
import space.kscience.kmath.structures.toList

public open class BufferTensor<T>(
    override val shape: IntArray,
    buffer: MutableBuffer<T>
) :
    TensorStructure<T>,
    MutableNDBuffer<T>(
        TensorStrides(shape),
        buffer
    )


public fun <T : Any> BufferTensor<T>.toBufferMatrix(): BufferMatrix<T> {
    return BufferMatrix(shape[0], shape[1], this.buffer)
}

// T???
public fun BufferMatrix<Double>.BufferTensor(): BufferTensor<Double> {
    return BufferTensor(intArrayOf(rowNum, colNum),  BufferAccessor2D(rowNum, colNum, Buffer.Companion::real).create(this))
}

