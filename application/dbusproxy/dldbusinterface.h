/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp com.deepin.logviewer.xml -p dldbusinterface
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DLDBUSINTERFACE_H
#define DLDBUSINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.logviewer
 */
class DeepinLogviewerInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    {
        return "com.deepin.logviewer";
    }

public:
    DeepinLogviewerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~DeepinLogviewerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int> exitCode()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("exitCode"), argumentList);
    }

    inline QDBusPendingReply<QString> readLog(const QString &filePath,const QString &homePath=" ")
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filePath)<<QVariant::fromValue(homePath);
        return asyncCallWithArgumentList(QStringLiteral("readLog"), argumentList);
    }

    inline QDBusPendingReply<> quit()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("quit"), argumentList);
    }
    inline QDBusPendingReply<QStringList> getFileInfo(const QString &flag)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(flag);
        return asyncCallWithArgumentList(QStringLiteral("getFileInfo"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
namespace deepin {
typedef ::DeepinLogviewerInterface logviewer;
}
} // namespace com
#endif
