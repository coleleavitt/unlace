__int64 __fastcall sub_1F7D80(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 *v11; // rdi

  *a1 = &off_4CBEB0;
  v2 = (unsigned __int64 *)a1[6];
  if ( !v2 )
    return j__qfree();
  v3 = *v2;
  if ( !a1[7] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
    *(_QWORD *)a1[6] &= ~1uLL;
    *(_QWORD *)a1[6] |= 2uLL;
    goto LABEL_4;
  }
  v5 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v6 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v6 & 2) == 0 )
  {
    v7 = (__int64 *)v5[1];
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
    {
      v11 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_23;
      goto LABEL_16;
    }
    v9 = (__int64 *)v7[1];
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
      {
LABEL_25:
        *v7 = v8 | 2;
LABEL_13:
        if ( v7 )
          qfree();
        v11 = (__int64 *)v5[2];
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
LABEL_17:
          v6 = *v5;
          if ( (*v5 & 2) != 0 )
          {
LABEL_18:
            if ( v3 > 3 )
              qfree();
            v2 = (unsigned __int64 *)a1[6];
            v3 = *v2;
            goto LABEL_21;
          }
LABEL_23:
          *v5 = v6 | 2;
          goto LABEL_18;
        }
LABEL_16:
        sub_1F7A70(v11);
        goto LABEL_17;
      }
    }
    else
    {
      sub_1F7A70(v9);
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_12;
    }
    sub_1F7A70(v10);
LABEL_12:
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
      goto LABEL_13;
    goto LABEL_25;
  }
LABEL_21:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
  *(_QWORD *)a1[6] &= ~1uLL;
  *(_QWORD *)a1[6] |= 2uLL;
  a1[7] = 0;
LABEL_4:
  if ( a1[6] )
    qfree();
  return j__qfree();
}

