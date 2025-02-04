//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#include <MuQt5/qtUtils.h>
#include <MuQt5/QVBoxLayoutType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Thread.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt5/QSizeType.h>
#include <MuQt5/QRectType.h>
#include <MuQt5/QLayoutItemType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu
{
    using namespace std;

    //----------------------------------------------------------------------
    //  INHERITABLE TYPE IMPLEMENTATION

    // destructor
    MuQt_QVBoxLayout::~MuQt_QVBoxLayout()
    {
        if (_obj)
        {
            *_obj->data<Pointer>() = Pointer(0);
            _obj->releaseExternal();
        }
        _obj = 0;
        _env = 0;
        _baseType = 0;
    }

    MuQt_QVBoxLayout::MuQt_QVBoxLayout(Pointer muobj, const CallEnvironment* ce)
        : QVBoxLayout()
    {
        _env = ce;
        _obj = reinterpret_cast<ClassInstance*>(muobj);
        _obj->retainExternal();
        MuLangContext* c = (MuLangContext*)_env->context();
        _baseType = c->findSymbolOfTypeByQualifiedName<QVBoxLayoutType>(
            c->internName("qt.QVBoxLayout"));
    }

    MuQt_QVBoxLayout::MuQt_QVBoxLayout(Pointer muobj, const CallEnvironment* ce,
                                       QWidget* parent)
        : QVBoxLayout(parent)
    {
        _env = ce;
        _obj = reinterpret_cast<ClassInstance*>(muobj);
        _obj->retainExternal();
        MuLangContext* c = (MuLangContext*)_env->context();
        _baseType = c->findSymbolOfTypeByQualifiedName<QVBoxLayoutType>(
            c->internName("qt.QVBoxLayout"));
    }

    void MuQt_QVBoxLayout::addItem(QLayoutItem* item)
    {
        if (!_env)
        {
            QVBoxLayout::addItem(item);
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[0];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(
                makelayoutitem<QLayoutItemType>(c, item, "qt.QLayoutItem"));
            Value rval = _env->call(F, args);
        }
        else
        {
            QVBoxLayout::addItem(item);
        }
    }

    int MuQt_QVBoxLayout::count() const
    {
        if (!_env)
            return QVBoxLayout::count();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[1];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return (int)(rval._int);
        }
        else
        {
            return QVBoxLayout::count();
        }
    }

    Qt::Orientations MuQt_QVBoxLayout::expandingDirections() const
    {
        if (!_env)
            return QVBoxLayout::expandingDirections();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[2];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return (Qt::Orientations)(rval._int);
        }
        else
        {
            return QVBoxLayout::expandingDirections();
        }
    }

    bool MuQt_QVBoxLayout::hasHeightForWidth() const
    {
        if (!_env)
            return QVBoxLayout::hasHeightForWidth();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[3];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QVBoxLayout::hasHeightForWidth();
        }
    }

    int MuQt_QVBoxLayout::heightForWidth(int w) const
    {
        if (!_env)
            return QVBoxLayout::heightForWidth(w);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[4];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(w);
            Value rval = _env->call(F, args);
            return (int)(rval._int);
        }
        else
        {
            return QVBoxLayout::heightForWidth(w);
        }
    }

    void MuQt_QVBoxLayout::invalidate()
    {
        if (!_env)
        {
            QVBoxLayout::invalidate();
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[5];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
        }
        else
        {
            QVBoxLayout::invalidate();
        }
    }

    QLayoutItem* MuQt_QVBoxLayout::itemAt(int index) const
    {
        if (!_env)
            return QVBoxLayout::itemAt(index);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[6];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(index);
            Value rval = _env->call(F, args);
            return layoutitem<QLayoutItem>(rval._Pointer);
        }
        else
        {
            return QVBoxLayout::itemAt(index);
        }
    }

    QSize MuQt_QVBoxLayout::maximumSize() const
    {
        if (!_env)
            return QVBoxLayout::maximumSize();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[7];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return getqtype<QSizeType>(rval._Pointer);
        }
        else
        {
            return QVBoxLayout::maximumSize();
        }
    }

    int MuQt_QVBoxLayout::minimumHeightForWidth(int w) const
    {
        if (!_env)
            return QVBoxLayout::minimumHeightForWidth(w);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[8];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(w);
            Value rval = _env->call(F, args);
            return (int)(rval._int);
        }
        else
        {
            return QVBoxLayout::minimumHeightForWidth(w);
        }
    }

    QSize MuQt_QVBoxLayout::minimumSize() const
    {
        if (!_env)
            return QVBoxLayout::minimumSize();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[9];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return getqtype<QSizeType>(rval._Pointer);
        }
        else
        {
            return QVBoxLayout::minimumSize();
        }
    }

    void MuQt_QVBoxLayout::setGeometry(const QRect& r)
    {
        if (!_env)
        {
            QVBoxLayout::setGeometry(r);
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[10];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(makeqtype<QRectType>(c, r, "qt.QRect"));
            Value rval = _env->call(F, args);
        }
        else
        {
            QVBoxLayout::setGeometry(r);
        }
    }

    QSize MuQt_QVBoxLayout::sizeHint() const
    {
        if (!_env)
            return QVBoxLayout::sizeHint();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[11];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return getqtype<QSizeType>(rval._Pointer);
        }
        else
        {
            return QVBoxLayout::sizeHint();
        }
    }

    QLayoutItem* MuQt_QVBoxLayout::takeAt(int index)
    {
        if (!_env)
            return QVBoxLayout::takeAt(index);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[12];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(index);
            Value rval = _env->call(F, args);
            return layoutitem<QLayoutItem>(rval._Pointer);
        }
        else
        {
            return QVBoxLayout::takeAt(index);
        }
    }

    //----------------------------------------------------------------------
    //  Mu Type CONSTRUCTORS

    QVBoxLayoutType::QVBoxLayoutType(Context* c, const char* name, Class* super,
                                     Class* super2)
        : Class(c, name, vectorOf2(super, super2))
    {
    }

    QVBoxLayoutType::~QVBoxLayoutType() {}

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    static Pointer QVBoxLayout_QVBoxLayout_QObject(Thread& NODE_THREAD,
                                                   Pointer obj)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

        if (!widget)
        {
            return 0;
        }
        else if (QVBoxLayout* w = object<QVBoxLayout>(widget))
        {
            QVBoxLayoutType* type =
                c->findSymbolOfTypeByQualifiedName<QVBoxLayoutType>(
                    c->internName("qt.QVBoxLayout"), false);
            ClassInstance* o = ClassInstance::allocate(type);
            setobject(o, w);
            return o;
        }
        else
        {
            throw BadCastException();
        }
    }

    static NODE_IMPLEMENTATION(castFromObject, Pointer)
    {
        NODE_RETURN(
            QVBoxLayout_QVBoxLayout_QObject(NODE_THREAD, NODE_ARG(0, Pointer)));
    }

    Pointer
    qt_QVBoxLayout_QVBoxLayout_QVBoxLayout_QVBoxLayout(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        setobject(
            param_this,
            new MuQt_QVBoxLayout(param_this, NODE_THREAD.process()->callEnv()));
        return param_this;
    }

    Pointer qt_QVBoxLayout_QVBoxLayout_QVBoxLayout_QVBoxLayout_QWidget(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_parent)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QWidget* arg1 = object<QWidget>(param_parent);
        setobject(param_this,
                  new MuQt_QVBoxLayout(param_this,
                                       NODE_THREAD.process()->callEnv(), arg1));
        return param_this;
    }

    void qt_QVBoxLayout_addItem_void_QVBoxLayout_QLayoutItem(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_item)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        QLayoutItem* arg1 = layoutitem<QLayoutItem>(param_item);
        if (isMuQtObject(arg0))
            arg0->QVBoxLayout::addItem(arg1);
        else
            arg0->addItem(arg1);
    }

    int qt_QVBoxLayout_count_int_QVBoxLayout(Mu::Thread& NODE_THREAD,
                                             Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        return isMuQtObject(arg0) ? arg0->QVBoxLayout::count() : arg0->count();
    }

    int
    qt_QVBoxLayout_expandingDirections_int_QVBoxLayout(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        return isMuQtObject(arg0)
                   ? int(arg0->QVBoxLayout::expandingDirections())
                   : int(arg0->expandingDirections());
    }

    bool
    qt_QVBoxLayout_hasHeightForWidth_bool_QVBoxLayout(Mu::Thread& NODE_THREAD,
                                                      Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        return isMuQtObject(arg0) ? arg0->QVBoxLayout::hasHeightForWidth()
                                  : arg0->hasHeightForWidth();
    }

    int qt_QVBoxLayout_heightForWidth_int_QVBoxLayout_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_w)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        int arg1 = (int)(param_w);
        return isMuQtObject(arg0) ? arg0->QVBoxLayout::heightForWidth(arg1)
                                  : arg0->heightForWidth(arg1);
    }

    void qt_QVBoxLayout_invalidate_void_QVBoxLayout(Mu::Thread& NODE_THREAD,
                                                    Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        if (isMuQtObject(arg0))
            arg0->QVBoxLayout::invalidate();
        else
            arg0->invalidate();
    }

    Pointer qt_QVBoxLayout_itemAt_QLayoutItem_QVBoxLayout_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_index)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        int arg1 = (int)(param_index);
        return isMuQtObject(arg0)
                   ? makelayoutitem<QLayoutItemType>(
                         c, arg0->QVBoxLayout::itemAt(arg1), "qt.QLayoutItem")
                   : makelayoutitem<QLayoutItemType>(c, arg0->itemAt(arg1),
                                                     "qt.QLayoutItem");
    }

    Pointer
    qt_QVBoxLayout_maximumSize_QSize_QVBoxLayout(Mu::Thread& NODE_THREAD,
                                                 Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        return isMuQtObject(arg0)
                   ? makeqtype<QSizeType>(c, arg0->QVBoxLayout::maximumSize(),
                                          "qt.QSize")
                   : makeqtype<QSizeType>(c, arg0->maximumSize(), "qt.QSize");
    }

    int qt_QVBoxLayout_minimumHeightForWidth_int_QVBoxLayout_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_w)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        int arg1 = (int)(param_w);
        return isMuQtObject(arg0)
                   ? arg0->QVBoxLayout::minimumHeightForWidth(arg1)
                   : arg0->minimumHeightForWidth(arg1);
    }

    Pointer
    qt_QVBoxLayout_minimumSize_QSize_QVBoxLayout(Mu::Thread& NODE_THREAD,
                                                 Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        return isMuQtObject(arg0)
                   ? makeqtype<QSizeType>(c, arg0->QVBoxLayout::minimumSize(),
                                          "qt.QSize")
                   : makeqtype<QSizeType>(c, arg0->minimumSize(), "qt.QSize");
    }

    void qt_QVBoxLayout_setGeometry_void_QVBoxLayout_QRect(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_r)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        const QRect arg1 = getqtype<QRectType>(param_r);
        if (isMuQtObject(arg0))
            arg0->QVBoxLayout::setGeometry(arg1);
        else
            arg0->setGeometry(arg1);
    }

    Pointer qt_QVBoxLayout_sizeHint_QSize_QVBoxLayout(Mu::Thread& NODE_THREAD,
                                                      Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        return isMuQtObject(arg0)
                   ? makeqtype<QSizeType>(c, arg0->QVBoxLayout::sizeHint(),
                                          "qt.QSize")
                   : makeqtype<QSizeType>(c, arg0->sizeHint(), "qt.QSize");
    }

    Pointer qt_QVBoxLayout_takeAt_QLayoutItem_QVBoxLayout_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_index)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QVBoxLayout* arg0 = object<QVBoxLayout>(param_this);
        int arg1 = (int)(param_index);
        return isMuQtObject(arg0)
                   ? makelayoutitem<QLayoutItemType>(
                         c, arg0->QVBoxLayout::takeAt(arg1), "qt.QLayoutItem")
                   : makelayoutitem<QLayoutItemType>(c, arg0->takeAt(arg1),
                                                     "qt.QLayoutItem");
    }

    static NODE_IMPLEMENTATION(_n_QVBoxLayout0, Pointer)
    {
        NODE_RETURN(qt_QVBoxLayout_QVBoxLayout_QVBoxLayout_QVBoxLayout(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_QVBoxLayout1, Pointer)
    {
        NODE_RETURN(qt_QVBoxLayout_QVBoxLayout_QVBoxLayout_QVBoxLayout_QWidget(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_addItem0, void)
    {
        qt_QVBoxLayout_addItem_void_QVBoxLayout_QLayoutItem(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_count0, int)
    {
        NODE_RETURN(qt_QVBoxLayout_count_int_QVBoxLayout(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_expandingDirections0, int)
    {
        NODE_RETURN(qt_QVBoxLayout_expandingDirections_int_QVBoxLayout(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_hasHeightForWidth0, bool)
    {
        NODE_RETURN(qt_QVBoxLayout_hasHeightForWidth_bool_QVBoxLayout(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_heightForWidth0, int)
    {
        NODE_RETURN(qt_QVBoxLayout_heightForWidth_int_QVBoxLayout_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_invalidate0, void)
    {
        qt_QVBoxLayout_invalidate_void_QVBoxLayout(NODE_THREAD,
                                                   NONNIL_NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_itemAt0, Pointer)
    {
        NODE_RETURN(qt_QVBoxLayout_itemAt_QLayoutItem_QVBoxLayout_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_maximumSize0, Pointer)
    {
        NODE_RETURN(qt_QVBoxLayout_maximumSize_QSize_QVBoxLayout(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_minimumHeightForWidth0, int)
    {
        NODE_RETURN(qt_QVBoxLayout_minimumHeightForWidth_int_QVBoxLayout_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_minimumSize0, Pointer)
    {
        NODE_RETURN(qt_QVBoxLayout_minimumSize_QSize_QVBoxLayout(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_setGeometry0, void)
    {
        qt_QVBoxLayout_setGeometry_void_QVBoxLayout_QRect(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_sizeHint0, Pointer)
    {
        NODE_RETURN(qt_QVBoxLayout_sizeHint_QSize_QVBoxLayout(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_takeAt0, Pointer)
    {
        NODE_RETURN(qt_QVBoxLayout_takeAt_QLayoutItem_QVBoxLayout_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    void QVBoxLayoutType::load()
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

        addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate,
                                None, Return, ftn, End),

                   new Function(c, tn, castFromObject, Cast, Compiled,
                                QVBoxLayout_QVBoxLayout_QObject, Return, ftn,
                                Parameters,
                                new Param(c, "object", "qt.QObject"), End),

                   EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(c, "QVBoxLayout", _n_QVBoxLayout0, None, Compiled,
                         qt_QVBoxLayout_QVBoxLayout_QVBoxLayout_QVBoxLayout,
                         Return, "qt.QVBoxLayout", Parameters,
                         new Param(c, "this", "qt.QVBoxLayout"), End),
            new Function(
                c, "QVBoxLayout", _n_QVBoxLayout1, None, Compiled,
                qt_QVBoxLayout_QVBoxLayout_QVBoxLayout_QVBoxLayout_QWidget,
                Return, "qt.QVBoxLayout", Parameters,
                new Param(c, "this", "qt.QVBoxLayout"),
                new Param(c, "parent", "qt.QWidget"), End),
            _func[0] = new MemberFunction(
                c, "addItem", _n_addItem0, None, Compiled,
                qt_QVBoxLayout_addItem_void_QVBoxLayout_QLayoutItem, Return,
                "void", Parameters, new Param(c, "this", "qt.QVBoxLayout"),
                new Param(c, "item", "qt.QLayoutItem"), End),
            _func[1] = new MemberFunction(
                c, "count", _n_count0, None, Compiled,
                qt_QVBoxLayout_count_int_QVBoxLayout, Return, "int", Parameters,
                new Param(c, "this", "qt.QVBoxLayout"), End),
            _func[2] = new MemberFunction(
                c, "expandingDirections", _n_expandingDirections0, None,
                Compiled, qt_QVBoxLayout_expandingDirections_int_QVBoxLayout,
                Return, "int", Parameters,
                new Param(c, "this", "qt.QVBoxLayout"), End),
            _func[3] = new MemberFunction(
                c, "hasHeightForWidth", _n_hasHeightForWidth0, None, Compiled,
                qt_QVBoxLayout_hasHeightForWidth_bool_QVBoxLayout, Return,
                "bool", Parameters, new Param(c, "this", "qt.QVBoxLayout"),
                End),
            _func[4] = new MemberFunction(
                c, "heightForWidth", _n_heightForWidth0, None, Compiled,
                qt_QVBoxLayout_heightForWidth_int_QVBoxLayout_int, Return,
                "int", Parameters, new Param(c, "this", "qt.QVBoxLayout"),
                new Param(c, "w", "int"), End),
            _func[5] = new MemberFunction(
                c, "invalidate", _n_invalidate0, None, Compiled,
                qt_QVBoxLayout_invalidate_void_QVBoxLayout, Return, "void",
                Parameters, new Param(c, "this", "qt.QVBoxLayout"), End),
            _func[6] = new MemberFunction(
                c, "itemAt", _n_itemAt0, None, Compiled,
                qt_QVBoxLayout_itemAt_QLayoutItem_QVBoxLayout_int, Return,
                "qt.QLayoutItem", Parameters,
                new Param(c, "this", "qt.QVBoxLayout"),
                new Param(c, "index", "int"), End),
            _func[7] = new MemberFunction(
                c, "maximumSize", _n_maximumSize0, None, Compiled,
                qt_QVBoxLayout_maximumSize_QSize_QVBoxLayout, Return,
                "qt.QSize", Parameters, new Param(c, "this", "qt.QVBoxLayout"),
                End),
            _func[8] = new MemberFunction(
                c, "minimumHeightForWidth", _n_minimumHeightForWidth0, None,
                Compiled,
                qt_QVBoxLayout_minimumHeightForWidth_int_QVBoxLayout_int,
                Return, "int", Parameters,
                new Param(c, "this", "qt.QVBoxLayout"),
                new Param(c, "w", "int"), End),
            _func[9] = new MemberFunction(
                c, "minimumSize", _n_minimumSize0, None, Compiled,
                qt_QVBoxLayout_minimumSize_QSize_QVBoxLayout, Return,
                "qt.QSize", Parameters, new Param(c, "this", "qt.QVBoxLayout"),
                End),
            _func[10] = new MemberFunction(
                c, "setGeometry", _n_setGeometry0, None, Compiled,
                qt_QVBoxLayout_setGeometry_void_QVBoxLayout_QRect, Return,
                "void", Parameters, new Param(c, "this", "qt.QVBoxLayout"),
                new Param(c, "r", "qt.QRect"), End),
            _func[11] = new MemberFunction(
                c, "sizeHint", _n_sizeHint0, None, Compiled,
                qt_QVBoxLayout_sizeHint_QSize_QVBoxLayout, Return, "qt.QSize",
                Parameters, new Param(c, "this", "qt.QVBoxLayout"), End),
            _func[12] = new MemberFunction(
                c, "takeAt", _n_takeAt0, None, Compiled,
                qt_QVBoxLayout_takeAt_QLayoutItem_QVBoxLayout_int, Return,
                "qt.QLayoutItem", Parameters,
                new Param(c, "this", "qt.QVBoxLayout"),
                new Param(c, "index", "int"), End),
            // static functions
            EndArguments);
        globalScope()->addSymbols(EndArguments);
        scope()->addSymbols(EndArguments);

        const char** propExclusions = 0;

        populate(this, QVBoxLayout::staticMetaObject, propExclusions);
    }

} // namespace Mu
