#include<jni.h>
#include<string.h>

jstring Java_com_example_jnidemo_MainActivity_getData( JNIEnv* env, jobject obj )
{
    int a,b;
    a = 5;
    b=5;
    int c = a+b;
    free(env);
    return (*env)->NewStringUTF( env, "Hello Kailash" );
}