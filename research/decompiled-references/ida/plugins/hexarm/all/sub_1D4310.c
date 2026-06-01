__int64 __fastcall sub_1D4310(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 j; // rbp
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rbp
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 *v15; // rdi

  *a1 = off_4D9188;
  v2 = a1[12];
  if ( v2 )
  {
    v3 = a1[13];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = i;
        sub_11C7E0(16 * v5 + v2);
        v2 = a1[12];
      }
    }
    a1[13] = 0;
    qfree();
  }
  v6 = a1[9];
  if ( v6 )
  {
    v7 = a1[10];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = j;
        sub_11C7E0(16 * v9 + v6);
        v6 = a1[9];
      }
    }
    a1[10] = 0;
    qfree();
  }
  result = a1[5];
  if ( result )
  {
    v11 = *(_QWORD *)result;
    if ( !a1[6] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[5] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[5], (__m128i)(unsigned __int64)a1[5]);
      *(_QWORD *)a1[5] &= ~1uLL;
      result = a1[5];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_14;
    }
    v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v13 & 2) != 0 )
    {
LABEL_24:
      *(_QWORD *)result = v11 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[5] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[5], (__m128i)(unsigned __int64)a1[5]);
      *(_QWORD *)a1[5] &= ~1uLL;
      result = a1[5];
      *(_QWORD *)result |= 2uLL;
      a1[6] = 0;
LABEL_14:
      if ( a1[5] )
        return qfree();
      return result;
    }
    v14 = (__int64 *)v12[1];
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v15 = (__int64 *)v12[2];
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_27;
    }
    else
    {
      sub_1D3E40(v14);
      v15 = (__int64 *)v12[2];
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_20;
    }
    sub_1D3E40(v15);
LABEL_20:
    v13 = *v12;
    if ( (*v12 & 2) != 0 )
    {
LABEL_21:
      if ( v11 > 3 )
        qfree();
      result = a1[5];
      v11 = *(_QWORD *)result;
      goto LABEL_24;
    }
LABEL_27:
    *v12 = v13 | 2;
    goto LABEL_21;
  }
  return result;
}

