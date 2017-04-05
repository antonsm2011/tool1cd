// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// C++ TLBWRTR : $Revision:   1.151.1.0.1.27  $
// File generated on 09.03.2013 18:39:21 from Type Library described below.

// ************************************************************************  //
// Type Lib: C:\awa32\bcb6\v8cf addin\Addin.tlb (1)
// LIBID: {DE43905C-8059-40BA-BC14-CF9AB7F47D84}
// LCID: 0
// Helpfile: 
// HelpString: v8cf2 Library
// DepndLst: 
//   (1) v2.0 stdole, (C:\Windows\SysWOW64\stdole2.tlb)
// ************************************************************************ //
#ifndef   Addin_TLBH
#define   Addin_TLBH

#pragma option push -b -w-inl

#include <utilcls.h>
#if !defined(__UTILCLS_H_VERSION) || (__UTILCLS_H_VERSION < 0x0600)
//
// The code generated by the TLIBIMP utility or the Import|TypeLibrary 
// and Import|ActiveX feature of C++Builder rely on specific versions of
// the header file UTILCLS.H found in the INCLUDE\VCL directory. If an 
// older version of the file is detected, you probably need an update/patch.
//
#error "This file requires a newer version of the header UTILCLS.H" \
       "You need to apply an update/patch to your copy of C++Builder"
#endif
#include <olectl.h>
#include <ocidl.h>
#if defined(USING_ATLVCL) || defined(USING_ATL)
#if !defined(__TLB_NO_EVENT_WRAPPERS)
#include <atl/atlmod.h>
#endif
#endif


// *********************************************************************//
// Forward reference of some VCL types (to avoid including STDVCL.HPP)    
// *********************************************************************//
namespace Stdvcl {class IStrings; class IStringsDisp;}
using namespace Stdvcl;
//typedef TComInterface<IStrings> IStringsPtr;
//typedef TComInterface<IStringsDisp> IStringsDispPtr;

namespace Addin_tlb
{

// *********************************************************************//
// HelpString: v8cf2 Library
// Version:    1.0
// *********************************************************************//


// *********************************************************************//
// GUIDS declared in the TypeLibrary. Following prefixes are used:        
//   Type Libraries     : LIBID_xxxx                                      
//   CoClasses          : CLSID_xxxx                                      
//   DISPInterfaces     : DIID_xxxx                                       
//   Non-DISP interfaces: IID_xxxx                                        
// *********************************************************************//
extern "C" const __declspec(selectany) GUID LIBID_Addin = {0xDE43905C, 0x8059, 0x40BA,{ 0xBC, 0x14, 0xCF,0x9A, 0xB7, 0xF4,0x7D, 0x84} };
extern "C" const __declspec(selectany) GUID IID_IInitDone = {0xAB634001, 0xF13D, 0x11D0,{ 0xA4, 0x59, 0x00,0x40, 0x95, 0xE1,0xDA, 0xEA} };
extern "C" const __declspec(selectany) GUID IID_ILanguageExtender = {0xAB634003, 0xF13D, 0x11D0,{ 0xA4, 0x59, 0x00,0x40, 0x95, 0xE1,0xDA, 0xEA} };
extern "C" const __declspec(selectany) GUID CLSID_Cv8cf2 = {0xF542387C, 0xA822, 0x49A1,{ 0x85, 0x5C, 0xEE,0x23, 0x4D, 0xB1,0xAE, 0xD4} };

// *********************************************************************//
// Forward declaration of types defined in TypeLibrary                    
// *********************************************************************//
interface DECLSPEC_UUID("{AB634001-F13D-11D0-A459-004095E1DAEA}") IInitDone;
typedef TComInterface<IInitDone, &IID_IInitDone> IInitDonePtr;

interface DECLSPEC_UUID("{AB634003-F13D-11D0-A459-004095E1DAEA}") ILanguageExtender;
typedef TComInterface<ILanguageExtender, &IID_ILanguageExtender> ILanguageExtenderPtr;


// *********************************************************************//
// Declaration of CoClasses defined in Type Library                       
// (NOTE: Here we map each CoClass to its Default Interface)              
//                                                                        
// The LIBID_OF_ macro(s) map a LIBID_OF_CoClassName to the GUID of this  
// TypeLibrary. It simplifies the updating of macros when CoClass name    
// change.                                                                
// *********************************************************************//
typedef IInitDone Cv8cf2;
typedef IInitDonePtr Cv8cf2Ptr;

#define LIBID_OF_Cv8cf2 (&LIBID_Addin)
// *********************************************************************//
// Interface: IInitDone
// Flags:     (0)
// GUID:      {AB634001-F13D-11D0-A459-004095E1DAEA}
// *********************************************************************//
interface IInitDone  : public IUnknown
{
public:
  // [-1] method Init
  virtual HRESULT STDMETHODCALLTYPE Init(LPDISPATCH pConnection/*[in]*/) = 0;
  // [-1] method Done
  virtual HRESULT STDMETHODCALLTYPE Done(void) = 0;
  // [-1] method GetInfo
  virtual HRESULT STDMETHODCALLTYPE GetInfo(LPSAFEARRAY* pInfo/*[in,out]*/) = 0;
};

// *********************************************************************//
// Interface: ILanguageExtender
// Flags:     (0)
// GUID:      {AB634003-F13D-11D0-A459-004095E1DAEA}
// *********************************************************************//
interface ILanguageExtender  : public IUnknown
{
public:
  // [-1] method RegisterExtensionAs
  virtual HRESULT STDMETHODCALLTYPE RegisterExtensionAs(BSTR* bstrExtensionName/*[in,out]*/) = 0;
  // [-1] method GetNProps
  virtual HRESULT STDMETHODCALLTYPE GetNProps(long* plProps/*[in,out]*/) = 0;
  // [-1] method FindProp
  virtual HRESULT STDMETHODCALLTYPE FindProp(BSTR bstrPropName/*[in]*/, long* plPropNum/*[in,out]*/) = 0;
  // [-1] method GetPropName
  virtual HRESULT STDMETHODCALLTYPE GetPropName(long lPropNum/*[in]*/, long lPropAlias/*[in]*/, 
                                                BSTR* pbstrPropName/*[in,out]*/) = 0;
  // [-1] method GetPropVal
  virtual HRESULT STDMETHODCALLTYPE GetPropVal(long lPropNum/*[in]*/, 
                                               VARIANT* pvarPropVal/*[in,out]*/) = 0;
  // [-1] method SetPropVal
  virtual HRESULT STDMETHODCALLTYPE SetPropVal(long lPropNum/*[in]*/, VARIANT* varPropVal/*[in]*/) = 0;
  // [-1] method IsPropReadable
  virtual HRESULT STDMETHODCALLTYPE IsPropReadable(long lPropNum/*[in]*/, 
                                                   long* pboolPropRead/*[in,out]*/) = 0;
  // [-1] method IsPropWritable
  virtual HRESULT STDMETHODCALLTYPE IsPropWritable(long lPropNum/*[in]*/, 
                                                   long* pboolPropWrite/*[in,out]*/) = 0;
  // [-1] method GetNMethods
  virtual HRESULT STDMETHODCALLTYPE GetNMethods(long* plMethods/*[in,out]*/) = 0;
  // [-1] method FindMethod
  virtual HRESULT STDMETHODCALLTYPE FindMethod(BSTR bstrMethodName, long* plMethodNum/*[in,out]*/) = 0;
  // [-1] method GetMethodName
  virtual HRESULT STDMETHODCALLTYPE GetMethodName(long lMethodNum/*[in]*/, long lMethodAlias/*[in]*/, 
                                                  BSTR* pbstrMethodName/*[in,out]*/) = 0;
  // [-1] method GetNParams
  virtual HRESULT STDMETHODCALLTYPE GetNParams(long lMethodNum/*[in]*/, long* plParams/*[in,out]*/) = 0;
  // [-1] method GetParamDefValue
  virtual HRESULT STDMETHODCALLTYPE GetParamDefValue(long lMethodNum/*[in]*/, long lParamNum/*[in]*/, 
                                                     VARIANT* pvarParamDefValue/*[in,out]*/) = 0;
  // [-1] method HasRetVal
  virtual HRESULT STDMETHODCALLTYPE HasRetVal(long lMethodNum/*[in]*/, 
                                              long* pboolRetValue/*[in,out]*/) = 0;
  // [-1] method CallAsProc
  virtual HRESULT STDMETHODCALLTYPE CallAsProc(long lMethodNum/*[in]*/, 
                                               LPSAFEARRAY* paParams/*[in]*/) = 0;
  // [-1] method CallAsFunc
  virtual HRESULT STDMETHODCALLTYPE CallAsFunc(long lMethodNum/*[in]*/, 
                                               VARIANT* pvarRetValue/*[in,out]*/, 
                                               LPSAFEARRAY* paParams/*[in]*/) = 0;
};

#if !defined(__TLB_NO_INTERFACE_WRAPPERS)
// *********************************************************************//
// SmartIntf: TCOMIInitDone
// Interface: IInitDone
// *********************************************************************//
template <class T /* IInitDone */ >
class TCOMIInitDoneT : public TComInterface<IInitDone>, public TComInterfaceBase<IUnknown>
{
public:
  TCOMIInitDoneT() {}
  TCOMIInitDoneT(IInitDone *intf, bool addRef = false) : TComInterface<IInitDone>(intf, addRef) {}
  TCOMIInitDoneT(const TCOMIInitDoneT& src) : TComInterface<IInitDone>(src) {}
  TCOMIInitDoneT& operator=(const TCOMIInitDoneT& src) { Bind(src, true); return *this;}

  HRESULT         __fastcall Init(LPDISPATCH pConnection/*[in]*/);
  HRESULT         __fastcall Done(void);
  HRESULT         __fastcall GetInfo(LPSAFEARRAY* pInfo/*[in,out]*/);

};
typedef TCOMIInitDoneT<IInitDone> TCOMIInitDone;

typedef TComInterface<ILanguageExtender>  TCOMILanguageExtender;

// *********************************************************************//
// SmartIntf: TCOMIInitDone
// Interface: IInitDone
// *********************************************************************//
template <class T> HRESULT __fastcall
TCOMIInitDoneT<T>::Init(LPDISPATCH pConnection/*[in]*/)
{
  return (*this)->Init(pConnection);
}

template <class T> HRESULT __fastcall
TCOMIInitDoneT<T>::Done(void)
{
  return (*this)->Done();
}

template <class T> HRESULT __fastcall
TCOMIInitDoneT<T>::GetInfo(LPSAFEARRAY* pInfo/*[in,out]*/)
{
  return (*this)->GetInfo(pInfo);
}

// *********************************************************************//
// The following typedefs expose classes (named CoCoClassName) that       
// provide static Create() and CreateRemote(LPWSTR machineName) methods   
// for creating an instance of an exposed object. These functions can     
// be used by client wishing to automate CoClasses exposed by this        
// typelibrary.                                                           
// *********************************************************************//
#endif  //   __TLB_NO_INTERFACE_WRAPPERS


};     // namespace Addin_tlb

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace Addin_tlb;
#endif

#pragma option pop

#endif // Addin_TLBH
