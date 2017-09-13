/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#ifndef Q_ZCONFIG_H
#define Q_ZCONFIG_H

#include "qczmq.h"

class QT_CZMQ_EXPORT QZconfig : public QObject
{
    Q_OBJECT
public:

    //  Copy-construct to return the proper wrapped c types
    QZconfig (zconfig_t *self, QObject *qObjParent = 0);

    //  Create new config item
    explicit QZconfig (const QString &name, QZconfig *parent, QObject *qObjParent = 0);

    //  Load a config tree from a specified ZPL text file; returns a zconfig_t
    //  reference for the root, if the file exists and is readable. Returns NULL
    //  if the file does not exist.
    static QZconfig* load (const QString &filename, QObject *qObjParent = 0);

    //  Equivalent to zconfig_load, taking a format string instead of a fixed
    //  filename.
    static QZconfig* loadf (const QString &param, QObject *qObjParent = 0);

    //  Destroy a config item and all its children
    ~QZconfig ();

    //  Return name of config item
    const QString name ();

    //  Return value of config item
    const QString value ();

    //  Insert or update configuration key with value
    void put (const QString &path, const QString &value);

    //  Equivalent to zconfig_put, accepting a format specifier and variable
    //  argument list, instead of a single string value.
    void putf (const QString &path, const QString &param);

    //  Get value for config item into a string value; leading slash is optional
    //  and ignored.
    const QString get (const QString &path, const QString &defaultValue);

    //  Set config item name, name may be NULL
    void setName (const QString &name);

    //  Set new value for config item. The new value may be a string, a printf
    //  format, or NULL. Note that if string may possibly contain '%', or if it
    //  comes from an insecure source, you must use '%s' as the format, followed
    //  by the string.
    void setValue (const QString &param);

    //  Find our first child, if any
    QZconfig * child ();

    //  Find our first sibling, if any
    QZconfig * next ();

    //  Find a config item along a path; leading slash is optional and ignored.
    QZconfig * locate (const QString &path);

    //  Locate the last config item at a specified depth
    QZconfig * atDepth (int level);

    //  Execute a callback for each config item in the tree; returns zero if
    //  successful, else -1.
    int execute (zconfig_fct handler, void *arg);

    //  Add comment to config item before saving to disk. You can add as many
    //  comment lines as you like. If you use a null format, all comments are
    //  deleted.
    void setComment (const QString &param);

    //  Return comments of config item, as zlist.
    QZlist * comments ();

    //  Save a config tree to a specified ZPL text file, where a filename
    //  "-" means dump to standard output.
    int save (const QString &filename);

    //  Equivalent to zconfig_save, taking a format string instead of a fixed
    //  filename.
    int savef (const QString &param);

    //  Report filename used during zconfig_load, or NULL if none
    const QString filename ();

    //  Reload config tree from same file that it was previously loaded from.
    //  Returns 0 if OK, -1 if there was an error (and then does not change
    //  existing data).
    int reload ();

    //  Load a config tree from a memory chunk
    static QZconfig * chunkLoad (QZchunk *chunk);

    //  Save a config tree to a new memory chunk
    QZchunk * chunkSave ();

    //  Load a config tree from a null-terminated string
    static QZconfig * strLoad (const QString &string);

    //  Save a config tree to a new null terminated string
    QString strSave ();

    //  Return true if a configuration tree was loaded from a file and that
    //  file has changed in since the tree was loaded.
    bool hasChanged ();

    //  Print the config file to open stream
    void fprint (FILE *file);

    //  Print properties of object
    void print ();

    //  Self test of this class
    static void test (bool verbose);

    zconfig_t *self;
};
#endif //  Q_ZCONFIG_H
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/