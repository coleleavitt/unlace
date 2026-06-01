unsigned __int64 __fastcall sub_18CB0(_QWORD *a1)
{
  __int64 i; // r14
  const char *v2; // rbp
  size_t v3; // rax
  __int64 v4; // r12
  size_t v5; // rbx
  const char *v6; // r15
  const char *v7; // rbx
  __int64 v8; // rbp
  char *v9; // r13
  char *v10; // rax
  const char *v11; // r12
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // eax
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  const char *v18; // rsi
  const char *v19; // rdi
  _QWORD *v20; // rbp
  __int64 v21; // rax
  char *v22; // r12
  __m128i v23; // xmm0
  const char *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  const char *v27; // rax
  __int64 v28; // rdx
  const char *v29; // rbp
  unsigned __int64 v30; // xmm0_8
  __int64 v31; // rdi
  char *v33; // rdi
  const char *v34; // rsi
  unsigned int v35; // eax
  __m128i v36; // [rsp+0h] [rbp-88h] BYREF
  const char *v37; // [rsp+18h] [rbp-70h]
  int v38; // [rsp+24h] [rbp-64h]
  _QWORD *v39; // [rsp+28h] [rbp-60h]
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __m128i v41; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v39 = a1;
  v42 = __readfsqword(0x28u);
  for ( i = 0; i != 23; ++i )
  {
    v38 = i;
    s2 = nullptr;
    v2 = off_8C340[i];
    v41 = 0;
    if ( v2 )
    {
      v3 = strlen(v2);
      v4 = v3 + 1;
      v5 = v3;
      s2 = (char *)qvector_reserve(&s2, 0, v3 + 1, 1);
      v41.m128i_i64[0] = v4;
      memmove(s2, v2, v5);
      s2[v5] = 0;
    }
    v6 = (const char *)v39[358];
    v37 = (const char *)(v39 + 357);
    v7 = (const char *)(v39 + 357);
    if ( !v6 )
      goto LABEL_24;
    v8 = v41.m128i_i64[0];
    v9 = s2;
    v10 = (char *)s1;
    v7 = v37;
    if ( v41.m128i_i64[0] )
      v10 = s2;
    v36.m128i_i64[0] = (__int64)v10;
    while ( 1 )
    {
      v16 = *((_QWORD *)v6 + 5);
      if ( !v8 )
        break;
      if ( v16 )
        goto LABEL_17;
      v11 = v6;
      v12 = v9;
      v13 = s1;
LABEL_10:
      v14 = strcmp(v13, v12);
      v15 = *((const char **)v6 + 2);
      v6 = *((const char **)v6 + 3);
      if ( v14 >= 0 )
      {
        v7 = v11;
        v6 = v15;
      }
      if ( !v6 )
        goto LABEL_19;
    }
    if ( v16 )
    {
LABEL_17:
      v13 = *((const char **)v6 + 4);
      v12 = (const char *)v36.m128i_i64[0];
      v11 = v6;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v17 = *((_QWORD *)v6 + 2);
      if ( !v17 )
        break;
      v7 = v6;
      v6 = *((const char **)v6 + 2);
      if ( *(_QWORD *)(v17 + 40) )
        goto LABEL_17;
    }
    v7 = v6;
LABEL_19:
    if ( v37 == v7 )
      goto LABEL_24;
    if ( !*((_QWORD *)v7 + 5) )
    {
      v18 = s1;
      if ( v8 )
      {
LABEL_22:
        v19 = v9;
        goto LABEL_23;
      }
LABEL_29:
      *((_DWORD *)v7 + 14) = v38;
      if ( v9 )
      {
        v41.m128i_i64[0] = 0;
        qfree(v9);
      }
      continue;
    }
    v18 = *((const char **)v7 + 4);
    v19 = s1;
    if ( v8 )
      goto LABEL_22;
LABEL_23:
    if ( strcmp(v19, v18) >= 0 )
      goto LABEL_29;
LABEL_24:
    v20 = v39 + 356;
    v21 = operator new(0x40u);
    v22 = s2;
    v23 = _mm_loadu_si128(&v41);
    v24 = v7;
    *(_DWORD *)(v21 + 56) = 0;
    v7 = (const char *)v21;
    *(_QWORD *)(v21 + 32) = v22;
    *(__m128i *)(v21 + 40) = v23;
    s2 = nullptr;
    v36 = v23;
    v41 = 0;
    v27 = sub_18AF0(v20, v24, v21 + 32, v25, v26);
    v29 = v27;
    if ( v28 )
    {
      if ( v37 == (const char *)v28 || (v30 = _mm_load_si128(&v36).m128i_u64[0], v27) )
      {
        v31 = 1;
      }
      else
      {
        v34 = s1;
        if ( *(_QWORD *)(v28 + 40) )
          v34 = *(const char **)(v28 + 32);
        v36.m128i_i64[0] = v28;
        if ( !v30 )
          v22 = (char *)s1;
        v35 = strcmp(v22, v34);
        v28 = v36.m128i_i64[0];
        v31 = v35 >> 31;
      }
      std::_Rb_tree_insert_and_rebalance(v31, v7, v28, v37);
      v9 = s2;
      ++v39[361];
      goto LABEL_29;
    }
    if ( v7 )
    {
      if ( v22 )
      {
        *((_QWORD *)v7 + 5) = 0;
        qfree(v22);
      }
      v33 = (char *)v7;
      v7 = v29;
      operator delete(v33, 0x40u);
      v9 = s2;
      goto LABEL_29;
    }
    *((_DWORD *)v27 + 14) = v38;
  }
  return v42 - __readfsqword(0x28u);
}

