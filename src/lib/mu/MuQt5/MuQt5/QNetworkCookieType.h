//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt5__QNetworkCookieType__h__
#define __MuQt5__QNetworkCookieType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/ClassInstance.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>

namespace Mu
{

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QNetworkCookieType : public Class
    {
    public:
        //
        //  Types
        //

        typedef QNetworkCookie ValueType;

        class Instance : public ClassInstance
        {
        public:
            //
            //  Probably need some kind of finalizer for classes that are
            //  references (e.g. QIcon)
            //
            Instance(const Class*);
            QNetworkCookie value;
        };

        //
        //  Constructors
        //

        QNetworkCookieType(Context* context, const char* name,
                           Class* superClass = 0);
        virtual ~QNetworkCookieType();

        //
        //  Class API
        //

        virtual void load();

        //
        //  Finalizer
        //

        static void registerFinalizer(void*);
        static void finalizer(void*, void*);
    };

} // namespace Mu

#endif // __MuQt5__QNetworkCookieType__h__
