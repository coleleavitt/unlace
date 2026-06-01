__int64 __fastcall sub_3CC920(_QWORD *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v2; // rbp
  __int64 *v5; // r13
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  *(a1 - 5) = &off_4D5F78;
  *a1 = off_4D5FA8;
  v1 = (unsigned __int64 *)a1[6];
  if ( !v1 )
    return j__qfree();
  v2 = *v1;
  if ( !a1[7] )
  {
    *v1 = *v1 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
    *(_QWORD *)a1[6] &= ~1uLL;
    *(_QWORD *)a1[6] |= 2uLL;
    goto LABEL_4;
  }
  v5 = (__int64 *)(v2 & 0xFFFFFFFFFFFFFFFCLL);
  v6 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v6 & 2) == 0 )
  {
    v7 = (__int64 *)v5[1];
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_17;
    }
    else
    {
      sub_3CB580(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_10;
    }
    sub_3CB580(v8);
LABEL_10:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_11:
      if ( v2 > 3 )
        qfree();
      v1 = (unsigned __int64 *)a1[6];
      v2 = *v1;
      goto LABEL_14;
    }
LABEL_17:
    *v5 = v6 | 2;
    goto LABEL_11;
  }
LABEL_14:
  *v1 = v2 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
  *(_QWORD *)a1[6] &= ~1uLL;
  *(_QWORD *)a1[6] |= 2uLL;
  a1[7] = 0;
LABEL_4:
  if ( a1[6] )
    qfree();
  return j__qfree();
}

