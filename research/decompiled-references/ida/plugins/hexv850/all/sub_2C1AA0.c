__int64 __fastcall sub_2C1AA0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 i; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi

  *a1 = off_4B4EA0;
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
  v8 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v9 = *(_QWORD **)(v8 + 8);
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v10 = *(_QWORD **)(v8 + 16);
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_22;
    }
    else
    {
      sub_2AB460(v9);
      v10 = *(_QWORD **)(v8 + 16);
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_15;
    }
    sub_2AB460(v10);
LABEL_15:
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
LABEL_16:
      if ( v3 > 3 )
        qfree();
      result = a1[7];
      v3 = *(_QWORD *)result;
      goto LABEL_19;
    }
LABEL_22:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v8 |= 2uLL;
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
  if ( a1[7] )
    result = qfree();
LABEL_6:
  v4 = a1[4];
  if ( v4 )
  {
    v5 = a1[5];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = 3 * i;
        sub_2B45C0((_QWORD *)(32 * v7 + v4));
        v4 = a1[4];
      }
    }
    a1[5] = 0;
    return qfree();
  }
  return result;
}

