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

#ifndef __MuQt5__$TType__h__
#define __MuQt5__$TType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/Interface.h>

namespace Mu
{

    class $TType : public Interface
    {
    public:
        //
        //  Constructors
        //

        typedef $T ValueType;

        struct Struct
        {
            $T* object;
        };

        $TType(Context* context, const char* name);
        virtual ~$TType();

        //
        //  Class API
        //

        virtual void load();
    };

} // namespace Mu

#endif // __MuQt5__$TType__h__
