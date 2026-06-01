unsigned __int64 __fastcall sub_34B90(__int64 *a1, __int64 *a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int64 *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  int v12; // r15d
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  _QWORD *v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rbx
  __m128i v20; // xmm0
  unsigned __int64 v21; // r13
  _QWORD *v22; // rax
  size_t v23; // r13
  size_t v24; // r13
  __m128i v25; // xmm0
  __int64 v26; // rsi
  int v27; // eax
  __m128i v28; // xmm0
  __int64 v29; // r9
  int v30; // eax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i v33; // xmm0
  void *v34; // rax
  __m128i v35; // xmm0
  void *v36; // rax
  __m128i v37; // xmm1
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // r12
  __int64 v41; // rbp
  unsigned __int64 *v42; // rbx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  int v45; // eax
  int v46; // eax
  __int64 v47; // rax
  size_t v48; // r9
  const void *v49; // r10
  void *v50; // rax
  unsigned __int64 *v51; // [rsp+0h] [rbp-140h]
  __int64 v53; // [rsp+10h] [rbp-130h]
  __int64 v54; // [rsp+10h] [rbp-130h]
  const void *v55; // [rsp+20h] [rbp-120h]
  unsigned __int64 *v56; // [rsp+28h] [rbp-118h] BYREF
  __int128 v57; // [rsp+30h] [rbp-110h]
  __int128 v58; // [rsp+40h] [rbp-100h]
  __int64 v59; // [rsp+50h] [rbp-F0h]
  int v60; // [rsp+58h] [rbp-E8h]
  __m128i v61; // [rsp+68h] [rbp-D8h] BYREF
  void *v62; // [rsp+78h] [rbp-C8h]
  __m128i v63; // [rsp+80h] [rbp-C0h] BYREF
  void *v64; // [rsp+90h] [rbp-B0h]
  __m128i v65; // [rsp+98h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-98h] BYREF
  __m128i v67; // [rsp+B0h] [rbp-90h] BYREF
  __m128i v68; // [rsp+C0h] [rbp-80h] BYREF
  __m128i v69; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-60h]
  __int64 v71; // [rsp+E8h] [rbp-58h]
  char v72; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v73; // [rsp+100h] [rbp-40h]

  v4 = *a2;
  v73 = __readfsqword(0x28u);
  v60 = 1;
  v56 = nullptr;
  v59 = 0;
  v57 = 0;
  v58 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v4, 13, &v56) )
  {
    if ( (debug & 0x400000) != 0 )
    {
      dstr_tinfo(a2);
      sub_29350();
    }
    v5 = v56;
    if ( v56 )
    {
      v6 = v57;
      if ( (_QWORD)v57 )
      {
        v7 = 0;
        do
        {
          v8 = &v5[18 * v7];
          clear_tinfo_t(v8 + 8);
          v9 = v8[5];
          if ( v9 )
          {
            v8[6] = 0;
            qfree(v9);
          }
          v10 = v8[2];
          if ( v10 )
          {
            v8[3] = 0;
            qfree(v10);
          }
          ++v7;
          v5 = v56;
        }
        while ( v6 != v7 );
      }
      goto LABEL_12;
    }
    return v73 - __readfsqword(0x28u);
  }
  v5 = v56;
  v12 = 0;
  v13 = 0;
  v14 = *a1;
  v15 = a1[1];
  v16 = v56 + 8;
  v51 = &v56[18 * v57];
  if ( v51 == v56 )
    goto LABEL_38;
  v17 = *v56;
  v18 = v56[1];
  if ( !v15 )
    goto LABEL_26;
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = v14 + 144 * v13;
      v20 = _mm_loadu_si128((const __m128i *)v19);
      if ( v17 < _mm_add_epi64(v20, _mm_srli_si128(v20, 8)).m128i_u64[0] )
        break;
      v13 = ++v12;
      if ( v12 >= v15 )
      {
        v19 = v14 + 144LL * v12;
        goto LABEL_27;
      }
    }
    if ( *(_QWORD *)v19 >= v17 + v18 )
      goto LABEL_27;
    if ( a3 && ((v53 = v14, !*(v16 - 5)) || (v45 = strcmp((const char *)*(v16 - 6), "__vecDelDtor"), v14 = v53, v45))
      || *(_QWORD *)(v19 + 24) && (v54 = v14, v46 = strcmp(*(const char **)(v19 + 16), "__vecDelDtor"), v14 = v54, !v46) )
    {
      copy_tinfo_t(v19 + 64, v16);
      if ( (_QWORD *)(v19 + 16) != v16 - 6 )
      {
        v21 = *(v16 - 5);
        if ( v21 )
        {
          v48 = v21 - 1;
          if ( v21 != 1 )
          {
            v49 = (const void *)*(v16 - 6);
            v50 = *(void **)(v19 + 16);
            if ( *(_QWORD *)(v19 + 32) < v21 )
            {
              v55 = (const void *)*(v16 - 6);
              v50 = (void *)qvector_reserve(v19 + 16, *(_QWORD *)(v19 + 16), *(v16 - 5), 1);
              v49 = v55;
              v48 = v21 - 1;
              *(_QWORD *)(v19 + 16) = v50;
            }
            *(_QWORD *)(v19 + 24) = v21;
            memmove(v50, v49, v48);
            *(_BYTE *)(*(_QWORD *)(v19 + 16) + v21 - 1) = 0;
            v14 = *a1;
            v15 = a1[1];
            goto LABEL_24;
          }
        }
        *(_QWORD *)(v19 + 24) = 0;
      }
LABEL_23:
      v14 = *a1;
      v15 = a1[1];
    }
LABEL_24:
    v22 = v16 + 18;
    if ( v51 == v16 + 10 )
      break;
    v16 += 18;
    v17 = *(v22 - 8);
    v18 = *(v22 - 7);
    if ( v13 >= v15 )
    {
LABEL_26:
      v19 = v14 + 144 * v13;
LABEL_27:
      v62 = nullptr;
      v61 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v18);
      v63 = 0;
      v23 = *(v16 - 5);
      if ( v23 )
      {
        v62 = (void *)qalloc_or_throw(*(v16 - 5));
        v63.m128i_i64[1] = v23;
        memcpy(v62, (const void *)*(v16 - 6), v23);
        v63.m128i_i64[0] = v23;
      }
      v64 = nullptr;
      v65 = 0;
      v24 = *(v16 - 2);
      if ( v24 )
      {
        v64 = (void *)qalloc_or_throw(*(v16 - 2));
        v65.m128i_i64[1] = v24;
        memcpy(v64, (const void *)*(v16 - 3), v24);
        v65.m128i_i64[0] = v24;
      }
      v66 = 0;
      copy_tinfo_t(&v66, v16);
      v25 = _mm_loadu_si128((const __m128i *)(v16 + 1));
      v26 = *a1;
      v70 = v16[7];
      v27 = *((_DWORD *)v16 + 16);
      v67 = v25;
      v28 = _mm_loadu_si128((const __m128i *)(v16 + 3));
      v29 = v19 - v26;
      LODWORD(v71) = v27;
      v30 = *((_DWORD *)v16 + 17);
      v68 = v28;
      v31 = _mm_loadu_si128((const __m128i *)(v16 + 5));
      HIDWORD(v71) = v30;
      LOBYTE(v30) = *((_BYTE *)v16 + 72);
      v69 = v31;
      v72 = v30;
      v32 = a1[1];
      if ( a1[2] < (unsigned __int64)(v32 + 1) )
      {
        v47 = qvector_reserve(a1, v26, v32 + 1, 144);
        v29 = v19 - v26;
        *a1 = v47;
        v19 = v47 + v19 - v26;
        v32 = a1[1];
      }
      memmove((void *)(v19 + 144), (const void *)v19, 144 * v32 - v29);
      v33 = _mm_load_si128(&v61);
      *(_QWORD *)(v19 + 64) = 0;
      *(__m128i *)v19 = v33;
      v34 = v62;
      v35 = _mm_loadu_si128(&v63);
      v62 = nullptr;
      *(__m128i *)(v19 + 24) = v35;
      *(_QWORD *)(v19 + 16) = v34;
      v36 = v64;
      v37 = _mm_load_si128(&v65);
      v64 = nullptr;
      *(_QWORD *)(v19 + 40) = v36;
      *(__m128i *)(v19 + 48) = v37;
      v63 = 0;
      v65 = 0;
      copy_tinfo_t(v19 + 64, &v66);
      v38 = v70;
      *(__m128i *)(v19 + 72) = _mm_loadu_si128(&v67);
      v39 = _mm_loadu_si128(&v68);
      *(_QWORD *)(v19 + 120) = v38;
      *(__m128i *)(v19 + 88) = v39;
      *(__m128i *)(v19 + 104) = _mm_loadu_si128(&v69);
      *(_QWORD *)(v19 + 128) = v71;
      *(_BYTE *)(v19 + 136) = v72;
      ++a1[1];
      clear_tinfo_t(&v66);
      if ( v64 )
      {
        v65.m128i_i64[0] = 0;
        qfree(v64);
      }
      if ( v62 )
      {
        v63.m128i_i64[0] = 0;
        qfree(v62);
      }
      goto LABEL_23;
    }
  }
  v5 = v56;
LABEL_38:
  a1[3] = (unsigned __int64)(*(_QWORD *)(v14 + 144 * v15 - 144) + *(_QWORD *)(v14 + 144 * v15 - 144 + 8) + 7LL) >> 3;
  if ( v5 )
  {
    v40 = v57;
    if ( (_QWORD)v57 )
    {
      v41 = 0;
      do
      {
        v42 = &v5[18 * v41];
        clear_tinfo_t(v42 + 8);
        v43 = v42[5];
        if ( v43 )
        {
          v42[6] = 0;
          qfree(v43);
        }
        v44 = v42[2];
        if ( v44 )
        {
          v42[3] = 0;
          qfree(v44);
        }
        ++v41;
        v5 = v56;
      }
      while ( v40 != v41 );
    }
LABEL_12:
    *(_QWORD *)&v57 = 0;
    qfree(v5);
  }
  return v73 - __readfsqword(0x28u);
}
