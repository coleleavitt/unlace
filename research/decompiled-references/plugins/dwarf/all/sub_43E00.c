unsigned __int64 __fastcall sub_43E00(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 (__fastcall *a7)(__m128i *, __m128i *, double, double))
{
  char *v7; // r15
  char *v8; // r13
  __int64 v9; // rbx
  char *v10; // r12
  unsigned __int64 v11; // rdx
  char *v12; // r14
  __int128 v13; // xmm1
  char *v14; // rbp
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rbp
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __m128i v23; // xmm0
  size_t v24; // rbp
  int v25; // eax
  __m128i v26; // xmm0
  size_t v27; // rbp
  char v28; // bp
  __int64 v29; // rbp
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // r14
  unsigned __int64 v33; // rbx
  __int128 v34; // xmm1
  __int64 v35; // rbp
  __m128i v36; // xmm0
  __int64 v37; // rdi
  unsigned __int64 v39; // rdx
  char *v40; // r14
  __int128 v41; // xmm1
  char *v42; // rbp
  __int64 v43; // rcx
  __m128i v44; // xmm0
  __int64 v45; // rdi
  unsigned __int64 v46; // rbp
  char *v47; // rbp
  char *v48; // rax
  __int64 v49; // r14
  __m128i v50; // xmm0
  __int64 v51; // rdi
  __m128i v52; // xmm0
  size_t v53; // r14
  int v54; // eax
  __m128i v55; // xmm0
  size_t v56; // r14
  char v57; // r14
  __int64 v58; // r14
  __m128i v59; // xmm0
  __int64 v60; // rdi
  void *v61; // rax
  const void *v62; // rsi
  void *v63; // rax
  const void *v64; // rsi
  void *v65; // rax
  const void *v66; // rsi
  void *v67; // rax
  const void *v68; // rsi
  _QWORD *v69; // rbp
  __int64 v70; // rax
  unsigned __int64 v71; // r12
  __int128 v72; // xmm1
  __int64 v73; // rax
  __int64 v74; // r13
  __m128i v75; // xmm0
  __int64 v76; // rdi
  __int64 v77; // rax
  unsigned __int64 v78; // r13
  __m128i *v79; // rbp
  __m128i v80; // xmm1
  __int8 *v81; // r12
  __int64 v82; // r14
  __m128i v83; // xmm0
  __int64 v84; // rdi
  __m128i v85; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v86; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v88; // [rsp+28h] [rbp-B0h]
  __m128i v89; // [rsp+30h] [rbp-A8h] BYREF
  void *v90; // [rsp+40h] [rbp-98h]
  __int128 v91; // [rsp+48h] [rbp-90h]
  int v92; // [rsp+58h] [rbp-80h]
  __m128i v93; // [rsp+60h] [rbp-78h] BYREF
  void *v94; // [rsp+70h] [rbp-68h]
  __int128 v95; // [rsp+78h] [rbp-60h]
  int v96; // [rsp+88h] [rbp-50h]
  unsigned __int64 v97; // [rsp+98h] [rbp-40h]

  v7 = a2;
  v8 = a1;
  v9 = a3;
  v97 = __readfsqword(0x28u);
  v10 = a6;
  if ( a4 > a5 )
  {
    v88 = 0xAAAAAAAAAAAAAAABLL * ((a3 - (__int64)a2) >> 4);
    if ( a3 - (__int64)a2 > 0 )
    {
      v39 = 0xAAAAAAAAAAAAAAABLL * ((a3 - (__int64)a2) >> 4);
      v40 = a2;
      v41 = 0;
      v42 = a6;
      do
      {
        *(_QWORD *)v42 = *(_QWORD *)v40;
        *((_QWORD *)v42 + 1) = *((_QWORD *)v40 + 1);
        v43 = *((_QWORD *)v40 + 2);
        v44 = _mm_loadu_si128((const __m128i *)(v40 + 24));
        *((_QWORD *)v40 + 2) = 0;
        *(_OWORD *)(v40 + 24) = v41;
        v45 = *((_QWORD *)v42 + 2);
        if ( v45 )
        {
          *((_QWORD *)v42 + 3) = 0;
          v87 = v43;
          v85.m128i_i64[0] = v39;
          v86 = v44;
          qfree(v45);
          v44 = _mm_load_si128(&v86);
          v43 = v87;
          v41 = 0;
          v39 = v85.m128i_i64[0];
        }
        *((_QWORD *)v42 + 2) = v43;
        v40 += 48;
        v42 += 48;
        *(__m128i *)(v42 - 24) = v44;
        *((_DWORD *)v42 - 2) = *((_DWORD *)v40 - 2);
        --v39;
      }
      while ( v39 );
      v46 = v88 - 1;
      if ( (__int64)(v88 - 1) < 0 )
        v46 = 0;
      v47 = &v10[48 * v46];
      v48 = v47 + 48;
      if ( a2 == v8 )
      {
        v77 = v48 - v10;
        v78 = 0xAAAAAAAAAAAAAAABLL * (v77 >> 4);
        if ( v77 > 0 )
        {
          v79 = (__m128i *)(v47 + 24);
          v80 = 0;
          do
          {
            v81 = &v79[-2].m128i_i8[8];
            v9 -= 48;
            *(_QWORD *)v9 = v79[-2].m128i_i64[1];
            *(_QWORD *)(v9 + 8) = v79[-1].m128i_i64[0];
            v82 = v79[-1].m128i_i64[1];
            v79[-1].m128i_i64[1] = 0;
            v83 = _mm_loadu_si128(v79);
            *v79 = v80;
            v84 = *(_QWORD *)(v9 + 16);
            if ( v84 )
            {
              *(_QWORD *)(v9 + 24) = 0;
              v85 = v83;
              qfree(v84);
              v83 = _mm_load_si128(&v85);
              v80 = 0;
            }
            *(_QWORD *)(v9 + 16) = v82;
            v79 -= 3;
            *(__m128i *)(v9 + 24) = v83;
            *(_DWORD *)(v9 + 40) = *((_DWORD *)v81 + 10);
            --v78;
          }
          while ( v78 );
        }
      }
      else if ( v10 != v48 )
      {
        do
        {
          v7 -= 48;
          while ( 1 )
          {
            v52 = _mm_loadu_si128((const __m128i *)v7);
            v53 = *((_QWORD *)v7 + 3);
            v90 = nullptr;
            v91 = 0;
            v89 = v52;
            if ( v53 )
            {
              v63 = (void *)qalloc_or_throw(v53);
              v64 = *((const void **)v7 + 2);
              *((_QWORD *)&v91 + 1) = v53;
              v90 = v63;
              memcpy(v63, v64, v53);
              *(_QWORD *)&v91 = v53;
            }
            v54 = *((_DWORD *)v7 + 10);
            v55 = _mm_loadu_si128((const __m128i *)v47);
            v94 = nullptr;
            v56 = *((_QWORD *)v47 + 3);
            v95 = 0;
            v92 = v54;
            v93 = v55;
            if ( v56 )
            {
              v61 = (void *)qalloc_or_throw(v56);
              v62 = *((const void **)v47 + 2);
              v94 = v61;
              *((_QWORD *)&v95 + 1) = v56;
              memcpy(v61, v62, v56);
              *(_QWORD *)&v95 = v56;
            }
            v96 = *((_DWORD *)v47 + 10);
            v57 = a7(&v93, &v89, *(double *)v55.m128i_i64, *(double *)&v41);
            if ( v94 )
            {
              *(_QWORD *)&v95 = 0;
              qfree(v94);
            }
            if ( v90 )
            {
              *(_QWORD *)&v91 = 0;
              qfree(v90);
            }
            v9 -= 48;
            if ( v57 )
              break;
            *(_QWORD *)v9 = *(_QWORD *)v47;
            *(_QWORD *)(v9 + 8) = *((_QWORD *)v47 + 1);
            v58 = *((_QWORD *)v47 + 2);
            v59 = _mm_loadu_si128((const __m128i *)(v47 + 24));
            *((_QWORD *)v47 + 2) = 0;
            *(_OWORD *)(v47 + 24) = 0;
            v60 = *(_QWORD *)(v9 + 16);
            if ( v60 )
            {
              *(_QWORD *)(v9 + 24) = 0;
              v85 = v59;
              qfree(v60);
              v59 = _mm_load_si128(&v85);
            }
            *(_QWORD *)(v9 + 16) = v58;
            *(__m128i *)(v9 + 24) = v59;
            *(_DWORD *)(v9 + 40) = *((_DWORD *)v47 + 10);
            if ( v10 == v47 )
              return v97 - __readfsqword(0x28u);
            v47 -= 48;
          }
          *(_QWORD *)v9 = *(_QWORD *)v7;
          *(_QWORD *)(v9 + 8) = *((_QWORD *)v7 + 1);
          v49 = *((_QWORD *)v7 + 2);
          v50 = _mm_loadu_si128((const __m128i *)(v7 + 24));
          *((_QWORD *)v7 + 2) = 0;
          *(_OWORD *)(v7 + 24) = 0;
          v51 = *(_QWORD *)(v9 + 16);
          if ( v51 )
          {
            *(_QWORD *)(v9 + 24) = 0;
            v85 = v50;
            qfree(v51);
            v50 = _mm_load_si128(&v85);
          }
          *(_QWORD *)(v9 + 16) = v49;
          *(__m128i *)(v9 + 24) = v50;
          *(_DWORD *)(v9 + 40) = *((_DWORD *)v7 + 10);
        }
        while ( v8 != v7 );
        v69 = v47 + 48;
        v70 = (char *)v69 - v10;
        v71 = 0xAAAAAAAAAAAAAAABLL * (((char *)v69 - v10) >> 4);
        if ( v70 > 0 )
        {
          v72 = 0;
          do
          {
            v73 = *(v69 - 6);
            v69 -= 6;
            v9 -= 48;
            *(_QWORD *)v9 = v73;
            *(_QWORD *)(v9 + 8) = v69[1];
            v74 = v69[2];
            v75 = _mm_loadu_si128((const __m128i *)(v69 + 3));
            v69[2] = 0;
            *(_OWORD *)(v69 + 3) = v72;
            v76 = *(_QWORD *)(v9 + 16);
            if ( v76 )
            {
              *(_QWORD *)(v9 + 24) = 0;
              v85 = v75;
              qfree(v76);
              v75 = _mm_load_si128(&v85);
              v72 = 0;
            }
            *(_QWORD *)(v9 + 16) = v74;
            *(__m128i *)(v9 + 24) = v75;
            *(_DWORD *)(v9 + 40) = *((_DWORD *)v69 + 10);
            --v71;
          }
          while ( v71 );
        }
      }
    }
  }
  else
  {
    v88 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 4);
    if ( a2 - a1 > 0 )
    {
      v11 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 4);
      v12 = a1;
      v13 = 0;
      v14 = a6;
      do
      {
        *(_QWORD *)v14 = *(_QWORD *)v12;
        *((_QWORD *)v14 + 1) = *((_QWORD *)v12 + 1);
        v15 = *((_QWORD *)v12 + 2);
        v16 = _mm_loadu_si128((const __m128i *)(v12 + 24));
        *((_QWORD *)v12 + 2) = 0;
        *(_OWORD *)(v12 + 24) = v13;
        v17 = *((_QWORD *)v14 + 2);
        if ( v17 )
        {
          *((_QWORD *)v14 + 3) = 0;
          v87 = v15;
          v85.m128i_i64[0] = v11;
          v86 = v16;
          qfree(v17);
          v16 = _mm_load_si128(&v86);
          v15 = v87;
          v13 = 0;
          v11 = v85.m128i_i64[0];
        }
        *((_QWORD *)v14 + 2) = v15;
        v12 += 48;
        v14 += 48;
        *(__m128i *)(v14 - 24) = v16;
        *((_DWORD *)v14 - 2) = *((_DWORD *)v12 - 2);
        --v11;
      }
      while ( v11 );
      v18 = v88 - 1;
      if ( (__int64)(v88 - 1) < 0 )
        v18 = 0;
      v19 = (__int64)&v10[48 * v18 + 48];
      if ( v10 != (char *)v19 && a2 != (char *)v9 )
      {
        do
        {
          v23 = _mm_loadu_si128((const __m128i *)v10);
          v24 = *((_QWORD *)v10 + 3);
          v90 = nullptr;
          v91 = 0;
          v89 = v23;
          if ( v24 )
          {
            v67 = (void *)qalloc_or_throw(v24);
            v68 = *((const void **)v10 + 2);
            *((_QWORD *)&v91 + 1) = v24;
            v90 = v67;
            memcpy(v67, v68, v24);
            *(_QWORD *)&v91 = v24;
          }
          v25 = *((_DWORD *)v10 + 10);
          v26 = _mm_loadu_si128((const __m128i *)v7);
          v94 = nullptr;
          v27 = *((_QWORD *)v7 + 3);
          v95 = 0;
          v92 = v25;
          v93 = v26;
          if ( v27 )
          {
            v65 = (void *)qalloc_or_throw(v27);
            v66 = *((const void **)v7 + 2);
            v94 = v65;
            *((_QWORD *)&v95 + 1) = v27;
            memcpy(v65, v66, v27);
            *(_QWORD *)&v95 = v27;
          }
          v96 = *((_DWORD *)v7 + 10);
          v28 = a7(&v93, &v89, *(double *)v26.m128i_i64, *(double *)&v13);
          if ( v94 )
          {
            *(_QWORD *)&v95 = 0;
            qfree(v94);
          }
          if ( v90 )
          {
            *(_QWORD *)&v91 = 0;
            qfree(v90);
          }
          if ( v28 )
          {
            *(_QWORD *)v8 = *(_QWORD *)v7;
            *((_QWORD *)v8 + 1) = *((_QWORD *)v7 + 1);
            v20 = *((_QWORD *)v7 + 2);
            v21 = _mm_loadu_si128((const __m128i *)(v7 + 24));
            *((_QWORD *)v7 + 2) = 0;
            *(_OWORD *)(v7 + 24) = 0;
            v22 = *((_QWORD *)v8 + 2);
            if ( v22 )
            {
              *((_QWORD *)v8 + 3) = 0;
              v85 = v21;
              qfree(v22);
              v21 = _mm_load_si128(&v85);
            }
            *((_QWORD *)v8 + 2) = v20;
            v7 += 48;
            v8 += 48;
            *(__m128i *)(v8 - 24) = v21;
            *((_DWORD *)v8 - 2) = *((_DWORD *)v7 - 2);
            if ( v10 == (char *)v19 )
              break;
          }
          else
          {
            *(_QWORD *)v8 = *(_QWORD *)v10;
            *((_QWORD *)v8 + 1) = *((_QWORD *)v10 + 1);
            v29 = *((_QWORD *)v10 + 2);
            *((_QWORD *)v10 + 2) = 0;
            v30 = _mm_loadu_si128((const __m128i *)(v10 + 24));
            *(_OWORD *)(v10 + 24) = 0;
            v31 = *((_QWORD *)v8 + 2);
            if ( v31 )
            {
              *((_QWORD *)v8 + 3) = 0;
              v85 = v30;
              qfree(v31);
              v30 = _mm_load_si128(&v85);
            }
            *((_QWORD *)v8 + 2) = v29;
            v10 += 48;
            v8 += 48;
            *(__m128i *)(v8 - 24) = v30;
            *((_DWORD *)v8 - 2) = *((_DWORD *)v10 - 2);
            if ( v10 == (char *)v19 )
              break;
          }
        }
        while ( (char *)v9 != v7 );
      }
      if ( (char *)v19 != v10 )
      {
        v32 = v19 - (_QWORD)v10;
        v33 = 0xAAAAAAAAAAAAAAABLL * (v32 >> 4);
        if ( v32 > 0 )
        {
          v34 = 0;
          do
          {
            *(_QWORD *)v8 = *(_QWORD *)v10;
            *((_QWORD *)v8 + 1) = *((_QWORD *)v10 + 1);
            v35 = *((_QWORD *)v10 + 2);
            *((_QWORD *)v10 + 2) = 0;
            v36 = _mm_loadu_si128((const __m128i *)(v10 + 24));
            *(_OWORD *)(v10 + 24) = v34;
            v37 = *((_QWORD *)v8 + 2);
            if ( v37 )
            {
              *((_QWORD *)v8 + 3) = 0;
              v85 = v36;
              qfree(v37);
              v36 = _mm_load_si128(&v85);
              v34 = 0;
            }
            *((_QWORD *)v8 + 2) = v35;
            v10 += 48;
            v8 += 48;
            *(__m128i *)(v8 - 24) = v36;
            *((_DWORD *)v8 - 2) = *((_DWORD *)v10 - 2);
            --v33;
          }
          while ( v33 );
        }
      }
    }
  }
  return v97 - __readfsqword(0x28u);
}
