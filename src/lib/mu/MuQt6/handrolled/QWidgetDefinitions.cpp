//
// Copyright (C) 2023  Autodesk, Inc. All Rights Reserved.
//
// SPDX-License-Identifier: Apache-2.0
//

static NODE_IMPLEMENTATION(_n_QWidget_windowFlags_int, int)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWidget* arg0 = object<QWidget>(NODE_ARG(0, Pointer));
    NODE_RETURN(arg0->windowFlags());
}

static NODE_IMPLEMENTATION(_n_QWidget_setWindowFlags_void_int, void)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWidget* arg0 = object<QWidget>(NODE_ARG(0, Pointer));
    arg0->setWindowFlags(Qt::WindowFlags(NODE_ARG(0, int)));
}
