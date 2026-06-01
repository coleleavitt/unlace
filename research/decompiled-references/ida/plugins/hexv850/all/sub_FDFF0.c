__int64 __fastcall sub_FDFF0(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  *a1 = off_4B0DA0;
  v2 = (unsigned __int64 *)a1[12];
  if ( !v2 )
    goto LABEL_6;
  v3 = *v2;
  if ( !a1[13] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[12] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[12],
                                   (__m128i)(unsigned __int64)a1[12]);
    *(_QWORD *)a1[12] &= ~1uLL;
    *(_QWORD *)a1[12] |= 2uLL;
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
        goto LABEL_19;
    }
    else
    {
      sub_FD440(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_12;
    }
    sub_FD440(v8);
LABEL_12:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_13:
      if ( v3 > 3 )
        qfree();
      v2 = (unsigned __int64 *)a1[12];
      v3 = *v2;
      goto LABEL_16;
    }
LABEL_19:
    *v5 = v6 | 2;
    goto LABEL_13;
  }
LABEL_16:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[12] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[12], (__m128i)(unsigned __int64)a1[12]);
  *(_QWORD *)a1[12] &= ~1uLL;
  *(_QWORD *)a1[12] |= 2uLL;
  a1[13] = 0;
LABEL_4:
  if ( a1[12] )
    qfree();
LABEL_6:
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  return qfree();
}

