//*****************************************************************************
// Copyright (c) 2024 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

// IMPORTANT: This file (not the template) is auto-generated by qt2mu.py script.
//            The prefered way to do a fix is to handrolled it or modify the
//            qt2mu.py script. If it is not possible, manual editing is ok but
//            it could be lost in future generations.

#ifndef __MuQt6__QToolButtonType__h__
#define __MuQt6__QToolButtonType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <MuQt6/Bridge.h>

namespace Mu
{
    class MuQt_QToolButton;

    class QToolButtonType : public Class
    {
    public:
        typedef MuQt_QToolButton MuQtType;
        typedef QToolButton QtType;

        //
        //  Constructors
        //

        QToolButtonType(Context* context, const char* name,
                        Class* superClass = 0, Class* superClass2 = 0);

        virtual ~QToolButtonType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[17];
    };

    // Inheritable object

    class MuQt_QToolButton : public QToolButton
    {
    public:
        virtual ~MuQt_QToolButton();
        MuQt_QToolButton(Pointer muobj, const CallEnvironment*,
                         QWidget* parent);
        virtual QSize minimumSizeHint() const;
        virtual QSize sizeHint() const;

    protected:
        virtual void changeEvent(QEvent* e);
        virtual void checkStateSet();
        virtual bool event(QEvent* event_);
        virtual bool hitButton(const QPoint& pos) const;
        virtual void leaveEvent(QEvent* e);
        virtual void mousePressEvent(QMouseEvent* e);
        virtual void mouseReleaseEvent(QMouseEvent* e);
        virtual void nextCheckState();
        virtual void paintEvent(QPaintEvent* event);
        virtual void timerEvent(QTimerEvent* e);
        virtual void focusInEvent(QFocusEvent* e);
        virtual void focusOutEvent(QFocusEvent* e);
        virtual void keyPressEvent(QKeyEvent* e);
        virtual void keyReleaseEvent(QKeyEvent* e);
        virtual void mouseMoveEvent(QMouseEvent* e);

    public:
        void changeEvent_pub(QEvent* e) { changeEvent(e); }

        void changeEvent_pub_parent(QEvent* e) { QToolButton::changeEvent(e); }

        void checkStateSet_pub() { checkStateSet(); }

        void checkStateSet_pub_parent() { QToolButton::checkStateSet(); }

        bool event_pub(QEvent* event_) { return event(event_); }

        bool event_pub_parent(QEvent* event_)
        {
            return QToolButton::event(event_);
        }

        bool hitButton_pub(const QPoint& pos) const { return hitButton(pos); }

        bool hitButton_pub_parent(const QPoint& pos) const
        {
            return QToolButton::hitButton(pos);
        }

        void leaveEvent_pub(QEvent* e) { leaveEvent(e); }

        void leaveEvent_pub_parent(QEvent* e) { QToolButton::leaveEvent(e); }

        void mousePressEvent_pub(QMouseEvent* e) { mousePressEvent(e); }

        void mousePressEvent_pub_parent(QMouseEvent* e)
        {
            QToolButton::mousePressEvent(e);
        }

        void mouseReleaseEvent_pub(QMouseEvent* e) { mouseReleaseEvent(e); }

        void mouseReleaseEvent_pub_parent(QMouseEvent* e)
        {
            QToolButton::mouseReleaseEvent(e);
        }

        void nextCheckState_pub() { nextCheckState(); }

        void nextCheckState_pub_parent() { QToolButton::nextCheckState(); }

        void paintEvent_pub(QPaintEvent* event) { paintEvent(event); }

        void paintEvent_pub_parent(QPaintEvent* event)
        {
            QToolButton::paintEvent(event);
        }

        void timerEvent_pub(QTimerEvent* e) { timerEvent(e); }

        void timerEvent_pub_parent(QTimerEvent* e)
        {
            QToolButton::timerEvent(e);
        }

        void focusInEvent_pub(QFocusEvent* e) { focusInEvent(e); }

        void focusInEvent_pub_parent(QFocusEvent* e)
        {
            QToolButton::focusInEvent(e);
        }

        void focusOutEvent_pub(QFocusEvent* e) { focusOutEvent(e); }

        void focusOutEvent_pub_parent(QFocusEvent* e)
        {
            QToolButton::focusOutEvent(e);
        }

        void keyPressEvent_pub(QKeyEvent* e) { keyPressEvent(e); }

        void keyPressEvent_pub_parent(QKeyEvent* e)
        {
            QToolButton::keyPressEvent(e);
        }

        void keyReleaseEvent_pub(QKeyEvent* e) { keyReleaseEvent(e); }

        void keyReleaseEvent_pub_parent(QKeyEvent* e)
        {
            QToolButton::keyReleaseEvent(e);
        }

        void mouseMoveEvent_pub(QMouseEvent* e) { mouseMoveEvent(e); }

        void mouseMoveEvent_pub_parent(QMouseEvent* e)
        {
            QToolButton::mouseMoveEvent(e);
        }

    public:
        const QToolButtonType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance*
    QToolButtonType::cachedInstance(const QToolButtonType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QToolButtonType__h__
