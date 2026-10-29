_QWORD *__fastcall sub_EF550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  _QWORD *result; // rax

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v6 + 20) >= 0 )
    result = sub_EF2D0((_QWORD *)(a1 + 8), v6, 24, a4, a5, a6);
  else
    result = *(_QWORD **)(v6 + 8);
  ++result[1];
  return result;
}
