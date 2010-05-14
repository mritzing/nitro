/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nitf_SubWindow */

#ifndef _Included_nitf_SubWindow
#define _Included_nitf_SubWindow
#ifdef __cplusplus
extern "C" {
#endif
#undef nitf_SubWindow_INVALID_ADDRESS
#define nitf_SubWindow_INVALID_ADDRESS 0LL
/*
 * Class:     nitf_SubWindow
 * Method:    getBandList
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_nitf_SubWindow_getBandList
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SubWindow
 * Method:    construct
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nitf_SubWindow_construct
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SubWindow
 * Method:    setNumCols
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_SubWindow_setNumCols
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_SubWindow
 * Method:    setBandList
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_nitf_SubWindow_setBandList
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     nitf_SubWindow
 * Method:    getStartRow
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SubWindow_getStartRow
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SubWindow
 * Method:    setStartRow
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_SubWindow_setStartRow
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_SubWindow
 * Method:    getNumRows
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SubWindow_getNumRows
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SubWindow
 * Method:    setNumRows
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_SubWindow_setNumRows
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_SubWindow
 * Method:    getStartCol
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SubWindow_getStartCol
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SubWindow
 * Method:    setStartCol
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_SubWindow_setStartCol
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_SubWindow
 * Method:    getNumCols
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SubWindow_getNumCols
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SubWindow
 * Method:    getNumBands
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SubWindow_getNumBands
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SubWindow
 * Method:    setNumBands
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nitf_SubWindow_setNumBands
  (JNIEnv *, jobject, jint);

/*
 * Class:     nitf_SubWindow
 * Method:    setDownSampler
 * Signature: (Lnitf/DownSampler;)V
 */
JNIEXPORT void JNICALL Java_nitf_SubWindow_setDownSampler
  (JNIEnv *, jobject, jobject);

/*
 * Class:     nitf_SubWindow
 * Method:    getDownSampler
 * Signature: ()Lnitf/DownSampler;
 */
JNIEXPORT jobject JNICALL Java_nitf_SubWindow_getDownSampler
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
