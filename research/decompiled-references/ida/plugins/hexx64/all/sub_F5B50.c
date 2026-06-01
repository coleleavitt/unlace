__int64 __fastcall sub_F5B50(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 *v15; // rdi
  __int64 *v16; // rdi

  *a1 = off_4DCF38;
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
  v13 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v14 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v14 & 2) == 0 )
  {
    v15 = (__int64 *)v13[1];
    if ( (*(_BYTE *)v15 & 2) != 0 )
    {
      v16 = (__int64 *)v13[2];
      if ( (*(_BYTE *)v16 & 2) != 0 )
        goto LABEL_31;
    }
    else
    {
      sub_F56D0(v15);
      v16 = (__int64 *)v13[2];
      if ( (*(_BYTE *)v16 & 2) != 0 )
        goto LABEL_24;
    }
    sub_F56D0(v16);
LABEL_24:
    v14 = *v13;
    if ( (*v13 & 2) != 0 )
    {
LABEL_25:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v2 = (unsigned __int64 *)a1[40];
      v3 = *v2;
      goto LABEL_28;
    }
LABEL_31:
    *v13 = v14 | 2;
    goto LABEL_25;
  }
LABEL_28:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[40] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[40], (__m128i)(unsigned __int64)a1[40]);
  *(_QWORD *)a1[40] &= ~1uLL;
  *(_QWORD *)a1[40] |= 2uLL;
  a1[41] = 0;
LABEL_4:
  v4 = a1[40];
  if ( v4 )
    qfree(v4);
LABEL_6:
  v5 = a1[37];
  if ( v5 )
  {
    a1[38] = 0;
    qfree(v5);
  }
  v6 = a1[34];
  if ( v6 )
  {
    a1[35] = 0;
    qfree(v6);
  }
  v7 = a1[31];
  if ( v7 )
  {
    a1[32] = 0;
    qfree(v7);
  }
  qfree(a1[29]);
  qfree(a1[27]);
  qfree(a1[25]);
  v8 = a1[22];
  if ( v8 )
  {
    a1[23] = 0;
    qfree(v8);
  }
  v9 = a1[19];
  if ( v9 )
  {
    a1[20] = 0;
    qfree(v9);
  }
  v10 = a1[12];
  if ( v10 )
  {
    a1[13] = 0;
    qfree(v10);
  }
  v11 = a1[9];
  if ( v11 )
  {
    a1[10] = 0;
    qfree(v11);
  }
  return j__qfree((__int64)a1);
}

