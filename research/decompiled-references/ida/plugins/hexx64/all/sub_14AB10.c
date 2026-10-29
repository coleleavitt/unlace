__int64 __fastcall sub_14AB10(__int64 a1, __m128 a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, int a8)
{
  _QWORD *exception; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  unsigned int **v14; // r13
  __int64 v15; // rax
  unsigned __int8 (__fastcall *v16)(_QWORD *, _QWORD); // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // rax
  char v23; // r14
  _BYTE *v24; // rax
  _BYTE *v25; // r12
  __int64 v26; // rdi
  int v27; // r14d
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rbp
  unsigned __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __int64 *v34; // r15
  unsigned int v35; // ebp
  __int64 v36; // r12
  __int64 v37; // rsi
  unsigned int *v38; // rdi
  unsigned int *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // r12
  unsigned __int64 *v47; // r14
  _QWORD *v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  unsigned __int64 v51; // rbp
  __int64 *v52; // r12
  __int64 v53; // rdx
  __int64 *v54; // rbx
  __int64 v55; // rax
  __int64 *v56; // rdi
  __int64 *v57; // rdi
  __int64 v58; // rbx
  __int64 *v59; // rdi
  __int64 *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __m128i v63; // xmm0
  __int64 v65; // rdx
  _QWORD *v66; // rsi
  unsigned __int64 v67; // rcx
  unsigned int v68; // ebx
  __int64 (__fastcall *v69)(__int64); // rax
  char tinfo_property; // al
  bool v71; // cl
  unsigned __int64 v72; // rdx
  __m128i v73; // xmm0
  unsigned __int64 v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // rax
  __m128i v84; // xmm0
  unsigned int v85; // [rsp+4h] [rbp-134h]
  bool v86; // [rsp+4h] [rbp-134h]
  unsigned __int64 v87; // [rsp+8h] [rbp-130h]
  bool v88; // [rsp+8h] [rbp-130h]
  unsigned int *v89; // [rsp+10h] [rbp-128h]
  _QWORD *v90; // [rsp+18h] [rbp-120h]
  _QWORD *v92; // [rsp+28h] [rbp-110h]
  _QWORD *v93; // [rsp+30h] [rbp-108h]
  unsigned __int8 v94; // [rsp+47h] [rbp-F1h]
  __int64 v95; // [rsp+48h] [rbp-F0h]
  __m128i v96; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v97; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v98; // [rsp+68h] [rbp-D0h]
  unsigned __int64 *v99[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v100; // [rsp+90h] [rbp-A8h]
  __int128 v101; // [rsp+98h] [rbp-A0h]
  __int64 (__fastcall **v102)(); // [rsp+B0h] [rbp-88h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-80h]
  __int64 v104; // [rsp+C0h] [rbp-78h]
  __int64 v105; // [rsp+C8h] [rbp-70h]
  __int64 v106; // [rsp+D0h] [rbp-68h]
  char v107; // [rsp+D8h] [rbp-60h]
  _DWORD v108[5]; // [rsp+DCh] [rbp-5Ch]
  char v109; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v110; // [rsp+F8h] [rbp-40h]

  v110 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 40);
  v96 = 0u;
  v92 = *(_QWORD **)(v11 + 1504);
  v95 = sub_1108E0(a1, 0, a5, a6, a7, a8, *(double *)a2.m128_u64, a3);
  if ( !v95 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, *(double *)a2.m128_u64);
LABEL_156:
    BUG();
  }
  v12 = *(_QWORD **)v95;
  ++*(_DWORD *)(v95 + 24);
  v13 = (_QWORD *)*v12;
  v93 = v12;
  if ( !*v12 || !v12[1] )
  {
    v94 = 0;
    goto LABEL_57;
  }
  v94 = 0;
  v90 = (_QWORD *)v13[1];
  if ( v90 == v13 )
    goto LABEL_57;
  do
  {
    v14 = (unsigned int **)(v90 + 3);
    v15 = v90[4];
    if ( !v15 || *((_BYTE *)v90 + 56) != 1 )
      goto LABEL_50;
    if ( v15 == 1 )
    {
      v68 = **v14;
      v69 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      if ( v69 != sub_101AA0 )
      {
        if ( v68 == (unsigned int)v69(a1) - 1 )
          goto LABEL_50;
        v16 = *(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v92 + 216LL);
        if ( *((_BYTE *)v90 + 56) != 1 )
          sub_134690(*(double *)a2.m128_u64);
        goto LABEL_9;
      }
      if ( v68 == *(_DWORD *)(*(_QWORD *)(a1 + 40) + 64LL) - 1 )
        goto LABEL_50;
    }
    v16 = *(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v92 + 216LL);
LABEL_9:
    if ( !v16(v92, *((unsigned int *)v90 + 12)) )
      goto LABEL_50;
    if ( *((_BYTE *)v90 + 56) != 1 )
      sub_134690(*(double *)a2.m128_u64);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v92 + 88LL))(
           v92,
           *((unsigned int *)v90 + 12),
           *((unsigned int *)v90 + 16)) )
    {
      if ( *((_BYTE *)v90 + 56) != 1 )
        sub_134690(*(double *)a2.m128_u64);
      sub_1C69A0((__int64)&v102, v92, *((_DWORD *)v90 + 12), *((_DWORD *)v90 + 16));
      if ( (unsigned int)((_DWORD)v102 - 3) <= 1 )
      {
        cleanup_argloc();
        goto LABEL_50;
      }
      cleanup_argloc();
    }
    v97 = 0;
    a2.m128_u64[0] = 0;
    v98 = 0;
    v89 = *v14;
    if ( !(4LL * v90[4]) )
      goto LABEL_50;
    do
    {
      v17 = *(_QWORD *)(a1 + 40);
      v18 = *v89;
      if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
        sub_1346B0(*(double *)a2.m128_u64);
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18);
      v85 = *((_DWORD *)v90 + 16);
      if ( *((_BYTE *)v90 + 56) != 1 )
      {
        if ( !under_debugger )
          sub_383060(0xCAB4u, *(double *)a2.m128_u64);
        goto LABEL_156;
      }
      v20 = *((_DWORD *)v90 + 12);
      v99[0] = nullptr;
      v21 = *(_QWORD *)(v19 + 48);
      v99[1] = nullptr;
      sub_63E80((__int64 *)v99, v20, v85, *(double *)a2.m128_u64);
      v22 = *(_QWORD *)(v19 + 480);
      v100 = 0;
      v101 = 0;
      v23 = *(_BYTE *)(v22 + 130);
      while ( 1 )
      {
        v24 = (_BYTE *)sub_A9D90(v19, v99, v21, 0, 1u);
        v25 = v24;
        a2.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v85)).m128i_u64[0];
        if ( !v24 )
          break;
        v103 = 0;
        v104 = 0;
        v105 = 0;
        v106 = 0;
        v107 = 0;
        v102 = &off_4DDAD0;
        *(_QWORD *)&v108[3] = &v97;
        v109 = v23;
        *(_QWORD *)v108 = a2.m128_u64[0];
        if ( (int)sub_11E900(v24, (__int64)&v102) < 0 )
        {
          if ( v100 )
          {
            *(_QWORD *)&v101 = 0;
            qfree(v100);
          }
          qfree((__int64)v99[0]);
          v26 = v97;
          if ( (unsigned int *)(v90[3] + 4LL * v90[4]) != v89 )
          {
LABEL_93:
            if ( v26 )
              goto LABEL_49;
            goto LABEL_50;
          }
          goto LABEL_23;
        }
        v21 = *((_QWORD *)v25 + 1);
      }
      if ( v100 )
      {
        *(_QWORD *)&v101 = 0;
        qfree(v100);
      }
      qfree((__int64)v99[0]);
      ++v89;
    }
    while ( v89 != (unsigned int *)(v90[3] + 4LL * v90[4]) );
    v26 = v97;
LABEL_23:
    if ( !(_QWORD)v98 )
      goto LABEL_93;
    v27 = 0;
    v28 = 0;
LABEL_37:
    v34 = (__int64 *)(v26 + 16 * v28);
    if ( *((_BYTE *)v90 + 56) != 1 )
      sub_134690(*(double *)a2.m128_u64);
    v35 = v90[6] - *(_DWORD *)(v34[1] + 8);
    if ( !sub_11CA80(v35) )
      goto LABEL_35;
    v36 = *(_QWORD *)(*v34 + 72);
    if ( *(_DWORD *)*v34 == 56 && (*(_BYTE *)(v36 + 280) & 4) != 0 )
    {
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
        goto LABEL_35;
    }
    sub_32C430((__int64 *)&v102, (__int64)v92, v35, 0);
    v86 = sub_330760(v36, -858993459 * ((v34[1] - *(_QWORD *)(v36 + 24)) >> 4));
    if ( v86 )
    {
      sub_134520(v92, v34[1], v35);
      *(_DWORD *)(v34[1] + 4) = v35;
      copy_tinfo_t();
      v29 = *(_QWORD *)v36;
      if ( *(_QWORD *)v36 == -1 )
        goto LABEL_34;
      v30 = v96.m128i_i64[0];
      if ( !v96.m128i_i64[0] )
      {
        v79 = qalloc();
        v80 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, (__m128i)(unsigned __int64)v79);
        if ( !v79 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v79 + 32) = 0;
        *(_OWORD *)(v79 + 16) = 0;
        *(__m128i *)(v79 + 8) = v80;
        *(_QWORD *)v79 = v79 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v96.m128i_i64[0] = v79;
        *(_QWORD *)v79 = v79 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v79 & 3LL;
        v81 = v96.m128i_i64[0];
        v82 = (__m128i)v96.m128i_u64[0];
        *(_QWORD *)v96.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v81 + 8) = _mm_unpacklo_epi64(v82, v82);
        *(_QWORD *)v96.m128i_i64[0] |= 2uLL;
        v30 = v96.m128i_i64[0];
LABEL_28:
        v31 = qalloc();
        if ( !v31 )
        {
          v10 = __cxa_allocate_exception(8u);
          *v10 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v10,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v31 + 32) = 0;
        *(_OWORD *)v31 = 0;
        *(_OWORD *)(v31 + 16) = 0;
        *(_QWORD *)(v31 + 24) = *(_QWORD *)v36;
        *(_QWORD *)v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
        v32 = _mm_loadl_epi64(&v96);
        *(_QWORD *)v31 = v30 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v33 = v96.m128i_i64[0];
        a2 = (__m128)_mm_unpacklo_epi64(v32, v32);
        *(__m128 *)(v31 + 8) = a2;
        if ( v33 != v30 )
        {
          *(_QWORD *)(v30 + 8) = v31;
          if ( *(_QWORD *)(v33 + 8) == v30 )
            goto LABEL_119;
          goto LABEL_31;
        }
        goto LABEL_129;
      }
      if ( !v96.m128i_i64[1] )
        goto LABEL_28;
      v71 = v86;
      v72 = *(_QWORD *)v96.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v72 & 2) != 0 )
      {
LABEL_115:
        v88 = v71;
        v31 = qalloc();
        if ( !v31 )
        {
          v9 = __cxa_allocate_exception(8u);
          *v9 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v9,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v31 + 32) = 0;
        *(_OWORD *)v31 = 0;
        *(_OWORD *)(v31 + 16) = 0;
        *(_QWORD *)(v31 + 24) = *(_QWORD *)v36;
        *(_QWORD *)v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
        v73 = _mm_loadl_epi64(&v96);
        *(_QWORD *)v31 = v30 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v33 = v96.m128i_i64[0];
        a2 = (__m128)_mm_unpacklo_epi64(v73, v73);
        *(__m128 *)(v31 + 8) = a2;
        if ( v30 != v33 )
        {
          if ( v88 )
          {
            *(_QWORD *)(v30 + 8) = v31;
            if ( v30 == *(_QWORD *)(v33 + 8) )
LABEL_119:
              *(_QWORD *)(v33 + 8) = v31;
          }
          else
          {
            *(_QWORD *)(v30 + 16) = v31;
            if ( v30 == *(_QWORD *)(v33 + 16) )
              *(_QWORD *)(v33 + 16) = v31;
          }
LABEL_31:
          v87 = v31;
          sub_14A7D0(&v96, v31);
          v31 = v87;
LABEL_32:
          ++v96.m128i_i64[1];
          goto LABEL_33;
        }
LABEL_129:
        a2 = (__m128)_mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
        *(_QWORD *)v30 = v31 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
        *(__m128 *)(v96.m128i_i64[0] + 8) = a2;
        v78 = *(_QWORD *)v31 & 2LL;
        *(_QWORD *)v31 &= ~1uLL;
        *(_QWORD *)v31 = v78 | v96.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_32;
      }
      while ( 1 )
      {
        v30 = v72;
        v74 = *(_QWORD *)(v72 + 24);
        if ( v29 >= v74 )
        {
          if ( v74 >= v29 )
          {
            if ( !v30 )
              goto LABEL_115;
            v31 = v30;
LABEL_33:
            *(_QWORD *)(v31 + 32) = v36;
LABEL_34:
            clear_tinfo_t();
            v94 = v86;
LABEL_35:
            v28 = ++v27;
            if ( v27 >= (unsigned __int64)v98 )
              goto LABEL_43;
LABEL_36:
            v26 = v97;
            goto LABEL_37;
          }
          v72 = *(_QWORD *)(v30 + 16);
          v71 = 0;
        }
        else
        {
          v72 = *(_QWORD *)(v30 + 8);
          v71 = v86;
        }
        if ( (*(_BYTE *)v72 & 2) != 0 )
          goto LABEL_115;
      }
    }
    ++v27;
    clear_tinfo_t();
    v28 = v27;
    if ( v27 < (unsigned __int64)v98 )
      goto LABEL_36;
LABEL_43:
    v37 = v90[4];
    v38 = *v14;
    v39 = *v14;
    if ( 4 * v37 )
    {
      do
      {
        v40 = *(_QWORD *)(a1 + 40);
        v41 = *v39;
        if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 64) )
          sub_1346B0(*(double *)a2.m128_u64);
        v42 = *(_QWORD *)(*(_QWORD *)(v40 + 528) + 8 * v41);
        if ( *(_DWORD *)(v42 + 76) != 1 )
        {
          v43 = *(_DWORD *)(v42 + 24);
          BYTE1(v43) &= ~2u;
          LOBYTE(v43) = v43 | 0x80;
          *(_DWORD *)(v42 + 24) = v43;
          v37 = v90[4];
          v38 = *v14;
        }
        ++v39;
      }
      while ( v39 != &v38[v37] );
    }
    v26 = v97;
    if ( v97 )
    {
LABEL_49:
      *(_QWORD *)&v98 = 0;
      qfree(v26);
    }
LABEL_50:
    if ( (*v90 & 2) == 0 )
    {
      v44 = (_QWORD *)v90[2];
      if ( (*(_BYTE *)v44 & 2) != 0 )
      {
        v45 = (_QWORD *)(*v90 & 0xFFFFFFFFFFFFFFFCLL);
        v65 = *v45;
        if ( (*v45 & 2) == 0 )
        {
          v66 = v90;
          while ( (_QWORD *)v45[2] == v66 )
          {
            v66 = v45;
            v67 = v65 & 0xFFFFFFFFFFFFFFFCLL;
            v65 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v65 & 2) != 0 )
            {
              v90 = (_QWORD *)v67;
              goto LABEL_54;
            }
            v45 = (_QWORD *)v67;
          }
        }
      }
      else
      {
        do
        {
          v45 = v44;
          v44 = (_QWORD *)v44[1];
        }
        while ( (*(_BYTE *)v44 & 2) == 0 );
      }
      v90 = v45;
    }
LABEL_54:
    ;
  }
  while ( (_QWORD *)*v93 != v90 );
LABEL_57:
  if ( v96.m128i_i64[1] )
  {
    if ( v96.m128i_i64[0] )
    {
      v46 = *(_QWORD **)(v96.m128i_i64[0] + 8);
      while ( (_QWORD *)v96.m128i_i64[0] != v46 )
      {
        v47 = (unsigned __int64 *)v46[4];
        sub_336290(&v102, (__int64)v47);
        sub_F34C0(*(_QWORD *)(a1 + 40), *v47, &v102, 0x4000002u, *(double *)a2.m128_u64);
        clear_tinfo_t();
        if ( (*v46 & 2) == 0 )
        {
          v48 = (_QWORD *)v46[2];
          if ( (*(_BYTE *)v48 & 2) != 0 )
          {
            v75 = (_QWORD *)(*v46 & 0xFFFFFFFFFFFFFFFCLL);
            v76 = *v75;
            if ( (*v75 & 2) == 0 )
            {
              while ( v46 == (_QWORD *)v75[2] )
              {
                v46 = (_QWORD *)(v76 & 0xFFFFFFFFFFFFFFFCLL);
                v76 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v76 & 2) != 0 )
                  goto LABEL_63;
                v77 = v75;
                v75 = v46;
                v46 = v77;
              }
            }
            v46 = v75;
          }
          else
          {
            do
            {
              v46 = v48;
              v48 = (_QWORD *)v48[1];
            }
            while ( (*(_BYTE *)v48 & 2) == 0 );
          }
        }
LABEL_63:
        ;
      }
    }
    v103 = 0;
    v102 = &off_4DDAF8;
    v104 = 0;
    v49 = *(_QWORD *)(a1 + 40);
    v107 = 0;
    v105 = 0;
    v106 = 0;
    *(_QWORD *)&v108[1] = &v96;
    sub_11FBB0(v49, (__int64)&v102);
    *(_DWORD *)(a1 + 48) = 63;
    sub_66FA0(*(_QWORD *)(a1 + 40), 1);
    v94 = 1;
  }
  sub_104E10(v95, *(double *)a2.m128_u64);
  v50 = v96.m128i_i64[0];
  if ( !v96.m128i_i64[0] )
    return v94;
  v51 = *(_QWORD *)v96.m128i_i64[0];
  if ( !v96.m128i_i64[1] )
  {
    *(_QWORD *)v96.m128i_i64[0] = *(_QWORD *)v96.m128i_i64[0] & 3LL | v96.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v83 = v96.m128i_i64[0];
    v84 = (__m128i)v96.m128i_u64[0];
    *(_QWORD *)v96.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v83 + 8) = _mm_unpacklo_epi64(v84, v84);
    *(_QWORD *)v96.m128i_i64[0] |= 2uLL;
    goto LABEL_87;
  }
  v52 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
  v53 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v53 & 2) != 0 )
    goto LABEL_86;
  v54 = (__int64 *)v52[1];
  v55 = *v54;
  if ( (*v54 & 2) != 0 )
  {
    v58 = v52[2];
    if ( (*(_BYTE *)v58 & 2) == 0 )
      goto LABEL_76;
LABEL_141:
    *v52 = v53 | 2;
    goto LABEL_83;
  }
  v56 = (__int64 *)v54[1];
  if ( (*(_BYTE *)v56 & 2) != 0 )
  {
    v57 = (__int64 *)v54[2];
    if ( (*(_BYTE *)v57 & 2) == 0 )
    {
LABEL_71:
      sub_134E60(v57);
      goto LABEL_72;
    }
    goto LABEL_148;
  }
  sub_134E60(v56);
  v57 = (__int64 *)v54[2];
  if ( (*(_BYTE *)v57 & 2) == 0 )
    goto LABEL_71;
LABEL_72:
  v55 = *v54;
  if ( (*v54 & 2) == 0 )
LABEL_148:
    *v54 = v55 | 2;
  if ( v54 )
    qfree((__int64)v54);
  v58 = v52[2];
  if ( (*(_BYTE *)v58 & 2) == 0 )
  {
LABEL_76:
    v59 = *(__int64 **)(v58 + 8);
    if ( (*(_BYTE *)v59 & 2) != 0 )
    {
      v60 = *(__int64 **)(v58 + 16);
      if ( (*(_BYTE *)v60 & 2) == 0 )
      {
LABEL_78:
        sub_134E60(v60);
        goto LABEL_79;
      }
      v61 = *(_QWORD *)v58;
    }
    else
    {
      sub_134E60(v59);
      v60 = *(__int64 **)(v58 + 16);
      if ( (*(_BYTE *)v60 & 2) == 0 )
        goto LABEL_78;
LABEL_79:
      v61 = *(_QWORD *)v58;
      if ( (*(_QWORD *)v58 & 2) != 0 )
      {
LABEL_80:
        if ( v58 )
          qfree(v58);
        goto LABEL_82;
      }
    }
    *(_QWORD *)v58 = v61 | 2;
    goto LABEL_80;
  }
LABEL_82:
  v53 = *v52;
  if ( (*v52 & 2) == 0 )
    goto LABEL_141;
LABEL_83:
  if ( v51 > 3 )
    qfree(v51 & 0xFFFFFFFFFFFFFFFCLL);
  v50 = v96.m128i_i64[0];
  v51 = *(_QWORD *)v96.m128i_i64[0];
LABEL_86:
  *(_QWORD *)v50 = v51 & 3 | v50 & 0xFFFFFFFFFFFFFFFCLL;
  v62 = v96.m128i_i64[0];
  v63 = (__m128i)v96.m128i_u64[0];
  *(_QWORD *)v96.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v62 + 8) = _mm_unpacklo_epi64(v63, v63);
  *(_QWORD *)v96.m128i_i64[0] |= 2uLL;
  v96.m128i_i64[1] = 0;
LABEL_87:
  if ( v96.m128i_i64[0] )
    qfree(v96.m128i_i64[0]);
  return v94;
}

