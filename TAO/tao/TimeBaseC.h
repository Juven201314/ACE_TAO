/* -*- C++ -*- */
//
// $Id$
//
// ================================================================
//
// = LIBRARY
//   TAO
//
// = FILENAME
//   TimeBaseC.h
//
// = DESCRIPTION
//   Generated from TimeBase.pidl, the common time representation for
//   Time in CORBA.
//   The code was generated by the IDL compiler and then hand-crafted
//   to reduce the includes interdependencies.
//
// ================================================================

#ifndef TAO_IDL_TIMEBASEC_H
#define TAO_IDL_TIMEBASEC_H

#include "tao/Any.h"
#include "tao/CDR.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export
#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

TAO_NAMESPACE  TimeBase
{
  typedef CORBA::ULongLong TimeT;
  typedef CORBA::ULongLong_out TimeT_out;
    TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_TimeT;

  typedef TimeT InaccuracyT;
  typedef TimeT_out InaccuracyT_out;
    TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_InaccuracyT;

  typedef CORBA::Short TdfT;
  typedef CORBA::Short_out TdfT_out;
    TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_TdfT;

  struct TAO_Export UtcT
  {
    TimeT time;
    CORBA::ULong inacclo;
    CORBA::UShort inacchi;
    TdfT tdf;
  };

  class TAO_Export UtcT_var
  {
  public:
    UtcT_var (void); // default constructor
    UtcT_var (UtcT *);
    UtcT_var (const UtcT_var &); // copy constructor
    ~UtcT_var (void); // destructor

    UtcT_var &operator= (UtcT *);
    UtcT_var &operator= (const UtcT_var &);
    UtcT *operator-> (void);
    const UtcT *operator-> (void) const;

    operator const UtcT &() const;
    operator UtcT &();
    operator UtcT &() const;
    // in, inout, out, _retn
    const UtcT &in (void) const;
    UtcT &inout (void);
    UtcT &out (void);
    UtcT _retn (void);
    UtcT *ptr (void) const;

  private:
    UtcT *ptr_;
  };

  typedef UtcT &UtcT_out;

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_UtcT;

  struct TAO_Export IntervalT
  {
    TimeT lower_bound;
    TimeT upper_bound;
  };

  class TAO_Export IntervalT_var
  {
  public:
    IntervalT_var (void); // default constructor
    IntervalT_var (IntervalT *);
    IntervalT_var (const IntervalT_var &); // copy constructor
    ~IntervalT_var (void); // destructor

    IntervalT_var &operator= (IntervalT *);
    IntervalT_var &operator= (const IntervalT_var &);
    IntervalT *operator-> (void);
    const IntervalT *operator-> (void) const;

    operator const IntervalT &() const;
    operator IntervalT &();
    operator IntervalT &() const;
    // in, inout, out, _retn
    const IntervalT &in (void) const;
    IntervalT &inout (void);
    IntervalT &out (void);
    IntervalT _retn (void);
    IntervalT *ptr (void) const;

  private:
    IntervalT *ptr_;
  };

  typedef IntervalT &IntervalT_out;

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_IntervalT;


}
TAO_NAMESPACE_CLOSE // module TimeBase

TAO_Export void operator<<= (CORBA::Any &, const TimeBase::UtcT &); // copying version
TAO_Export void operator<<= (CORBA::Any &, TimeBase::UtcT*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, TimeBase::UtcT *&);
TAO_Export void operator<<= (CORBA::Any &, const TimeBase::IntervalT &); // copying version
TAO_Export void operator<<= (CORBA::Any &, TimeBase::IntervalT*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, TimeBase::IntervalT *&);

#if defined (__ACE_INLINE__)
#include "tao/TimeBaseC.i"
#else
TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const TimeBase::UtcT &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, TimeBase::UtcT &);
TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const TimeBase::IntervalT &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, TimeBase::IntervalT &);
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* TAO_IDL_TIMEBASEC_H */
