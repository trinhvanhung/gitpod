/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class software_chronicle_enterprise_internals_impl_NativeAffinity */

#ifndef _Included_software_chronicle_enterprise_internals_impl_NativeAffinity
#define _Included_software_chronicle_enterprise_internals_impl_NativeAffinity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     software_chronicle_enterprise_internals_impl_NativeAffinity
 * Method:    getAffinity0
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_software_chronicle_enterprise_internals_impl_NativeAffinity_getAffinity0
  (JNIEnv *, jclass);

/*
 * Class:     software_chronicle_enterprise_internals_impl_NativeAffinity
 * Method:    setAffinity0
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_software_chronicle_enterprise_internals_impl_NativeAffinity_setAffinity0
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     software_chronicle_enterprise_internals_impl_NativeAffinity
 * Method:    getCpu0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_software_chronicle_enterprise_internals_impl_NativeAffinity_getCpu0
  (JNIEnv *, jclass);

/*
 * Class:     software_chronicle_enterprise_internals_impl_NativeAffinity
 * Method:    getProcessId0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_software_chronicle_enterprise_internals_impl_NativeAffinity_getProcessId0
  (JNIEnv *, jclass);

/*
 * Class:     software_chronicle_enterprise_internals_impl_NativeAffinity
 * Method:    getThreadId0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_software_chronicle_enterprise_internals_impl_NativeAffinity_getThreadId0
  (JNIEnv *, jclass);

/*
 * Class:     software_chronicle_enterprise_internals_impl_NativeAffinity
 * Method:    rdtsc0
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_software_chronicle_enterprise_internals_impl_NativeAffinity_rdtsc0
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
