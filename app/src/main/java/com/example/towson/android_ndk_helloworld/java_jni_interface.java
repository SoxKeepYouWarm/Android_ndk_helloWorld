package com.example.towson.android_ndk_helloworld;

public class java_jni_interface {

    static {
        System.loadLibrary("jni_routine");
    }

    public native static String get_jni_string();


}
