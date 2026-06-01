__int64 __fastcall sub_132C00(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi

  *a1 = off_4CACD0;
  result = a1[15];
  if ( !result )
    goto LABEL_6;
  v3 = *(_QWORD *)result;
  if ( !a1[16] )
  {
    *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[15],
                                   (__m128i)(unsigned __int64)a1[15]);
    *(_QWORD *)a1[15] &= ~1uLL;
    result = a1[15];
    *(_QWORD *)result |= 2uLL;
    goto LABEL_4;
  }
  v8 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v12 = *(_QWORD **)(v8 + 16);
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_30;
      goto LABEL_23;
    }
    v10 = *(_QWORD **)(v9 + 8);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
LABEL_32:
        sub_119360(v9 + 32);
        *(_QWORD *)v9 |= 2uLL;
LABEL_20:
        if ( v9 )
          qfree();
        v12 = *(_QWORD **)(v8 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
LABEL_24:
          if ( (*(_BYTE *)v8 & 2) != 0 )
          {
LABEL_25:
            if ( v3 > 3 )
              qfree();
            result = a1[15];
            v3 = *(_QWORD *)result;
            goto LABEL_28;
          }
LABEL_30:
          sub_119360(v8 + 32);
          *(_QWORD *)v8 |= 2uLL;
          goto LABEL_25;
        }
LABEL_23:
        sub_132400(v12);
        goto LABEL_24;
      }
    }
    else
    {
      sub_132400(v10);
      v11 = *(_QWORD **)(v9 + 16);
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_19;
    }
    sub_132400(v11);
LABEL_19:
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_20;
    goto LABEL_32;
  }
LABEL_28:
  *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[15], (__m128i)(unsigned __int64)a1[15]);
  *(_QWORD *)a1[15] &= ~1uLL;
  result = a1[15];
  *(_QWORD *)result |= 2uLL;
  a1[16] = 0;
LABEL_4:
  if ( a1[15] )
    result = qfree();
LABEL_6:
  if ( a1[12] )
  {
    a1[13] = 0;
    result = qfree();
  }
  v4 = a1[9];
  if ( v4 )
  {
    v5 = a1[10];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = i;
        sub_119360(16 * v7 + v4);
        v4 = a1[9];
      }
    }
    a1[10] = 0;
    return qfree();
  }
  return result;
}

