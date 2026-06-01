_QWORD *__fastcall sub_487A0(_QWORD *a1, const char *a2)
{
  const char *v2; // r13
  __int64 v3; // rax
  __int64 v4; // r8
  const char *v5; // r14
  __int64 v6; // rbx
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // rbp
  void *v10; // rax
  __int64 v11; // rax
  __m128i v12; // xmm1
  __int64 v13; // rbp
  __m128i v14; // xmm2
  __int64 v15; // rax
  __m128i v16; // xmm1
  _QWORD *v17; // rdx
  __int64 v18; // r13
  _QWORD *v19; // r14
  const char *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // r12
  _QWORD *v25; // r12
  __int64 v26; // r14
  __int64 i; // r15
  _QWORD *v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  const char *v33; // rsi
  const char *v34; // rdi
  int v35; // eax
  _QWORD *v36; // rdx
  __int64 v37; // rdi
  const char *v39; // rsi
  const char *v40; // rdi
  unsigned int v41; // eax
  _QWORD *v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+10h] [rbp-48h]
  _QWORD *v45; // [rsp+10h] [rbp-48h]
  _QWORD *v46; // [rsp+18h] [rbp-40h]

  v2 = a2;
  v3 = operator new(0x88u);
  v5 = *(const char **)a2;
  *(_QWORD *)(v3 + 32) = 0;
  v6 = v3;
  *(_OWORD *)(v3 + 40) = 0;
  if ( v5 )
  {
    v7 = strlen(v5);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve(v6 + 32, 0, v7 + 1, 1);
    *(_QWORD *)(v6 + 32) = v10;
    a2 = v5;
    *(_QWORD *)(v6 + 40) = v8;
    memmove(v10, v5, v9);
    *(_BYTE *)(*(_QWORD *)(v6 + 32) + v9) = 0;
  }
  v11 = *((_QWORD *)v2 + 6);
  v12 = _mm_loadu_si128((const __m128i *)v2 + 2);
  v13 = *((_QWORD *)v2 + 1);
  v14 = _mm_loadu_si128((const __m128i *)v2 + 1);
  *((_QWORD *)v2 + 1) = 0;
  *(_QWORD *)(v6 + 96) = v11;
  LODWORD(v11) = *((_DWORD *)v2 + 14);
  *((_OWORD *)v2 + 1) = 0;
  *(_DWORD *)(v6 + 104) = v11;
  v15 = *((_QWORD *)v2 + 8);
  *(__m128i *)(v6 + 80) = v12;
  v16 = _mm_loadu_si128((const __m128i *)(v2 + 72));
  v44 = v15;
  *(_QWORD *)(v6 + 112) = v15;
  *((_QWORD *)v2 + 8) = 0;
  *(_OWORD *)(v2 + 72) = 0;
  v17 = (_QWORD *)a1[2];
  *(_QWORD *)(v6 + 56) = v13;
  v43 = a1 + 1;
  *(__m128i *)(v6 + 64) = v14;
  *(__m128i *)(v6 + 120) = v16;
  if ( !v17 )
  {
    v22 = a1;
    v19 = a1 + 1;
    if ( v43 == (_QWORD *)a1[3] )
    {
      v36 = a1 + 1;
      v37 = 1;
      goto LABEL_40;
    }
LABEL_35:
    v32 = std::_Rb_tree_decrement(v19, a2, 0, v22, v4);
    v17 = v19;
    v24 = *(_QWORD *)(v32 + 40);
    v19 = (_QWORD *)v32;
    if ( *(_QWORD *)(v6 + 40) )
    {
LABEL_36:
      v33 = *(const char **)(v6 + 32);
      v34 = src;
      if ( !v24 )
        goto LABEL_38;
      goto LABEL_37;
    }
LABEL_43:
    v33 = src;
    if ( !v24 )
    {
LABEL_18:
      v25 = v19;
      if ( v6 )
      {
        if ( v44 )
        {
          *(_QWORD *)(v6 + 120) = 0;
          qfree(v44);
          v13 = *(_QWORD *)(v6 + 56);
        }
        if ( v13 )
        {
          v26 = *(_QWORD *)(v6 + 64);
          if ( v26 )
          {
            for ( i = 0; i != v26; ++i )
            {
              v28 = (_QWORD *)(144 * i + v13);
              clear_tinfo_t(v28 + 8);
              v29 = v28[5];
              if ( v29 )
              {
                v28[6] = 0;
                qfree(v29);
              }
              v30 = v28[2];
              if ( v30 )
              {
                v28[3] = 0;
                qfree(v30);
              }
              v13 = *(_QWORD *)(v6 + 56);
            }
          }
          *(_QWORD *)(v6 + 64) = 0;
          qfree(v13);
        }
        v31 = *(_QWORD *)(v6 + 32);
        if ( v31 )
        {
          *(_QWORD *)(v6 + 40) = 0;
          qfree(v31);
        }
        operator delete((void *)v6, 0x88u);
      }
      return v25;
    }
LABEL_37:
    v34 = (const char *)v19[4];
LABEL_38:
    v46 = v17;
    v35 = strcmp(v34, v33);
    v36 = v46;
    if ( v35 < 0 )
    {
      v37 = 1;
      if ( v43 != v46 )
        goto LABEL_47;
      goto LABEL_40;
    }
    goto LABEL_18;
  }
  v18 = *(_QWORD *)(v6 + 40);
  do
  {
    v24 = v17[5];
    if ( v24 )
    {
      a2 = (const char *)v17[4];
      v19 = v17;
      v20 = src;
      if ( !v18 )
        goto LABEL_7;
LABEL_6:
      v20 = *(const char **)(v6 + 32);
      v19 = v17;
      goto LABEL_7;
    }
    a2 = src;
    if ( v18 )
      goto LABEL_6;
    v19 = (_QWORD *)v17[3];
    if ( !v19 )
    {
LABEL_16:
      if ( !*(_QWORD *)(v6 + 40) )
      {
        v19 = v17;
        goto LABEL_18;
      }
      v33 = *(const char **)(v6 + 32);
      v19 = v17;
      v34 = src;
      goto LABEL_38;
    }
    while ( 1 )
    {
      v24 = v19[5];
      if ( v24 )
        break;
      v17 = v19;
      v19 = (_QWORD *)v19[3];
      if ( !v19 )
        goto LABEL_16;
    }
    a2 = (const char *)v19[4];
    v20 = src;
LABEL_7:
    v21 = strcmp(v20, a2);
    v17 = (_QWORD *)v19[3];
    if ( v21 < 0 )
      v17 = (_QWORD *)v19[2];
    v23 = (v21 >> 31) & 1;
  }
  while ( v17 );
  if ( !(_BYTE)v23 )
  {
    v17 = v19;
    if ( *(_QWORD *)(v6 + 40) )
      goto LABEL_36;
    goto LABEL_43;
  }
  if ( (_QWORD *)a1[3] != v19 )
    goto LABEL_35;
  v36 = v19;
  v37 = 1;
  if ( v43 != v19 )
  {
LABEL_47:
    v39 = src;
    if ( v36[5] )
      v39 = (const char *)v36[4];
    v40 = src;
    if ( *(_QWORD *)(v6 + 40) )
      v40 = *(const char **)(v6 + 32);
    v45 = v36;
    v41 = strcmp(v40, v39);
    v36 = v45;
    v37 = v41 >> 31;
  }
LABEL_40:
  v25 = (_QWORD *)v6;
  std::_Rb_tree_insert_and_rebalance(v37, v6, v36, v43, 0.0, *(double *)v16.m128i_i64, *(double *)v14.m128i_i64);
  ++a1[5];
  return v25;
}

