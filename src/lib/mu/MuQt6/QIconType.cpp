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

#include <MuQt6/qtUtils.h>
#include <MuQt6/QIconType.h>
#include <MuQt6/QActionType.h>
#include <MuQt6/QWidgetType.h>
#include <Mu/Alias.h>
#include <Mu/BaseFunctions.h>
#include <Mu/ClassInstance.h>
#include <Mu/Exception.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <QtNetwork/QtNetwork>
#include <MuQt6/QSizeType.h>
#include <MuQt6/QPixmapType.h>

namespace Mu
{
    using namespace std;

    QIconType::Instance::Instance(const Class* c)
        : ClassInstance(c)
    {
    }

    QIconType::QIconType(Context* c, const char* name, Class* super)
        : Class(c, name, super)
    {
    }

    QIconType::~QIconType() {}

    static NODE_IMPLEMENTATION(__allocate, Pointer)
    {
        QIconType::Instance* i =
            new QIconType::Instance((Class*)NODE_THIS.type());
        QIconType::registerFinalizer(i);
        NODE_RETURN(i);
    }

    void QIconType::registerFinalizer(void* o)
    {
        GC_register_finalizer(o, QIconType::finalizer, 0, 0, 0);
    }

    void QIconType::finalizer(void* obj, void* data)
    {
        QIconType::Instance* i = reinterpret_cast<QIconType::Instance*>(obj);
        delete i;
    }

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    Pointer qt_QIcon_QIcon_QIcon_QIcon(Mu::Thread& NODE_THREAD,
                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        setqtype<QIconType>(param_this, QIcon());
        return param_this;
    }

    Pointer qt_QIcon_QIcon_QIcon_QIcon_QPixmap(Mu::Thread& NODE_THREAD,
                                               Pointer param_this,
                                               Pointer param_pixmap)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QPixmap arg1 = getqtype<QPixmapType>(param_pixmap);
        setqtype<QIconType>(param_this, QIcon(arg1));
        return param_this;
    }

    Pointer qt_QIcon_QIcon_QIcon_QIcon_string(Mu::Thread& NODE_THREAD,
                                              Pointer param_this,
                                              Pointer param_fileName)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg1 = qstring(param_fileName);
        setqtype<QIconType>(param_this, QIcon(arg1));
        return param_this;
    }

    Pointer qt_QIcon_actualSize_QSize_QIcon_QSize_int_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_size,
        int param_mode, int param_state)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        const QSize arg1 = getqtype<QSizeType>(param_size);
        QIcon::Mode arg2 = (QIcon::Mode)(param_mode);
        QIcon::State arg3 = (QIcon::State)(param_state);
        return makeqtype<QSizeType>(c, arg0.actualSize(arg1, arg2, arg3),
                                    "qt.QSize");
    }

    void qt_QIcon_addFile_void_QIcon_string_QSize_int_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_fileName,
        Pointer param_size, int param_mode, int param_state)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QIcon& arg0 = getqtype<QIconType>(param_this);
        const QString arg1 = qstring(param_fileName);
        const QSize arg2 = getqtype<QSizeType>(param_size);
        QIcon::Mode arg3 = (QIcon::Mode)(param_mode);
        QIcon::State arg4 = (QIcon::State)(param_state);
        arg0.addFile(arg1, arg2, arg3, arg4);
        setqtype<QIconType>(param_this, arg0);
    }

    void qt_QIcon_addPixmap_void_QIcon_QPixmap_int_int(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this,
                                                       Pointer param_pixmap,
                                                       int param_mode,
                                                       int param_state)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QIcon& arg0 = getqtype<QIconType>(param_this);
        const QPixmap arg1 = getqtype<QPixmapType>(param_pixmap);
        QIcon::Mode arg2 = (QIcon::Mode)(param_mode);
        QIcon::State arg3 = (QIcon::State)(param_state);
        arg0.addPixmap(arg1, arg2, arg3);
        setqtype<QIconType>(param_this, arg0);
    }

    int64 qt_QIcon_cacheKey_int64_QIcon(Mu::Thread& NODE_THREAD,
                                        Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        return arg0.cacheKey();
    }

    bool qt_QIcon_isMask_bool_QIcon(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        return arg0.isMask();
    }

    bool qt_QIcon_isNull_bool_QIcon(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        return arg0.isNull();
    }

    Pointer qt_QIcon_name_string_QIcon(Mu::Thread& NODE_THREAD,
                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        return makestring(c, arg0.name());
    }

    Pointer qt_QIcon_pixmap_QPixmap_QIcon_QSize_int_int(Mu::Thread& NODE_THREAD,
                                                        Pointer param_this,
                                                        Pointer param_size,
                                                        int param_mode,
                                                        int param_state)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        const QSize arg1 = getqtype<QSizeType>(param_size);
        QIcon::Mode arg2 = (QIcon::Mode)(param_mode);
        QIcon::State arg3 = (QIcon::State)(param_state);
        return makeqtype<QPixmapType>(c, arg0.pixmap(arg1, arg2, arg3),
                                      "qt.QPixmap");
    }

    Pointer qt_QIcon_pixmap_QPixmap_QIcon_int_int_int_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_w, int param_h,
        int param_mode, int param_state)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        int arg1 = (int)(param_w);
        int arg2 = (int)(param_h);
        QIcon::Mode arg3 = (QIcon::Mode)(param_mode);
        QIcon::State arg4 = (QIcon::State)(param_state);
        return makeqtype<QPixmapType>(c, arg0.pixmap(arg1, arg2, arg3, arg4),
                                      "qt.QPixmap");
    }

    Pointer qt_QIcon_pixmap_QPixmap_QIcon_int_int_int(Mu::Thread& NODE_THREAD,
                                                      Pointer param_this,
                                                      int param_extent,
                                                      int param_mode,
                                                      int param_state)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        int arg1 = (int)(param_extent);
        QIcon::Mode arg2 = (QIcon::Mode)(param_mode);
        QIcon::State arg3 = (QIcon::State)(param_state);
        return makeqtype<QPixmapType>(c, arg0.pixmap(arg1, arg2, arg3),
                                      "qt.QPixmap");
    }

    Pointer qt_QIcon_pixmap_QPixmap_QIcon_QSize_double_int_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_size,
        double param_devicePixelRatio, int param_mode, int param_state)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QIcon& arg0 = getqtype<QIconType>(param_this);
        const QSize arg1 = getqtype<QSizeType>(param_size);
        qreal arg2 = (double)(param_devicePixelRatio);
        QIcon::Mode arg3 = (QIcon::Mode)(param_mode);
        QIcon::State arg4 = (QIcon::State)(param_state);
        return makeqtype<QPixmapType>(c, arg0.pixmap(arg1, arg2, arg3, arg4),
                                      "qt.QPixmap");
    }

    void qt_QIcon_setIsMask_void_QIcon_bool(Mu::Thread& NODE_THREAD,
                                            Pointer param_this,
                                            bool param_isMask)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QIcon& arg0 = getqtype<QIconType>(param_this);
        bool arg1 = (bool)(param_isMask);
        arg0.setIsMask(arg1);
        setqtype<QIconType>(param_this, arg0);
    }

    void qt_QIcon_swap_void_QIcon_QIcon(Mu::Thread& NODE_THREAD,
                                        Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QIcon& arg0 = getqtype<QIconType>(param_this);
        QIcon arg1 = getqtype<QIconType>(param_other);
        arg0.swap(arg1);
        setqtype<QIconType>(param_this, arg0);
    }

    Pointer qt_QIcon_fallbackSearchPaths_stringBSB_ESB_(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makestringlist(c, QIcon::fallbackSearchPaths());
    }

    Pointer qt_QIcon_fallbackThemeName_string(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makestring(c, QIcon::fallbackThemeName());
    }

    Pointer qt_QIcon_fromTheme_QIcon_string(Mu::Thread& NODE_THREAD,
                                            Pointer param_name)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_name);
        return makeqtype<QIconType>(c, QIcon::fromTheme(arg0), "qt.QIcon");
    }

    Pointer qt_QIcon_fromTheme_QIcon_string_QIcon(Mu::Thread& NODE_THREAD,
                                                  Pointer param_name,
                                                  Pointer param_fallback)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_name);
        const QIcon arg1 = getqtype<QIconType>(param_fallback);
        return makeqtype<QIconType>(c, QIcon::fromTheme(arg0, arg1),
                                    "qt.QIcon");
    }

    bool qt_QIcon_hasThemeIcon_bool_string(Mu::Thread& NODE_THREAD,
                                           Pointer param_name)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_name);
        return QIcon::hasThemeIcon(arg0);
    }

    void
    qt_QIcon_setFallbackSearchPaths_void_stringBSB_ESB_(Mu::Thread& NODE_THREAD,
                                                        Pointer param_paths)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QStringList arg0 = qstringlist(param_paths);
        QIcon::setFallbackSearchPaths(arg0);
    }

    void qt_QIcon_setFallbackThemeName_void_string(Mu::Thread& NODE_THREAD,
                                                   Pointer param_name)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_name);
        QIcon::setFallbackThemeName(arg0);
    }

    void qt_QIcon_setThemeName_void_string(Mu::Thread& NODE_THREAD,
                                           Pointer param_name)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_name);
        QIcon::setThemeName(arg0);
    }

    void
    qt_QIcon_setThemeSearchPaths_void_stringBSB_ESB_(Mu::Thread& NODE_THREAD,
                                                     Pointer param_paths)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QStringList arg0 = qstringlist(param_paths);
        QIcon::setThemeSearchPaths(arg0);
    }

    Pointer qt_QIcon_themeName_string(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makestring(c, QIcon::themeName());
    }

    Pointer qt_QIcon_themeSearchPaths_stringBSB_ESB_(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makestringlist(c, QIcon::themeSearchPaths());
    }

    static NODE_IMPLEMENTATION(_n_QIcon0, Pointer)
    {
        NODE_RETURN(qt_QIcon_QIcon_QIcon_QIcon(NODE_THREAD,
                                               NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_QIcon1, Pointer)
    {
        NODE_RETURN(qt_QIcon_QIcon_QIcon_QIcon_QPixmap(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_QIcon2, Pointer)
    {
        NODE_RETURN(qt_QIcon_QIcon_QIcon_QIcon_string(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_actualSize0, Pointer)
    {
        NODE_RETURN(qt_QIcon_actualSize_QSize_QIcon_QSize_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, int), NODE_ARG(3, int)));
    }

    static NODE_IMPLEMENTATION(_n_addFile0, void)
    {
        qt_QIcon_addFile_void_QIcon_string_QSize_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, Pointer), NODE_ARG(3, int), NODE_ARG(4, int));
    }

    static NODE_IMPLEMENTATION(_n_addPixmap0, void)
    {
        qt_QIcon_addPixmap_void_QIcon_QPixmap_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, int), NODE_ARG(3, int));
    }

    static NODE_IMPLEMENTATION(_n_cacheKey0, int64)
    {
        NODE_RETURN(qt_QIcon_cacheKey_int64_QIcon(NODE_THREAD,
                                                  NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isMask0, bool)
    {
        NODE_RETURN(qt_QIcon_isMask_bool_QIcon(NODE_THREAD,
                                               NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isNull0, bool)
    {
        NODE_RETURN(qt_QIcon_isNull_bool_QIcon(NODE_THREAD,
                                               NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_name0, Pointer)
    {
        NODE_RETURN(qt_QIcon_name_string_QIcon(NODE_THREAD,
                                               NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_pixmap0, Pointer)
    {
        NODE_RETURN(qt_QIcon_pixmap_QPixmap_QIcon_QSize_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, int), NODE_ARG(3, int)));
    }

    static NODE_IMPLEMENTATION(_n_pixmap1, Pointer)
    {
        NODE_RETURN(qt_QIcon_pixmap_QPixmap_QIcon_int_int_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int),
            NODE_ARG(2, int), NODE_ARG(3, int), NODE_ARG(4, int)));
    }

    static NODE_IMPLEMENTATION(_n_pixmap2, Pointer)
    {
        NODE_RETURN(qt_QIcon_pixmap_QPixmap_QIcon_int_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int),
            NODE_ARG(2, int), NODE_ARG(3, int)));
    }

    static NODE_IMPLEMENTATION(_n_pixmap3, Pointer)
    {
        NODE_RETURN(qt_QIcon_pixmap_QPixmap_QIcon_QSize_double_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, double), NODE_ARG(3, int), NODE_ARG(4, int)));
    }

    static NODE_IMPLEMENTATION(_n_setIsMask0, void)
    {
        qt_QIcon_setIsMask_void_QIcon_bool(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, bool));
    }

    static NODE_IMPLEMENTATION(_n_swap0, void)
    {
        qt_QIcon_swap_void_QIcon_QIcon(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                                       NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_fallbackSearchPaths0, Pointer)
    {
        NODE_RETURN(qt_QIcon_fallbackSearchPaths_stringBSB_ESB_(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_fallbackThemeName0, Pointer)
    {
        NODE_RETURN(qt_QIcon_fallbackThemeName_string(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_fromTheme0, Pointer)
    {
        NODE_RETURN(
            qt_QIcon_fromTheme_QIcon_string(NODE_THREAD, NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_fromTheme1, Pointer)
    {
        NODE_RETURN(qt_QIcon_fromTheme_QIcon_string_QIcon(
            NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_hasThemeIcon0, bool)
    {
        NODE_RETURN(qt_QIcon_hasThemeIcon_bool_string(NODE_THREAD,
                                                      NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_setFallbackSearchPaths0, void)
    {
        qt_QIcon_setFallbackSearchPaths_void_stringBSB_ESB_(
            NODE_THREAD, NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_setFallbackThemeName0, void)
    {
        qt_QIcon_setFallbackThemeName_void_string(NODE_THREAD,
                                                  NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_setThemeName0, void)
    {
        qt_QIcon_setThemeName_void_string(NODE_THREAD, NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_setThemeSearchPaths0, void)
    {
        qt_QIcon_setThemeSearchPaths_void_stringBSB_ESB_(NODE_THREAD,
                                                         NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_themeName0, Pointer)
    {
        NODE_RETURN(qt_QIcon_themeName_string(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_themeSearchPaths0, Pointer)
    {
        NODE_RETURN(qt_QIcon_themeSearchPaths_stringBSB_ESB_(NODE_THREAD));
    }

    void QIconType::load()
    {
        USING_MU_FUNCTION_SYMBOLS;
        MuLangContext* c = static_cast<MuLangContext*>(context());
        Module* global = globalModule();

        const string typeName = name();
        const string refTypeName = typeName + "&";
        const string fullTypeName = fullyQualifiedName();
        const string fullRefTypeName = fullTypeName + "&";
        const char* tn = typeName.c_str();
        const char* ftn = fullTypeName.c_str();
        const char* rtn = refTypeName.c_str();
        const char* frtn = fullRefTypeName.c_str();

        scope()->addSymbols(new ReferenceType(c, rtn, this),

                            new Function(c, tn, BaseFunctions::dereference,
                                         Cast, Return, ftn, Args, frtn, End),

                            EndArguments);

        addSymbols(
            new Function(c, "__allocate", __allocate, None, Return, ftn, End),

            EndArguments);

        addSymbols(
            new Alias(c, "Mode", "int"),
            new SymbolicConstant(c, "Normal", "int", Value(int(QIcon::Normal))),
            new SymbolicConstant(c, "Disabled", "int",
                                 Value(int(QIcon::Disabled))),
            new SymbolicConstant(c, "Active", "int", Value(int(QIcon::Active))),
            new SymbolicConstant(c, "Selected", "int",
                                 Value(int(QIcon::Selected))),
            new Alias(c, "State", "int"),
            new SymbolicConstant(c, "Off", "int", Value(int(QIcon::Off))),
            new SymbolicConstant(c, "On", "int", Value(int(QIcon::On))),
            EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(c, "QIcon", _n_QIcon0, None, Compiled,
                         qt_QIcon_QIcon_QIcon_QIcon, Return, "qt.QIcon",
                         Parameters, new Param(c, "this", "qt.QIcon"), End),
            new Function(c, "QIcon", _n_QIcon1, None, Compiled,
                         qt_QIcon_QIcon_QIcon_QIcon_QPixmap, Return, "qt.QIcon",
                         Parameters, new Param(c, "this", "qt.QIcon"),
                         new Param(c, "pixmap", "qt.QPixmap"), End),
            new Function(c, "QIcon", _n_QIcon2, None, Compiled,
                         qt_QIcon_QIcon_QIcon_QIcon_string, Return, "qt.QIcon",
                         Parameters, new Param(c, "this", "qt.QIcon"),
                         new Param(c, "fileName", "string"), End),
            // MISSING: QIcon (QIcon; QIcon this, "QIconEngine *" engine)
            // MISSING: QIcon (QIcon; QIcon this, QIcon other)
            // MISSING: QIcon (QIcon; QIcon this, "QIcon & &" other)
            new Function(
                c, "actualSize", _n_actualSize0, None, Compiled,
                qt_QIcon_actualSize_QSize_QIcon_QSize_int_int, Return,
                "qt.QSize", Parameters, new Param(c, "this", "qt.QIcon"),
                new Param(c, "size", "qt.QSize"),
                new Param(c, "mode", "int", Value((int)QIcon::Normal)),
                new Param(c, "state", "int", Value((int)QIcon::Off)), End),
            new Function(
                c, "addFile", _n_addFile0, None, Compiled,
                qt_QIcon_addFile_void_QIcon_string_QSize_int_int, Return,
                "void", Parameters, new Param(c, "this", "qt.QIcon"),
                new Param(c, "fileName", "string"),
                new Param(c, "size", "qt.QSize"),
                new Param(c, "mode", "int", Value((int)QIcon::Normal)),
                new Param(c, "state", "int", Value((int)QIcon::Off)), End),
            new Function(c, "addPixmap", _n_addPixmap0, None, Compiled,
                         qt_QIcon_addPixmap_void_QIcon_QPixmap_int_int, Return,
                         "void", Parameters, new Param(c, "this", "qt.QIcon"),
                         new Param(c, "pixmap", "qt.QPixmap"),
                         new Param(c, "mode", "int", Value((int)QIcon::Normal)),
                         new Param(c, "state", "int", Value((int)QIcon::Off)),
                         End),
            // MISSING: availableSizes ("QList<QSize>"; QIcon this, flags
            // QIcon::Mode mode, flags QIcon::State state)
            new Function(c, "cacheKey", _n_cacheKey0, None, Compiled,
                         qt_QIcon_cacheKey_int64_QIcon, Return, "int64",
                         Parameters, new Param(c, "this", "qt.QIcon"), End),
            new Function(c, "isMask", _n_isMask0, None, Compiled,
                         qt_QIcon_isMask_bool_QIcon, Return, "bool", Parameters,
                         new Param(c, "this", "qt.QIcon"), End),
            new Function(c, "isNull", _n_isNull0, None, Compiled,
                         qt_QIcon_isNull_bool_QIcon, Return, "bool", Parameters,
                         new Param(c, "this", "qt.QIcon"), End),
            new Function(c, "name", _n_name0, None, Compiled,
                         qt_QIcon_name_string_QIcon, Return, "string",
                         Parameters, new Param(c, "this", "qt.QIcon"), End),
            new Function(
                c, "pixmap", _n_pixmap0, None, Compiled,
                qt_QIcon_pixmap_QPixmap_QIcon_QSize_int_int, Return,
                "qt.QPixmap", Parameters, new Param(c, "this", "qt.QIcon"),
                new Param(c, "size", "qt.QSize"),
                new Param(c, "mode", "int", Value((int)QIcon::Normal)),
                new Param(c, "state", "int", Value((int)QIcon::Off)), End),
            new Function(
                c, "pixmap", _n_pixmap1, None, Compiled,
                qt_QIcon_pixmap_QPixmap_QIcon_int_int_int_int, Return,
                "qt.QPixmap", Parameters, new Param(c, "this", "qt.QIcon"),
                new Param(c, "w", "int"), new Param(c, "h", "int"),
                new Param(c, "mode", "int", Value((int)QIcon::Normal)),
                new Param(c, "state", "int", Value((int)QIcon::Off)), End),
            new Function(
                c, "pixmap", _n_pixmap2, None, Compiled,
                qt_QIcon_pixmap_QPixmap_QIcon_int_int_int, Return, "qt.QPixmap",
                Parameters, new Param(c, "this", "qt.QIcon"),
                new Param(c, "extent", "int"),
                new Param(c, "mode", "int", Value((int)QIcon::Normal)),
                new Param(c, "state", "int", Value((int)QIcon::Off)), End),
            new Function(
                c, "pixmap", _n_pixmap3, None, Compiled,
                qt_QIcon_pixmap_QPixmap_QIcon_QSize_double_int_int, Return,
                "qt.QPixmap", Parameters, new Param(c, "this", "qt.QIcon"),
                new Param(c, "size", "qt.QSize"),
                new Param(c, "devicePixelRatio", "double"),
                new Param(c, "mode", "int", Value((int)QIcon::Normal)),
                new Param(c, "state", "int", Value((int)QIcon::Off)), End),
            new Function(c, "setIsMask", _n_setIsMask0, None, Compiled,
                         qt_QIcon_setIsMask_void_QIcon_bool, Return, "void",
                         Parameters, new Param(c, "this", "qt.QIcon"),
                         new Param(c, "isMask", "bool"), End),
            new Function(c, "swap", _n_swap0, None, Compiled,
                         qt_QIcon_swap_void_QIcon_QIcon, Return, "void",
                         Parameters, new Param(c, "this", "qt.QIcon"),
                         new Param(c, "other", "qt.QIcon"), End),
            // MISSING: QVariant ("QVariant operator"; QIcon this)
            // static functions
            new Function(c, "fallbackSearchPaths", _n_fallbackSearchPaths0,
                         None, Compiled,
                         qt_QIcon_fallbackSearchPaths_stringBSB_ESB_, Return,
                         "string[]", End),
            new Function(c, "fallbackThemeName", _n_fallbackThemeName0, None,
                         Compiled, qt_QIcon_fallbackThemeName_string, Return,
                         "string", End),
            new Function(c, "fromTheme", _n_fromTheme0, None, Compiled,
                         qt_QIcon_fromTheme_QIcon_string, Return, "qt.QIcon",
                         Parameters, new Param(c, "name", "string"), End),
            new Function(c, "fromTheme", _n_fromTheme1, None, Compiled,
                         qt_QIcon_fromTheme_QIcon_string_QIcon, Return,
                         "qt.QIcon", Parameters, new Param(c, "name", "string"),
                         new Param(c, "fallback", "qt.QIcon"), End),
            new Function(c, "hasThemeIcon", _n_hasThemeIcon0, None, Compiled,
                         qt_QIcon_hasThemeIcon_bool_string, Return, "bool",
                         Parameters, new Param(c, "name", "string"), End),
            new Function(c, "setFallbackSearchPaths",
                         _n_setFallbackSearchPaths0, None, Compiled,
                         qt_QIcon_setFallbackSearchPaths_void_stringBSB_ESB_,
                         Return, "void", Parameters,
                         new Param(c, "paths", "string[]"), End),
            new Function(
                c, "setFallbackThemeName", _n_setFallbackThemeName0, None,
                Compiled, qt_QIcon_setFallbackThemeName_void_string, Return,
                "void", Parameters, new Param(c, "name", "string"), End),
            new Function(c, "setThemeName", _n_setThemeName0, None, Compiled,
                         qt_QIcon_setThemeName_void_string, Return, "void",
                         Parameters, new Param(c, "name", "string"), End),
            new Function(c, "setThemeSearchPaths", _n_setThemeSearchPaths0,
                         None, Compiled,
                         qt_QIcon_setThemeSearchPaths_void_stringBSB_ESB_,
                         Return, "void", Parameters,
                         new Param(c, "paths", "string[]"), End),
            new Function(c, "themeName", _n_themeName0, None, Compiled,
                         qt_QIcon_themeName_string, Return, "string", End),
            new Function(c, "themeSearchPaths", _n_themeSearchPaths0, None,
                         Compiled, qt_QIcon_themeSearchPaths_stringBSB_ESB_,
                         Return, "string[]", End),
            EndArguments);
        globalScope()->addSymbols(
            // MISSING: = (QIcon; QIcon this, QIcon other)
            // MISSING: = (QIcon; QIcon this, "QIcon & &" other)
            EndArguments);
        scope()->addSymbols(EndArguments);
    }

} // namespace Mu
