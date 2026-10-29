__int64 __fastcall sub_70D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const __m128i *v5; // rax
  bool v7; // zf
  int v9; // eax
  int v10; // edx
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  signed __int64 v15; // r15
  signed __int64 v16; // r12
  const __m128i *v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r13
  void *v20; // r14
  int v21; // r13d
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  size_t v24; // rbx
  void *v25; // r13
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r14
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  char *v31; // r13
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i v41; // xmm0
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // [rsp+0h] [rbp-108h]
  int v48; // [rsp+8h] [rbp-100h]
  void *dest; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v50; // [rsp+18h] [rbp-F0h]
  void *src; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v52; // [rsp+38h] [rbp-D0h]
  __int64 v53; // [rsp+50h] [rbp-B8h] BYREF
  int v54; // [rsp+58h] [rbp-B0h]
  __int64 v55; // [rsp+60h] [rbp-A8h]
  void *v56; // [rsp+68h] [rbp-A0h]
  int v57; // [rsp+70h] [rbp-98h]
  _QWORD v58[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v59; // [rsp+90h] [rbp-78h]
  __m128i v60; // [rsp+98h] [rbp-70h]
  void *v61; // [rsp+A8h] [rbp-60h]
  __m128i v62; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( (unsigned __int64)a1[1] <= 0x9B )
  {
    if ( !under_debugger )
      interr(20003, a2, a3, a4, a5);
    BUG();
  }
  v5 = (const __m128i *)*a1;
  *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)*a1);
  *(__m128i *)(a2 + 16) = _mm_loadu_si128(v5 + 1);
  v7 = *(_DWORD *)(a2 + 16) == 1129271365;
  *(__m128i *)(a2 + 32) = _mm_loadu_si128(v5 + 2);
  *(__m128i *)(a2 + 48) = _mm_loadu_si128(v5 + 3);
  *(__m128i *)(a2 + 64) = _mm_loadu_si128(v5 + 4);
  *(__m128i *)(a2 + 80) = _mm_loadu_si128(v5 + 5);
  *(__m128i *)(a2 + 96) = _mm_loadu_si128(v5 + 6);
  *(__m128i *)(a2 + 112) = _mm_loadu_si128(v5 + 7);
  *(__m128i *)(a2 + 128) = _mm_loadu_si128(v5 + 8);
  *(__m128i *)(a2 + 140) = _mm_loadu_si128((const __m128i *)((char *)v5 + 140));
  if ( !v7 )
    return 0;
  v9 = *(_DWORD *)(a2 + 44);
  v10 = v9 & 0xF000000;
  if ( (v9 & 0xF000000) != 0 )
  {
    if ( ((v10 - 0x1000000) & 0xFE000000) != 0 )
      sub_58B0((__int64)"Unknown header format");
    v11 = *(unsigned int *)(a2 + 28);
    if ( (_DWORD)v11 != 270498556 && (_DWORD)v11 != 271065770 )
      goto LABEL_8;
    v28 = *(_DWORD *)(a2 + 124);
    if ( v10 == 0x1000000 )
    {
      v12 = 128;
      v13 = v28 + 124;
    }
    else
    {
      v12 = *(int *)(a2 + 100);
      v13 = (int)v12 + v28;
    }
  }
  else
  {
    if ( (v9 & 8) == 0 )
      return 0;
    v11 = *(unsigned int *)(a2 + 28);
    if ( (_DWORD)v11 != 270498556 && (_DWORD)v11 != 271065770 )
    {
LABEL_8:
      if ( (_DWORD)v11 )
        sub_52A0((__int64)"Unknown compression type %08X\n", v11);
      return 0;
    }
    v12 = 128;
    v13 = *(_DWORD *)(a2 + 124) + 124;
  }
  v14 = *(unsigned int *)(a2 + 100);
  v15 = a1[1] - v12;
  v16 = v13 - v14;
  if ( v14 >= v13 || v15 <= 0 || v16 <= 0 )
    sub_5BD0(a1, v11, v14);
  v50 = 0;
  dest = nullptr;
  dest = (void *)qvector_reserve(&dest, 0, v15 + 4, 1);
  memset((char *)dest + v50, 0, v15 + 4 - v50);
  v17 = (const __m128i *)*a1;
  *(_QWORD *)&v50 = v15 + 4;
  memcpy(dest, &v17->m128i_i8[v12], v15);
  v18 = a1[1];
  if ( v18 < v12 )
  {
    v42 = *a1;
    if ( a1[2] < v12 )
    {
      v44 = qvector_reserve(a1, v42, v12, 1);
      *a1 = v44;
      v18 = a1[1];
      v42 = v44;
    }
    memset((void *)(v42 + v18), 0, v12 - v18);
    a1[1] = v12;
    src = nullptr;
    v52 = 0;
  }
  else
  {
    if ( v18 != v12 )
      a1[1] = v12;
    src = nullptr;
    v52 = 0;
  }
  src = (void *)qvector_reserve(&src, 0, v16, 1);
  memset((char *)src + v52, 0, v16 - v52);
  v7 = *(_DWORD *)(a2 + 28) == 270498556;
  *(_QWORD *)&v52 = v16;
  if ( v7 )
  {
    v53 = 0;
    v57 = v15;
    v31 = (char *)src;
    v56 = dest;
    v54 = 0;
    v55 = 0;
    sub_5F90((__int64)&v53, (__int64)dest, 8 * v15);
    v58[0] = v32;
    v58[1] = 0;
    LODWORD(v59) = 0;
    v61 = (void *)qcalloc(329, 4);
    if ( !v61 )
      sub_5420((__int64)"epoc::uncompress", 4, v33, v34, v35, v36, v47);
    v62.m128i_i64[0] = qalloc(4096);
    if ( !v62.m128i_i64[0] )
      sub_5420((__int64)"epoc::uncompress", 4, v37, v38, v39, v40, v47);
    sub_5FE0((__int64)v58);
    v41 = _mm_loadl_epi64(&v62);
    v60 = _mm_unpacklo_epi64(v41, v41);
    v21 = sub_6230(v58, v31, v16);
    qfree(v62.m128i_i64[0]);
    qfree(v61);
  }
  else
  {
    v19 = *(int *)(a2 + 48);
    if ( (int)v19 <= 0 || (int)v16 - (int)v19 <= 0 )
      sub_58B0((__int64)"Corrupted file");
    v20 = src;
    v62 = (__m128i)(unsigned __int64)(int)v15;
    v59 = 0;
    v61 = dest;
    v63 = 0;
    v60 = 0;
    v48 = sub_6FD0((__int64)v58, (unsigned __int64)src, v19);
    v21 = sub_6FD0((__int64)v58, (unsigned __int64)v20 + v19, (unsigned int)(v16 - v19)) + v48;
    if ( v59 )
    {
      v60.m128i_i64[0] = 0;
      qfree(v59);
    }
  }
  if ( v21 != v16 )
    sub_58B0((__int64)"Uncompression error");
  v22 = *(unsigned int *)(a2 + 100);
  v23 = a1[1];
  if ( v23 < v22 )
  {
    v43 = *a1;
    if ( a1[2] < v22 )
    {
      v45 = qvector_reserve(a1, v43, v22, 1);
      *a1 = v45;
      v23 = a1[1];
      v43 = v45;
    }
    memset((void *)(v43 + v23), 0, v22 - v23);
    a1[1] = v22;
  }
  else if ( v22 != v23 )
  {
    a1[1] = v22;
  }
  v24 = v52;
  v25 = src;
  if ( v16 <= (unsigned __int64)v52 )
    v24 = v16;
  if ( v24 )
  {
    v26 = a1[1];
    v27 = v26 + v24;
    if ( __CFADD__(v26, v24) )
    {
      if ( v26 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v26 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_34:
        memcpy((void *)(v26 + *a1), v25, v24);
        v25 = src;
        goto LABEL_35;
      }
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v29 = *a1;
    v30 = a1[1];
    if ( a1[2] < v27 )
    {
      v46 = qvector_reserve(a1, v29, v27, 1);
      *a1 = v46;
      v29 = v46;
      v30 = a1[1];
    }
    memset((void *)(v29 + v30), 0, v27 - v30);
    a1[1] = v27;
    goto LABEL_34;
  }
LABEL_35:
  if ( v25 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v25);
  }
  if ( dest )
  {
    *(_QWORD *)&v50 = 0;
    qfree(dest);
  }
  return 1;
}
