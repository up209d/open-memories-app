#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_github_up209d_openmemories_app_MainActivity_getGreetingFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
