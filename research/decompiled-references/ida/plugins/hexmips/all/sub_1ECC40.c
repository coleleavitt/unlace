__int64 __fastcall sub_1ECC40(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  *a1 = off_4BF4F8;
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  v2 = (unsigned __int64 *)a1[7];
  if ( v2 )
  {
    v3 = *v2;
    if ( !a1[8] )
    {
      *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[7] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[7], (__m128i)(unsigned __int64)a1[7]);
      *(_QWORD *)a1[7] &= ~1uLL;
      *(_QWORD *)a1[7] |= 2uLL;
      goto LABEL_6;
    }
    v5 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v6 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v6 & 2) != 0 )
    {
LABEL_16:
      *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[7] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[7], (__m128i)(unsigned __int64)a1[7]);
      *(_QWORD *)a1[7] &= ~1uLL;
      *(_QWORD *)a1[7] |= 2uLL;
      a1[8] = 0;
LABEL_6:
      if ( a1[7] )
        qfree();
      return j__qfree();
    }
    v7 = (__int64 *)v5[1];
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_1E8570(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_12;
    }
    sub_1E8570(v8);
LABEL_12:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_13:
      if ( v3 > 3 )
        qfree();
      v2 = (unsigned __int64 *)a1[7];
      v3 = *v2;
      goto LABEL_16;
    }
LABEL_19:
    *v5 = v6 | 2;
    goto LABEL_13;
  }
  return j__qfree();
}

