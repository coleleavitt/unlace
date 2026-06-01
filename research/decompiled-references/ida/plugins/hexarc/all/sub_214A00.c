char __fastcall sub_214A00(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  signed int v5; // eax
  const __m128i *v6; // rdi

  if ( !(unsigned __int8)sub_327830(*a2) || !(unsigned __int8)sub_327830(*a3) )
    return 0;
  *(_BYTE *)(a1 + 26) = 1;
  v5 = a3[17];
  v6 = *(const __m128i **)(a1 + 8);
  if ( (int)a2[17] > v5 )
    return sub_12B910(v6, (__int64)a3, (__int64)a3, (__int64)a2, a2);
  if ( (int)a2[17] >= v5 )
    return sub_12BCB0(v6, (__int64)a2, (__int64)a2, (__int64)a3, (__int64)a3, 1);
  return sub_12B980(v6, (__int64)a2, (int *)a2, (__int64)a3, a3);
}

