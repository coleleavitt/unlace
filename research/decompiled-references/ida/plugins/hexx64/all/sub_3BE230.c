__int64 __fastcall sub_3BE230(__int64 a1, __int64 a2, double a3, __m128 a4, __m128i a5, double a6)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 result; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 880LL);
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 == 3 )
    return (unsigned __int8)sub_3978A0(a2, *(_QWORD *)(v7 + 16), a3, a4, a5, a6);
  if ( v8 <= 3 )
  {
    if ( v8 == 1 )
      return (unsigned __int8)sub_399640(a2, *(_QWORD *)(v7 + 16), a3, a4, a5, a6);
    if ( v8 == 2 )
      return (unsigned __int8)sub_396A30(a2, v7 + 32, *(_DWORD *)(v7 + 16), a3, a4, a5, a6);
    return 0;
  }
  if ( v8 != 5 )
    return 0;
  v10 = sub_38C130(a2);
  v11 = sub_3C5930((_QWORD **)(*(_QWORD *)(a2 + 24) + 1312LL), v10);
  result = 0;
  if ( v11 )
    return (unsigned __int8)sub_3BDB80(*(_QWORD *)(a1 + 16), a2, 0, v12, v13, v14, a3, *(double *)a4.m128_u64, a5, a6);
  return result;
}

