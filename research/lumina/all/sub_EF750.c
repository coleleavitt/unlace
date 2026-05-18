__int64 *__fastcall sub_EF750(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 *result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi

  v6 = a1[2];
  if ( *(__int16 *)(v6 + 20) >= 0 )
    result = (__int64 *)sub_EF2D0(a1 + 1, v6, 24, a4, a5, a6);
  else
    result = *(__int64 **)(v6 + 8);
  if ( result )
  {
    v9 = *result;
    if ( result[1] )
    {
      ++v9;
      result[1] = 0;
      *result = v9;
      v10 = *a1;
      if ( (*(_WORD *)(*a1 + 20) & 0x9000) == 0 )
        goto LABEL_6;
    }
    else
    {
      v10 = *a1;
      if ( (*(_WORD *)(*a1 + 20) & 0x9000) == 0 )
      {
LABEL_6:
        result = (_QWORD *)&byte_4;
        *(_QWORD *)v10 = v9;
        *(_WORD *)(v10 + 20) = 4;
        return result;
      }
    }
    return (__int64 *)sub_C9430(v10, v9, a3, a4, a5, a6);
  }
  return result;
}
