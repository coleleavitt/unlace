unsigned __int64 __fastcall sub_7C940(_QWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  if ( (unsigned __int8)is_cvt64() )
  {
    if ( *a1 >= a1[1] )
      sub_79F50(a1);
    v1 = unpack_dd();
    v2 = v1 >> 1;
    if ( (v1 & 1) != 0 )
      return (int)(-(v1 >> 1) | 0x80000000);
    return (int)v2;
  }
  else
  {
    v4 = sub_7C780((__int64)a1);
    v5 = v4 >> 1;
    if ( (v4 & 1) != 0 )
      return -(__int64)v5 | 0x8000000000000000LL;
    return v5;
  }
}

