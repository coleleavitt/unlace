_QWORD *__fastcall sub_EF9C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  _QWORD *result; // rax

  v8 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v8 + 20) >= 0 )
    result = sub_EF2D0((_QWORD *)(a1 + 8), v8, 8, a4, a5, a6);
  else
    result = *(_QWORD **)(v8 + 8);
  if ( !a2 || byte_1BAD40[*(_WORD *)(*(_QWORD *)a3 + 20LL) & 0x3F] != 5 )
  {
    if ( result )
      --*result;
  }
  return result;
}
