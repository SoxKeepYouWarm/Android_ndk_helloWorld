
#define LOG_TAG "java_jni_interface.cpp"
#define DPRINTF(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define IPRINTF(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define EPRINTF(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

JNIEXPORT void JNICALL JNICALL 
Java_com_example_towson_android_ndk_helloworld_get_jni_string
(JNIEnv *, jobject)
{
	DPRINTF("%s\n", __FUNCTION__);
	DPRINTF("This is a debug message coming from my C++ code!\n");
}