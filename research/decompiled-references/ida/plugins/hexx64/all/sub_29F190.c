__int64 __fastcall sub_29F190(_QWORD *a1, __m128 a2)
{
  __int64 v3; // rdi
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  _BYTE *v16; // rdi
  _BYTE *v17; // rdi

  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3);
  }
  v4 = (unsigned __int64 *)a1[4];
  if ( v4 )
  {
    v5 = *v4;
    if ( !a1[5] )
    {
      *v4 = *v4 & 3 | (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL;
      v6 = a1[4];
      a2 = (__m128)_mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
      *(__m128 *)(v6 + 8) = a2;
      *(_QWORD *)a1[4] &= ~1uLL;
      *(_QWORD *)a1[4] |= 2uLL;
      goto LABEL_6;
    }
    v11 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_21:
      *v4 = v5 & 3 | (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL;
      v14 = a1[4];
      a2 = (__m128)_mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
      *(__m128 *)(v14 + 8) = a2;
      *(_QWORD *)a1[4] &= ~1uLL;
      *(_QWORD *)a1[4] |= 2uLL;
      a1[5] = 0;
LABEL_6:
      v7 = a1[4];
      if ( v7 )
        qfree(v7);
      goto LABEL_8;
    }
    v12 = *(_QWORD **)(v11 + 8);
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_35;
    }
    else
    {
      sub_299640(v12);
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_17;
    }
    sub_299640(v13);
LABEL_17:
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
LABEL_18:
      if ( v5 > 3 )
        qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      v4 = (unsigned __int64 *)a1[4];
      v5 = *v4;
      goto LABEL_21;
    }
LABEL_35:
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)v11 |= 2uLL;
    goto LABEL_18;
  }
LABEL_8:
  result = a1[2];
  if ( !result )
    return result;
  v9 = *(_QWORD *)result;
  if ( !a1[3] )
  {
    *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
    *(_QWORD *)a1[2] &= ~1uLL;
    result = a1[2];
    *(_QWORD *)result |= 2uLL;
    goto LABEL_11;
  }
  v15 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v16 = *(_BYTE **)(v15 + 8);
    if ( (*v16 & 2) != 0 )
    {
      v17 = *(_BYTE **)(v15 + 16);
      if ( (*v17 & 2) != 0 )
        goto LABEL_34;
    }
    else
    {
      sub_29F060((__int64)v16, *(double *)a2.m128_u64);
      v17 = *(_BYTE **)(v15 + 16);
      if ( (*v17 & 2) != 0 )
        goto LABEL_25;
    }
    sub_29F060((__int64)v17, *(double *)a2.m128_u64);
LABEL_25:
    if ( (*(_BYTE *)v15 & 2) != 0 )
    {
LABEL_26:
      if ( v9 > 3 )
        qfree(v9 & 0xFFFFFFFFFFFFFFFCLL);
      result = a1[2];
      v9 = *(_QWORD *)result;
      goto LABEL_29;
    }
LABEL_34:
    *(_DWORD *)(v15 + 56) = -1;
    sub_29EC30(v15 + 40, *(double *)a2.m128_u64);
    sub_29EC30(v15 + 24, *(double *)a2.m128_u64);
    *(_QWORD *)v15 |= 2uLL;
    goto LABEL_26;
  }
LABEL_29:
  *(_QWORD *)result = v9 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
  *(_QWORD *)a1[2] &= ~1uLL;
  result = a1[2];
  *(_QWORD *)result |= 2uLL;
  a1[3] = 0;
LABEL_11:
  v10 = a1[2];
  if ( v10 )
    return qfree(v10);
  return result;
}

