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
#include <MuQt6/QKeySequenceType.h>
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

namespace Mu
{
    using namespace std;

    QKeySequenceType::Instance::Instance(const Class* c)
        : ClassInstance(c)
    {
    }

    QKeySequenceType::QKeySequenceType(Context* c, const char* name,
                                       Class* super)
        : Class(c, name, super)
    {
    }

    QKeySequenceType::~QKeySequenceType() {}

    static NODE_IMPLEMENTATION(__allocate, Pointer)
    {
        QKeySequenceType::Instance* i =
            new QKeySequenceType::Instance((Class*)NODE_THIS.type());
        QKeySequenceType::registerFinalizer(i);
        NODE_RETURN(i);
    }

    void QKeySequenceType::registerFinalizer(void* o)
    {
        GC_register_finalizer(o, QKeySequenceType::finalizer, 0, 0, 0);
    }

    void QKeySequenceType::finalizer(void* obj, void* data)
    {
        QKeySequenceType::Instance* i =
            reinterpret_cast<QKeySequenceType::Instance*>(obj);
        delete i;
    }

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    Pointer qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        setqtype<QKeySequenceType>(param_this, QKeySequence());
        return param_this;
    }

    Pointer qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_string_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_key,
        int param_format)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg1 = qstring(param_key);
        QKeySequence::SequenceFormat arg2 =
            (QKeySequence::SequenceFormat)(param_format);
        setqtype<QKeySequenceType>(param_this, QKeySequence(arg1, arg2));
        return param_this;
    }

    Pointer
    qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_int_int_int_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_k1, int param_k2,
        int param_k3, int param_k4)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        int arg1 = (int)(param_k1);
        int arg2 = (int)(param_k2);
        int arg3 = (int)(param_k3);
        int arg4 = (int)(param_k4);
        setqtype<QKeySequenceType>(param_this,
                                   QKeySequence(arg1, arg2, arg3, arg4));
        return param_this;
    }

    Pointer qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_key)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QKeySequence::StandardKey arg1 = (QKeySequence::StandardKey)(param_key);
        setqtype<QKeySequenceType>(param_this, QKeySequence(arg1));
        return param_this;
    }

    int qt_QKeySequence_count_int_QKeySequence(Mu::Thread& NODE_THREAD,
                                               Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        return arg0.count();
    }

    bool qt_QKeySequence_isEmpty_bool_QKeySequence(Mu::Thread& NODE_THREAD,
                                                   Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        return arg0.isEmpty();
    }

    int qt_QKeySequence_matches_int_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_seq)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        const QKeySequence arg1 = getqtype<QKeySequenceType>(param_seq);
        return int(arg0.matches(arg1));
    }

    void qt_QKeySequence_swap_void_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        QKeySequence arg1 = getqtype<QKeySequenceType>(param_other);
        arg0.swap(arg1);
        setqtype<QKeySequenceType>(param_this, arg0);
    }

    Pointer qt_QKeySequence_toString_string_QKeySequence_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_format)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        QKeySequence::SequenceFormat arg1 =
            (QKeySequence::SequenceFormat)(param_format);
        return makestring(c, arg0.toString(arg1));
    }

    bool qt_QKeySequence_operatorBang_EQ__bool_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        const QKeySequence arg1 = getqtype<QKeySequenceType>(param_other);
        return arg0.operator!=(arg1);
    }

    bool qt_QKeySequence_operatorLT__bool_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        const QKeySequence arg1 = getqtype<QKeySequenceType>(param_other);
        return arg0.operator<(arg1);
    }

    bool qt_QKeySequence_operatorLT_EQ__bool_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        const QKeySequence arg1 = getqtype<QKeySequenceType>(param_other);
        return arg0.operator<=(arg1);
    }

    bool qt_QKeySequence_operatorEQ_EQ__bool_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        const QKeySequence arg1 = getqtype<QKeySequenceType>(param_other);
        return arg0.operator==(arg1);
    }

    bool qt_QKeySequence_operatorGT__bool_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        const QKeySequence arg1 = getqtype<QKeySequenceType>(param_other);
        return arg0.operator>(arg1);
    }

    bool qt_QKeySequence_operatorGT_EQ__bool_QKeySequence_QKeySequence(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QKeySequence& arg0 = getqtype<QKeySequenceType>(param_this);
        const QKeySequence arg1 = getqtype<QKeySequenceType>(param_other);
        return arg0.operator>=(arg1);
    }

    Pointer qt_QKeySequence_fromString_QKeySequence_string_int(
        Mu::Thread& NODE_THREAD, Pointer param_str, int param_format)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_str);
        QKeySequence::SequenceFormat arg1 =
            (QKeySequence::SequenceFormat)(param_format);
        return makeqtype<QKeySequenceType>(
            c, QKeySequence::fromString(arg0, arg1), "qt.QKeySequence");
    }

    Pointer
    qt_QKeySequence_mnemonic_QKeySequence_string(Mu::Thread& NODE_THREAD,
                                                 Pointer param_text)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_text);
        return makeqtype<QKeySequenceType>(c, QKeySequence::mnemonic(arg0),
                                           "qt.QKeySequence");
    }

    static NODE_IMPLEMENTATION(_n_QKeySequence0, Pointer)
    {
        NODE_RETURN(qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_QKeySequence1, Pointer)
    {
        NODE_RETURN(
            qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_string_int(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
                NODE_ARG(2, int)));
    }

    static NODE_IMPLEMENTATION(_n_QKeySequence2, Pointer)
    {
        NODE_RETURN(
            qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_int_int_int_int(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int),
                NODE_ARG(2, int), NODE_ARG(3, int), NODE_ARG(4, int)));
    }

    static NODE_IMPLEMENTATION(_n_QKeySequence4, Pointer)
    {
        NODE_RETURN(qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_count0, int)
    {
        NODE_RETURN(qt_QKeySequence_count_int_QKeySequence(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isEmpty0, bool)
    {
        NODE_RETURN(qt_QKeySequence_isEmpty_bool_QKeySequence(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_matches0, int)
    {
        NODE_RETURN(qt_QKeySequence_matches_int_QKeySequence_QKeySequence(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_swap0, void)
    {
        qt_QKeySequence_swap_void_QKeySequence_QKeySequence(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_toString0, Pointer)
    {
        NODE_RETURN(qt_QKeySequence_toString_string_QKeySequence_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_operatorBang_EQ_0, bool)
    {
        NODE_RETURN(
            qt_QKeySequence_operatorBang_EQ__bool_QKeySequence_QKeySequence(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorLT_0, bool)
    {
        NODE_RETURN(qt_QKeySequence_operatorLT__bool_QKeySequence_QKeySequence(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorLT_EQ_0, bool)
    {
        NODE_RETURN(
            qt_QKeySequence_operatorLT_EQ__bool_QKeySequence_QKeySequence(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorEQ_EQ_0, bool)
    {
        NODE_RETURN(
            qt_QKeySequence_operatorEQ_EQ__bool_QKeySequence_QKeySequence(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorGT_0, bool)
    {
        NODE_RETURN(qt_QKeySequence_operatorGT__bool_QKeySequence_QKeySequence(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorGT_EQ_0, bool)
    {
        NODE_RETURN(
            qt_QKeySequence_operatorGT_EQ__bool_QKeySequence_QKeySequence(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_fromString0, Pointer)
    {
        NODE_RETURN(qt_QKeySequence_fromString_QKeySequence_string_int(
            NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_mnemonic0, Pointer)
    {
        NODE_RETURN(qt_QKeySequence_mnemonic_QKeySequence_string(
            NODE_THREAD, NODE_ARG(0, Pointer)));
    }

    void QKeySequenceType::load()
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
            new Alias(c, "SequenceFormat", "int"),
            new SymbolicConstant(c, "NativeText", "int",
                                 Value(int(QKeySequence::NativeText))),
            new SymbolicConstant(c, "PortableText", "int",
                                 Value(int(QKeySequence::PortableText))),
            new Alias(c, "SequenceMatch", "int"),
            new SymbolicConstant(c, "NoMatch", "int",
                                 Value(int(QKeySequence::NoMatch))),
            new SymbolicConstant(c, "PartialMatch", "int",
                                 Value(int(QKeySequence::PartialMatch))),
            new SymbolicConstant(c, "ExactMatch", "int",
                                 Value(int(QKeySequence::ExactMatch))),
            new Alias(c, "StandardKey", "int"),
            new SymbolicConstant(c, "AddTab", "int",
                                 Value(int(QKeySequence::AddTab))),
            new SymbolicConstant(c, "Back", "int",
                                 Value(int(QKeySequence::Back))),
            new SymbolicConstant(c, "Backspace", "int",
                                 Value(int(QKeySequence::Backspace))),
            new SymbolicConstant(c, "Bold", "int",
                                 Value(int(QKeySequence::Bold))),
            new SymbolicConstant(c, "Close", "int",
                                 Value(int(QKeySequence::Close))),
            new SymbolicConstant(c, "Copy", "int",
                                 Value(int(QKeySequence::Copy))),
            new SymbolicConstant(c, "Cut", "int",
                                 Value(int(QKeySequence::Cut))),
            new SymbolicConstant(c, "Delete", "int",
                                 Value(int(QKeySequence::Delete))),
            new SymbolicConstant(c, "DeleteEndOfLine", "int",
                                 Value(int(QKeySequence::DeleteEndOfLine))),
            new SymbolicConstant(c, "DeleteEndOfWord", "int",
                                 Value(int(QKeySequence::DeleteEndOfWord))),
            new SymbolicConstant(c, "DeleteStartOfWord", "int",
                                 Value(int(QKeySequence::DeleteStartOfWord))),
            new SymbolicConstant(c, "DeleteCompleteLine", "int",
                                 Value(int(QKeySequence::DeleteCompleteLine))),
            new SymbolicConstant(c, "Find", "int",
                                 Value(int(QKeySequence::Find))),
            new SymbolicConstant(c, "FindNext", "int",
                                 Value(int(QKeySequence::FindNext))),
            new SymbolicConstant(c, "FindPrevious", "int",
                                 Value(int(QKeySequence::FindPrevious))),
            new SymbolicConstant(c, "Forward", "int",
                                 Value(int(QKeySequence::Forward))),
            new SymbolicConstant(c, "HelpContents", "int",
                                 Value(int(QKeySequence::HelpContents))),
            new SymbolicConstant(c, "InsertLineSeparator", "int",
                                 Value(int(QKeySequence::InsertLineSeparator))),
            new SymbolicConstant(
                c, "InsertParagraphSeparator", "int",
                Value(int(QKeySequence::InsertParagraphSeparator))),
            new SymbolicConstant(c, "Italic", "int",
                                 Value(int(QKeySequence::Italic))),
            new SymbolicConstant(c, "MoveToEndOfBlock", "int",
                                 Value(int(QKeySequence::MoveToEndOfBlock))),
            new SymbolicConstant(c, "MoveToEndOfDocument", "int",
                                 Value(int(QKeySequence::MoveToEndOfDocument))),
            new SymbolicConstant(c, "MoveToEndOfLine", "int",
                                 Value(int(QKeySequence::MoveToEndOfLine))),
            new SymbolicConstant(c, "MoveToNextChar", "int",
                                 Value(int(QKeySequence::MoveToNextChar))),
            new SymbolicConstant(c, "MoveToNextLine", "int",
                                 Value(int(QKeySequence::MoveToNextLine))),
            new SymbolicConstant(c, "MoveToNextPage", "int",
                                 Value(int(QKeySequence::MoveToNextPage))),
            new SymbolicConstant(c, "MoveToNextWord", "int",
                                 Value(int(QKeySequence::MoveToNextWord))),
            new SymbolicConstant(c, "MoveToPreviousChar", "int",
                                 Value(int(QKeySequence::MoveToPreviousChar))),
            new SymbolicConstant(c, "MoveToPreviousLine", "int",
                                 Value(int(QKeySequence::MoveToPreviousLine))),
            new SymbolicConstant(c, "MoveToPreviousPage", "int",
                                 Value(int(QKeySequence::MoveToPreviousPage))),
            new SymbolicConstant(c, "MoveToPreviousWord", "int",
                                 Value(int(QKeySequence::MoveToPreviousWord))),
            new SymbolicConstant(c, "MoveToStartOfBlock", "int",
                                 Value(int(QKeySequence::MoveToStartOfBlock))),
            new SymbolicConstant(
                c, "MoveToStartOfDocument", "int",
                Value(int(QKeySequence::MoveToStartOfDocument))),
            new SymbolicConstant(c, "MoveToStartOfLine", "int",
                                 Value(int(QKeySequence::MoveToStartOfLine))),
            new SymbolicConstant(c, "New", "int",
                                 Value(int(QKeySequence::New))),
            new SymbolicConstant(c, "NextChild", "int",
                                 Value(int(QKeySequence::NextChild))),
            new SymbolicConstant(c, "Open", "int",
                                 Value(int(QKeySequence::Open))),
            new SymbolicConstant(c, "Paste", "int",
                                 Value(int(QKeySequence::Paste))),
            new SymbolicConstant(c, "Preferences", "int",
                                 Value(int(QKeySequence::Preferences))),
            new SymbolicConstant(c, "PreviousChild", "int",
                                 Value(int(QKeySequence::PreviousChild))),
            new SymbolicConstant(c, "Print", "int",
                                 Value(int(QKeySequence::Print))),
            new SymbolicConstant(c, "Quit", "int",
                                 Value(int(QKeySequence::Quit))),
            new SymbolicConstant(c, "Redo", "int",
                                 Value(int(QKeySequence::Redo))),
            new SymbolicConstant(c, "Refresh", "int",
                                 Value(int(QKeySequence::Refresh))),
            new SymbolicConstant(c, "Replace", "int",
                                 Value(int(QKeySequence::Replace))),
            new SymbolicConstant(c, "SaveAs", "int",
                                 Value(int(QKeySequence::SaveAs))),
            new SymbolicConstant(c, "Save", "int",
                                 Value(int(QKeySequence::Save))),
            new SymbolicConstant(c, "SelectAll", "int",
                                 Value(int(QKeySequence::SelectAll))),
            new SymbolicConstant(c, "Deselect", "int",
                                 Value(int(QKeySequence::Deselect))),
            new SymbolicConstant(c, "SelectEndOfBlock", "int",
                                 Value(int(QKeySequence::SelectEndOfBlock))),
            new SymbolicConstant(c, "SelectEndOfDocument", "int",
                                 Value(int(QKeySequence::SelectEndOfDocument))),
            new SymbolicConstant(c, "SelectEndOfLine", "int",
                                 Value(int(QKeySequence::SelectEndOfLine))),
            new SymbolicConstant(c, "SelectNextChar", "int",
                                 Value(int(QKeySequence::SelectNextChar))),
            new SymbolicConstant(c, "SelectNextLine", "int",
                                 Value(int(QKeySequence::SelectNextLine))),
            new SymbolicConstant(c, "SelectNextPage", "int",
                                 Value(int(QKeySequence::SelectNextPage))),
            new SymbolicConstant(c, "SelectNextWord", "int",
                                 Value(int(QKeySequence::SelectNextWord))),
            new SymbolicConstant(c, "SelectPreviousChar", "int",
                                 Value(int(QKeySequence::SelectPreviousChar))),
            new SymbolicConstant(c, "SelectPreviousLine", "int",
                                 Value(int(QKeySequence::SelectPreviousLine))),
            new SymbolicConstant(c, "SelectPreviousPage", "int",
                                 Value(int(QKeySequence::SelectPreviousPage))),
            new SymbolicConstant(c, "SelectPreviousWord", "int",
                                 Value(int(QKeySequence::SelectPreviousWord))),
            new SymbolicConstant(c, "SelectStartOfBlock", "int",
                                 Value(int(QKeySequence::SelectStartOfBlock))),
            new SymbolicConstant(
                c, "SelectStartOfDocument", "int",
                Value(int(QKeySequence::SelectStartOfDocument))),
            new SymbolicConstant(c, "SelectStartOfLine", "int",
                                 Value(int(QKeySequence::SelectStartOfLine))),
            new SymbolicConstant(c, "Underline", "int",
                                 Value(int(QKeySequence::Underline))),
            new SymbolicConstant(c, "Undo", "int",
                                 Value(int(QKeySequence::Undo))),
            new SymbolicConstant(c, "UnknownKey", "int",
                                 Value(int(QKeySequence::UnknownKey))),
            new SymbolicConstant(c, "WhatsThis", "int",
                                 Value(int(QKeySequence::WhatsThis))),
            new SymbolicConstant(c, "ZoomIn", "int",
                                 Value(int(QKeySequence::ZoomIn))),
            new SymbolicConstant(c, "ZoomOut", "int",
                                 Value(int(QKeySequence::ZoomOut))),
            new SymbolicConstant(c, "FullScreen", "int",
                                 Value(int(QKeySequence::FullScreen))),
            new SymbolicConstant(c, "Cancel", "int",
                                 Value(int(QKeySequence::Cancel))),
            EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(c, "QKeySequence", _n_QKeySequence0, None, Compiled,
                         qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence,
                         Return, "qt.QKeySequence", Parameters,
                         new Param(c, "this", "qt.QKeySequence"), End),
            new Function(
                c, "QKeySequence", _n_QKeySequence1, None, Compiled,
                qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_string_int,
                Return, "qt.QKeySequence", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "key", "string"),
                new Param(c, "format", "int",
                          Value((int)QKeySequence::NativeText)),
                End),
            new Function(
                c, "QKeySequence", _n_QKeySequence2, None, Compiled,
                qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_int_int_int_int,
                Return, "qt.QKeySequence", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "k1", "int"),
                new Param(c, "k2", "int", Value((int)0)),
                new Param(c, "k3", "int", Value((int)0)),
                new Param(c, "k4", "int", Value((int)0)), End),
            // MISSING: QKeySequence (QKeySequence; QKeySequence this,
            // "QKeyCombination" k1, "QKeyCombination" k2, "QKeyCombination" k3,
            // "QKeyCombination" k4)
            new Function(
                c, "QKeySequence", _n_QKeySequence4, None, Compiled,
                qt_QKeySequence_QKeySequence_QKeySequence_QKeySequence_int,
                Return, "qt.QKeySequence", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "key", "int"), End),
            // MISSING: QKeySequence (QKeySequence; QKeySequence this,
            // QKeySequence keysequence)
            new Function(c, "count", _n_count0, None, Compiled,
                         qt_QKeySequence_count_int_QKeySequence, Return, "int",
                         Parameters, new Param(c, "this", "qt.QKeySequence"),
                         End),
            new Function(c, "isEmpty", _n_isEmpty0, None, Compiled,
                         qt_QKeySequence_isEmpty_bool_QKeySequence, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QKeySequence"), End),
            new Function(c, "matches", _n_matches0, None, Compiled,
                         qt_QKeySequence_matches_int_QKeySequence_QKeySequence,
                         Return, "int", Parameters,
                         new Param(c, "this", "qt.QKeySequence"),
                         new Param(c, "seq", "qt.QKeySequence"), End),
            new Function(c, "swap", _n_swap0, None, Compiled,
                         qt_QKeySequence_swap_void_QKeySequence_QKeySequence,
                         Return, "void", Parameters,
                         new Param(c, "this", "qt.QKeySequence"),
                         new Param(c, "other", "qt.QKeySequence"), End),
            new Function(c, "toString", _n_toString0, None, Compiled,
                         qt_QKeySequence_toString_string_QKeySequence_int,
                         Return, "string", Parameters,
                         new Param(c, "this", "qt.QKeySequence"),
                         new Param(c, "format", "int",
                                   Value((int)QKeySequence::PortableText)),
                         End),
            // static functions
            new Function(c, "fromString", _n_fromString0, None, Compiled,
                         qt_QKeySequence_fromString_QKeySequence_string_int,
                         Return, "qt.QKeySequence", Parameters,
                         new Param(c, "str", "string"),
                         new Param(c, "format", "int",
                                   Value((int)QKeySequence::PortableText)),
                         End),
            // MISSING: keyBindings ("QList<QKeySequence>"; flags
            // QKeySequence::StandardKey key) MISSING: listFromString
            // ("QList<QKeySequence>"; string str, flags
            // QKeySequence::SequenceFormat format) MISSING: listToString
            // (string; "const QList<QKeySequence> &" list, flags
            // QKeySequence::SequenceFormat format)
            new Function(c, "mnemonic", _n_mnemonic0, None, Compiled,
                         qt_QKeySequence_mnemonic_QKeySequence_string, Return,
                         "qt.QKeySequence", Parameters,
                         new Param(c, "text", "string"), End),
            EndArguments);
        globalScope()->addSymbols(
            new Function(
                c, "!=", _n_operatorBang_EQ_0, Op, Compiled,
                qt_QKeySequence_operatorBang_EQ__bool_QKeySequence_QKeySequence,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "other", "qt.QKeySequence"), End),
            new Function(
                c, "<", _n_operatorLT_0, Op, Compiled,
                qt_QKeySequence_operatorLT__bool_QKeySequence_QKeySequence,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "other", "qt.QKeySequence"), End),
            new Function(
                c, "<=", _n_operatorLT_EQ_0, Op, Compiled,
                qt_QKeySequence_operatorLT_EQ__bool_QKeySequence_QKeySequence,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "other", "qt.QKeySequence"), End),
            // MISSING: = (QKeySequence; QKeySequence this, QKeySequence other)
            // MISSING: = (QKeySequence; QKeySequence this, "QKeySequence & &"
            // other)
            new Function(
                c, "==", _n_operatorEQ_EQ_0, Op, Compiled,
                qt_QKeySequence_operatorEQ_EQ__bool_QKeySequence_QKeySequence,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "other", "qt.QKeySequence"), End),
            new Function(
                c, ">", _n_operatorGT_0, Op, Compiled,
                qt_QKeySequence_operatorGT__bool_QKeySequence_QKeySequence,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "other", "qt.QKeySequence"), End),
            new Function(
                c, ">=", _n_operatorGT_EQ_0, Op, Compiled,
                qt_QKeySequence_operatorGT_EQ__bool_QKeySequence_QKeySequence,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QKeySequence"),
                new Param(c, "other", "qt.QKeySequence"), End),
            // MISSING: [] ("QKeyCombination"; QKeySequence this, int index)
            EndArguments);
        scope()->addSymbols(EndArguments);
    }

} // namespace Mu
