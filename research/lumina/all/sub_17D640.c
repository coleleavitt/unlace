bool __fastcall sub_17D640(__int64 a1, __int64 a2, const void *a3)
{
  unsigned __int16 v5; // ax
  bool result; // al
  _BYTE *v7; // rsi
  size_t v8; // r12
  __int64 v9; // rax

  v5 = *(_WORD *)(a2 + 24);
  if ( v5 != 3 )
  {
    if ( v5 <= 3u )
    {
      if ( v5 == 2 )
        return 1;
      return v5 > 0x7Fu;
    }
    if ( (unsigned __int16)(v5 - 6) > 2u )
      return v5 > 0x7Fu;
  }
  result = 0;
  if ( a3 && (unsigned __int64)a3 < *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v7 = *(_BYTE **)a2;
    v8 = *(_QWORD *)(a1 + 8) - (_QWORD)a3;
    if ( *(_QWORD *)(a2 + 16) < v8 + 1 )
    {
      v9 = sub_1987B0(a2, v7, v8 + 1, 1);
      *(_QWORD *)a2 = v9;
      v7 = (_BYTE *)v9;
    }
    *(_QWORD *)(a2 + 8) = v8 + 1;
    v7[v8] = 0;
    memmove(*(void **)a2, a3, v8);
    return 1;
  }
  return result;
}
