__int64 __fastcall sub_99890(__int64 a1, __int64 *a2, char *a3, unsigned int a4, __int64 a5, char *a6)
{
  unsigned int v9; // r13d
  size_t v11; // rax
  __int64 v12; // r13
  size_t v13; // r15
  char *v14; // rsi
  __int64 v15; // rdx
  char *v16; // rdi
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  char *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  void *v22; // rdi
  __int64 v23; // r14
  __int64 v24; // r15
  char *v25; // rdx
  char *v26; // rax
  void *v27; // rdi
  char *v28; // rdi
  char **v29; // r15
  unsigned __int64 v30; // r9
  size_t v31; // r10
  __m128i v32; // xmm0
  char *v33; // rax
  __int64 v34; // r15
  __int64 v35; // r14
  char *v36; // rdx
  char *v37; // rax
  void *v38; // rdi
  char *v39; // rdx
  __int64 v40; // r15
  __int64 v41; // r14
  char *v42; // rax
  void *v43; // rdi
  __int64 (__fastcall *v44)(__int64 *); // rax
  __int64 v45; // rax
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // r14
  size_t v50; // rax
  size_t v51; // r13
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  void *v55; // r13
  __m128i v56; // xmm0
  void *v57; // rdi
  void *v58; // rdi
  const char *v59; // rdx
  void *v60; // r15
  __m128i v61; // xmm0
  void *v62; // rdi
  void *v63; // rdi
  void *v64; // rdi
  size_t v65; // r15
  size_t v66; // rax
  size_t v67; // r15
  __int64 *v68; // rax
  const char *v69; // rcx
  void *v70; // r15
  __m128i v71; // xmm0
  void *v72; // rdi
  void *v73; // rdi
  void *v74; // rdi
  const char *v75; // rcx
  void *v76; // r13
  __m128i v77; // xmm1
  void *v78; // rdi
  void *v79; // rdi
  size_t v80; // rax
  size_t v81; // rbp
  const char *v82; // rbp
  __int64 v83; // r13
  __int64 v84; // rax
  const char *v85; // rbx
  const char *v86; // rdi
  unsigned __int32 v87; // r15d
  char *v88; // r13
  __int64 v89; // rbp
  char *v90; // rsi
  char *v91; // r11
  char *v92; // rdi
  __int64 v93; // rax
  void *v94; // rdi
  size_t v95; // r13
  void *v96; // r14
  __m128i v97; // xmm0
  __m128i v98; // xmm1
  char *v99; // rax
  __int64 v100; // rax
  char *v101; // rdx
  void *v102; // rdi
  size_t v103; // r13
  __int64 v104; // rax
  __m128i v106; // [rsp+10h] [rbp-1B8h] BYREF
  char *s; // [rsp+20h] [rbp-1A8h]
  __m128i v108; // [rsp+28h] [rbp-1A0h] BYREF
  void **v109; // [rsp+38h] [rbp-190h] BYREF
  __m128i v110; // [rsp+40h] [rbp-188h] BYREF
  size_t v111; // [rsp+50h] [rbp-178h]
  char *v112; // [rsp+58h] [rbp-170h]
  void *v113; // [rsp+60h] [rbp-168h] BYREF
  __int128 v114; // [rsp+68h] [rbp-160h]
  void *v115; // [rsp+80h] [rbp-148h] BYREF
  __int128 v116; // [rsp+88h] [rbp-140h]
  void *v117; // [rsp+A0h] [rbp-128h] BYREF
  __int128 v118; // [rsp+A8h] [rbp-120h]
  void *ptr; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v120; // [rsp+C8h] [rbp-100h] BYREF
  char *s1; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v122; // [rsp+E8h] [rbp-E0h]
  __m128i v123; // [rsp+F8h] [rbp-D0h] BYREF
  char *v124; // [rsp+108h] [rbp-C0h]
  char *v125; // [rsp+110h] [rbp-B8h]
  __m128i v126; // [rsp+118h] [rbp-B0h]
  char v127; // [rsp+128h] [rbp-A0h]
  void *v128; // [rsp+130h] [rbp-98h] BYREF
  __int128 v129; // [rsp+138h] [rbp-90h]
  __int128 v130; // [rsp+148h] [rbp-80h]
  __int64 v131; // [rsp+158h] [rbp-70h]
  __int64 v132; // [rsp+160h] [rbp-68h]
  __int128 v133; // [rsp+168h] [rbp-60h]
  char v134; // [rsp+178h] [rbp-50h]
  unsigned __int64 v135; // [rsp+188h] [rbp-40h]

  v106.m128i_i64[0] = a5;
  s = a6;
  v135 = __readfsqword(0x28u);
  v9 = sub_B6920(a3);
  if ( v9 )
    return v9;
  s1 = nullptr;
  v123 = 0;
  v124 = nullptr;
  v125 = nullptr;
  v127 = 0;
  v113 = nullptr;
  v115 = nullptr;
  v117 = nullptr;
  ptr = nullptr;
  v122 = 0;
  v126 = 0;
  v114 = 0;
  v116 = 0;
  v118 = 0;
  v120 = 0;
  if ( !a3 )
  {
    v14 = nullptr;
    v17 = 1;
    goto LABEL_60;
  }
  v11 = strlen(a3);
  v12 = v11 + 1;
  v108.m128i_i64[0] = (__int64)&ptr;
  v13 = v11;
  ptr = (void *)sub_1987B0(&ptr, 0, v11 + 1, 1);
  v120.m128i_i64[0] = v12;
  memmove(ptr, a3, v13);
  *((_BYTE *)ptr + v13) = 0;
  v14 = (char *)v117;
  v15 = v118;
  v16 = (char *)v117;
  v17 = v118 + 1;
  if ( &ptr < v117 || v108.m128i_i64[0] >= (unsigned __int64)v117 + 24 * *((_QWORD *)&v118 + 1) )
  {
    if ( *((_QWORD *)&v118 + 1) >= v17 )
    {
      v108.m128i_i64[1] = (__int64)&v117;
LABEL_7:
      v18 = _mm_loadu_si128(&v120);
      v19 = &v16[24 * v15];
      *(_QWORD *)v19 = ptr;
      *(__m128i *)(v19 + 8) = v18;
      *(_QWORD *)&v118 = v118 + 1;
      goto LABEL_8;
    }
LABEL_60:
    v108.m128i_i64[1] = (__int64)&v117;
    v117 = (void *)sub_1987B0(&v117, v14, v17, 24);
    v15 = v118;
    v16 = (char *)v117;
    goto LABEL_7;
  }
  v96 = ptr;
  v97 = _mm_loadl_epi64(&v120);
  ptr = nullptr;
  v98 = _mm_loadl_epi64((const __m128i *)&v120.m128i_u64[1]);
  v120 = 0;
  if ( *((_QWORD *)&v118 + 1) < v17 )
  {
    v109 = (void **)v98.m128i_i64[0];
    v108.m128i_i64[1] = (__int64)&v117;
    v108.m128i_i64[0] = v97.m128i_i64[0];
    v117 = (void *)sub_1987B0(&v117, v117, v118 + 1, 24);
    v15 = v118;
    v14 = (char *)v117;
    v98 = _mm_loadl_epi64((const __m128i *)&v109);
    v97 = _mm_loadl_epi64(&v108);
  }
  else
  {
    v108.m128i_i64[1] = (__int64)&v117;
  }
  v99 = &v14[24 * v15];
  *(_QWORD *)v99 = v96;
  *(__m128i *)(v99 + 8) = _mm_unpacklo_epi64(v97, v98);
  *(_QWORD *)&v118 = v118 + 1;
  if ( ptr )
  {
    v120.m128i_i64[0] = 0;
    j__free(ptr);
  }
LABEL_8:
  v109 = &v115;
  v20 = *(_QWORD *)a1;
  v108.m128i_i64[0] = (__int64)&v113;
  v21 = (*(__int64 (__fastcall **)(__int64, void **, void **, __int64, __int64, __int64))(v20 + 208))(
          a1,
          &v113,
          &v115,
          v108.m128i_i64[1],
          4294967293LL,
          17);
  v22 = v117;
  v9 = v21;
  if ( v117 )
  {
    v23 = v118;
    if ( (_QWORD)v118 )
    {
      v24 = 0;
      v25 = (char *)v117;
      do
      {
        v26 = &v25[24 * v24];
        v27 = *(void **)v26;
        if ( *(_QWORD *)v26 )
        {
          *((_QWORD *)v26 + 1) = 0;
          j__free(v27);
          v25 = (char *)v117;
        }
        ++v24;
      }
      while ( v23 != v24 );
      v22 = v25;
    }
    *(_QWORD *)&v118 = 0;
    j__free(v22);
  }
  v28 = (char *)v115;
  if ( v9 )
  {
    if ( !v115 )
    {
      v39 = (char *)v113;
      if ( !v113 )
        goto LABEL_57;
      v40 = v114;
      if ( !(_QWORD)v114 )
      {
        j__free(v113);
        goto LABEL_57;
      }
      goto LABEL_33;
    }
  }
  else
  {
    if ( !(_QWORD)v116 )
    {
      if ( v115 )
        j__free(v115);
      v39 = (char *)v113;
      if ( v113 )
      {
        v40 = v114;
        v9 = 43;
        if ( (_QWORD)v114 )
          goto LABEL_33;
        j__free(v113);
      }
      v9 = 43;
      goto LABEL_57;
    }
    v29 = (char **)((char *)v115 + 80 * v116 - 80);
    if ( v29 != &s1 )
    {
      v30 = (unsigned __int64)v29[1];
      if ( v30 && (v31 = v30 - 1, v30 != 1) )
      {
        v91 = *v29;
        v92 = s1;
        if ( *((_QWORD *)&v122 + 1) < v30 )
        {
          v101 = v29[1];
          v112 = *v29;
          v111 = v30 - 1;
          v110.m128i_i64[0] = v30;
          s1 = (char *)sub_1987B0(&s1, s1, v101, 1);
          v91 = v112;
          v92 = s1;
          v31 = v111;
          v30 = v110.m128i_i64[0];
        }
        v108.m128i_i64[0] = v30;
        *(_QWORD *)&v122 = v30;
        memmove(v92, v91, v31);
        s1[v108.m128i_i64[0] - 1] = 0;
        v28 = (char *)v115;
      }
      else
      {
        *(_QWORD *)&v122 = 0;
      }
    }
    if ( &v123 != (__m128i *)(v29 + 3) )
      v123 = _mm_loadu_si128((const __m128i *)(v29 + 3));
    v32 = _mm_loadu_si128((const __m128i *)(v29 + 7));
    v124 = v29[5];
    v33 = v29[6];
    v126 = v32;
    v125 = v33;
    v127 = *((_BYTE *)v29 + 72);
    if ( !v28 )
    {
      v39 = (char *)v113;
      if ( !v113 )
        goto LABEL_39;
      v40 = v114;
      if ( !(_QWORD)v114 )
      {
        j__free(v113);
        goto LABEL_39;
      }
      goto LABEL_33;
    }
  }
  v34 = v116;
  if ( (_QWORD)v116 )
  {
    v35 = 0;
    v36 = v28;
    do
    {
      v37 = &v36[80 * v35];
      v38 = *(void **)v37;
      if ( *(_QWORD *)v37 )
      {
        *((_QWORD *)v37 + 1) = 0;
        j__free(v38);
        v36 = (char *)v115;
      }
      ++v35;
    }
    while ( v34 != v35 );
    v28 = v36;
  }
  *(_QWORD *)&v116 = 0;
  j__free(v28);
  v39 = (char *)v113;
  if ( v113 )
  {
    v40 = v114;
    if ( !(_QWORD)v114 )
    {
LABEL_37:
      *(_QWORD *)&v114 = 0;
      j__free(v39);
      goto LABEL_38;
    }
LABEL_33:
    v41 = 0;
    do
    {
      v42 = &v39[32 * v41];
      v43 = *((void **)v42 + 1);
      if ( v43 )
      {
        *((_QWORD *)v42 + 2) = 0;
        j__free(v43);
        v39 = (char *)v113;
      }
      ++v41;
    }
    while ( v41 != v40 );
    goto LABEL_37;
  }
LABEL_38:
  if ( v9 )
    goto LABEL_57;
LABEL_39:
  if ( (_QWORD)v122 )
  {
    if ( !strcmp(s1, a3) )
      goto LABEL_41;
  }
  else if ( !strcmp(::s1, a3) )
  {
    goto LABEL_41;
  }
  if ( v126.m128i_i32[1] && v127 != 2 && v126.m128i_i32[2] != v126.m128i_i32[1] )
  {
    v120 = 0;
    ptr = nullptr;
    sub_299F0((char **)&ptr);
    sub_18FAC0(0, ptr);
    if ( ptr )
    {
      v120.m128i_i64[0] = 0;
      j__free(ptr);
    }
    v9 = 28;
    goto LABEL_57;
  }
LABEL_41:
  v44 = *(__int64 (__fastcall **)(__int64 *))(*a2 + 32);
  if ( (char *)v44 == (char *)sub_96900 )
    v45 = sub_96850(a2);
  else
    v45 = v44(a2);
  *(_QWORD *)(v45 + 8) = a1;
  v49 = v45;
  *(_QWORD *)(v45 + 16) = a2;
  *(_DWORD *)(v45 + 168) = a4;
  if ( a3 && (v50 = strlen(a3), (v51 = v50) != 0) )
  {
    v64 = *(void **)(v49 + 24);
    v65 = v50 + 1;
    if ( *(_QWORD *)(v49 + 40) < v50 + 1 )
    {
      v93 = sub_1987B0(v49 + 24, *(_QWORD *)(v49 + 24), v65, 1);
      *(_QWORD *)(v49 + 24) = v93;
      v64 = (void *)v93;
    }
    *(_QWORD *)(v49 + 32) = v65;
    memmove(v64, a3, v51);
    *(_BYTE *)(*(_QWORD *)(v49 + 24) + v51) = 0;
  }
  else
  {
    *(_QWORD *)(v49 + 32) = 0;
  }
  v108.m128i_i64[0] = (__int64)&ptr;
  sub_B6AF0((unsigned int)&ptr, (_DWORD)a2 + 32, (_DWORD)a3, v46, v47, v48);
  v55 = ptr;
  v56 = _mm_loadu_si128(&v120);
  ptr = nullptr;
  v120 = 0;
  v57 = *(void **)(v49 + 48);
  if ( v57 )
  {
    *(_QWORD *)(v49 + 56) = 0;
    v110 = v56;
    j__free(v57);
    v58 = ptr;
    *(_QWORD *)(v49 + 48) = v55;
    *(__m128i *)(v49 + 56) = _mm_load_si128(&v110);
    if ( v58 )
    {
      v120.m128i_i64[0] = 0;
      j__free(v58);
    }
  }
  else
  {
    *(_QWORD *)(v49 + 48) = v55;
    *(__m128i *)(v49 + 56) = v56;
  }
  v59 = ::s1;
  if ( (_QWORD)v122 )
    LODWORD(v59) = (_DWORD)s1;
  sub_B6AF0(v108.m128i_i32[0], (_DWORD)a2 + 32, (_DWORD)v59, v52, v53, v54);
  v60 = ptr;
  v61 = _mm_loadu_si128(&v120);
  ptr = nullptr;
  v120 = 0;
  v62 = *(void **)(v49 + 120);
  if ( v62 )
  {
    *(_QWORD *)(v49 + 128) = 0;
    v110 = v61;
    j__free(v62);
    v63 = ptr;
    *(_QWORD *)(v49 + 120) = v60;
    *(__m128i *)(v49 + 128) = _mm_load_si128(&v110);
    if ( v63 )
    {
      v120.m128i_i64[0] = 0;
      j__free(v63);
    }
  }
  else
  {
    *(_QWORD *)(v49 + 120) = v60;
    *(__m128i *)(v49 + 128) = v61;
  }
  *(_QWORD *)(v49 + 184) = v106.m128i_i64[0];
  if ( a4 - 5 <= 1 )
  {
    if ( a4 != 6 )
      goto LABEL_56;
    v90 = (char *)::s1;
    if ( (_QWORD)v122 )
      v90 = s1;
    v9 = (*(__int64 (__fastcall **)(__int64, char *, __int64, _QWORD))(*(_QWORD *)a1 + 352LL))(a1, v90, 0xFFFFFFFFLL, 0);
    if ( !v9 )
LABEL_56:
      v9 = (**(__int64 (__fastcall ***)(__int64))v49)(v49);
    goto LABEL_57;
  }
  *(_QWORD *)(v49 + 8) = a1;
  *(_QWORD *)(v49 + 16) = a2;
  if ( a3 && (v66 = strlen(a3), (v67 = v66) != 0) )
  {
    v94 = *(void **)(v49 + 24);
    v95 = v66 + 1;
    if ( *(_QWORD *)(v49 + 40) < v66 + 1 )
    {
      v100 = sub_1987B0(v49 + 24, *(_QWORD *)(v49 + 24), v95, 1);
      *(_QWORD *)(v49 + 24) = v100;
      v94 = (void *)v100;
    }
    *(_QWORD *)(v49 + 32) = v95;
    memmove(v94, a3, v67);
    *(_BYTE *)(*(_QWORD *)(v49 + 24) + v67) = 0;
    v68 = *(__int64 **)(v49 + 16);
  }
  else
  {
    *(_QWORD *)(v49 + 32) = 0;
    v68 = a2;
  }
  v69 = ::s1;
  if ( *(_QWORD *)(v49 + 56) )
    v69 = *(const char **)(v49 + 48);
  sub_99740((__int64 *)v108.m128i_i64[0], (__int64 *)v68[7], (__int64)&s1, (__int64)v69, (__int64)"remote", v109);
  v70 = ptr;
  v71 = _mm_loadu_si128(&v120);
  ptr = nullptr;
  v120 = 0;
  v72 = *(void **)(v49 + 72);
  if ( v72 )
  {
    *(_QWORD *)(v49 + 80) = 0;
    v106 = v71;
    j__free(v72);
    v73 = ptr;
    *(_QWORD *)(v49 + 72) = v70;
    *(__m128i *)(v49 + 80) = _mm_load_si128(&v106);
    if ( v73 )
    {
      v120.m128i_i64[0] = 0;
      j__free(v73);
    }
  }
  else
  {
    *(_QWORD *)(v49 + 72) = v70;
    *(__m128i *)(v49 + 80) = v71;
  }
  v129 = 0;
  v130 = 0;
  v128 = nullptr;
  v131 = 0;
  v132 = 0;
  v134 = 0;
  v133 = 0;
  v9 = sub_99050((__int64)&v128, a1, a3, 0xFFFFFFFD, 3u);
  if ( v9 )
  {
    v74 = v128;
    if ( !v128 )
      goto LABEL_57;
    goto LABEL_91;
  }
  v75 = ::s1;
  if ( *(_QWORD *)(v49 + 56) )
    v75 = *(const char **)(v49 + 48);
  sub_99740(
    (__int64 *)v108.m128i_i64[0],
    *(__int64 **)(*(_QWORD *)(v49 + 16) + 56LL),
    (__int64)&v128,
    (__int64)v75,
    (__int64)"base",
    (_BYTE *)v108.m128i_i64[1]);
  v76 = ptr;
  v77 = _mm_loadu_si128(&v120);
  ptr = nullptr;
  v120 = 0;
  v78 = *(void **)(v49 + 96);
  if ( v78 )
  {
    *(_QWORD *)(v49 + 104) = 0;
    v106 = v77;
    j__free(v78);
    v79 = ptr;
    *(_QWORD *)(v49 + 96) = v76;
    *(__m128i *)(v49 + 104) = _mm_load_si128(&v106);
    if ( v79 )
    {
      v120.m128i_i64[0] = 0;
      j__free(v79);
    }
  }
  else
  {
    *(_QWORD *)(v49 + 96) = v76;
    *(__m128i *)(v49 + 104) = v77;
  }
  if ( s )
  {
    v80 = strlen(s);
    v81 = v80;
    if ( v80 )
    {
      v102 = *(void **)(v49 + 144);
      v103 = v80 + 1;
      if ( *(_QWORD *)(v49 + 160) < v80 + 1 )
      {
        v104 = sub_1987B0(v49 + 144, *(_QWORD *)(v49 + 144), v103, 1);
        *(_QWORD *)(v49 + 144) = v104;
        v102 = (void *)v104;
      }
      *(_QWORD *)(v49 + 152) = v103;
      memmove(v102, s, v81);
      *(_BYTE *)(*(_QWORD *)(v49 + 144) + v81) = 0;
    }
    else
    {
      *(_QWORD *)(v49 + 152) = 0;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 424LL))(a1, v49 + 144, a4);
  }
  v82 = ::s1;
  if ( *(_QWORD *)(v49 + 104) )
    v82 = *(const char **)(v49 + 96);
  v83 = *(_QWORD *)(v49 + 8);
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, const char *))(**(_QWORD **)(*(_QWORD *)(v49 + 16) + 56LL) + 96LL))(
         *(_QWORD *)(*(_QWORD *)(v49 + 16) + 56LL),
         0,
         v82) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, char *, __int64, const char *))(*(_QWORD *)v83 + 352LL))(
           v83,
           a3,
           4294967293LL,
           v82);
    if ( v9 )
      goto LABEL_118;
  }
  v84 = *(_QWORD *)(v49 + 104);
  if ( !*(_QWORD *)(v49 + 80) )
  {
    v85 = ::s1;
    if ( !v84 )
    {
LABEL_136:
      *(_DWORD *)(v49 + 168) = 5;
      goto LABEL_137;
    }
    goto LABEL_111;
  }
  v85 = *(const char **)(v49 + 72);
  v86 = ::s1;
  if ( v84 )
LABEL_111:
    v86 = *(const char **)(v49 + 96);
  if ( !strcmp(v86, v85) )
    goto LABEL_136;
  v87 = v126.m128i_u32[1];
  v88 = (char *)::s1;
  if ( (_QWORD)v122 )
    v88 = s1;
  v89 = *(_QWORD *)(v49 + 8);
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, const char *))(**(_QWORD **)(*(_QWORD *)(v49 + 16) + 56LL) + 96LL))(
         *(_QWORD *)(*(_QWORD *)(v49 + 16) + 56LL),
         0,
         v85) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, const char *))(*(_QWORD *)v89 + 352LL))(v89, v88, v87, v85);
    if ( v9 )
    {
      sub_95190(a2[7], v49 + 96);
      goto LABEL_118;
    }
  }
LABEL_137:
  v9 = (**(__int64 (__fastcall ***)(__int64))v49)(v49);
LABEL_118:
  v74 = v128;
  if ( v128 )
  {
LABEL_91:
    *(_QWORD *)&v129 = 0;
    j__free(v74);
  }
LABEL_57:
  if ( s1 )
  {
    *(_QWORD *)&v122 = 0;
    j__free(s1);
  }
  return v9;
}
