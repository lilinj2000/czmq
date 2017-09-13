/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "org_zeromq_czmq_Zlist.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1new (JNIEnv *env, jclass c)
{
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) zlist_new ();
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    zlist_destroy ((zlist_t **) &self);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1first (JNIEnv *env, jclass c, jlong self)
{
    jlong first_ = (jlong) (intptr_t) zlist_first ((zlist_t *) (intptr_t) self);
    return first_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1next (JNIEnv *env, jclass c, jlong self)
{
    jlong next_ = (jlong) (intptr_t) zlist_next ((zlist_t *) (intptr_t) self);
    return next_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1last (JNIEnv *env, jclass c, jlong self)
{
    jlong last_ = (jlong) (intptr_t) zlist_last ((zlist_t *) (intptr_t) self);
    return last_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1head (JNIEnv *env, jclass c, jlong self)
{
    jlong head_ = (jlong) (intptr_t) zlist_head ((zlist_t *) (intptr_t) self);
    return head_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1tail (JNIEnv *env, jclass c, jlong self)
{
    jlong tail_ = (jlong) (intptr_t) zlist_tail ((zlist_t *) (intptr_t) self);
    return tail_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1item (JNIEnv *env, jclass c, jlong self)
{
    jlong item_ = (jlong) (intptr_t) zlist_item ((zlist_t *) (intptr_t) self);
    return item_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zlist__1_1append (JNIEnv *env, jclass c, jlong self, jlong item)
{
    jint append_ = (jint) zlist_append ((zlist_t *) (intptr_t) self, (void *) (intptr_t) item);
    return append_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zlist__1_1push (JNIEnv *env, jclass c, jlong self, jlong item)
{
    jint push_ = (jint) zlist_push ((zlist_t *) (intptr_t) self, (void *) (intptr_t) item);
    return push_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1pop (JNIEnv *env, jclass c, jlong self)
{
    jlong pop_ = (jlong) (intptr_t) zlist_pop ((zlist_t *) (intptr_t) self);
    return pop_;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zlist__1_1exists (JNIEnv *env, jclass c, jlong self, jlong item)
{
    jboolean exists_ = (jboolean) zlist_exists ((zlist_t *) (intptr_t) self, (void *) (intptr_t) item);
    return exists_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1remove (JNIEnv *env, jclass c, jlong self, jlong item)
{
    zlist_remove ((zlist_t *) (intptr_t) self, (void *) (intptr_t) item);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1dup (JNIEnv *env, jclass c, jlong self)
{
    jlong dup_ = (jlong) (intptr_t) zlist_dup ((zlist_t *) (intptr_t) self);
    return dup_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1purge (JNIEnv *env, jclass c, jlong self)
{
    zlist_purge ((zlist_t *) (intptr_t) self);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1size (JNIEnv *env, jclass c, jlong self)
{
    jlong size_ = (jlong) zlist_size ((zlist_t *) (intptr_t) self);
    return size_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1autofree (JNIEnv *env, jclass c, jlong self)
{
    zlist_autofree ((zlist_t *) (intptr_t) self);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zlist_test ((bool) verbose);
}
