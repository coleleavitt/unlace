void __fastcall sub_311690(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 *v7; // rdi

  *a1 = (unsigned __int64)&off_4AFB20;
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  v2 = a1[1];
  if ( v2 )
  {
    v3 = *(_QWORD *)v2;
    if ( !a1[2] )
    {
      *(_QWORD *)v2 = *(_QWORD *)v2 & 3LL | v2 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8) = _mm_unpacklo_epi64((__m128i)a1[1], (__m128i)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      *(_QWORD *)a1[1] |= 2uLL;
      goto LABEL_8;
    }
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v5 & 2) != 0 )
    {
LABEL_18:
      *(_QWORD *)v2 = v3 & 3 | v2 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8) = _mm_unpacklo_epi64((__m128i)a1[1], (__m128i)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      *(_QWORD *)a1[1] |= 2uLL;
      a1[2] = 0;
LABEL_8:
      if ( a1[1] )
        qfree();
      goto LABEL_10;
    }
    v6 = (__int64 *)v4[1];
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_21;
    }
    else
    {
      sub_311300(v6);
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_14;
    }
    sub_311300(v7);
LABEL_14:
    v5 = *v4;
    if ( (*v4 & 2) != 0 )
    {
LABEL_15:
      if ( v3 > 3 )
        qfree();
      v2 = a1[1];
      v3 = *(_QWORD *)v2;
      goto LABEL_18;
    }
LABEL_21:
    *v4 = v5 | 2;
    goto LABEL_15;
  }
LABEL_10:
  operator delete(a1, 0x50u);
}

