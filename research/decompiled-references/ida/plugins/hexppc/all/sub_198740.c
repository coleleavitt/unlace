__int64 __fastcall sub_198740(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 *v7; // rdi

  if ( a1[11] )
  {
    a1[12] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  result = a1[1];
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[2] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_10;
    }
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v5 & 2) != 0 )
    {
LABEL_20:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      a1[2] = 0;
LABEL_10:
      if ( a1[1] )
        return qfree();
      return result;
    }
    v6 = (__int64 *)v4[1];
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_23;
    }
    else
    {
      sub_192A10(v6);
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_16;
    }
    sub_192A10(v7);
LABEL_16:
    v5 = *v4;
    if ( (*v4 & 2) != 0 )
    {
LABEL_17:
      if ( v3 > 3 )
        qfree();
      result = a1[1];
      v3 = *(_QWORD *)result;
      goto LABEL_20;
    }
LABEL_23:
    *v4 = v5 | 2;
    goto LABEL_17;
  }
  return result;
}

