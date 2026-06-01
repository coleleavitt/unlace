__int64 __fastcall sub_A2E60(_QWORD *a1, char *a2)
{
  size_t v2; // rax
  size_t v3; // r12
  size_t v4; // rbp
  char *v5; // r14
  char *v6; // r13
  __int64 v7; // rbp
  char *v8; // r12
  const char *v9; // r15
  const char *v10; // rdi
  char *v11; // rbx
  const char *v12; // rsi
  int v13; // eax
  char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rbp
  __int64 v18; // rax
  size_t v19; // rax
  __int64 v20; // rbp
  size_t v21; // rbx
  const char *v22; // rbx
  const char *v23; // r15
  __int64 v24; // rbp
  char *v25; // r14
  char *v26; // r13
  const char *v27; // rdi
  const char *v28; // r12
  const char *v29; // rsi
  int v30; // eax
  const char *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  const char *v34; // rdi
  const char *v35; // rsi
  const char *v37; // rsi
  const char *v38; // rdi
  _QWORD *v39; // rbp
  __int64 v40; // rax
  char *v41; // r12
  __m128i v42; // xmm0
  const char *v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // r8
  const char *v46; // rax
  char *v47; // rdx
  const char *v48; // rbp
  unsigned __int64 v49; // xmm0_8
  __int64 v50; // rdi
  char *v51; // rdi
  const char *v52; // rsi
  unsigned int v53; // eax
  char *v54; // [rsp+0h] [rbp-C0h]
  char *s1[2]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD *v56; // [rsp+18h] [rbp-A8h]
  char *s; // [rsp+20h] [rbp-A0h]
  char *v58; // [rsp+28h] [rbp-98h] BYREF
  __m128i v59; // [rsp+30h] [rbp-90h] BYREF
  char *s2; // [rsp+48h] [rbp-78h] BYREF
  __int128 v61; // [rsp+50h] [rbp-70h]
  char *v62; // [rsp+60h] [rbp-60h]
  __m128i v63; // [rsp+68h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+80h] [rbp-40h]

  v56 = a1;
  s = a2;
  v64 = __readfsqword(0x28u);
  v61 = 0;
  s2 = nullptr;
  if ( a2 )
  {
    v2 = strlen(s);
    v3 = v2 + 1;
    v4 = v2;
    s2 = (char *)qvector_reserve(&s2, 0, v2 + 1, 1);
    *(_QWORD *)&v61 = v3;
    memmove(s2, s, v4);
    s2[v4] = 0;
    v5 = s2;
    v6 = (char *)v56[19];
    v54 = (char *)(v56 + 18);
    if ( !v6 )
      goto LABEL_16;
  }
  else
  {
    v6 = (char *)a1[19];
    v5 = nullptr;
    v54 = (char *)(a1 + 18);
    if ( !v6 )
      goto LABEL_18;
  }
  v7 = v61;
  v8 = v54;
  v9 = src;
  s1[0] = (char *)src;
  if ( (_QWORD)v61 )
    v9 = v5;
  while ( 1 )
  {
    v15 = *((_QWORD *)v6 + 5);
    if ( !v7 )
      break;
    if ( v15 )
      goto LABEL_15;
    v10 = s1[0];
    v11 = v6;
    v12 = v5;
LABEL_8:
    v13 = strcmp(v10, v12);
    v14 = *((char **)v6 + 2);
    v6 = *((char **)v6 + 3);
    if ( v13 >= 0 )
    {
      v8 = v11;
      v6 = v14;
    }
    if ( !v6 )
      goto LABEL_37;
  }
  if ( v15 )
  {
LABEL_15:
    v10 = *((const char **)v6 + 4);
    v11 = v6;
    v12 = v9;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v16 = *((_QWORD *)v6 + 2);
    if ( !v16 )
      break;
    v8 = v6;
    v6 = *((char **)v6 + 2);
    if ( *(_QWORD *)(v16 + 40) )
      goto LABEL_15;
  }
  v8 = v6;
LABEL_37:
  if ( v8 != v54 )
  {
    if ( !*((_QWORD *)v8 + 5) )
    {
      v34 = v5;
      v35 = src;
      if ( v7 )
        goto LABEL_41;
      if ( !v5 )
        return *((_QWORD *)v8 + 7);
LABEL_46:
      *(_QWORD *)&v61 = 0;
      qfree(v5);
      return *((_QWORD *)v8 + 7);
    }
    v34 = src;
    v35 = *((const char **)v8 + 4);
    if ( v7 )
      v34 = v5;
LABEL_41:
    if ( strcmp(v34, v35) >= 0 )
    {
      if ( !v5 )
        return *((_QWORD *)v8 + 7);
      goto LABEL_46;
    }
  }
LABEL_16:
  if ( v5 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v5);
  }
LABEL_18:
  LODWORD(v61) = 0;
  s2 = (char *)off_C95F8;
  *((_QWORD *)&v61 + 1) = 0;
  v62 = s;
  v63 = (__m128i)0x8000000000000000LL;
  v17 = (_QWORD *)v56[11];
  v18 = v17[31];
  if ( !v18 )
  {
    v18 = sub_87C20(*(_QWORD **)(*v17 + 16LL), *(_QWORD *)(*v17 + 24LL));
    v17[31] = v18;
  }
  *((_QWORD *)&v61 + 1) = v18;
  sub_A0CE0(v17, (__int64)&s2, 0);
  v58 = nullptr;
  v59 = 0;
  if ( s )
  {
    v19 = strlen(s);
    v20 = v19 + 1;
    v21 = v19;
    v58 = (char *)qvector_reserve(&v58, 0, v19 + 1, 1);
    v59.m128i_i64[0] = v20;
    memmove(v58, s, v21);
    v58[v21] = 0;
  }
  v22 = v54;
  v23 = (const char *)v56[19];
  if ( !v23 )
    goto LABEL_54;
  v24 = v59.m128i_i64[0];
  v25 = v58;
  v26 = (char *)src;
  s1[0] = (char *)src;
  v22 = v54;
  if ( v59.m128i_i64[0] )
    v26 = v58;
  while ( 2 )
  {
    v32 = *((_QWORD *)v23 + 5);
    if ( v24 )
    {
      if ( !v32 )
      {
        v27 = s1[0];
        v28 = v23;
        v29 = v25;
        goto LABEL_28;
      }
LABEL_35:
      v27 = *((const char **)v23 + 4);
      v28 = v23;
      v29 = v26;
LABEL_28:
      v30 = strcmp(v27, v29);
      v31 = *((const char **)v23 + 2);
      v23 = *((const char **)v23 + 3);
      if ( v30 >= 0 )
      {
        v22 = v28;
        v23 = v31;
      }
      if ( !v23 )
        goto LABEL_50;
      continue;
    }
    break;
  }
  if ( v32 )
    goto LABEL_35;
  while ( 1 )
  {
    v33 = *((_QWORD *)v23 + 2);
    if ( !v33 )
      break;
    v22 = v23;
    v23 = *((const char **)v23 + 2);
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_35;
  }
  v22 = v23;
LABEL_50:
  if ( v22 == v54 )
    goto LABEL_54;
  if ( *((_QWORD *)v22 + 5) )
  {
    v37 = *((const char **)v22 + 4);
    v38 = src;
    if ( !v24 )
      goto LABEL_53;
    goto LABEL_63;
  }
  v37 = src;
  if ( !v24 )
    goto LABEL_59;
LABEL_63:
  v38 = v25;
LABEL_53:
  if ( strcmp(v38, v37) >= 0 )
  {
LABEL_59:
    *(__m128i *)(v22 + 56) = _mm_load_si128(&v63);
    if ( v25 )
    {
      v59.m128i_i64[0] = 0;
      qfree(v25);
    }
    return v63.m128i_i64[0];
  }
LABEL_54:
  v39 = v56 + 17;
  v40 = operator new(0x48u);
  v41 = v58;
  v42 = _mm_loadu_si128(&v59);
  v43 = v22;
  v22 = (const char *)v40;
  v59 = 0;
  *(_QWORD *)(v40 + 32) = v58;
  *(_QWORD *)(v40 + 56) = 0;
  *(_QWORD *)(v40 + 64) = 0;
  *(__m128i *)(v40 + 40) = v42;
  v58 = nullptr;
  *(__m128i *)s1 = v42;
  v46 = sub_A2CA0(v39, v43, v40 + 32, v44, v45);
  v48 = v46;
  if ( v47 )
  {
    if ( v46 || (v49 = _mm_load_si128((const __m128i *)s1).m128i_u64[0], v54 == v47) )
    {
      v50 = 1;
    }
    else
    {
      v52 = src;
      if ( *((_QWORD *)v47 + 5) )
        v52 = *((const char **)v47 + 4);
      s1[0] = v47;
      if ( !v49 )
        v41 = (char *)src;
      v53 = strcmp(v41, v52);
      v47 = s1[0];
      v50 = v53 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v50, v22, v47, v54);
    v25 = v58;
    ++v56[22];
    goto LABEL_59;
  }
  if ( v22 )
  {
    if ( v41 )
    {
      *((_QWORD *)v22 + 5) = 0;
      qfree(v41);
    }
    v51 = (char *)v22;
    v22 = v48;
    operator delete(v51, 0x48u);
    v25 = v58;
    goto LABEL_59;
  }
  *(__m128i *)(v46 + 56) = _mm_load_si128(&v63);
  return v63.m128i_i64[0];
}

