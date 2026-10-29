__int64 __fastcall sub_181F80(
        __int64 *a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128i a7,
        __m128 a8)
{
  _QWORD *v8; // rdi
  _QWORD *exception; // rdi
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  int *v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rsi
  __int64 *v21; // rdi
  __int64 *v22; // rbx
  __int64 (__fastcall *v23)(__int64); // rdx
  int v24; // eax
  unsigned __int64 v25; // r14
  __int64 (__fastcall *v26)(__int64); // rdx
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned __int64 *v31; // rbx
  __int64 v32; // r15
  unsigned __int64 *v33; // r13
  bool v34; // zf
  char v35; // al
  int v36; // edx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 *v39; // rdx
  unsigned int *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r12
  unsigned int *v44; // rax
  __int64 v45; // rsi
  int v46; // eax
  __int64 v47; // rdx
  int v48; // eax
  __int64 *v49; // r12
  __m128i *v50; // rdx
  __int64 v51; // rcx
  int v52; // r8d
  int v53; // r9d
  unsigned __int64 *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  int v58; // r8d
  int v59; // eax
  __int8 v60; // cl
  bool v61; // cc
  unsigned __int64 v62; // rdx
  char v63; // dl
  unsigned __int64 *v64; // rax
  unsigned __int64 v65; // rdx
  __int64 *v66; // r12
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // r9d
  __int64 v71; // rdx
  __int64 v72; // rcx
  unsigned __int64 *v73; // rax
  __m128i *v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 *v76; // rdx
  unsigned __int64 *v77; // rax
  unsigned __int64 *v78; // rax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // rax
  char v82; // di
  bool v83; // cc
  unsigned __int64 v84; // rcx
  char v85; // dl
  unsigned __int64 *v86; // rsi
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rax
  unsigned __int64 v91; // r13
  _QWORD *v92; // r12
  __int64 v93; // r15
  _BYTE *v94; // rdi
  _BYTE *v95; // rdi
  __int64 v96; // r15
  _BYTE *v97; // rdi
  _BYTE *v98; // rdi
  __int64 v99; // r12
  __int64 v100; // rax
  _QWORD *v101; // r13
  __int64 v102; // rax
  __int64 v103; // rdi
  __int64 v105; // rdi
  __int64 v106; // rdi
  char v107; // [rsp+Fh] [rbp-221h]
  __m128i v108; // [rsp+20h] [rbp-210h] BYREF
  __int64 *v109; // [rsp+30h] [rbp-200h]
  __int64 *v110; // [rsp+38h] [rbp-1F8h]
  int ***v111; // [rsp+40h] [rbp-1F0h]
  __int64 v112; // [rsp+48h] [rbp-1E8h]
  __m128i *v113; // [rsp+50h] [rbp-1E0h]
  unsigned __int64 **v114; // [rsp+58h] [rbp-1D8h]
  int i; // [rsp+60h] [rbp-1D0h]
  int v116; // [rsp+64h] [rbp-1CCh]
  int **v117; // [rsp+68h] [rbp-1C8h]
  unsigned __int64 *v118; // [rsp+70h] [rbp-1C0h]
  _QWORD *v119; // [rsp+78h] [rbp-1B8h]
  __int64 *v120; // [rsp+80h] [rbp-1B0h]
  unsigned int *v121; // [rsp+88h] [rbp-1A8h]
  __int64 v122; // [rsp+90h] [rbp-1A0h]
  __int64 v123; // [rsp+98h] [rbp-198h]
  unsigned int v124; // [rsp+A0h] [rbp-190h]
  int v125; // [rsp+A4h] [rbp-18Ch]
  __int64 *v126; // [rsp+A8h] [rbp-188h]
  char v127; // [rsp+B3h] [rbp-17Dh] BYREF
  int v128; // [rsp+B4h] [rbp-17Ch] BYREF
  int **v129; // [rsp+B8h] [rbp-178h] BYREF
  __m128i v130; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v131[2]; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-150h] BYREF
  __int128 v133; // [rsp+E8h] [rbp-148h]
  __int64 v134[2]; // [rsp+100h] [rbp-130h] BYREF
  void *v135; // [rsp+110h] [rbp-120h] BYREF
  __int128 v136; // [rsp+118h] [rbp-118h]
  __int64 v137; // [rsp+130h] [rbp-100h] BYREF
  __m128i *v138; // [rsp+140h] [rbp-F0h] BYREF
  __m128i v139; // [rsp+148h] [rbp-E8h]
  __int64 v140[2]; // [rsp+160h] [rbp-D0h] BYREF
  __int64 v141; // [rsp+170h] [rbp-C0h] BYREF
  __int128 v142; // [rsp+178h] [rbp-B8h]
  _DWORD *v143[2]; // [rsp+190h] [rbp-A0h] BYREF
  unsigned __int64 *v144; // [rsp+1A0h] [rbp-90h] BYREF
  __m128i v145; // [rsp+1A8h] [rbp-88h] BYREF
  __int64 (__fastcall **v146)(); // [rsp+1C0h] [rbp-70h] BYREF
  __int128 v147; // [rsp+1C8h] [rbp-68h]
  __int64 v148; // [rsp+1D8h] [rbp-58h]
  __int128 v149; // [rsp+1E0h] [rbp-50h]
  unsigned __int64 v150; // [rsp+1F8h] [rbp-38h]

  v126 = a1;
  v107 = (char)a2;
  v150 = __readfsqword(0x28u);
  for ( i = 0; ; i = 0 )
  {
    while ( 1 )
    {
      v10 = (__int64 *)v126[5];
      if ( v107 )
      {
        if ( (unsigned int)sub_144130(v10, nullptr, nullptr, a4, a5, a6, *(double *)a7.m128i_i64, a8) )
        {
          if ( !under_debugger )
            sub_383060(0xC577u, *(double *)a7.m128i_i64);
          goto LABEL_209;
        }
      }
      else
      {
        sub_139B90((__int64)v10, (__int64)a2, a3, a4, a5, a6);
      }
      v14 = (int *)v126[5];
      v15 = *v14;
      v124 = *v14 & 0x1000;
      if ( v124 )
      {
        v124 = 0;
        if ( (v15 & 0x2000) == 0 )
        {
          BYTE1(v15) |= 0x20u;
          *v14 = v15;
          v147 = 0u;
          v89 = v126[5];
          v148 = 0;
          *(_QWORD *)&v149 = 0;
          v146 = &off_4DE040;
          v124 = sub_11F9E0(v89, (__int64 *)&v146) != 0;
        }
      }
      v122 = sub_110340((__int64)v126, v124, (__int64)v14, v11, v12, v13, *(double *)a7.m128i_i64, a8);
      if ( !v122 )
      {
        if ( !under_debugger )
          sub_383060(0xC50Eu, *(double *)a7.m128i_i64);
        goto LABEL_209;
      }
      v20 = v124;
      v21 = v126;
      ++*(_DWORD *)(v122 + 24);
      v119 = (_QWORD *)sub_1108E0((__int64)v21, v20, v16, v17, v18, v19, *(double *)a7.m128i_i64, a8);
      if ( !v119 )
      {
        if ( !under_debugger )
          sub_383060(0xC50Eu, *(double *)a7.m128i_i64);
        goto LABEL_209;
      }
      v22 = v126;
      ++*((_DWORD *)v119 + 6);
      nullsub_39();
      a2 = (__int64 (__fastcall *)(__int64))&v146;
      v127 = 0;
      v146 = nullptr;
      v148 = 0;
      v147 = 0;
      v149 = 0;
      sub_6DBE0(v22, (__int64 *)&v146);
      v23 = *(__int64 (__fastcall **)(__int64))(*v22 + 64);
      v24 = v23 == sub_1341E0 ? (*(__int64 (__fastcall **)(__int64 *))(*v22 + 56))(v22) : v23((__int64)v126);
      if ( v24 <= 0 )
        break;
      v25 = 0;
      v112 = v24;
      while ( 2 )
      {
        while ( 1 )
        {
          if ( v25 < (unsigned __int64)v147 )
          {
            v125 = *((_DWORD *)v146 + v25);
            if ( v125 != -1 )
            {
              a2 = sub_134210;
              v26 = *(__int64 (__fastcall **)(__int64))(*v126 + 88);
              v27 = v26 == sub_134210 ? (*(__int64 (**)(void))(*v126 + 56))() - 1 : v26((__int64)v126);
              if ( v125 != v27 )
              {
                v28 = v125;
                v123 = *(_QWORD *)(*(_QWORD *)(v126[5] + 528) + 8LL * v125);
                v29 = v123;
                v121 = (unsigned int *)(v123 + 120);
                if ( !(unsigned __int8)sub_64880((_QWORD *)(v123 + 120)) || *(_QWORD *)(v29 + 144) )
                  break;
              }
            }
          }
LABEL_14:
          if ( v112 == ++v25 )
            goto LABEL_141;
        }
        if ( !*(_QWORD *)(v123 + 48) )
        {
          if ( i <= 0 )
          {
            if ( !under_debugger )
              sub_383060(0xC578u, *(double *)a7.m128i_i64);
            goto LABEL_209;
          }
          goto LABEL_14;
        }
        v30 = *(_QWORD *)v122 + 24 * v28;
        v31 = *(unsigned __int64 **)v30;
        v114 = (unsigned __int64 **)v30;
        if ( v31 )
        {
          v32 = *(_QWORD *)(v30 + 8);
          if ( v32 )
          {
            v33 = (unsigned __int64 *)v31[1];
            v32 = 0;
            v34 = v31 == v33;
            v31 = nullptr;
            if ( !v34 )
            {
              v120 = v140;
              while ( 1 )
              {
                v35 = sub_174A50(v126[5], (__int64)(v33 + 3), v123, *(double *)a7.m128i_i64, a8);
                if ( v35 )
                  break;
LABEL_32:
                if ( (*v33 & 2) == 0 )
                {
                  v39 = (unsigned __int64 *)v33[2];
                  if ( (*(_BYTE *)v39 & 2) != 0 )
                  {
                    v78 = (unsigned __int64 *)(*v33 & 0xFFFFFFFFFFFFFFFCLL);
                    v79 = *v78;
                    if ( (*v78 & 2) == 0 )
                    {
                      while ( (unsigned __int64 *)v78[2] == v33 )
                      {
                        v33 = v78;
                        v80 = v79 & 0xFFFFFFFFFFFFFFFCLL;
                        v79 = *(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v79 & 2) != 0 )
                        {
                          v33 = (unsigned __int64 *)v80;
                          goto LABEL_35;
                        }
                        v78 = (unsigned __int64 *)v80;
                      }
                    }
                    v33 = v78;
                  }
                  else
                  {
                    do
                    {
                      v33 = v39;
                      v39 = (unsigned __int64 *)v39[1];
                    }
                    while ( (*(_BYTE *)v39 & 2) == 0 );
                  }
                }
LABEL_35:
                if ( *v114 == v33 )
                  goto LABEL_36;
              }
              v36 = *(_DWORD *)v33[3];
              v143[0] = v120;
              LODWORD(v140[0]) = v36;
              if ( v31 )
              {
                if ( v32 )
                {
                  v38 = *v31 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (*(_BYTE *)v38 & 2) != 0 )
                  {
                    v38 = (unsigned __int64)v31;
                    v85 = 1;
                  }
                  else
                  {
                    v82 = v35;
                    v83 = v36 <= *(_DWORD *)(v38 + 24);
                    if ( v36 >= *(_DWORD *)(v38 + 24) )
                      goto LABEL_121;
LABEL_119:
                    v84 = *(_QWORD *)(v38 + 8);
                    v82 = v35;
                    if ( (*(_BYTE *)v84 & 2) == 0 )
                    {
                      while ( 1 )
                      {
                        v38 = v84;
                        v83 = v36 <= *(_DWORD *)(v84 + 24);
                        if ( v36 < *(_DWORD *)(v84 + 24) )
                          goto LABEL_119;
LABEL_121:
                        if ( v83 )
                          break;
                        v84 = *(_QWORD *)(v38 + 16);
                        v82 = 0;
                        if ( (*(_BYTE *)v84 & 2) != 0 )
                          goto LABEL_123;
                      }
                      if ( v38 )
                      {
LABEL_31:
                        sub_103D60((__int64)(v33 + 3), v126[5], (__int64 *)(v38 + 32));
                        goto LABEL_32;
                      }
                    }
LABEL_123:
                    v85 = v82;
                  }
                  v130.m128i_i64[0] = (__int64)v31;
                  v130.m128i_i64[1] = v32;
                  v113 = &v130;
                  v88 = sub_148FF0(&v130, (unsigned __int64 *)v38, v85, v143);
                  v32 = v130.m128i_i64[1];
                  v31 = (unsigned __int64 *)v130.m128i_i64[0];
                  v38 = v88;
                  goto LABEL_31;
                }
              }
              else
              {
                v90 = qalloc();
                v31 = (unsigned __int64 *)v90;
                a8 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v90, (__m128i)(unsigned __int64)v90);
                if ( !v90 )
                {
                  exception = __cxa_allocate_exception(8u);
                  *exception = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                a7.m128i_i64[0] = 0;
                *(_QWORD *)(v90 + 64) = 0;
                *(_OWORD *)(v90 + 16) = 0;
                *(_OWORD *)(v90 + 32) = 0;
                *(_OWORD *)(v90 + 48) = 0;
                *(__m128 *)(v90 + 8) = a8;
                *(_QWORD *)v90 = v90 & 0xFFFFFFFFFFFFFFFCLL | 2;
              }
              v130.m128i_i64[0] = (__int64)v31;
              v130.m128i_i64[1] = v32;
              v113 = &v130;
              v37 = sub_148FF0(&v130, v31, 1, v143);
              v32 = v130.m128i_i64[1];
              v31 = (unsigned __int64 *)v130.m128i_i64[0];
              v38 = v37;
              goto LABEL_31;
            }
          }
          else
          {
            v31 = nullptr;
          }
        }
        else
        {
          v32 = 0;
        }
LABEL_36:
        v40 = v121;
        v131[0] = 0;
        v109 = v134;
        v131[1] = 0;
        v132 = 0;
        v133 = 0;
        sub_64000(v134, (__int64)v121, 0.0);
        a7.m128i_i64[0] = 0;
        v135 = nullptr;
        v136 = 0;
        v43 = *(_QWORD *)(v123 + 144);
        if ( v43 )
        {
          v135 = (void *)qalloc_or_throw(16 * v43, (__int64)v40, v41, v42);
          *((_QWORD *)&v136 + 1) = v43;
          memcpy(v135, *(const void **)(v123 + 136), 16 * v43);
          *(_QWORD *)&v136 = v43;
        }
        v116 = 0;
        v110 = &v137;
        v44 = *(unsigned int **)(v123 + 48);
        v111 = &v129;
        v121 = v44;
        if ( !v44 )
          goto LABEL_45;
        while ( (!(unsigned __int8)sub_64880(v109) || (_QWORD)v136) && !v127 )
        {
          sub_124680((__int64)v110, v123, (__int64)v121, 0, *(double *)a7.m128i_i64, a8);
          v49 = v110;
          sub_64700(v110, v109);
          sub_3180C0((__int64 *)&v138, (__int64)&v135, v50, v51);
          if ( (unsigned __int8)sub_64880(v49) && !v139.m128i_i64[0] )
          {
            v117 = v143;
            goto LABEL_85;
          }
          v54 = *v114;
          if ( !*v114 )
            goto LABEL_84;
          if ( !v114[1] )
            goto LABEL_84;
          v118 = (unsigned __int64 *)v54[1];
          if ( v54 == v118 )
            goto LABEL_84;
          while ( 2 )
          {
            v55 = v126[5];
            v117 = (int **)(v118 + 3);
            v108.m128i_i8[0] = sub_174A50(v55, (__int64)(v118 + 3), v123, *(double *)a7.m128i_i64, a8);
            if ( !v108.m128i_i8[0] )
              goto LABEL_100;
            v140[0] = 0;
            v56 = v126[5];
            v120 = v140;
            v140[1] = 0;
            v141 = 0;
            v142 = 0;
            sub_103D60((__int64)v117, v56, v140);
            if ( !(unsigned __int8)sub_64780(v110, v120)
              && !(unsigned __int8)sub_318470((unsigned __int64 **)&v138, (__int64)&v141) )
            {
              if ( v141 )
              {
                *(_QWORD *)&v142 = 0;
                qfree(v141);
              }
              goto LABEL_99;
            }
            v128 = **v117;
            v117 = (int **)&v128;
            while ( 2 )
            {
              v129 = v117;
              if ( !v31 )
              {
                v81 = qalloc();
                v31 = (unsigned __int64 *)v81;
                a8 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v81, (__m128i)(unsigned __int64)v81);
                if ( !v81 )
                {
                  v8 = __cxa_allocate_exception(8u);
                  *v8 = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    v8,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                a7.m128i_i64[0] = 0;
                *(_QWORD *)(v81 + 64) = 0;
                *(_OWORD *)(v81 + 16) = 0;
                *(_OWORD *)(v81 + 32) = 0;
                *(_OWORD *)(v81 + 48) = 0;
                *(__m128 *)(v81 + 8) = a8;
                *(_QWORD *)v81 = v81 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_68:
                v130.m128i_i64[0] = (__int64)v31;
                v130.m128i_i64[1] = v32;
                v113 = &v130;
                v57 = sub_148FF0(&v130, v31, 1, (_DWORD **)v111);
LABEL_69:
                v32 = v130.m128i_i64[1];
                v31 = (unsigned __int64 *)v130.m128i_i64[0];
                v58 = v128;
                goto LABEL_70;
              }
              if ( !v32 )
                goto LABEL_68;
              v57 = *v31 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (*(_BYTE *)v57 & 2) != 0 )
              {
                v57 = (unsigned __int64)v31;
                v63 = 1;
LABEL_105:
                v130.m128i_i64[0] = (__int64)v31;
                v130.m128i_i64[1] = v32;
                v113 = &v130;
                v57 = sub_148FF0(&v130, (unsigned __int64 *)v57, v63, (_DWORD **)&v129);
                goto LABEL_69;
              }
              v58 = v128;
              v60 = v108.m128i_i8[0];
              v61 = v128 <= *(_DWORD *)(v57 + 24);
              if ( v128 < *(_DWORD *)(v57 + 24) )
                goto LABEL_76;
              while ( !v61 )
              {
                v62 = *(_QWORD *)(v57 + 16);
                v60 = 0;
                if ( (*(_BYTE *)v62 & 2) != 0 )
                  goto LABEL_80;
                while ( 1 )
                {
                  v57 = v62;
                  v61 = v128 <= *(_DWORD *)(v62 + 24);
                  if ( v128 >= *(_DWORD *)(v62 + 24) )
                    break;
LABEL_76:
                  v62 = *(_QWORD *)(v57 + 8);
                  v60 = v108.m128i_i8[0];
                  if ( (*(_BYTE *)v62 & 2) != 0 )
                    goto LABEL_80;
                }
              }
              if ( !v57 )
              {
LABEL_80:
                v63 = v60;
                goto LABEL_105;
              }
LABEL_70:
              v59 = sub_1808B0(
                      v126,
                      (size_t)v120,
                      v125,
                      v121,
                      v58,
                      v119,
                      *(double *)a7.m128i_i64,
                      a8,
                      (__m128)0LL,
                      v122,
                      v57 + 32,
                      v131,
                      v124,
                      &v127);
              if ( v59 == -2 )
              {
                ++v116;
                continue;
              }
              break;
            }
            v116 += v59;
            if ( v59 <= 0 )
              goto LABEL_97;
            v117 = v143;
            sub_124680((__int64)v143, v123, (__int64)v121, 0, *(double *)a7.m128i_i64, a8);
            sub_648D0(v110, (const void **)v117, *(double *)a7.m128i_i64);
            a8 = 0;
            v73 = v144;
            v144 = nullptr;
            a7 = _mm_loadu_si128(&v145);
            v145 = 0;
            if ( v138 )
            {
              v113 = (__m128i *)v73;
              v108 = a7;
              v139.m128i_i64[0] = 0;
              qfree((__int64)v138);
              a7 = _mm_load_si128(&v108);
              v138 = v113;
              v139 = a7;
              if ( v144 )
              {
                v145.m128i_i64[0] = 0;
                qfree((__int64)v144);
              }
            }
            else
            {
              v138 = (__m128i *)v73;
              v139 = a7;
            }
            qfree((__int64)v143[0]);
            sub_64700(v110, v109);
            sub_3180C0((__int64 *)&v138, (__int64)&v135, v74, v75);
            if ( !(unsigned __int8)sub_64880(v110) || v139.m128i_i64[0] )
            {
LABEL_97:
              if ( v141 )
              {
                *(_QWORD *)&v142 = 0;
                qfree(v141);
              }
LABEL_99:
              qfree(v140[0]);
LABEL_100:
              if ( (*v118 & 2) == 0 )
              {
                v76 = (unsigned __int64 *)v118[2];
                if ( (*(_BYTE *)v76 & 2) != 0 )
                {
                  v64 = (unsigned __int64 *)(*v118 & 0xFFFFFFFFFFFFFFFCLL);
                  v65 = *v64;
                  if ( (*v64 & 2) == 0 )
                  {
                    v86 = v118;
                    while ( (unsigned __int64 *)v64[2] == v86 )
                    {
                      v86 = v64;
                      v87 = v65 & 0xFFFFFFFFFFFFFFFCLL;
                      v65 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v65 & 2) != 0 )
                      {
                        v118 = (unsigned __int64 *)v87;
                        goto LABEL_83;
                      }
                      v64 = (unsigned __int64 *)v87;
                    }
                  }
                  v118 = v64;
                }
                else
                {
                  do
                  {
                    v77 = v76;
                    v76 = (unsigned __int64 *)v76[1];
                  }
                  while ( (*(_BYTE *)v76 & 2) == 0 );
                  v118 = v77;
                }
              }
LABEL_83:
              if ( *v114 == v118 )
              {
LABEL_84:
                v117 = v143;
                goto LABEL_85;
              }
              continue;
            }
            break;
          }
          if ( v141 )
          {
            *(_QWORD *)&v142 = 0;
            qfree(v141);
          }
          qfree(v140[0]);
LABEL_85:
          v66 = (__int64 *)v117;
          sub_127A20((__int64)v117, v123, (__int64)v121, 1, v52, v53, *(double *)a7.m128i_i64, a8);
          v117 = (int **)v66;
          sub_64640(v109, v66, v67, v68, v69, v70);
          sub_317C60((__int64 *)&v135, (__int64)&v144);
          sub_64280(v131, (__int64 *)v117, *(double *)a7.m128i_i64);
          sub_316CB0(&v132, (__int64 **)&v144, v71, v72);
          if ( v144 )
          {
            v145.m128i_i64[0] = 0;
            qfree((__int64)v144);
          }
          qfree((__int64)v143[0]);
          if ( v138 )
          {
            v139.m128i_i64[0] = 0;
            qfree((__int64)v138);
          }
          qfree(v137);
          v121 = *((unsigned int **)v121 + 1);
          if ( v121 )
            continue;
          break;
        }
        if ( v116 )
        {
          v45 = v123;
          v46 = *(_DWORD *)(v123 + 24);
          v125 = v46;
          BYTE1(v46) &= ~2u;
          LOBYTE(v46) = v46 | 0x80;
          *(_DWORD *)(v123 + 24) = v46;
          v47 = v126[5];
          if ( (*(_BYTE *)(v47 + 1) & 8) != 0 && *(char *)(*(_QWORD *)(v45 + 48) + 4LL) >= 0 && *(int *)(v45 + 352) > 0 )
          {
            v99 = 0;
            while ( 1 )
            {
              v100 = *(unsigned int *)(*(_QWORD *)(v123 + 344) + 4 * v99);
              if ( (unsigned int)v100 >= *(_DWORD *)(v47 + 64) )
                break;
              v101 = *(_QWORD **)(*(_QWORD *)(v47 + 528) + 8 * v100);
              v102 = sub_13B260(v101, v101[7], *(double *)a7.m128i_i64);
              if ( v123 == v102 )
                sub_13B6E0(v101, *(double *)a7.m128i_i64, a8);
              if ( *(_DWORD *)(v123 + 352) <= (int)++v99 )
                goto LABEL_44;
              v47 = v126[5];
            }
            if ( !under_debugger )
              sub_383060(0xCDEFu, *(double *)a7.m128i_i64);
LABEL_209:
            BUG();
          }
LABEL_44:
          sub_A2520(v123, "global propagate result");
        }
LABEL_45:
        a2 = (__int64 (__fastcall *)(__int64))v122;
        v48 = sub_194A80(v123, v122, (__int64)v119);
        i += v116 + v48;
        if ( v135 )
        {
          *(_QWORD *)&v136 = 0;
          qfree((__int64)v135);
        }
        qfree(v134[0]);
        if ( v132 )
        {
          *(_QWORD *)&v133 = 0;
          qfree(v132);
        }
        qfree(v131[0]);
        if ( v31 )
        {
          if ( v32 )
          {
            v91 = *v31;
            v92 = (_QWORD *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (*(_BYTE *)v92 & 2) == 0 )
            {
              v93 = v92[1];
              if ( (*(_BYTE *)v93 & 2) != 0 )
              {
                v96 = v92[2];
                if ( (*(_BYTE *)v96 & 2) == 0 )
                  goto LABEL_165;
LABEL_183:
                v103 = v92[6];
                if ( v103 )
                {
                  v92[7] = 0;
                  qfree(v103);
                }
                qfree(v92[4]);
                *v92 |= 2uLL;
                goto LABEL_172;
              }
              v94 = *(_BYTE **)(v93 + 8);
              if ( (*v94 & 2) != 0 )
              {
                v95 = *(_BYTE **)(v93 + 16);
                if ( (*v95 & 2) == 0 )
                {
LABEL_160:
                  sub_174000((__int64)v95);
                  goto LABEL_161;
                }
LABEL_192:
                v105 = *(_QWORD *)(v93 + 48);
                if ( v105 )
                {
                  *(_QWORD *)(v93 + 56) = 0;
                  qfree(v105);
                }
                qfree(*(_QWORD *)(v93 + 32));
                *(_QWORD *)v93 |= 2uLL;
                goto LABEL_162;
              }
              sub_174000((__int64)v94);
              v95 = *(_BYTE **)(v93 + 16);
              if ( (*v95 & 2) == 0 )
                goto LABEL_160;
LABEL_161:
              if ( (*(_BYTE *)v93 & 2) == 0 )
                goto LABEL_192;
LABEL_162:
              if ( v93 )
                qfree(v93);
              v96 = v92[2];
              if ( (*(_BYTE *)v96 & 2) == 0 )
              {
LABEL_165:
                v97 = *(_BYTE **)(v96 + 8);
                if ( (*v97 & 2) != 0 )
                {
                  v98 = *(_BYTE **)(v96 + 16);
                  if ( (*v98 & 2) == 0 )
                  {
LABEL_167:
                    sub_174000((__int64)v98);
                    goto LABEL_168;
                  }
LABEL_196:
                  v106 = *(_QWORD *)(v96 + 48);
                  if ( v106 )
                  {
                    *(_QWORD *)(v96 + 56) = 0;
                    qfree(v106);
                  }
                  qfree(*(_QWORD *)(v96 + 32));
                  *(_QWORD *)v96 |= 2uLL;
                  goto LABEL_169;
                }
                sub_174000((__int64)v97);
                v98 = *(_BYTE **)(v96 + 16);
                if ( (*v98 & 2) == 0 )
                  goto LABEL_167;
LABEL_168:
                if ( (*(_BYTE *)v96 & 2) == 0 )
                  goto LABEL_196;
LABEL_169:
                if ( v96 )
                  qfree(v96);
              }
              if ( (*(_BYTE *)v92 & 2) == 0 )
                goto LABEL_183;
LABEL_172:
              if ( v91 > 3 )
                qfree((__int64)v92);
            }
          }
          qfree((__int64)v31);
        }
        if ( v112 != ++v25 )
        {
          if ( v127 )
            goto LABEL_54;
          continue;
        }
        break;
      }
      if ( !v127 )
        break;
LABEL_54:
      if ( v148 )
      {
        *(_QWORD *)&v149 = 0;
        qfree(v148);
      }
      if ( v146 )
      {
        *(_QWORD *)&v147 = 0;
        qfree((__int64)v146);
      }
      sub_104E10((__int64)v119, *(double *)a7.m128i_i64);
      sub_104E10(v122, *(double *)a7.m128i_i64);
    }
LABEL_141:
    if ( i || !(_BYTE)v124 )
      break;
    if ( v148 )
    {
      *(_QWORD *)&v149 = 0;
      qfree(v148);
    }
    if ( v146 )
    {
      *(_QWORD *)&v147 = 0;
      qfree((__int64)v146);
    }
    sub_104E10((__int64)v119, *(double *)a7.m128i_i64);
    sub_104E10(v122, *(double *)a7.m128i_i64);
  }
  if ( v148 )
  {
    *(_QWORD *)&v149 = 0;
    qfree(v148);
  }
  if ( v146 )
  {
    *(_QWORD *)&v147 = 0;
    qfree((__int64)v146);
  }
  sub_104E10((__int64)v119, *(double *)a7.m128i_i64);
  sub_104E10(v122, *(double *)a7.m128i_i64);
  return (unsigned int)i;
}

