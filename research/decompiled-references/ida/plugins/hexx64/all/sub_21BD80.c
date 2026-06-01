char __fastcall sub_21BD80(__int64 a1, unsigned int *a2, unsigned int *a3, __m128i a4, __m128 a5)
{
  signed int v7; // eax
  const __m128i *v8; // rdi

  if ( !sub_32ED70(*a2) || !sub_32ED70(*a3) )
    return 0;
  *(_BYTE *)(a1 + 26) = 1;
  v7 = a3[17];
  v8 = *(const __m128i **)(a1 + 8);
  if ( (int)a2[17] > v7 )
    return sub_131FD0(v8, (__int64)a3, (__int64)a3, (__int64)a2, a2, a4, a5);
  if ( (int)a2[17] >= v7 )
    return sub_132370(v8, (__int64)a2, (__int64)a2, (__int64)a3, (__int64)a3, 1, a4, a5);
  return sub_132040(v8, (__int64)a2, (int *)a2, (__int64)a3, a3, *(double *)a4.m128i_i64, a5);
}

