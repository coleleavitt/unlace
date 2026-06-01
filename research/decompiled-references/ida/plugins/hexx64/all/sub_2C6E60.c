__int64 __fastcall sub_2C6E60(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi

  *a1 = off_4E1500;
  result = a1[7];
  if ( !result )
    goto LABEL_6;
  v3 = *(_QWORD *)result;
  if ( !a1[8] )
  {
    *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[7] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[7], (__m128i)(unsigned __int64)a1[7]);
    *(_QWORD *)a1[7] &= ~1uLL;
    result = a1[7];
    *(_QWORD *)result |= 2uLL;
    goto LABEL_4;
  }
  v9 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v10 = *(_QWORD **)(v9 + 8);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_22;
    }
    else
    {
      sub_2B0820(v10);
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_15;
    }
    sub_2B0820(v11);
LABEL_15:
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
LABEL_16:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      result = a1[7];
      v3 = *(_QWORD *)result;
      goto LABEL_19;
    }
LABEL_22:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v9 |= 2uLL;
    goto LABEL_16;
  }
LABEL_19:
  *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[7] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[7], (__m128i)(unsigned __int64)a1[7]);
  *(_QWORD *)a1[7] &= ~1uLL;
  result = a1[7];
  *(_QWORD *)result |= 2uLL;
  a1[8] = 0;
LABEL_4:
  v4 = a1[7];
  if ( v4 )
    result = qfree(v4);
LABEL_6:
  v5 = a1[4];
  if ( v5 )
  {
    v6 = a1[5];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = 3 * i;
        sub_2B9980((_QWORD *)(32 * v8 + v5));
        v5 = a1[4];
      }
    }
    a1[5] = 0;
    return qfree(v5);
  }
  return result;
}

