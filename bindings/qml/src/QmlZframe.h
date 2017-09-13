/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

#ifndef QML_ZFRAME_H
#define QML_ZFRAME_H

#include <QtQml>

#include <czmq.h>
#include "qml_czmq_plugin.h"


class QmlZframe : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isNULL READ isNULL)

public:
    zframe_t *self;

    QmlZframe() { self = NULL; }
    bool isNULL() { return self == NULL; }

    static QObject* qmlAttachedProperties(QObject* object); // defined in QmlZframe.cpp

public slots:
    //  Return number of bytes in frame data
    size_t size ();

    //  Return address of frame data
    byte *data ();

    //  Return meta data property for frame
    //  The caller shall not modify or free the returned value, which shall be
    //  owned by the message.
    const QString meta (const QString &property);

    //  Create a new frame that duplicates an existing frame. If frame is null,
    //  or memory was exhausted, returns null.
    QmlZframe *dup ();

    //  Return frame data encoded as printable hex string, useful for 0MQ UUIDs.
    //  Caller must free string when finished with it.
    QString strhex ();

    //  Return frame data copied into freshly allocated string
    //  Caller must free string when finished with it.
    QString strdup ();

    //  Return TRUE if frame body is equal to string, excluding terminator
    bool streq (const QString &string);

    //  Return frame MORE indicator (1 or 0), set when reading frame from socket
    //  or by the zframe_set_more() method
    int more ();

    //  Set frame MORE indicator (1 or 0). Note this is NOT used when sending
    //  frame to socket, you have to specify flag explicitly.
    void setMore (int more);

    //  Return frame routing ID, if the frame came from a ZMQ_SERVER socket.
    //  Else returns zero.
    uint32_t routingId ();

    //  Set routing ID on frame. This is used if/when the frame is sent to a
    //  ZMQ_SERVER socket.
    void setRoutingId (uint32_t routingId);

    //  Return frame group of radio-dish pattern.
    const QString group ();

    //  Set group on frame. This is used if/when the frame is sent to a
    //  ZMQ_RADIO socket.
    //  Return -1 on error, 0 on success.
    int setGroup (const QString &group);

    //  Return TRUE if two frames have identical size and data
    //  If either frame is NULL, equality is always false.
    bool eq (QmlZframe *other);

    //  Set new contents for frame
    void reset (const void *data, size_t size);

    //  Send message to zsys log sink (may be stdout, or system facility as
    //  configured by zsys_set_logstream). Prefix shows before frame, if not null.
    void print (const QString &prefix);
};

class QmlZframeAttached : public QObject
{
    Q_OBJECT
    QObject* m_attached;

public:
    QmlZframeAttached (QObject* attached) {
        Q_UNUSED (attached);
    };

public slots:
    //  Send a frame to a socket, destroy frame after sending.
    //  Return -1 on error, 0 on success.
    int send (QmlZframe *selfP, void *dest, int flags);

    //  Probe the supplied object, and report if it looks like a zframe_t.
    bool is (void *self);

    //  Self test of this class.
    void test (bool verbose);

    //  Create a new frame. If size is not null, allocates the frame data
    //  to the specified size. If additionally, data is not null, copies
    //  size octets from the specified data into the frame body.
    QmlZframe *construct (const void *data, size_t size);

    //  Create an empty (zero-sized) frame
    QmlZframe *constructEmpty ();

    //  Create a frame with a specified string content.
    QmlZframe *from (const QString &string);

    //  Receive frame from socket, returns zframe_t object or NULL if the recv
    //  was interrupted. Does a blocking recv, if you want to not block then use
    //  zpoller or zloop.
    QmlZframe *recv (void *source);

    //  Destroy a frame
    void destruct (QmlZframe *qmlSelf);
};


QML_DECLARE_TYPEINFO(QmlZframe, QML_HAS_ATTACHED_PROPERTIES)

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
