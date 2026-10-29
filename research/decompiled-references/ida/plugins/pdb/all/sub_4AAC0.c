__int64 __fastcall sub_4AAC0(__int64 a1, const char *a2, double a3, double a4, double a5)
{
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r13
  __int64 (__fastcall **v10)(int, int, int, int, int, int, __int64, int, __int64); // rax
  __int64 (__fastcall **v11)(int, int, int, int, int, int, __int64, int, __int64); // r13
  _QWORD *v12; // r14
  unsigned int v13; // r12d
  __int64 *v15; // rdi
  __int64 (*v16)(void); // rax
  unsigned int v17; // esi
  void *v18; // rax
  __int64 v19; // rdi
  size_t v20; // rax
  __int64 v21; // r15
  size_t v22; // r14
  _QWORD *v23; // r13
  _QWORD *v24; // rbp
  __int64 v25; // r14
  const char *v26; // rdx
  char *v27; // rsi
  _QWORD *v28; // r15
  const char *v29; // rdi
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  const char *v34; // rsi
  char *v35; // rdi
  __int64 v36; // rax
  const char *v37; // r15
  _QWORD *v38; // rdi
  __m128i v39; // xmm0
  __int64 v40; // rcx
  __int64 v41; // r8
  const char *v42; // rax
  __int64 v43; // rdx
  const char *v44; // r14
  __int64 v45; // rdi
  char *v46; // rax
  char *v47; // rax
  void (__fastcall *v48)(void *); // rax
  void *v49; // rdi
  const char *v50; // rsi
  unsigned int v51; // eax
  __m128i v52; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+10h] [rbp-B8h]
  char *s2; // [rsp+18h] [rbp-B0h]
  _QWORD *v55; // [rsp+20h] [rbp-A8h]
  void *v56; // [rsp+28h] [rbp-A0h]
  void *v57; // [rsp+38h] [rbp-90h]
  void *v58; // [rsp+40h] [rbp-88h] BYREF
  __m128i v59; // [rsp+48h] [rbp-80h] BYREF
  __int64 (__fastcall **v60)(int, int, int, int, int, int, __int64, int, __int64); // [rsp+60h] [rbp-68h] BYREF
  __int128 v61; // [rsp+68h] [rbp-60h]
  const char *v62; // [rsp+78h] [rbp-50h]
  unsigned int v63; // [rsp+80h] [rbp-48h]
  unsigned __int64 v64; // [rsp+88h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 96) )
    return 0;
  v60 = nullptr;
  v61 = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (__int64 (__fastcall **)(int, int, int, int, int, int, __int64, int, __int64))qvector_reserve(
                                                                                          &v60,
                                                                                          0,
                                                                                          v7 + 1,
                                                                                          1);
    *(_QWORD *)&v61 = v8;
    v60 = v10;
    memmove(v10, a2, v9);
    *((_BYTE *)v60 + v9) = 0;
    v11 = v60;
    v55 = (_QWORD *)(a1 + 8);
    v12 = sub_47300(a1 + 8, (__int64)&v60);
    if ( v11 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v11);
    }
    v53 = a1 + 16;
    if ( (_QWORD *)(a1 + 16) != v12 )
      goto LABEL_6;
  }
  else
  {
    v55 = (_QWORD *)(a1 + 8);
    v12 = sub_47300(a1 + 8, (__int64)&v60);
    v53 = a1 + 16;
    if ( (_QWORD *)(a1 + 16) != v12 )
    {
LABEL_6:
      v13 = *((_DWORD *)v12 + 14);
      goto LABEL_7;
    }
  }
  v15 = *(__int64 **)(a1 + 104);
  *(_QWORD *)&v61 = 0;
  v60 = &off_A9F58;
  *((_QWORD *)&v61 + 1) = a1;
  v62 = a2;
  v63 = 0;
  v16 = *(__int64 (**)(void))(*v15 + 96);
  if ( (char *)v16 == (char *)sub_23F10 )
  {
    v17 = *((_DWORD *)v15 + 8);
  }
  else
  {
    v52.m128i_i64[0] = (__int64)v15;
    v17 = v16();
  }
  v18 = (void *)sub_42C40(v15, v17);
  v19 = *(_QWORD *)(a1 + 104);
  v56 = v18;
  v57 = v18;
  *(_QWORD *)&v61 = v18;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64 (__fastcall ***)(int, int, int, int, int, int, __int64, int, __int64)))(*(_QWORD *)v19 + 16LL))(
    v19,
    v18,
    7,
    &v60);
  v13 = v63;
  v58 = nullptr;
  v59 = 0;
  if ( a2 )
  {
    v20 = strlen(a2);
    v21 = v20 + 1;
    v22 = v20;
    v58 = (void *)qvector_reserve(&v58, 0, v20 + 1, 1);
    v59.m128i_i64[0] = v21;
    memmove(v58, a2, v22);
    *((_BYTE *)v58 + v22) = 0;
  }
  v23 = *(_QWORD **)(a1 + 24);
  v24 = (_QWORD *)v53;
  if ( !v23 )
    goto LABEL_34;
  v25 = v59.m128i_i64[0];
  v26 = src;
  v24 = (_QWORD *)v53;
  s2 = (char *)v58;
  if ( v59.m128i_i64[0] )
    v26 = (const char *)v58;
  v52.m128i_i64[0] = (__int64)v26;
  while ( 1 )
  {
    v32 = v23[5];
    if ( !v25 )
      break;
    if ( v32 )
      goto LABEL_28;
    v27 = s2;
    v28 = v23;
    v29 = src;
LABEL_21:
    v30 = strcmp(v29, v27);
    v31 = (_QWORD *)v23[2];
    v23 = (_QWORD *)v23[3];
    if ( v30 >= 0 )
    {
      v24 = v28;
      v23 = v31;
    }
    if ( !v23 )
      goto LABEL_30;
  }
  if ( v32 )
  {
LABEL_28:
    v29 = (const char *)v23[4];
    v27 = (char *)v52.m128i_i64[0];
    v28 = v23;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v33 = v23[2];
    if ( !v33 )
      break;
    v24 = v23;
    v23 = (_QWORD *)v23[2];
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_28;
  }
  v24 = v23;
LABEL_30:
  if ( (_QWORD *)v53 == v24 )
    goto LABEL_34;
  if ( v24[5] )
  {
    v34 = (const char *)v24[4];
    v35 = (char *)src;
    if ( !v25 )
      goto LABEL_33;
    goto LABEL_45;
  }
  v34 = src;
  if ( !v25 )
    goto LABEL_39;
LABEL_45:
  v35 = s2;
LABEL_33:
  if ( strcmp(v35, v34) >= 0 )
  {
LABEL_39:
    v47 = s2;
    *((_DWORD *)v24 + 14) = v13;
    if ( v47 )
    {
      v59.m128i_i64[0] = 0;
      qfree(v47);
    }
    goto LABEL_41;
  }
LABEL_34:
  v36 = operator new(0x40u);
  v37 = (const char *)v58;
  v38 = v55;
  v34 = (const char *)v24;
  v24 = (_QWORD *)v36;
  v39 = _mm_loadu_si128(&v59);
  *(_DWORD *)(v36 + 56) = 0;
  *(_QWORD *)(v36 + 32) = v37;
  *(__m128i *)(v36 + 40) = v39;
  v58 = nullptr;
  v52 = v39;
  v59 = 0;
  v42 = sub_4A5F0(v38, v34, v36 + 32, v40, v41, *(double *)v39.m128i_i64, 0.0, a5);
  v44 = v42;
  if ( v43 )
  {
    if ( v53 == v43 || (v39.m128i_i64[0] = _mm_load_si128(&v52).m128i_u64[0], v42) )
    {
      v45 = 1;
    }
    else
    {
      v50 = src;
      if ( *(_QWORD *)(v43 + 40) )
        v50 = *(const char **)(v43 + 32);
      v52.m128i_i64[0] = v43;
      if ( !v39.m128i_i64[0] )
        v37 = src;
      v51 = strcmp(v37, v50);
      v43 = v52.m128i_i64[0];
      v45 = v51 >> 31;
    }
    v34 = (const char *)v24;
    std::_Rb_tree_insert_and_rebalance(v45, v24, v43, v53, *(double *)v39.m128i_i64, 0.0, a5);
    v46 = (char *)v58;
    ++*(_QWORD *)(a1 + 48);
    s2 = v46;
    goto LABEL_39;
  }
  if ( v24 )
  {
    if ( v37 )
    {
      v24[5] = 0;
      qfree(v37);
    }
    v49 = v24;
    v34 = (const char *)&dword_40;
    v24 = v44;
    operator delete(v49, 0x40u);
    s2 = (char *)v58;
    goto LABEL_39;
  }
  *((_DWORD *)v42 + 14) = v13;
LABEL_41:
  if ( v56 )
  {
    v48 = *(void (__fastcall **)(void *))(*(_QWORD *)v56 + 296LL);
    if ( v48 == sub_243F0 )
      operator delete(v56, 0x18u);
    else
      ((void (__fastcall *)(void *, const char *))v48)(v56, v34);
  }
LABEL_7:
  if ( v13 )
    return sub_42E60(a1, v13);
  return 0;
}

