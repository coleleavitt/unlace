_QWORD *__fastcall sub_EF4F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  _QWORD *result; // rax

  v6 = a1[2];
  if ( *(__int16 *)(v6 + 20) < 0 )
  {
    result = *(_QWORD **)(v6 + 8);
    if ( !result )
      return result;
    return (_QWORD *)sub_C95A0(*a1, v6, a3, a4, a5, a6, (double)(int)result[1] / (double)(int)result[2]);
  }
  result = sub_EF2D0(a1 + 1, v6, 0, a4, a5, a6);
  if ( result )
    return (_QWORD *)sub_C95A0(*a1, v6, a3, a4, a5, a6, (double)(int)result[1] / (double)(int)result[2]);
  return result;
}
