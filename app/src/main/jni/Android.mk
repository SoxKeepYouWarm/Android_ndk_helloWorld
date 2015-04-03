LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := jni_routine

LOCAL_LDLIBS := -llog
include $(BUILD_SHARED_LIBRARY)