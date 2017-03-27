// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __rtcControl_hh__
#define __rtcControl_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_rtcControl
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_rtcControl
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_rtcControl
#endif



#ifndef __BasicDataType_hh_EXTERNAL_GUARD__
#define __BasicDataType_hh_EXTERNAL_GUARD__
#include <BasicDataType.hh>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE rtcControl

_CORBA_MODULE_BEG

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_rtcPathSeq;

  class rtcPathSeq_var;

  class rtcPathSeq : public _CORBA_Unbounded_Sequence_String {
  public:
    typedef rtcPathSeq_var _var_type;
    inline rtcPathSeq() {}
    inline rtcPathSeq(const rtcPathSeq& _s)
      : _CORBA_Unbounded_Sequence_String(_s) {}

    inline rtcPathSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_String(_max) {}
    inline rtcPathSeq(_CORBA_ULong _max, _CORBA_ULong _len, char** _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_String(_max, _len, _val, _rel) {}

  

    inline rtcPathSeq& operator = (const rtcPathSeq& _s) {
      _CORBA_Unbounded_Sequence_String::operator=(_s);
      return *this;
    }
  };

  class rtcPathSeq_out;

  class rtcPathSeq_var {
  public:
    inline rtcPathSeq_var() : _pd_seq(0) {}
    inline rtcPathSeq_var(rtcPathSeq* _s) : _pd_seq(_s) {}
    inline rtcPathSeq_var(const rtcPathSeq_var& _s) {
      if (_s._pd_seq)  _pd_seq = new rtcPathSeq(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~rtcPathSeq_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline rtcPathSeq_var& operator = (rtcPathSeq* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline rtcPathSeq_var& operator = (const rtcPathSeq_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new rtcPathSeq;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline _CORBA_String_element operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline rtcPathSeq* operator -> () { return _pd_seq; }
    inline const rtcPathSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator rtcPathSeq& () const { return *_pd_seq; }
#else
    inline operator const rtcPathSeq& () const { return *_pd_seq; }
    inline operator rtcPathSeq& () { return *_pd_seq; }
#endif
      
    inline const rtcPathSeq& in() const { return *_pd_seq; }
    inline rtcPathSeq&       inout()    { return *_pd_seq; }
    inline rtcPathSeq*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline rtcPathSeq* _retn() { rtcPathSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class rtcPathSeq_out;
    
  private:
    rtcPathSeq* _pd_seq;
  };

  class rtcPathSeq_out {
  public:
    inline rtcPathSeq_out(rtcPathSeq*& _s) : _data(_s) { _data = 0; }
    inline rtcPathSeq_out(rtcPathSeq_var& _s)
      : _data(_s._pd_seq) { _s = (rtcPathSeq*) 0; }
    inline rtcPathSeq_out(const rtcPathSeq_out& _s) : _data(_s._data) {}
    inline rtcPathSeq_out& operator = (const rtcPathSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline rtcPathSeq_out& operator = (rtcPathSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator rtcPathSeq*&()  { return _data; }
    inline rtcPathSeq*& ptr()       { return _data; }
    inline rtcPathSeq* operator->() { return _data; }

    inline _CORBA_String_element operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    rtcPathSeq*& _data;

  private:
    rtcPathSeq_out();
    rtcPathSeq_out& operator=(const rtcPathSeq_var&);
  };

  struct RTC_Data {
    typedef _CORBA_ConstrType_Variable_Var<RTC_Data> _var_type;

    
    ::CORBA::String_member name;

    ::CORBA::String_member filename;

    ::CORBA::Short num;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef RTC_Data::_var_type RTC_Data_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< RTC_Data,RTC_Data_var > RTC_Data_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_RTC_Data;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_RTC_List;

  class RTC_List_var;

  class RTC_List : public _CORBA_Unbounded_Sequence< RTC_Data >  {
  public:
    typedef RTC_List_var _var_type;
    inline RTC_List() {}
    inline RTC_List(const RTC_List& _s)
      : _CORBA_Unbounded_Sequence< RTC_Data > (_s) {}

    inline RTC_List(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< RTC_Data > (_max) {}
    inline RTC_List(_CORBA_ULong _max, _CORBA_ULong _len, RTC_Data* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< RTC_Data > (_max, _len, _val, _rel) {}

  

    inline RTC_List& operator = (const RTC_List& _s) {
      _CORBA_Unbounded_Sequence< RTC_Data > ::operator=(_s);
      return *this;
    }
  };

  class RTC_List_out;

  class RTC_List_var {
  public:
    inline RTC_List_var() : _pd_seq(0) {}
    inline RTC_List_var(RTC_List* _s) : _pd_seq(_s) {}
    inline RTC_List_var(const RTC_List_var& _s) {
      if (_s._pd_seq)  _pd_seq = new RTC_List(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~RTC_List_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline RTC_List_var& operator = (RTC_List* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline RTC_List_var& operator = (const RTC_List_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new RTC_List;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline RTC_Data& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline RTC_List* operator -> () { return _pd_seq; }
    inline const RTC_List* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator RTC_List& () const { return *_pd_seq; }
#else
    inline operator const RTC_List& () const { return *_pd_seq; }
    inline operator RTC_List& () { return *_pd_seq; }
#endif
      
    inline const RTC_List& in() const { return *_pd_seq; }
    inline RTC_List&       inout()    { return *_pd_seq; }
    inline RTC_List*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline RTC_List* _retn() { RTC_List* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class RTC_List_out;
    
  private:
    RTC_List* _pd_seq;
  };

  class RTC_List_out {
  public:
    inline RTC_List_out(RTC_List*& _s) : _data(_s) { _data = 0; }
    inline RTC_List_out(RTC_List_var& _s)
      : _data(_s._pd_seq) { _s = (RTC_List*) 0; }
    inline RTC_List_out(const RTC_List_out& _s) : _data(_s._data) {}
    inline RTC_List_out& operator = (const RTC_List_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline RTC_List_out& operator = (RTC_List* _s) {
      _data = _s;
      return *this;
    }
    inline operator RTC_List*&()  { return _data; }
    inline RTC_List*& ptr()       { return _data; }
    inline RTC_List* operator->() { return _data; }

    inline RTC_Data& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    RTC_List*& _data;

  private:
    RTC_List_out();
    RTC_List_out& operator=(const RTC_List_var&);
  };

#ifndef __rtcControl_mRTCDataInterface__
#define __rtcControl_mRTCDataInterface__
  class RTCDataInterface;
  class _objref_RTCDataInterface;
  class _impl_RTCDataInterface;
  
  typedef _objref_RTCDataInterface* RTCDataInterface_ptr;
  typedef RTCDataInterface_ptr RTCDataInterfaceRef;

  class RTCDataInterface_Helper {
  public:
    typedef RTCDataInterface_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_RTCDataInterface, RTCDataInterface_Helper> RTCDataInterface_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_RTCDataInterface,RTCDataInterface_Helper > RTCDataInterface_out;

#endif

  // interface RTCDataInterface
  class RTCDataInterface {
  public:
    // Declarations for this interface type.
    typedef RTCDataInterface_ptr _ptr_type;
    typedef RTCDataInterface_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_RTCDataInterface :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    ::CORBA::Boolean getRTC(::rtcControl::rtcPathSeq_out paths);
    ::CORBA::Boolean createComp(const char* name, const char* filename, const char* filepath);
    ::CORBA::Boolean removeComp(const char* name);
    ::CORBA::Boolean getCompList(::rtcControl::RTC_List_out names);

    // Constructors
    inline _objref_RTCDataInterface()  { _PR_setobj(0); }  // nil
    _objref_RTCDataInterface(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_RTCDataInterface();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_RTCDataInterface(const _objref_RTCDataInterface&);
    _objref_RTCDataInterface& operator = (const _objref_RTCDataInterface&);
    // not implemented

    friend class RTCDataInterface;
  };

  class _pof_RTCDataInterface : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_RTCDataInterface() : _OMNI_NS(proxyObjectFactory)(RTCDataInterface::_PD_repoId) {}
    virtual ~_pof_RTCDataInterface();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_RTCDataInterface :
    public virtual omniServant
  {
  public:
    virtual ~_impl_RTCDataInterface();

    virtual ::CORBA::Boolean getRTC(::rtcControl::rtcPathSeq_out paths) = 0;
    virtual ::CORBA::Boolean createComp(const char* name, const char* filename, const char* filepath) = 0;
    virtual ::CORBA::Boolean removeComp(const char* name) = 0;
    virtual ::CORBA::Boolean getCompList(::rtcControl::RTC_List_out names) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_RTCDataInterface;

_CORBA_MODULE_END



_CORBA_MODULE POA_rtcControl
_CORBA_MODULE_BEG

  class RTCDataInterface :
    public virtual rtcControl::_impl_RTCDataInterface,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~RTCDataInterface();

    inline ::rtcControl::RTCDataInterface_ptr _this() {
      return (::rtcControl::RTCDataInterface_ptr) _do_this(::rtcControl::RTCDataInterface::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_rtcControl
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const rtcControl::rtcPathSeq& _s);
void operator<<=(::CORBA::Any& _a, rtcControl::rtcPathSeq* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, rtcControl::rtcPathSeq*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const rtcControl::rtcPathSeq*& _sp);

extern void operator<<=(::CORBA::Any& _a, const rtcControl::RTC_Data& _s);
extern void operator<<=(::CORBA::Any& _a, rtcControl::RTC_Data* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, rtcControl::RTC_Data*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const rtcControl::RTC_Data*& _sp);

void operator<<=(::CORBA::Any& _a, const rtcControl::RTC_List& _s);
void operator<<=(::CORBA::Any& _a, rtcControl::RTC_List* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, rtcControl::RTC_List*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const rtcControl::RTC_List*& _sp);

void operator<<=(::CORBA::Any& _a, rtcControl::RTCDataInterface_ptr _s);
void operator<<=(::CORBA::Any& _a, rtcControl::RTCDataInterface_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, rtcControl::RTCDataInterface_ptr& _s);



inline void
rtcControl::RTCDataInterface::_marshalObjRef(::rtcControl::RTCDataInterface_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_rtcControl
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_rtcControl
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_rtcControl
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_rtcControl
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_rtcControl
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_rtcControl
#endif

#endif  // __rtcControl_hh__

