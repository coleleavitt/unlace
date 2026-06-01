__int64 __fastcall sub_3C92E0(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  *a1 = &off_4B5678;
  a1[5] = off_4B56A8;
  v2 = (unsigned __int64 *)a1[11];
  if ( !v2 )
    return j__qfree();
  v3 = *v2;
  if ( !a1[12] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[11] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[11],
                                   (__m128i)(unsigned __int64)a1[11]);
    *(_QWORD *)a1[11] &= ~1uLL;
    *(_QWORD *)a1[11] |= 2uLL;
    goto LABEL_4;
  }
  v5 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v6 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
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
      sub_3C7E00(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_10;
    }
    sub_3C7E00(v8);
LABEL_10:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_11:
      if ( v3 > 3 )
        qfree();
      v2 = (unsigned __int64 *)a1[11];
      v3 = *v2;
      goto LABEL_14;
    }
LABEL_17:
    *v5 = v6 | 2;
    goto LABEL_11;
  }
LABEL_14:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[11] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[11], (__m128i)(unsigned __int64)a1[11]);
  *(_QWORD *)a1[11] &= ~1uLL;
  *(_QWORD *)a1[11] |= 2uLL;
  a1[12] = 0;
LABEL_4:
  if ( a1[11] )
    qfree();
  return j__qfree();
}

