#include <jni.h>
#include <string>

extern "C"
jstring
Java_yong_testndk_MainActivity_stringFromJNITestHello(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from test C++";
    return env->NewStringUTF(hello.c_str());
}
