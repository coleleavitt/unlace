__int64 __fastcall sub_CD080(__int64 a1, double a2, double a3, double a4, double a5)
{
  char v5; // dl
  double v6; // xmm4_8
  __m128 v7; // xmm5
  __int64 result; // rax

  v5 = sub_BD380(
         *(_QWORD *)(a1 + 40),
         *(_DWORD **)(a1 + 32),
         *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 320LL) + 520LL) + 48LL));
  result = 0;
  if ( v5 )
  {
    sub_CB940(*(__m128i **)(a1 + 40), 0, *(_QWORD *)(a1 + 32), a2, a3, a4, a5, v6, v7);
    return 1;
  }
  return result;
}

