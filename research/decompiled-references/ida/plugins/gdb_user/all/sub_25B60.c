__int64 __fastcall sub_25B60(__int64 a1, __int64 a2, int a3, __int64 a4, double a5, double a6, double a7, __m128 a8)
{
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a1 + 1224) || !(unsigned __int8)sub_251E0(a1, a2, a4, a3, a5, a6, a7, a8) )
    return 0xFFFFFFFFLL;
  if ( a3 == *(_DWORD *)(a1 + 784) && *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120) == 13 )
    sub_25A00(a1, a2, a4, a5, a6, a7, a8);
  return 1;
}

