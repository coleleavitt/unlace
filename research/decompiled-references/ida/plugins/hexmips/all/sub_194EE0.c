__int64 __fastcall sub_194EE0(_QWORD *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  v1 = (unsigned __int64 *)a1[15];
  if ( !v1 )
    goto LABEL_6;
  v3 = *v1;
  if ( !a1[16] )
  {
    *v1 = *v1 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[15],
                                   (__m128i)(unsigned __int64)a1[15]);
    *(_QWORD *)a1[15] &= ~1uLL;
    *(_QWORD *)a1[15] |= 2uLL;
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
        goto LABEL_23;
    }
    else
    {
      sub_192380(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_16;
    }
    sub_192380(v8);
LABEL_16:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_17:
      if ( v3 > 3 )
        qfree();
      v1 = (unsigned __int64 *)a1[15];
      v3 = *v1;
      goto LABEL_20;
    }
LABEL_23:
    *v5 = v6 | 2;
    goto LABEL_17;
  }
LABEL_20:
  *v1 = v3 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[15], (__m128i)(unsigned __int64)a1[15]);
  *(_QWORD *)a1[15] &= ~1uLL;
  *(_QWORD *)a1[15] |= 2uLL;
  a1[16] = 0;
LABEL_4:
  if ( a1[15] )
    qfree();
LABEL_6:
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  qfree();
  qfree();
  return qfree();
}

