__int64 __fastcall sub_167B90(__int64 *a1, unsigned __int8 *a2, double a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( *a2 == 14 || *a2 == 4 )
    return 0;
  if ( !sub_125B60(a2, a1[6], 0, a3) )
    return 0xFFFFFFFFLL;
  v5 = a1[8];
  v6 = a1[7];
  if ( a1[9] < (unsigned __int64)(v5 + 1) )
  {
    v7 = qvector_reserve((__int64)(a1 + 7), v6, v5 + 1, 8);
    a1[7] = v7;
    v6 = v7;
    v5 = a1[8];
  }
  *(_QWORD *)(v6 + 8 * v5) = a2;
  ++a1[8];
  return 0;
}

