__int64 __fastcall sub_3CCE60(__int64 a1, __int64 *a2, unsigned __int64 a3, const char *a4, double a5)
{
  __int64 v7; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  const char *v14; // rsi
  __m128i *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  size_t v18; // r15
  size_t v19; // r13
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  void *v23; // rax
  void *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  size_t v27; // r8
  __int64 v28; // rax
  size_t v29; // r9
  _BYTE *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  size_t v34; // [rsp+0h] [rbp-E8h]
  size_t v35; // [rsp+8h] [rbp-E0h]
  void *src; // [rsp+10h] [rbp-D8h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-D0h]
  void *v38; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v39; // [rsp+38h] [rbp-B0h]
  void *v40; // [rsp+50h] [rbp-98h] BYREF
  __int128 v41; // [rsp+58h] [rbp-90h]
  __int64 v42; // [rsp+70h] [rbp-78h] BYREF
  void *v43; // [rsp+78h] [rbp-70h]
  __int128 v44; // [rsp+80h] [rbp-68h]
  unsigned __int64 v45; // [rsp+90h] [rbp-58h]
  int v46; // [rsp+98h] [rbp-50h]
  unsigned __int64 v47; // [rsp+A8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v47 = __readfsqword(0x28u);
  v9 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD **)(v7 + 16);
  v11 = v9;
  if ( v10 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v10[2];
        v13 = v10[3];
        if ( v10[4] < a3 )
          break;
        v11 = v10;
        v10 = (_QWORD *)v10[2];
        if ( !v12 )
          goto LABEL_6;
      }
      v10 = (_QWORD *)v10[3];
    }
    while ( v13 );
LABEL_6:
    if ( v9 != v11 && a3 < v11[4] )
      v11 = v9;
  }
  switch_dbctx();
  if ( sub_2B6080(a3, 0) == -1 )
  {
    switch_dbctx();
    if ( sub_2B6080(a3, 0) == -1 )
      return 0;
    if ( !under_debugger )
      sub_383060(0xCD5Cu, a5);
LABEL_42:
    BUG();
  }
  switch_dbctx();
  if ( sub_2B6080(a3, 0) == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xCD5Du, a5);
    goto LABEL_42;
  }
  v14 = nullptr;
  *(_OWORD *)n = 0;
  src = nullptr;
  v15 = (__m128i *)qvector_reserve((__int64)&src, 0, 20, 1);
  src = v15;
  n[0] = 20;
  *v15 = _mm_load_si128((const __m128i *)&xmmword_424AF0);
  *(__int32 *)((char *)&v15->m128i_i32[3] + 3) = 796026220;
  v38 = nullptr;
  *((_BYTE *)src + 19) = 0;
  v39 = 0;
  if ( a4 )
  {
    v18 = strlen(a4);
    v14 = a4;
    v38 = (void *)qvector_reserve((__int64)&v38, 0, v18 + 1, 1);
    *(_QWORD *)&v39 = v18 + 1;
    memmove(v38, a4, v18);
    *((_BYTE *)v38 + v18) = 0;
  }
  v19 = n[0];
  v40 = nullptr;
  v41 = 0;
  if ( n[0] )
  {
    v23 = (void *)qalloc_or_throw(n[0], (__int64)v14, v16, v17);
    v24 = src;
    v40 = v23;
    *((_QWORD *)&v41 + 1) = v19;
    memcpy(v23, src, v19);
    *(_QWORD *)&v41 = v19;
    if ( !(_QWORD)v39 || (v27 = v39 - 1, (_QWORD)v39 == 1) )
    {
      v28 = *a2;
      v44 = 0;
      v42 = v28;
      v43 = nullptr;
LABEL_38:
      v43 = (void *)qalloc_or_throw(v19, (__int64)v24, v25, v26);
      *((_QWORD *)&v44 + 1) = v19;
      memcpy(v43, v40, v19);
      *(_QWORD *)&v44 = v19;
      goto LABEL_16;
    }
    --v19;
    v29 = v27 + v19;
    v20 = v39 + v19;
LABEL_35:
    v30 = v40;
    if ( *((_QWORD *)&v41 + 1) < v20 )
    {
      v34 = v29;
      v35 = v27;
      v40 = (void *)qvector_reserve((__int64)&v40, (__int64)v40, v20, 1);
      v27 = v35;
      v30 = v40;
      v29 = v34;
    }
    *(_QWORD *)&v41 = v20;
    v30[v29] = 0;
    v24 = v38;
    memcpy((char *)v40 + v19, v38, v27);
    v31 = *a2;
    v19 = v41;
    v43 = nullptr;
    v42 = v31;
    v44 = 0;
    if ( !(_QWORD)v41 )
      goto LABEL_16;
    goto LABEL_38;
  }
  v20 = v39;
  if ( (_QWORD)v39 )
  {
    v29 = v39 - 1;
    if ( (_QWORD)v39 != 1 )
    {
      v27 = v39 - 1;
      goto LABEL_35;
    }
  }
  v21 = *a2;
  v44 = 0;
  v43 = nullptr;
  v42 = v21;
LABEL_16:
  v46 = 2;
  v45 = 0xFFFFFFFEFFFFFFFFLL;
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree((__int64)v40);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree((__int64)v38);
  }
  if ( v9 == v11 )
  {
    sub_2E4810((__int64)&v42, a3);
    sub_2E7DA0((__int64)&v42, a3);
    sub_2EA7A0(&v42, a3, v32, v33);
    sub_2EDAA0((__int64)&v42, a3);
    sub_2F0B10((__int64)&v42, a3);
    sub_2F3520((__int64)&v42, a3);
    sub_2F7B30((__int64)&v42, a3);
  }
  sub_2B88C0((__int64)&v42, a3);
  sub_2FB200((__int64)&v42, a3);
  sub_304D70(&v42, a3);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree((__int64)v43);
  }
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  return 0;
}

