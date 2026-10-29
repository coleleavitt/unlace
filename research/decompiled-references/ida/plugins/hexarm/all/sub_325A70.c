unsigned __int64 *__fastcall sub_325A70(__int64 a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 *v7; // rdi

  result = *(unsigned __int64 **)(a1 + 904);
  if ( !result )
    goto LABEL_13;
  v3 = *result;
  if ( !*(_QWORD *)(a1 + 912) )
  {
    *result = *result & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a1 + 904) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 904),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 904));
    **(_QWORD **)(a1 + 904) &= ~1uLL;
    result = *(unsigned __int64 **)(a1 + 904);
    *result |= 2u;
    return result;
  }
  v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v5 & 2) == 0 )
  {
    v6 = (__int64 *)v4[1];
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      sub_323710(v6);
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_8;
    }
    sub_323710(v7);
LABEL_8:
    v5 = *v4;
    if ( (*v4 & 2) != 0 )
    {
LABEL_9:
      if ( v3 > 3 )
        qfree();
      result = *(unsigned __int64 **)(a1 + 904);
      v3 = *result;
      goto LABEL_12;
    }
LABEL_15:
    *v4 = v5 | 2;
    goto LABEL_9;
  }
LABEL_12:
  *result = v3 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a1 + 904) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 904),
                                                (__m128i)*(unsigned __int64 *)(a1 + 904));
  **(_QWORD **)(a1 + 904) &= ~1uLL;
  result = *(unsigned __int64 **)(a1 + 904);
  *result |= 2u;
LABEL_13:
  *(_QWORD *)(a1 + 912) = 0;
  return result;
}

