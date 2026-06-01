unsigned __int64 __fastcall sub_3B7570(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  if ( a5(a2, a3) )
  {
    if ( !a5(a3, a4) )
    {
      if ( a5(a2, a4) )
        return sub_3B7340(a1, a4);
      return sub_3B7340(a1, a2);
    }
    return sub_3B7340(a1, a3);
  }
  if ( !a5(a2, a4) )
  {
    if ( a5(a3, a4) )
      return sub_3B7340(a1, a4);
    return sub_3B7340(a1, a3);
  }
  return sub_3B7340(a1, a2);
}

