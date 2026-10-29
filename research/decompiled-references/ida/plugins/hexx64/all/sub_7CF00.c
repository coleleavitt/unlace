unsigned __int64 __fastcall sub_7CF00(_QWORD *a1, double a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  if ( (unsigned __int8)is_cvt64() )
  {
    if ( *a1 >= a1[1] )
      sub_7A510(a2);
    v2 = unpack_dd();
    v3 = v2 >> 1;
    if ( (v2 & 1) != 0 )
      return (int)(-(v2 >> 1) | 0x80000000);
    return (int)v3;
  }
  else
  {
    v5 = sub_7CD40((__int64)a1, a2);
    v6 = v5 >> 1;
    if ( (v5 & 1) != 0 )
      return -(__int64)v6 | 0x8000000000000000LL;
    return v6;
  }
}

