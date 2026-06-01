void __fastcall sub_3CC330(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r13
  __int64 j; // rbp
  _QWORD *v11; // r12
  unsigned __int64 v12; // rdi
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 *v15; // rdi
  __int64 *v16; // rdi

  *a1 = (unsigned __int64)&off_4BC7B8;
  v2 = a1[20];
  if ( !v2 )
    goto LABEL_6;
  v3 = *(_QWORD *)v2;
  if ( !a1[21] )
  {
    *(_QWORD *)v2 = *(_QWORD *)v2 & 3LL | v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[20] + 8) = _mm_unpacklo_epi64((__m128i)a1[20], (__m128i)a1[20]);
    *(_QWORD *)a1[20] &= ~1uLL;
    *(_QWORD *)a1[20] |= 2uLL;
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
        goto LABEL_39;
    }
    else
    {
      sub_3C9680(v15);
      v16 = (__int64 *)v13[2];
      if ( (*(_BYTE *)v16 & 2) != 0 )
        goto LABEL_32;
    }
    sub_3C9680(v16);
LABEL_32:
    v14 = *v13;
    if ( (*v13 & 2) != 0 )
    {
LABEL_33:
      if ( v3 > 3 )
        qfree();
      v2 = a1[20];
      v3 = *(_QWORD *)v2;
      goto LABEL_36;
    }
LABEL_39:
    *v13 = v14 | 2;
    goto LABEL_33;
  }
LABEL_36:
  *(_QWORD *)v2 = v3 & 3 | v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[20] + 8) = _mm_unpacklo_epi64((__m128i)a1[20], (__m128i)a1[20]);
  *(_QWORD *)a1[20] &= ~1uLL;
  *(_QWORD *)a1[20] |= 2uLL;
  a1[21] = 0;
LABEL_4:
  if ( a1[20] )
    qfree();
LABEL_6:
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  v4 = a1[14];
  if ( v4 )
  {
    v5 = a1[15];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 24 * i);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = a1[14];
        }
      }
    }
    a1[15] = 0;
    qfree();
  }
  v8 = a1[11];
  if ( v8 )
  {
    v9 = a1[12];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = *(_QWORD **)(v8 + 8 * j);
        if ( v11 )
        {
          if ( *v11 )
          {
            v11[1] = 0;
            qfree();
          }
          operator delete(v11, 0x38u);
          v8 = a1[11];
        }
      }
    }
    a1[12] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    sub_7F6D0(a1[8]);
    j__qfree();
  }
  v12 = a1[2];
  *a1 = (unsigned __int64)&off_4BC798;
  if ( v12 )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0xB0u);
}

