unsigned __int64 __fastcall sub_2A700(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // r8
  _QWORD *v6; // rcx

  result = (unsigned int)*(unsigned __int8 *)(a2 + 24) - 10;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = *(_QWORD **)a2;
    if ( v3 == 1 )
      return sub_2A500(a1, (__int64)v4);
    result = (unsigned __int64)(v4 + 3);
    v5 = 24 * v3;
    v6 = &v4[3 * v3];
    if ( v5 == 24 )
    {
      return sub_2A500(a1, (__int64)v4);
    }
    else
    {
      while ( *v4 == *(_QWORD *)result )
      {
        result += 24LL;
        if ( v6 == (_QWORD *)result )
          return sub_2A500(a1, (__int64)v4);
      }
    }
  }
  return result;
}

