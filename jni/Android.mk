LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := JNIDemo
LOCAL_SRC_FILES := jniDemo.c

include $(BUILD_SHARED_LIBRARY)