/*
*  first-jni.cpp
*/
#include <string.h>
#include <jni.h>

extern "C"
jstring
Java_my_project_MyFirstJNI_MyFirstJNI_stringFromJNI( JNIEnv* env,
                                                  jobject thiz )
{
    return env->NewStringUTF("My first JNI!");
}
