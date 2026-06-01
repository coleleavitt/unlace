unsigned __int64 *__fastcall sub_3B11F0(unsigned __int64 **a1, __int64 a2, __m128 a3)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  _BYTE *v7; // rdi
  _BYTE *v8; // rdi
  unsigned __int64 *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi

  result = *a1;
  if ( !*a1 )
    goto LABEL_13;
  v5 = *result;
  if ( !a1[1] )
  {
    *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | *result & 3;
    *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
    **a1 &= ~1uLL;
    result = *a1;
    **a1 |= 2u;
    return result;
  }
  v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v7 = *(_BYTE **)(v6 + 8);
    if ( (*v7 & 2) != 0 )
    {
      v8 = *(_BYTE **)(v6 + 16);
      if ( (*v8 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      sub_3B0E50((__int64)v7, a2, a3);
      v8 = *(_BYTE **)(v6 + 16);
      if ( (*v8 & 2) != 0 )
        goto LABEL_8;
    }
    sub_3B0E50((__int64)v8, a2, a3);
LABEL_8:
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
LABEL_9:
      if ( v5 > 3 )
        qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      result = *a1;
      v5 = **a1;
      goto LABEL_12;
    }
LABEL_15:
    v9 = *(unsigned __int64 **)(v6 + 48);
    if ( !v9 )
    {
LABEL_20:
      clear_tinfo_t();
      *(_QWORD *)v6 |= 2uLL;
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(v6 + 56) )
    {
      sub_3B0AF0((unsigned __int64 *)(v6 + 48));
      goto LABEL_18;
    }
    v11 = *v9;
    v12 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
LABEL_28:
      sub_3B0AF0((unsigned __int64 *)(v6 + 48));
      *(_QWORD *)(v6 + 56) = 0;
LABEL_18:
      v10 = *(_QWORD *)(v6 + 48);
      if ( v10 )
        qfree(v10);
      goto LABEL_20;
    }
    v13 = *(_QWORD **)(v12 + 8);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
LABEL_30:
        sub_3ACAB0(v12 + 32, *(double *)a3.m128_u64);
        *(_QWORD *)v12 |= 2uLL;
LABEL_26:
        if ( v11 > 3 )
          qfree(v12);
        goto LABEL_28;
      }
    }
    else
    {
      sub_3B08A0(v13, a2, *(double *)a3.m128_u64);
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_25;
    }
    sub_3B08A0(v14, a2, *(double *)a3.m128_u64);
LABEL_25:
    if ( (*(_BYTE *)v12 & 2) != 0 )
      goto LABEL_26;
    goto LABEL_30;
  }
LABEL_12:
  *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | v5 & 3;
  *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  **a1 &= ~1uLL;
  result = *a1;
  **a1 |= 2u;
LABEL_13:
  a1[1] = nullptr;
  return result;
}

