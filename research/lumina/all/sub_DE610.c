__int64 __fastcall sub_DE610(__int64 a1, __int64 a2, int a3)
{
  signed int v4; // ebx
  __int64 *v5; // r13
  __int64 result; // rax
  _QWORD *v7; // rsi

  v4 = (a3 + 7) & 0xFFFFFFF8;
  v5 = sub_DBF10(a1, 8LL * v4);
  result = 7;
  if ( v5 )
  {
    memcpy(v5, *(const void **)(a2 + 64), 8LL * *(unsigned __int16 *)(a2 + 56));
    v7 = *(_QWORD **)(a2 + 64);
    if ( v7 != (_QWORD *)(a2 + 80) )
      sub_C9250(a1, v7);
    *(_QWORD *)(a2 + 64) = v5;
    *(_WORD *)(a2 + 56) = v4;
    return 0;
  }
  return result;
}
