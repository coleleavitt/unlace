__int64 (__fastcall *__fastcall sub_10F980(__int64 a1, __int64 a2))()
{
  __int64 v3; // rbp
  __int64 (__fastcall *result)(); // rax
  __int64 v5; // r12
  __int64 (__fastcall **v7)(); // r13
  __int64 i; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  result = *(__int64 (__fastcall **)())a1;
  *(_BYTE *)(v3 + 35) = 0;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *((int *)result + 53) > 1 )
    {
      if ( a1 == *(_QWORD *)(v5 + 128) )
      {
        result = *(__int64 (__fastcall **)())(v5 + 120);
        *(_WORD *)(v5 + 40) &= 0xFF3Fu;
        for ( *(_QWORD *)(v5 + 128) = 0; result; result = *((__int64 (__fastcall **)())result + 2) )
          *((_BYTE *)result + 12) = 1;
      }
      *(_BYTE *)(a1 + 16) = 1;
      return result;
    }
    v7 = (__int64 (__fastcall **)())(v5 + 120);
    for ( i = *(_QWORD *)(v5 + 120); i; i = (__int64)result )
    {
      result = *(__int64 (__fastcall **)())(i + 16);
      if ( a1 == *(_QWORD *)i )
      {
        *v7 = result;
        if ( *(_DWORD *)(i + 8) != 1 )
        {
          sub_C91C0(i, a2);
          result = *v7;
        }
      }
      else
      {
        v7 = (__int64 (__fastcall **)())(i + 16);
      }
    }
    if ( a1 == *(_QWORD *)(v5 + 128) )
    {
      *(_QWORD *)(v5 + 128) = 0;
      *(_WORD *)(v5 + 40) &= 0xFF3Fu;
    }
    else if ( *(_DWORD *)(v5 + 60) == 2 )
    {
      *(_WORD *)(v5 + 40) &= ~0x80u;
    }
    if ( (*(_DWORD *)(v3 + 60))-- == 1 )
      *(_BYTE *)(v3 + 36) = 0;
  }
  *(_BYTE *)(a1 + 16) = 0;
  if ( !*(_BYTE *)(v3 + 36) )
    return sub_10F950((__int64 (__fastcall **)())(v3 + 24), a2);
  return result;
}
