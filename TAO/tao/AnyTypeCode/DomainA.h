// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:153

#ifndef _TAO_IDL_ORIG_DOMAINA_H_
#define _TAO_IDL_ORIG_DOMAINA_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/AnyTypeCode/TAO_AnyTypeCode_Export.h"
#include "tao/DomainC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_AnyTypeCode_Export

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be\be_visitor_root/root_ch.cpp:62

namespace TAO
{
  class Collocation_Proxy_Broker;
  template<typename T> class Narrow_Utils;
}

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:48

namespace CORBA
{
  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_DomainManager;

  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_ConstructionPolicy;

  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_DomainManagerList;

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:66

} // module CORBA

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_ch.cpp:52

TAO_AnyTypeCode_Export void operator<<= (CORBA::Any &, CORBA::DomainManager_ptr); // copying
TAO_AnyTypeCode_Export void operator<<= (CORBA::Any &, CORBA::DomainManager_ptr *); // non-copying
TAO_AnyTypeCode_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::DomainManager_ptr &);

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_ch.cpp:52

TAO_AnyTypeCode_Export void operator<<= (CORBA::Any &, CORBA::ConstructionPolicy_ptr); // copying
TAO_AnyTypeCode_Export void operator<<= (CORBA::Any &, CORBA::ConstructionPolicy_ptr *); // non-copying
TAO_AnyTypeCode_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::ConstructionPolicy_ptr &);

// TAO_IDL - Generated from
// be\be_visitor_sequence/any_op_ch.cpp:52

TAO_AnyTypeCode_Export void operator<<= (CORBA::Any &, const CORBA::DomainManagerList &); // copying version
TAO_AnyTypeCode_Export void operator<<= (CORBA::Any &, CORBA::DomainManagerList*); // noncopying version
TAO_AnyTypeCode_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::DomainManagerList *&); // deprecated
TAO_AnyTypeCode_Export CORBA::Boolean operator>>= (const CORBA::Any &, const CORBA::DomainManagerList *&);

// TAO_IDL - Generated from
// be\be_codegen.cpp:955

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include /**/ "ace/post.h"

#endif /* ifndef */


