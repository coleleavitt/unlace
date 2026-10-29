__int64 __fastcall sub_33B40(__int64 *a1, __int64 a2, const char *a3)
{
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  const char *v7; // rax
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rax

  hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))get_hexdsp(a1, a2);
  hexdsp(340, a2, 0, 0, 0, 0, 0);
  v6 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(340, a2);
  v7 = (const char *)v6(338, a2);
  sub_C720((__int64)"goomba: %s guess: %s\n", a3, v7);
  result = a1[1];
  v9 = *a1;
  if ( a1[2] < (unsigned __int64)(result + 1) )
  {
    v10 = qvector_reserve(a1, v9, result + 1, 8);
    *a1 = v10;
    v9 = v10;
    result = a1[1];
  }
  *(_QWORD *)(v9 + 8 * result) = a2;
  ++a1[1];
  return result;
}

