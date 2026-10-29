unsigned __int64 __fastcall sub_43D80(__int64 a1, __int64 *a2, __int64 *a3)
{
  size_t v5; // r15
  __int64 v6; // r12
  char *v7; // r13
  _DWORD *v8; // rax
  unsigned __int64 v9; // rcx
  char *v10; // rax
  char *v11; // r13
  unsigned int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i *v21; // rax
  void *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i *v29; // rax
  void *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 i; // r12
  const char *v38; // r13
  size_t v39; // rbp
  size_t v40; // rbp
  void *v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  void *v45; // rdi
  void *v47; // r12
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rax
  void *v51; // rdi
  __int64 v52; // rax
  char v53; // al
  __int16 v54; // ax
  size_t v55; // r13
  _BYTE *v56; // rsi
  size_t v57; // rbp
  size_t v58; // r8
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  __int64 v61; // rax
  void *v62; // rdi
  __m128i v63; // xmm0
  __m128i v64; // xmm1
  __int64 v65; // rax
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __m128i v73; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v76; // [rsp+28h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag() || (getinf() & 0x1006) == 0x1002 )
  {
    v5 = 5;
    src = nullptr;
    v6 = 4;
    *(_OWORD *)n = 0;
    v7 = "eabi";
  }
  else
  {
    v5 = 24;
    src = nullptr;
    v6 = 23;
    *(_OWORD *)n = 0;
    v7 = "eabi-hard_float-8align4";
  }
  v8 = (_DWORD *)qvector_reserve();
  src = v8;
  n[0] = v5;
  if ( (unsigned int)v6 < 8 )
  {
    *v8 = *(_DWORD *)v7;
    *(_DWORD *)((char *)v8 + (unsigned int)v6 - 4) = *(_DWORD *)&v7[(unsigned int)v6 - 4];
  }
  else
  {
    v9 = (unsigned __int64)(v8 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v8 = *(_QWORD *)v7;
    *(_QWORD *)((char *)v8 + v6 - 8) = *(_QWORD *)&v7[v6 - 8];
    v10 = (char *)v8 - v9;
    v11 = (char *)(v7 - v10);
    if ( (((_DWORD)v6 + (_DWORD)v10) & 0xFFFFFFF8) >= 8 )
    {
      v12 = (v6 + (_DWORD)v10) & 0xFFFFFFF8;
      v13 = 0;
      do
      {
        v14 = v13;
        v13 += 8;
        *(_QWORD *)(v9 + v14) = *(_QWORD *)&v11[v14];
      }
      while ( v13 < v12 );
    }
  }
  *((_BYTE *)src + v6) = 0;
  v15 = a2[1];
  v16 = *a2;
  v17 = a2[2];
  v18 = v15 + 1;
  if ( (unsigned __int64)&src < *a2 || (unsigned __int64)&src >= v16 + 24 * v17 )
  {
    if ( v17 < v18 )
    {
      v67 = qvector_reserve();
      *a2 = v67;
      v16 = v67;
      v15 = a2[1];
    }
    v19 = _mm_loadu_si128((const __m128i *)n);
    v20 = v16 + 24 * v15;
    *(_QWORD *)v20 = src;
    *(__m128i *)(v20 + 8) = v19;
    ++a2[1];
  }
  else
  {
    v47 = src;
    v48 = _mm_loadl_epi64((const __m128i *)n);
    src = nullptr;
    v49 = _mm_loadl_epi64((const __m128i *)&n[1]);
    *(_OWORD *)n = 0;
    if ( v17 < v18 )
    {
      v73.m128i_i64[1] = v49.m128i_i64[0];
      v73.m128i_i64[0] = v48.m128i_i64[0];
      v71 = qvector_reserve();
      *a2 = v71;
      v16 = v71;
      v15 = a2[1];
      v49 = _mm_loadl_epi64((const __m128i *)&v73.m128i_u64[1]);
      v48 = _mm_loadl_epi64(&v73);
    }
    v50 = v16 + 24 * v15;
    *(_QWORD *)v50 = v47;
    *(__m128i *)(v50 + 8) = _mm_unpacklo_epi64(v48, v49);
    v51 = src;
    ++a2[1];
    if ( v51 )
    {
      n[0] = 0;
      qfree();
    }
  }
  *(_OWORD *)n = 0;
  src = nullptr;
  v21 = (__m128i *)qvector_reserve();
  src = v21;
  n[0] = 79;
  *v21 = _mm_load_si128((const __m128i *)&xmmword_89570);
  v21[1] = _mm_load_si128((const __m128i *)&xmmword_89580);
  v21[2] = _mm_load_si128((const __m128i *)&xmmword_89590);
  v21[3] = _mm_load_si128((const __m128i *)&xmmword_895A0);
  *(__m128i *)((char *)v21 + 62) = _mm_load_si128((const __m128i *)&xmmword_895B0);
  v22 = src;
  *((_BYTE *)src + 78) = 0;
  v23 = a3[1];
  v24 = *a3;
  v25 = a3[2];
  v26 = v23 + 1;
  if ( (unsigned __int64)&src >= *a3 && (unsigned __int64)&src < v24 + 24 * v25 )
  {
    v63 = _mm_loadl_epi64((const __m128i *)n);
    v64 = _mm_loadl_epi64((const __m128i *)&n[1]);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v25 < v26 )
    {
      v73.m128i_i64[1] = v64.m128i_i64[0];
      v73.m128i_i64[0] = v63.m128i_i64[0];
      v70 = qvector_reserve();
      *a3 = v70;
      v24 = v70;
      v23 = a3[1];
      v64 = _mm_loadl_epi64((const __m128i *)&v73.m128i_u64[1]);
      v63 = _mm_loadl_epi64(&v73);
    }
    v65 = v24 + 24 * v23;
    *(_QWORD *)v65 = v22;
    *(__m128i *)(v65 + 8) = _mm_unpacklo_epi64(v63, v64);
    v66 = src;
    ++a3[1];
    if ( v66 )
    {
      n[0] = 0;
      qfree();
    }
  }
  else
  {
    if ( v25 < v26 )
    {
      v69 = qvector_reserve();
      *a3 = v69;
      v24 = v69;
      v22 = src;
      v23 = a3[1];
    }
    v27 = _mm_loadu_si128((const __m128i *)n);
    v28 = v24 + 24 * v23;
    *(_QWORD *)v28 = v22;
    *(__m128i *)(v28 + 8) = v27;
    ++a3[1];
  }
  *(_OWORD *)n = 0;
  src = nullptr;
  v29 = (__m128i *)qvector_reserve();
  src = v29;
  n[0] = 88;
  *v29 = _mm_load_si128((const __m128i *)&xmmword_895C0);
  v29[1] = _mm_load_si128((const __m128i *)&xmmword_895D0);
  v29[2] = _mm_load_si128((const __m128i *)&xmmword_895E0);
  v29[3] = _mm_load_si128((const __m128i *)&xmmword_895F0);
  v29[4] = _mm_load_si128((const __m128i *)&xmmword_89600);
  *(__int64 *)((char *)&v29[4].m128i_i64[1] + 7) = 0x7374637572747320LL;
  v30 = src;
  *((_BYTE *)src + 87) = 0;
  v31 = a3[1];
  v32 = *a3;
  v33 = a3[2];
  v34 = v31 + 1;
  if ( (unsigned __int64)&src >= *a3 && (unsigned __int64)&src < v32 + 24 * v33 )
  {
    v59 = _mm_loadl_epi64((const __m128i *)n);
    v60 = _mm_loadl_epi64((const __m128i *)&n[1]);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v33 < v34 )
    {
      v73.m128i_i64[1] = v60.m128i_i64[0];
      v73.m128i_i64[0] = v59.m128i_i64[0];
      v72 = qvector_reserve();
      *a3 = v72;
      v32 = v72;
      v31 = a3[1];
      v60 = _mm_loadl_epi64((const __m128i *)&v73.m128i_u64[1]);
      v59 = _mm_loadl_epi64(&v73);
    }
    v61 = v32 + 24 * v31;
    *(_QWORD *)v61 = v30;
    *(__m128i *)(v61 + 8) = _mm_unpacklo_epi64(v59, v60);
    v62 = src;
    ++a3[1];
    if ( v62 )
    {
      n[0] = 0;
      qfree();
    }
  }
  else
  {
    if ( v33 < v34 )
    {
      v68 = qvector_reserve();
      *a3 = v68;
      v32 = v68;
      v30 = src;
      v31 = a3[1];
    }
    v35 = _mm_loadu_si128((const __m128i *)n);
    v36 = v32 + 24 * v31;
    *(_QWORD *)v36 = v30;
    *(__m128i *)(v36 + 8) = v35;
    ++a3[1];
  }
  for ( i = 1; i != 6; ++i )
  {
    v38 = (const char *)*(&off_A19A0 + i);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v38 )
    {
      v39 = strlen(v38);
      v73.m128i_i64[0] = v39 + 1;
      src = (void *)qvector_reserve();
      n[0] = v73.m128i_i64[0];
      memmove(src, v38, v39);
      *((_BYTE *)src + v39) = 0;
    }
    if ( i != 3 )
      goto LABEL_25;
    v53 = getinf_flag();
    v40 = n[0];
    if ( !v53 )
    {
      v54 = getinf();
      v55 = n[0];
      v40 = n[0];
      if ( (v54 & 0x1006) != 0x1002 )
      {
        if ( n[0] )
        {
          v58 = n[0] + 7;
          v57 = n[0] + 8;
          v56 = src;
          v55 = n[0] - 1;
          if ( n[1] >= n[0] + 8 )
            goto LABEL_44;
        }
        else
        {
          v56 = src;
          v57 = 9;
          v58 = 8;
          if ( n[1] >= 9 )
          {
LABEL_44:
            n[0] = v57;
            v56[v58] = 0;
            *(_QWORD *)((char *)src + v55) = 0x346E67696C61382DLL;
LABEL_25:
            v40 = n[0];
            goto LABEL_26;
          }
        }
        v73.m128i_i64[0] = v58;
        src = (void *)qvector_reserve();
        v58 = v73.m128i_i64[0];
        v56 = src;
        goto LABEL_44;
      }
    }
LABEL_26:
    v41 = nullptr;
    if ( v40 )
    {
      v41 = (void *)qalloc_or_throw();
      memcpy(v41, src, v40);
    }
    v42 = a2[1];
    v43 = *a2;
    if ( a2[2] < (unsigned __int64)(v42 + 1) )
    {
      v52 = qvector_reserve();
      *a2 = v52;
      v42 = a2[1];
      v43 = v52;
    }
    v44 = v43 + 24 * v42;
    *(_QWORD *)v44 = v41;
    *(__m128i *)(v44 + 8) = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
    v45 = src;
    ++a2[1];
    if ( v45 )
    {
      n[0] = 0;
      qfree();
    }
  }
  return v76 - __readfsqword(0x28u);
}

