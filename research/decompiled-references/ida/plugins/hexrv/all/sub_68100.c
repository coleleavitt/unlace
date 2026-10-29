void *__fastcall sub_68100(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 i; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 j; // rbp
  _QWORD *v19; // rax
  __int64 v20; // rdi
  void *result; // rax
  __int64 *v22; // r12
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  __int64 *v26; // r12
  __int64 v27; // rdx
  __int64 *v28; // r13
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 *v31; // rdi
  __int64 *v32; // r13
  __int64 *v33; // rdi
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 *v36; // r12
  __int64 v37; // rdx
  __int64 *v38; // rdi
  __int64 *v39; // rdi

  v2 = a1[42];
  *a1 = off_4BDB98;
  while ( v2 )
  {
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 224);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = a1[38];
  a1[42] = 0;
  a1[22] = 0;
  if ( v4 )
  {
    a1[39] = 0;
    qfree();
  }
  if ( a1[35] )
  {
    a1[36] = 0;
    qfree();
  }
  if ( a1[32] )
  {
    a1[33] = 0;
    qfree();
  }
  v5 = (unsigned __int64 *)a1[30];
  if ( v5 )
  {
    v6 = *v5;
    if ( !a1[31] )
    {
      *v5 = *v5 & 3 | (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[30] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[30],
                                     (__m128i)(unsigned __int64)a1[30]);
      *(_QWORD *)a1[30] &= ~1uLL;
      *(_QWORD *)a1[30] |= 2uLL;
      goto LABEL_12;
    }
    v22 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v23 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v23 & 2) != 0 )
    {
LABEL_57:
      *v5 = v6 & 3 | (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[30] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[30],
                                     (__m128i)(unsigned __int64)a1[30]);
      *(_QWORD *)a1[30] &= ~1uLL;
      *(_QWORD *)a1[30] |= 2uLL;
      a1[31] = 0;
LABEL_12:
      if ( a1[30] )
        qfree();
      goto LABEL_14;
    }
    v24 = (__int64 *)v22[1];
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
      v25 = (__int64 *)v22[2];
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_93;
    }
    else
    {
      sub_67900(v24);
      v25 = (__int64 *)v22[2];
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_53;
    }
    sub_67900(v25);
LABEL_53:
    v23 = *v22;
    if ( (*v22 & 2) != 0 )
    {
LABEL_54:
      if ( v6 > 3 )
        qfree();
      v5 = (unsigned __int64 *)a1[30];
      v6 = *v5;
      goto LABEL_57;
    }
LABEL_93:
    *v22 = v23 | 2;
    goto LABEL_54;
  }
LABEL_14:
  v7 = (unsigned __int64 *)a1[28];
  if ( !v7 )
    goto LABEL_19;
  v8 = *v7;
  if ( !a1[29] )
  {
    *v7 = *v7 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[28] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[28],
                                   (__m128i)(unsigned __int64)a1[28]);
    *(_QWORD *)a1[28] &= ~1uLL;
    *(_QWORD *)a1[28] |= 2uLL;
    goto LABEL_17;
  }
  v36 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  v37 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v37 & 2) == 0 )
  {
    v38 = (__int64 *)v36[1];
    if ( (*(_BYTE *)v38 & 2) != 0 )
    {
      v39 = (__int64 *)v36[2];
      if ( (*(_BYTE *)v39 & 2) != 0 )
        goto LABEL_91;
    }
    else
    {
      sub_67900(v38);
      v39 = (__int64 *)v36[2];
      if ( (*(_BYTE *)v39 & 2) != 0 )
        goto LABEL_83;
    }
    sub_67900(v39);
LABEL_83:
    v37 = *v36;
    if ( (*v36 & 2) != 0 )
    {
LABEL_84:
      if ( v8 > 3 )
        qfree();
      v7 = (unsigned __int64 *)a1[28];
      v8 = *v7;
      goto LABEL_87;
    }
LABEL_91:
    *v36 = v37 | 2;
    goto LABEL_84;
  }
LABEL_87:
  *v7 = v8 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[28] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[28], (__m128i)(unsigned __int64)a1[28]);
  *(_QWORD *)a1[28] &= ~1uLL;
  *(_QWORD *)a1[28] |= 2uLL;
  a1[29] = 0;
LABEL_17:
  if ( a1[28] )
    qfree();
LABEL_19:
  if ( a1[25] )
  {
    a1[26] = 0;
    qfree();
  }
  v9 = (unsigned __int64 *)a1[23];
  if ( v9 )
  {
    v10 = *v9;
    if ( !a1[24] )
    {
      *v9 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL | *v9 & 3;
      *(__m128i *)(a1[23] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[23],
                                     (__m128i)(unsigned __int64)a1[23]);
      *(_QWORD *)a1[23] &= ~1uLL;
      *(_QWORD *)a1[23] |= 2uLL;
      goto LABEL_24;
    }
    v26 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    v27 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v27 & 2) != 0 )
    {
LABEL_78:
      *v9 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL | v10 & 3;
      *(__m128i *)(a1[23] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[23],
                                     (__m128i)(unsigned __int64)a1[23]);
      *(_QWORD *)a1[23] &= ~1uLL;
      *(_QWORD *)a1[23] |= 2uLL;
      a1[24] = 0;
LABEL_24:
      if ( a1[23] )
        qfree();
      goto LABEL_26;
    }
    v28 = (__int64 *)v26[1];
    v29 = *v28;
    if ( (*v28 & 2) != 0 )
    {
      v32 = (__int64 *)v26[2];
      if ( (*(_BYTE *)v32 & 2) != 0 )
        goto LABEL_74;
      goto LABEL_67;
    }
    v30 = (__int64 *)v28[1];
    if ( (*(_BYTE *)v30 & 2) != 0 )
    {
      v31 = (__int64 *)v28[2];
      if ( (*(_BYTE *)v31 & 2) != 0 )
      {
LABEL_95:
        *v28 = v29 | 2;
LABEL_64:
        if ( v28 )
          qfree();
        v32 = (__int64 *)v26[2];
        if ( (*(_BYTE *)v32 & 2) != 0 )
        {
LABEL_73:
          v27 = *v26;
          if ( (*v26 & 2) != 0 )
          {
LABEL_75:
            if ( v10 > 3 )
              qfree();
            v9 = (unsigned __int64 *)a1[23];
            v10 = *v9;
            goto LABEL_78;
          }
LABEL_74:
          *v26 = v27 | 2;
          goto LABEL_75;
        }
LABEL_67:
        v33 = (__int64 *)v32[1];
        if ( (*(_BYTE *)v33 & 2) != 0 )
        {
          v34 = (__int64 *)v32[2];
          if ( (*(_BYTE *)v34 & 2) != 0 )
          {
            v35 = *v32;
LABEL_98:
            *v32 = v35 | 2;
LABEL_71:
            if ( v32 )
              qfree();
            goto LABEL_73;
          }
        }
        else
        {
          sub_67A30(v33);
          v34 = (__int64 *)v32[2];
          if ( (*(_BYTE *)v34 & 2) != 0 )
            goto LABEL_70;
        }
        sub_67A30(v34);
LABEL_70:
        v35 = *v32;
        if ( (*v32 & 2) != 0 )
          goto LABEL_71;
        goto LABEL_98;
      }
    }
    else
    {
      sub_67A30(v30);
      v31 = (__int64 *)v28[2];
      if ( (*(_BYTE *)v31 & 2) != 0 )
        goto LABEL_63;
    }
    sub_67A30(v31);
LABEL_63:
    v29 = *v28;
    if ( (*v28 & 2) != 0 )
      goto LABEL_64;
    goto LABEL_95;
  }
LABEL_26:
  v11 = a1[19];
  *a1 = off_4BDAD8;
  if ( v11 )
  {
    a1[20] = 0;
    qfree();
  }
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  v12 = a1[9];
  if ( v12 )
  {
    v13 = a1[10];
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = (_QWORD *)(v12 + 24 * i);
        if ( *v15 )
        {
          v15[1] = 0;
          qfree();
          v12 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree();
  }
  v16 = a1[6];
  if ( v16 )
  {
    v17 = a1[7];
    if ( v17 )
    {
      for ( j = 0; j != v17; ++j )
      {
        v19 = (_QWORD *)(v16 + 24 * j);
        if ( *v19 )
        {
          v19[1] = 0;
          qfree();
          v16 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree();
  }
  v20 = a1[1];
  result = &unk_4BE6A0;
  *a1 = &unk_4BE6A0;
  if ( v20 )
  {
    a1[2] = 0;
    return (void *)qfree();
  }
  return result;
}

