#include <jni.h>
#include <string>
#include "computer/include/Computer.h"
//这里的extern C好像一定要使用括号包括所有的函数，否则上面不能进行识别
extern "C"{

jstring
Java_yong_testndk_MainActivity_testString(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Computer from C++";
    return env->NewStringUTF(hello.c_str());
}

jint  Java_yong_testndk_MainActivity_add(JNIEnv *env, jobject obj) {
    Computer ba;
    return ba.add(1, 2);
}
jint Java_yong_testndk_MainActivity_sub(JNIEnv *env, jobject obj) {
    Computer ba;
    return ba.sub(3, 1);
}

jint Java_yong_testndk_MainActivity_mul(JNIEnv *env, jobject obj) {
    Computer ba;
    return ba.mul(2, 3);
}

jint Java_yong_testndk_MainActivity_div(JNIEnv *env, jobject obj) {
    Computer ba;
    return ba.div(4, 2);
}
}