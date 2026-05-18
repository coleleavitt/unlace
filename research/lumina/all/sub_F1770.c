void *__fastcall sub_F1770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  void *result; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v6 + 20) >= 0 )
    result = sub_EF2D0((_QWORD *)(a1 + 8), v6, 0, a4, a5, a6);
  else
    result = *(void **)(v6 + 8);
  if ( result && *((__int64 *)result + 2) > 0 )
  {
    v9 = *(_QWORD *)a1;
    if ( *((_BYTE *)result + 24) )
    {
      *(_DWORD *)(a1 + 36) = 1;
      return (void *)sub_F11D0(v9, "integer overflow", -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, a6);
    }
    else if ( *((_BYTE *)result + 25) )
    {
      return (void *)sub_C95A0(v9, v6, a3, a4, a5, a6, *(double *)result);
    }
    else
    {
      v10 = *((_QWORD *)result + 1);
      if ( (*(_WORD *)(v9 + 20) & 0x9000) != 0 )
      {
        return (void *)sub_C9430(v9, v10, a3, a4, a5, a6);
      }
      else
      {
        result = &byte_4;
        *(_QWORD *)v9 = v10;
        *(_WORD *)(v9 + 20) = 4;
      }
    }
  }
  return result;
}
