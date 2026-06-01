__int64 __fastcall sub_3BA6B0(double a1, __int64 a2, __int64 a3, __m128 a4, __m128i a5, double a6)
{
  _QWORD *v7; // rsi
  __int64 result; // rax

  v7 = (_QWORD *)sub_38DCC0(*(_QWORD *)(a3 + 32), a3 + 80, a1);
  result = 0;
  if ( v7 )
    return (unsigned __int8)sub_395DB0(a3, v7, a1, a4, a5, a6);
  return result;
}

