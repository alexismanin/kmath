/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class space_kscience_kmath_torch_JTorch */

#ifndef _Included_space_kscience_kmath_torch_JTorch
#define _Included_space_kscience_kmath_torch_JTorch
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getNumThreads
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_torch_JTorch_getNumThreads
  (JNIEnv *, jclass);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    setNumThreads
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_setNumThreads
  (JNIEnv *, jclass, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    cudaIsAvailable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_space_kscience_kmath_torch_JTorch_cudaIsAvailable
  (JNIEnv *, jclass);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    setSeed
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_setSeed
  (JNIEnv *, jclass, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    emptyTensor
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_emptyTensor
  (JNIEnv *, jclass);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    fromBlobDouble
 * Signature: ([D[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_fromBlobDouble
  (JNIEnv *, jclass, jdoubleArray, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    fromBlobFloat
 * Signature: ([F[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_fromBlobFloat
  (JNIEnv *, jclass, jfloatArray, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    fromBlobLong
 * Signature: ([J[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_fromBlobLong
  (JNIEnv *, jclass, jlongArray, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    fromBlobInt
 * Signature: ([I[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_fromBlobInt
  (JNIEnv *, jclass, jintArray, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    copyTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_copyTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    copyToDevice
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_copyToDevice
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    copyToDouble
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_copyToDouble
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    copyToFloat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_copyToFloat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    copyToLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_copyToLong
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    copyToInt
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_copyToInt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    swapTensors
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_swapTensors
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    viewTensor
 * Signature: (J[I)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_viewTensor
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    tensorToString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_space_kscience_kmath_torch_JTorch_tensorToString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    disposeTensor
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_disposeTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_torch_JTorch_getDim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getNumel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_torch_JTorch_getNumel
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getShapeAt
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_torch_JTorch_getShapeAt
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getStrideAt
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_torch_JTorch_getStrideAt
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getDevice
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_torch_JTorch_getDevice
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getItemDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_space_kscience_kmath_torch_JTorch_getItemDouble
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getItemFloat
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_space_kscience_kmath_torch_JTorch_getItemFloat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getItemLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_getItemLong
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getItemInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_torch_JTorch_getItemInt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getDouble
 * Signature: (J[I)D
 */
JNIEXPORT jdouble JNICALL Java_space_kscience_kmath_torch_JTorch_getDouble
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getFloat
 * Signature: (J[I)F
 */
JNIEXPORT jfloat JNICALL Java_space_kscience_kmath_torch_JTorch_getFloat
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getLong
 * Signature: (J[I)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_getLong
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    getInt
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_torch_JTorch_getInt
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    setDouble
 * Signature: (J[ID)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_setDouble
  (JNIEnv *, jclass, jlong, jintArray, jdouble);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    setFloat
 * Signature: (J[IF)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_setFloat
  (JNIEnv *, jclass, jlong, jintArray, jfloat);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    setLong
 * Signature: (J[IJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_setLong
  (JNIEnv *, jclass, jlong, jintArray, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    setInt
 * Signature: (J[II)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_setInt
  (JNIEnv *, jclass, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randDouble
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randDouble
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randnDouble
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randnDouble
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randFloat
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randFloat
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randnFloat
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randnFloat
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randintDouble
 * Signature: (JJ[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randintDouble
  (JNIEnv *, jclass, jlong, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randintFloat
 * Signature: (JJ[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randintFloat
  (JNIEnv *, jclass, jlong, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randintLong
 * Signature: (JJ[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randintLong
  (JNIEnv *, jclass, jlong, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randintInt
 * Signature: (JJ[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randintInt
  (JNIEnv *, jclass, jlong, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randLike
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randLike
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randLikeAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_randLikeAssign
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randnLike
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randnLike
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randnLikeAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_randnLikeAssign
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randintLike
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_randintLike
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    randintLikeAssign
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_randintLikeAssign
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    fullDouble
 * Signature: (D[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_fullDouble
  (JNIEnv *, jclass, jdouble, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    fullFloat
 * Signature: (F[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_fullFloat
  (JNIEnv *, jclass, jfloat, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    fullLong
 * Signature: (J[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_fullLong
  (JNIEnv *, jclass, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    fullInt
 * Signature: (I[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_fullInt
  (JNIEnv *, jclass, jint, jintArray, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesDouble
 * Signature: (DJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_timesDouble
  (JNIEnv *, jclass, jdouble, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesFloat
 * Signature: (FJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_timesFloat
  (JNIEnv *, jclass, jfloat, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesLong
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_timesLong
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesInt
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_timesInt
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesDoubleAssign
 * Signature: (DJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_timesDoubleAssign
  (JNIEnv *, jclass, jdouble, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesFloatAssign
 * Signature: (FJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_timesFloatAssign
  (JNIEnv *, jclass, jfloat, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesLongAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_timesLongAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesIntAssign
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_timesIntAssign
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusDouble
 * Signature: (DJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_plusDouble
  (JNIEnv *, jclass, jdouble, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusFloat
 * Signature: (FJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_plusFloat
  (JNIEnv *, jclass, jfloat, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusLong
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_plusLong
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusInt
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_plusInt
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusDoubleAssign
 * Signature: (DJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_plusDoubleAssign
  (JNIEnv *, jclass, jdouble, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusFloatAssign
 * Signature: (FJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_plusFloatAssign
  (JNIEnv *, jclass, jfloat, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusLongAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_plusLongAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusIntAssign
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_plusIntAssign
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_timesTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    timesTensorAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_timesTensorAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    divTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_divTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    divTensorAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_divTensorAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_plusTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    plusTensorAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_plusTensorAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    minusTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_minusTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    minusTensorAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_minusTensorAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    unaryMinus
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_unaryMinus
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    absTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_absTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    absTensorAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_absTensorAssign
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    transposeTensor
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_transposeTensor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    transposeTensorAssign
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_transposeTensorAssign
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    expTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_expTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    expTensorAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_expTensorAssign
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    logTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_logTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    logTensorAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_logTensorAssign
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    sumTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_sumTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    sumTensorAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_sumTensorAssign
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    matmul
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_matmul
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    matmulAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_matmulAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    matmulRightAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_matmulRightAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    diagEmbed
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_diagEmbed
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    svdTensor
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_svdTensor
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    symeigTensor
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_symeigTensor
  (JNIEnv *, jclass, jlong, jlong, jlong, jboolean);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    requiresGrad
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_space_kscience_kmath_torch_JTorch_requiresGrad
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    setRequiresGrad
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_torch_JTorch_setRequiresGrad
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    detachFromGraph
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_detachFromGraph
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    autogradTensor
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_autogradTensor
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     space_kscience_kmath_torch_JTorch
 * Method:    autohessTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_torch_JTorch_autohessTensor
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif