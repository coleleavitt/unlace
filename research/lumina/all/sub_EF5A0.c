_QWORD *__fastcall sub_EF5A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  v6 = a1[2];
  if ( *(__int16 *)(v6 + 20) >= 0 )
  {
    result = sub_EF2D0(a1 + 1, v6, 24, a4, a5, a6);
    if ( !result )
      return result;
  }
  else
  {
    result = *(_QWORD **)(v6 + 8);
    if ( !result )
      return result;
  }
  v8 = result[1];
  *result = v8;
  v9 = result[2];
  if ( v9 <= 1 )
    return (_QWORD *)sub_C95A0(*a1, v6, v8, a4, a5, a6, 0.0);
  else
    return (_QWORD *)sub_C95A0(*a1, v6, v8, a4, a5, a6, (double)(int)v8 / (double)((int)v9 - 1));
}
