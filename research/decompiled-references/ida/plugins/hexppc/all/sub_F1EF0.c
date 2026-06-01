__int64 __fastcall sub_F1EF0(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 result; // rax
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  *a1 = off_4CA098;
  v2 = (unsigned __int64 *)a1[40];
  if ( !v2 )
    goto LABEL_6;
  v3 = *v2;
  if ( !a1[41] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[40] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[40],
                                   (__m128i)(unsigned __int64)a1[40]);
    *(_QWORD *)a1[40] &= ~1uLL;
    *(_QWORD *)a1[40] |= 2uLL;
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
        goto LABEL_31;
    }
    else
    {
      sub_F1C90(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_24;
    }
    sub_F1C90(v8);
LABEL_24:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_25:
      if ( v3 > 3 )
        qfree();
      v2 = (unsigned __int64 *)a1[40];
      v3 = *v2;
      goto LABEL_28;
    }
LABEL_31:
    *v5 = v6 | 2;
    goto LABEL_25;
  }
LABEL_28:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[40] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[40], (__m128i)(unsigned __int64)a1[40]);
  *(_QWORD *)a1[40] &= ~1uLL;
  *(_QWORD *)a1[40] |= 2uLL;
  a1[41] = 0;
LABEL_4:
  if ( a1[40] )
    qfree();
LABEL_6:
  if ( a1[37] )
  {
    a1[38] = 0;
    qfree();
  }
  if ( a1[34] )
  {
    a1[35] = 0;
    qfree();
  }
  if ( a1[31] )
  {
    a1[32] = 0;
    qfree();
  }
  qfree();
  qfree();
  result = qfree();
  if ( a1[22] )
  {
    a1[23] = 0;
    result = qfree();
  }
  if ( a1[19] )
  {
    a1[20] = 0;
    result = qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    result = qfree();
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    return qfree();
  }
  return result;
}

