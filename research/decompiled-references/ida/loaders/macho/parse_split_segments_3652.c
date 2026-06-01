unsigned __int64 __fastcall sub_394B0(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(),
        __int64 (__fastcall *a4)(),
        __int64 a5,
        int a6)
{
  __int64 (__fastcall *v7)(); // rdx
  __int64 (__fastcall *v8)(); // rcx
  __int64 v9; // r8
  int v10; // r9d
  int v11; // eax
  const char *v12; // rax
  __int64 v13; // r9
  const char *v14; // rdx
  __int64 v15; // r8
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  char *v19; // rcx
  char *v20; // rsi
  size_t v21; // rbx
  void *v22; // rbp
  __int64 v23; // rdx
  const char *v24; // rsi
  __int64 v25; // rax
  char *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rbp
  const char *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  int v38; // r12d
  int v39; // rax^4
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  int v43; // ecx
  char *v44; // r8
  const char *v45; // rsi
  __int64 v46; // rdx
  size_t v47; // r15
  void *v48; // r14
  __int64 v49; // rdx
  char *v50; // rax
  __int64 v51; // rdx
  const char *v52; // rcx
  const char *v53; // rdx
  char *v54; // rdx
  __int64 v55; // rdx
  size_t v56; // r14
  void *v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // rbp
  const char *v63; // r12
  __int64 (__fastcall **v64)(); // rax
  __int128 v65; // rax
  unsigned __int64 v66; // rdi
  __int64 (__fastcall **v67)(); // rbp
  __m128i v68; // xmm0
  __int64 v69; // r14
  char *v70; // rax
  char *v71; // rax
  char *v72; // rdx
  unsigned __int64 v73; // rcx
  char *v74; // rax
  const char *v75; // r12
  unsigned int v76; // edx
  unsigned int v77; // eax
  __int64 v78; // rsi
  _DWORD *v79; // rax
  __int64 v80; // rax
  const char *v81; // rsi
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  __int64 (__fastcall **v84)(); // rbp
  __m128i v85; // xmm0
  __int64 v86; // rbx
  char *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  unsigned __int64 v91; // rdx
  __int64 (__fastcall **v92)(); // rbp
  __m128i v93; // xmm0
  __int64 v94; // rbx
  char *v95; // rax
  __m128i v96; // xmm0
  char *v97; // rax
  char *v98; // rax
  int v99; // eax
  int v100; // r8d
  int v101; // r9d
  char *v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rax
  __m128i v105; // [rsp+0h] [rbp-D0h] BYREF
  __int128 v106; // [rsp+10h] [rbp-C0h]
  void *src; // [rsp+28h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+30h] [rbp-A0h]
  const char *v109; // [rsp+48h] [rbp-88h] BYREF
  __int128 v110; // [rsp+50h] [rbp-80h]
  __int64 (__fastcall **v111)(); // [rsp+68h] [rbp-68h] BYREF
  __m128i v112; // [rsp+70h] [rbp-60h] BYREF
  __int16 v113; // [rsp+80h] [rbp-50h]
  unsigned __int64 v114; // [rsp+90h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  v105.m128i_i64[1] = 0;
  v111 = off_633A8;
  src = 0;
  v109 = 0;
  v112.m128i_i64[1] = (__int64)&v109;
  v113 = 256;
  v112.m128i_i64[0] = a2;
  v106 = 0;
  *(_OWORD *)n = 0;
  v110 = 0;
  sub_27280(a2, (__m128i *)&v111, a3, a4, a5, a6);
  v11 = *(_DWORD *)(a2 + 176);
  if ( v11 == 2 )
  {
    v112.m128i_i8[0] = 0;
    v111 = off_62C28;
    sub_27280(a2, (__m128i *)&v111, v7, v8, v9, v10);
    if ( v112.m128i_i8[0] )
      goto LABEL_3;
    v11 = *(_DWORD *)(a2 + 176);
  }
  if ( v11 == 11
    || (v11 == 2 || v11 == 12)
    && (v112.m128i_i8[0] = 0, v111 = off_62D68, sub_27280(a2, (__m128i *)&v111, v7, v8, v9, v10), v112.m128i_i8[0]) )
  {
LABEL_3:
    v12 = v109;
    v13 = a1[13692];
    v14 = &v109[16 * v110];
    v15 = *(unsigned int *)(*(_QWORD *)a1 + 4LL);
    if ( v109 == v14 )
      goto LABEL_10;
    while ( *(_DWORD *)v12 != 1 || !*((_DWORD *)v12 + 1) )
    {
      v12 += 16;
      if ( v14 == v12 )
        goto LABEL_10;
    }
    if ( (_BYTE)v13 && (_DWORD)v15 == 13 )
    {
      v20 = (char *)src;
      if ( n[1] <= 0xB )
      {
        src = (void *)qvector_reserve(&src, src, 12, 1);
        v20 = (char *)src;
      }
      n[0] = 12;
      qmemcpy(v20, "xnu_7195_m1", 11);
      *((_BYTE *)src + 11) = 0;
    }
    else
    {
LABEL_10:
      v16 = sub_22C10(a1, &v109, v14, *(_QWORD *)a1, v15, v13);
      if ( v16 || (v16 = sub_22BA0(a1, &v109, 0)) != 0 )
      {
        if ( v17 )
        {
          v19 = "arm";
          if ( (_BYTE)v18 )
            v19 = "arm64";
        }
        else
        {
          v19 = "x86";
          if ( (_BYTE)v18 )
            v19 = "x64";
        }
      }
      else if ( (_BYTE)v18 )
      {
        v16 = 7195;
        v19 = "arm64";
        if ( !v17 )
          v19 = "x64";
      }
      else
      {
        v16 = 4903;
        v19 = "arm";
        if ( !v17 )
          v19 = "x86";
      }
      v20 = "xnu_%d_%s";
      sub_35470((unsigned int)&src, (unsigned int)"xnu_%d_%s", v16, (_DWORD)v19, v17, v18);
    }
    v21 = n[0];
    v22 = 0;
    if ( n[0] )
    {
      v22 = (void *)qalloc_or_throw(n[0], v20, v14);
      memcpy(v22, src, v21);
    }
    v23 = v106;
    v24 = (const char *)v105.m128i_i64[1];
    if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)(v106 + 1) )
    {
      v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v106 + 1, 24);
      v23 = v106;
      v24 = (const char *)v105.m128i_i64[1];
    }
    v25 = 3 * v23;
    goto LABEL_21;
  }
  v38 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  if ( v38 == 15 )
  {
    v54 = "";
    if ( a1[13692] )
      v54 = "64";
    sub_35470((unsigned int)&src, (unsigned int)"macosx%s_sdk%02d", (_DWORD)v54, 14, v9, v10);
    v56 = n[0];
    v57 = 0;
    if ( n[0] )
    {
      v57 = (void *)qalloc_or_throw(n[0], "macosx%s_sdk%02d", v55);
      memcpy(v57, src, v56);
    }
    v58 = v106;
    v59 = v105.m128i_i64[1];
    if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)(v106 + 1) )
    {
      v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v106 + 1, 24);
      v59 = v105.m128i_i64[1];
      v58 = v106;
    }
    v60 = v59 + 24 * v58;
    *(_QWORD *)v60 = v57;
    *(__m128i *)(v60 + 8) = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
    *(_QWORD *)&v106 = v106 + 1;
    if ( a1[13692] )
    {
      v61 = 9;
      v111 = 0;
      v62 = 8;
      v112 = 0;
      v63 = "gnuunx64";
    }
    else
    {
      v61 = 7;
      v111 = 0;
      v62 = 6;
      v112 = 0;
      v63 = "gnuunx";
    }
    v64 = (__int64 (__fastcall **)())qvector_reserve(&v111, 0, v61, 1);
    v111 = v64;
    v112.m128i_i64[0] = v61;
    if ( (unsigned int)v62 >= 8 )
    {
      v73 = (unsigned __int64)(v64 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v64 = *(__int64 (__fastcall **)())v63;
      *(__int64 (__fastcall **)())((char *)v64 + v62 - 8) = *(__int64 (__fastcall **)())&v63[v62 - 8];
      v74 = (char *)v64 - v73;
      v75 = (const char *)(v63 - v74);
      if ( (((_DWORD)v62 + (_DWORD)v74) & 0xFFFFFFF8) >= 8 )
      {
        v76 = (v62 + (_DWORD)v74) & 0xFFFFFFF8;
        v77 = 0;
        do
        {
          v78 = v77;
          v77 += 8;
          *(_QWORD *)(v73 + v78) = *(_QWORD *)&v75[v78];
        }
        while ( v77 < v76 );
      }
    }
    else
    {
      *(_DWORD *)v64 = *(_DWORD *)v63;
      *(_DWORD *)((char *)v64 + (unsigned int)v62 - 4) = *(_DWORD *)&v63[(unsigned int)v62 - 4];
    }
    *((_BYTE *)v111 + v62) = 0;
    v65 = v106;
    v24 = (const char *)v105.m128i_i64[1];
    v66 = v106 + 1;
    if ( (unsigned __int64)&v111 < v105.m128i_i64[1]
      || (unsigned __int64)&v111 >= v105.m128i_i64[1] + 24LL * *((_QWORD *)&v106 + 1) )
    {
      if ( *((_QWORD *)&v106 + 1) < v66 )
      {
        v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v106 + 1, 24);
        v24 = (const char *)v105.m128i_i64[1];
        *(_QWORD *)&v65 = v106;
      }
      v27 = _mm_loadu_si128(&v112);
      v71 = (char *)&v24[24 * v65];
      *(_QWORD *)v71 = v111;
      *(__m128i *)(v71 + 8) = v27;
      *(_QWORD *)&v106 = v106 + 1;
    }
    else
    {
      v67 = v111;
      v68 = _mm_loadl_epi64(&v112);
      v111 = 0;
      v69 = v112.m128i_i64[1];
      v112 = 0;
      if ( *((_QWORD *)&v106 + 1) < v66 )
      {
        v105.m128i_i64[0] = v68.m128i_i64[0];
        v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v106 + 1, 24);
        v24 = (const char *)v105.m128i_i64[1];
        v68 = _mm_loadl_epi64(&v105);
        *(_QWORD *)&v65 = v106;
      }
      v70 = (char *)&v24[24 * v65];
      v27 = _mm_unpacklo_epi64(v68, (__m128i)(unsigned __int64)v69);
      *(_QWORD *)v70 = v67;
      *(__m128i *)(v70 + 8) = v27;
      *(_QWORD *)&v106 = v106 + 1;
      if ( v111 )
      {
        v112.m128i_i64[0] = 0;
        *(double *)v27.m128i_i64 = qfree(v111, v24, *((_QWORD *)&v65 + 1));
      }
    }
    if ( !a1[13692] )
    {
      v112 = 0;
      v111 = 0;
      v79 = (_DWORD *)qvector_reserve(&v111, 0, 8, 1);
      v111 = (__int64 (__fastcall **)())v79;
      v112.m128i_i64[0] = 8;
      *v79 = 1970828143;
      *(_DWORD *)((char *)v79 + 3) = 2020175477;
      *((_BYTE *)v111 + 7) = 0;
      v80 = v106;
      v81 = (const char *)v105.m128i_i64[1];
      v82 = *((_QWORD *)&v106 + 1);
      v83 = v106 + 1;
      if ( (unsigned __int64)&v111 < v105.m128i_i64[1]
        || (unsigned __int64)&v111 >= v105.m128i_i64[1] + 24LL * *((_QWORD *)&v106 + 1) )
      {
        if ( *((_QWORD *)&v106 + 1) < v83 )
        {
          v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v83, 24);
          v81 = (const char *)v105.m128i_i64[1];
          v80 = v106;
        }
        v96 = _mm_loadu_si128(&v112);
        v97 = (char *)&v81[24 * v80];
        *(_QWORD *)v97 = v111;
        *(__m128i *)(v97 + 8) = v96;
        *(_QWORD *)&v106 = v106 + 1;
      }
      else
      {
        v84 = v111;
        v85 = _mm_loadl_epi64(&v112);
        v111 = 0;
        v86 = v112.m128i_i64[1];
        v112 = 0;
        if ( *((_QWORD *)&v106 + 1) < v83 )
        {
          v105.m128i_i64[0] = v85.m128i_i64[0];
          v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v83, 24);
          v81 = (const char *)v105.m128i_i64[1];
          v85 = _mm_loadl_epi64(&v105);
          v80 = v106;
        }
        v87 = (char *)&v81[24 * v80];
        *(_QWORD *)v87 = v84;
        *(__m128i *)(v87 + 8) = _mm_unpacklo_epi64(v85, (__m128i)(unsigned __int64)v86);
        *(_QWORD *)&v106 = v106 + 1;
        if ( v111 )
        {
          v112.m128i_i64[0] = 0;
          qfree(v111, v81, v83, v82);
        }
      }
      v112 = 0;
      v111 = 0;
      v88 = qvector_reserve(&v111, 0, 7, 1);
      v111 = (__int64 (__fastcall **)())v88;
      v112.m128i_i64[0] = 7;
      *(_DWORD *)v88 = 1651663203;
      *(_WORD *)(v88 + 4) = 28271;
      *((_BYTE *)v111 + 6) = 0;
      v89 = v106;
      v24 = (const char *)v105.m128i_i64[1];
      v90 = *((_QWORD *)&v106 + 1);
      v91 = v106 + 1;
      if ( (unsigned __int64)&v111 < v105.m128i_i64[1]
        || (unsigned __int64)&v111 >= v105.m128i_i64[1] + 24LL * *((_QWORD *)&v106 + 1) )
      {
        if ( *((_QWORD *)&v106 + 1) < v91 )
        {
          v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v91, 24);
          v24 = (const char *)v105.m128i_i64[1];
          v89 = v106;
        }
        v27 = _mm_loadu_si128(&v112);
        v98 = (char *)&v24[24 * v89];
        *(_QWORD *)v98 = v111;
        *(__m128i *)(v98 + 8) = v27;
        v28 = v106 + 1;
        *(_QWORD *)&v106 = v106 + 1;
        goto LABEL_22;
      }
      v92 = v111;
      v93 = _mm_loadl_epi64(&v112);
      v111 = 0;
      v94 = v112.m128i_i64[1];
      v112 = 0;
      if ( *((_QWORD *)&v106 + 1) < v91 )
      {
        v105.m128i_i64[0] = v93.m128i_i64[0];
        v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v91, 24);
        v24 = (const char *)v105.m128i_i64[1];
        v93 = _mm_loadl_epi64(&v105);
        v89 = v106;
      }
      v95 = (char *)&v24[24 * v89];
      v27 = _mm_unpacklo_epi64(v93, (__m128i)(unsigned __int64)v94);
      *(_QWORD *)v95 = v92;
      *(__m128i *)(v95 + 8) = v27;
      v28 = v106 + 1;
      *(_QWORD *)&v106 = v106 + 1;
      if ( !v111 )
        goto LABEL_22;
      v112.m128i_i64[0] = 0;
      *(double *)v27.m128i_i64 = qfree(v111, v24, v91, v90);
    }
    v28 = v106;
    goto LABEL_22;
  }
  v39 = (unsigned __int64)sub_22D30(a1, &v109) >> 32;
  v43 = v40;
  if ( v39 == 10 )
  {
    v72 = "";
    if ( a1[13692] )
      v72 = "64";
    v45 = "macosx%s_sdk%02d";
    sub_35470((unsigned int)&src, (unsigned int)"macosx%s_sdk%02d", (_DWORD)v72, v43, v41, v42);
  }
  else
  {
    v44 = "x64";
    if ( v38 == 13 )
      v44 = "arm64";
    v45 = "macos%d_sdk%02d_%s";
    sub_35470((unsigned int)&src, (unsigned int)"macos%d_sdk%02d_%s", v39, v40, (_DWORD)v44, v42);
  }
  v47 = n[0];
  v48 = 0;
  if ( n[0] )
  {
    v48 = (void *)qalloc_or_throw(n[0], v45, v46);
    memcpy(v48, src, v47);
  }
  v49 = v106;
  v24 = (const char *)v105.m128i_i64[1];
  if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)(v106 + 1) )
  {
    v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v106 + 1, 24);
    v49 = v106;
    v24 = (const char *)v105.m128i_i64[1];
  }
  v50 = (char *)&v24[24 * v49];
  v27 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
  *(_QWORD *)v50 = v48;
  *(__m128i *)(v50 + 8) = v27;
  v51 = *(_QWORD *)a1;
  v28 = v106 + 1;
  *(_QWORD *)&v106 = v106 + 1;
  if ( *(_DWORD *)(v51 + 4) != 13 )
    goto LABEL_22;
  v52 = v109;
  v24 = &v109[16 * v110];
  if ( v109 == v24 )
  {
LABEL_122:
    v99 = sub_22F30(a1, &v109);
    v102 = "";
    if ( a1[13692] )
      v102 = "64";
    sub_35470((unsigned int)&src, (unsigned int)"iphoneos%s_sdk%02d", (_DWORD)v102, v99, v100, v101);
    v21 = n[0];
    v22 = 0;
    if ( n[0] )
    {
      v22 = (void *)qalloc_or_throw(n[0], "iphoneos%s_sdk%02d", v103);
      memcpy(v22, src, v21);
    }
    v104 = v106;
    v24 = (const char *)v105.m128i_i64[1];
    if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)(v106 + 1) )
    {
      v105.m128i_i64[1] = qvector_reserve(&v105.m128i_u64[1], v105.m128i_i64[1], v106 + 1, 24);
      v24 = (const char *)v105.m128i_i64[1];
      v104 = v106;
    }
    v25 = 3 * v104;
LABEL_21:
    v26 = (char *)&v24[8 * v25];
    v27 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
    *(_QWORD *)v26 = v22;
    *(__m128i *)(v26 + 8) = v27;
    v28 = v106 + 1;
    *(_QWORD *)&v106 = v106 + 1;
    goto LABEL_22;
  }
  v53 = v109;
  while ( *(_DWORD *)v53 != 1 || !*((_DWORD *)v53 + 1) )
  {
    v53 += 16;
    if ( v24 == v53 )
    {
      while ( *(_DWORD *)v52 != 10 || !*((_DWORD *)v52 + 1) )
      {
        v52 += 16;
        if ( v24 == v52 )
          goto LABEL_122;
      }
      break;
    }
  }
LABEL_22:
  v29 = v105.m128i_i64[1];
  v30 = v105.m128i_i64[1] + 24 * v28;
  if ( v105.m128i_i64[1] != v30 )
  {
    do
    {
      v31 = s1;
      if ( *(_QWORD *)(v29 + 8) )
        v31 = *(const char **)v29;
      v24 = 0;
      add_til(v31, 0);
      v29 += 24;
    }
    while ( v30 != v29 );
  }
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    *(double *)v27.m128i_i64 = qfree(v109, v24);
  }
  if ( src )
  {
    n[0] = 0;
    *(double *)v27.m128i_i64 = qfree(src, v24, *(double *)v27.m128i_i64);
  }
  v32 = v105.m128i_i64[1];
  if ( v105.m128i_i64[1] )
  {
    v33 = v106;
    if ( (_QWORD)v106 )
    {
      v34 = 0;
      do
      {
        v35 = (__int64 *)(v32 + 24 * v34);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          *(double *)v27.m128i_i64 = qfree(v36, v24, *(double *)v27.m128i_i64);
          v32 = v105.m128i_i64[1];
        }
        ++v34;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v106 = 0;
    qfree(v32, v24, *(double *)v27.m128i_i64);
  }
  return v114 - __readfsqword(0x28u);
}
