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

#ifndef __MuQt6__QStackedWidgetType__h__
#define __MuQt6__QStackedWidgetType__h__
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
    class MuQt_QStackedWidget;

    class QStackedWidgetType : public Class
    {
    public:
        typedef MuQt_QStackedWidget MuQtType;
        typedef QStackedWidget QtType;

        //
        //  Constructors
        //

        QStackedWidgetType(Context* context, const char* name,
                           Class* superClass = 0, Class* superClass2 = 0);

        virtual ~QStackedWidgetType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[4];
    };

    // Inheritable object

    class MuQt_QStackedWidget : public QStackedWidget
    {
    public:
        virtual ~MuQt_QStackedWidget();
        MuQt_QStackedWidget(Pointer muobj, const CallEnvironment*,
                            QWidget* parent);

    protected:
        virtual bool event(QEvent* e);

    public:
        virtual QSize sizeHint() const;

    protected:
        virtual void changeEvent(QEvent* ev);
        virtual void paintEvent(QPaintEvent* _p14);

    public:
        bool event_pub(QEvent* e) { return event(e); }

        bool event_pub_parent(QEvent* e) { return QStackedWidget::event(e); }

        void changeEvent_pub(QEvent* ev) { changeEvent(ev); }

        void changeEvent_pub_parent(QEvent* ev)
        {
            QStackedWidget::changeEvent(ev);
        }

        void paintEvent_pub(QPaintEvent* _p14) { paintEvent(_p14); }

        void paintEvent_pub_parent(QPaintEvent* _p14)
        {
            QStackedWidget::paintEvent(_p14);
        }

    public:
        const QStackedWidgetType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance*
    QStackedWidgetType::cachedInstance(const QStackedWidgetType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QStackedWidgetType__h__
