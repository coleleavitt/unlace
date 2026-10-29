unsigned __int64 __fastcall sub_1BB70(__int64 *a1, __int64 a2)
{
  size_t v2; // rbx
  _QWORD *v4; // r15
  __int64 v5; // rbp
  _QWORD *v6; // r12
  const char *v7; // rsi
  _QWORD *v8; // rbx
  const char *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rsi
  const char *v15; // rdi
  size_t v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // rsi
  __int64 v23; // rbx
  void *v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v30; // rax
  void *v31; // rax
  const void *v32; // rsi
  void *v33; // rax
  const void *v34; // rsi
  int v35; // [rsp+Ch] [rbp-FCh]
  _QWORD *v36; // [rsp+10h] [rbp-F8h]
  void *v38; // [rsp+20h] [rbp-E8h]
  __int64 *v39; // [rsp+28h] [rbp-E0h]
  __m128i v40; // [rsp+30h] [rbp-D8h] BYREF
  void *v41; // [rsp+40h] [rbp-C8h]
  __m128i v42; // [rsp+48h] [rbp-C0h] BYREF
  void *v43; // [rsp+58h] [rbp-B0h]
  __m128i v44; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  __m128i v46; // [rsp+78h] [rbp-90h] BYREF
  __m128i v47; // [rsp+88h] [rbp-80h] BYREF
  __m128i v48; // [rsp+98h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  char v51; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v52; // [rsp+C8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 24);
  v52 = __readfsqword(0x28u);
  if ( v2 <= 1 )
    goto LABEL_24;
  v38 = (void *)qalloc_or_throw(v2);
  memcpy(v38, *(const void **)(a2 + 16), v2);
  v35 = 0;
  v36 = a1 + 8;
  v39 = (__int64 *)(a2 + 16);
  while ( 2 )
  {
    v4 = (_QWORD *)a1[9];
    if ( !v4 )
      break;
    v5 = *(_QWORD *)(a2 + 24);
    v6 = v36;
    while ( 1 )
    {
      v12 = v4[5];
      if ( !v5 )
        break;
      v7 = *(const char **)(a2 + 16);
      v8 = v4;
      v9 = s1;
      if ( v12 )
        goto LABEL_6;
LABEL_7:
      v10 = strcmp(v9, v7);
      v11 = (_QWORD *)v4[2];
      v4 = (_QWORD *)v4[3];
      if ( v10 >= 0 )
      {
        v6 = v8;
        v4 = v11;
      }
      if ( !v4 )
        goto LABEL_16;
    }
    if ( v12 )
    {
LABEL_14:
      v7 = s1;
LABEL_6:
      v9 = (const char *)v4[4];
      v8 = v4;
      goto LABEL_7;
    }
    while ( 1 )
    {
      v13 = v4[2];
      if ( !v13 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( *(_QWORD *)(v13 + 40) )
        goto LABEL_14;
    }
    v6 = v4;
LABEL_16:
    if ( v36 == v6 )
      break;
    if ( v6[5] )
    {
      v14 = (const char *)v6[4];
      v15 = s1;
      if ( v5 )
        goto LABEL_19;
LABEL_20:
      if ( strcmp(v15, v14) < 0 )
        break;
    }
    else
    {
      v14 = s1;
      if ( v5 )
      {
LABEL_19:
        v15 = *(const char **)(a2 + 16);
        goto LABEL_20;
      }
    }
    if ( v35 != 1000 )
    {
      sub_67C0(v39, (__int64)"%s_%d", (const char *)v38, v35++);
      continue;
    }
    break;
  }
  sub_1B8D0(a1 + 7, (__int64)v39);
  if ( v38 )
    qfree(v38);
  v2 = *(_QWORD *)(a2 + 24);
LABEL_24:
  v41 = nullptr;
  v40 = _mm_loadu_si128((const __m128i *)a2);
  v42 = 0;
  if ( v2 )
  {
    v33 = (void *)qalloc_or_throw(v2);
    v34 = *(const void **)(a2 + 16);
    v42.m128i_i64[1] = v2;
    v41 = v33;
    memcpy(v33, v34, v2);
    v42.m128i_i64[0] = v2;
  }
  v16 = *(_QWORD *)(a2 + 48);
  v43 = nullptr;
  v44 = 0;
  if ( v16 )
  {
    v31 = (void *)qalloc_or_throw(v16);
    v32 = *(const void **)(a2 + 40);
    v43 = v31;
    v44.m128i_i64[1] = v16;
    memcpy(v31, v32, v16);
    v44.m128i_i64[0] = v16;
  }
  v45 = 0;
  copy_tinfo_t(&v45, a2 + 64);
  v17 = *(_QWORD *)(a2 + 120);
  v18 = *(_QWORD *)(a2 + 128);
  v46 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  v19 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  v49 = v17;
  LOBYTE(v17) = *(_BYTE *)(a2 + 136);
  v50 = v18;
  v20 = a1[1];
  v47 = v19;
  v21 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  v22 = *a1;
  v51 = v17;
  v48 = v21;
  if ( a1[2] < (unsigned __int64)(v20 + 1) )
  {
    v30 = qvector_reserve(a1, v22, v20 + 1, 144);
    *a1 = v30;
    v20 = a1[1];
    v22 = v30;
  }
  v23 = v22 + 144 * v20;
  *(__m128i *)v23 = _mm_load_si128(&v40);
  v24 = v41;
  v25 = _mm_loadu_si128(&v42);
  *(_QWORD *)(v23 + 64) = 0;
  *(__m128i *)(v23 + 24) = v25;
  *(_QWORD *)(v23 + 16) = v24;
  v26 = _mm_load_si128(&v44);
  v42 = 0;
  *(_QWORD *)(v23 + 40) = v43;
  *(__m128i *)(v23 + 48) = v26;
  v41 = nullptr;
  v43 = nullptr;
  v44 = 0;
  copy_tinfo_t(v23 + 64, &v45);
  v27 = v49;
  *(__m128i *)(v23 + 72) = _mm_loadu_si128(&v46);
  v28 = _mm_loadu_si128(&v47);
  *(_QWORD *)(v23 + 120) = v27;
  *(__m128i *)(v23 + 88) = v28;
  *(__m128i *)(v23 + 104) = _mm_loadu_si128(&v48);
  *(_QWORD *)(v23 + 128) = v50;
  *(_BYTE *)(v23 + 136) = v51;
  ++a1[1];
  clear_tinfo_t(&v45);
  if ( v43 )
  {
    v44.m128i_i64[0] = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v41);
  }
  return v52 - __readfsqword(0x28u);
}

