__int64 __fastcall sub_B8DA0(_BYTE *a1, void *a2, __int64 a3, __int64 a4, __int64 (__fastcall *a5)(), __int64 a6)
{
  __int64 (__fastcall *v7)(); // rbp
  void *v8; // rbx
  int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r15
  const void *v13; // r10
  size_t v14; // r11
  void *v15; // rdi
  int v16; // eax
  char *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r15
  const char *v20; // r14
  __int64 v21; // r12
  void (__fastcall *v22)(__int64, _QWORD, signed __int64 *); // r14
  int v23; // esi
  __int64 v24; // rdx
  unsigned int v25; // ebx
  const char *v27; // rax
  size_t v28; // rax
  const char *v29; // r9
  size_t v30; // r10
  size_t v31; // rax
  char *v32; // r10
  size_t v33; // r9
  const char *v34; // rax
  void *v35; // rdi
  void *v36; // rdx
  void *v37; // rdi
  void *v38; // rdx
  __int64 v39; // rax
  size_t v40; // r13
  __int64 v41; // rdx
  void *v42; // rbp
  char *v43; // rsi
  __m128i v44; // xmm0
  __int64 v45; // r8
  __int16 v46; // r9
  __int64 v47; // rax
  char v48; // dl
  char *v49; // rax
  __m128i v50; // xmm0
  int v51; // eax
  signed __int64 *v52; // r13
  const char *v53; // rbp
  char *v54; // rdx
  __int64 v55; // r13
  __int64 v56; // r12
  char *v57; // rax
  void *v58; // rdi
  const __m128i *v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 (__fastcall ***v62)(_QWORD); // rsi
  unsigned __int64 v63; // rax
  const char *v64; // rax
  __int64 v65; // rbp
  size_t v66; // rbp
  __m128i v67; // xmm0
  __m128i si128; // xmm0
  int v69; // r9d
  int v70; // r8d
  const char *v71; // rax
  char *v72; // rdx
  __int64 v73; // r12
  __int64 v74; // rbx
  char *v75; // rax
  void *v76; // rdi
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 *v81; // rax
  char *v82; // r14
  __int64 v83; // r15
  __int64 v84; // rbp
  const char **v85; // r13
  __int64 v86; // rbx
  size_t v87; // r9
  size_t v88; // r11
  __m128i v89; // xmm0
  __m128i v90; // xmm0
  const char *v91; // rax
  void *v92; // r15
  char *v93; // r15
  void *v94; // r15
  size_t v96; // [rsp+0h] [rbp-218h]
  char *srcd; // [rsp+8h] [rbp-210h]
  const char *src; // [rsp+8h] [rbp-210h]
  char *srca; // [rsp+8h] [rbp-210h]
  _BYTE *srcf; // [rsp+8h] [rbp-210h]
  _BYTE *srch; // [rsp+8h] [rbp-210h]
  void *srcc; // [rsp+8h] [rbp-210h]
  void *srce; // [rsp+8h] [rbp-210h]
  void *srcg; // [rsp+8h] [rbp-210h]
  void *srcb; // [rsp+8h] [rbp-210h]
  __int64 v107; // [rsp+10h] [rbp-208h]
  void *v109; // [rsp+18h] [rbp-200h]
  size_t v110; // [rsp+18h] [rbp-200h]
  size_t v111; // [rsp+20h] [rbp-1F8h]
  __int64 v112; // [rsp+20h] [rbp-1F8h]
  char *v113; // [rsp+20h] [rbp-1F8h]
  const char *v114; // [rsp+20h] [rbp-1F8h]
  __int64 (__fastcall *v115)(); // [rsp+20h] [rbp-1F8h]
  size_t v116; // [rsp+20h] [rbp-1F8h]
  const void *v117; // [rsp+28h] [rbp-1F0h]
  __int16 v118; // [rsp+28h] [rbp-1F0h]
  size_t v119; // [rsp+28h] [rbp-1F0h]
  size_t v120; // [rsp+28h] [rbp-1F0h]
  int v121; // [rsp+34h] [rbp-1E4h] BYREF
  signed __int64 v122; // [rsp+38h] [rbp-1E0h] BYREF
  _QWORD v123[2]; // [rsp+40h] [rbp-1D8h] BYREF
  void *v124; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v125; // [rsp+58h] [rbp-1C0h]
  char *s; // [rsp+70h] [rbp-1A8h] BYREF
  __int128 v127; // [rsp+78h] [rbp-1A0h]
  char *s2; // [rsp+90h] [rbp-188h] BYREF
  __int128 v129; // [rsp+98h] [rbp-180h]
  __int64 v130; // [rsp+A8h] [rbp-170h]
  __int64 v131; // [rsp+B0h] [rbp-168h]
  __int64 v132; // [rsp+B8h] [rbp-160h]
  __m128i v133; // [rsp+C0h] [rbp-158h] BYREF
  void *v134; // [rsp+D0h] [rbp-148h] BYREF
  size_t n[2]; // [rsp+D8h] [rbp-140h]
  __int64 v136; // [rsp+E8h] [rbp-130h]
  __int64 v137; // [rsp+F0h] [rbp-128h]
  __int64 v138; // [rsp+F8h] [rbp-120h]
  __m128i v139[3]; // [rsp+100h] [rbp-118h] BYREF
  char v140; // [rsp+138h] [rbp-E0h]
  __m128i v141; // [rsp+140h] [rbp-D8h] BYREF
  void *v142[2]; // [rsp+150h] [rbp-C8h] BYREF
  __int128 v143; // [rsp+160h] [rbp-B8h]
  __int16 v144; // [rsp+170h] [rbp-A8h]
  __int64 v145; // [rsp+178h] [rbp-A0h]
  char v146; // [rsp+180h] [rbp-98h]
  __m128i v147; // [rsp+188h] [rbp-90h]
  void *dest; // [rsp+198h] [rbp-80h] BYREF
  __int128 v149; // [rsp+1A0h] [rbp-78h]
  __int16 v150; // [rsp+1B0h] [rbp-68h]
  __int64 v151; // [rsp+1B8h] [rbp-60h]
  char v152; // [rsp+1C0h] [rbp-58h]
  __m128i v153; // [rsp+1C8h] [rbp-50h] BYREF
  unsigned __int64 v154; // [rsp+1D8h] [rbp-40h]

  v7 = a5;
  v8 = a2;
  v154 = __readfsqword(0x28u);
  if ( !a5 )
    v7 = off_23EA58;
  s2 = nullptr;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v134 = nullptr;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v129 = 0;
  v133 = 0;
  *(_OWORD *)n = 0;
  v139[0] = 0;
  v9 = sub_184A80((int)a2);
  v10 = sub_17E3E0(a2);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = v10;
  if ( v11 > 1 )
  {
    *(_QWORD *)(v10 + 32) = 0;
    v13 = *(const void **)v10;
    v14 = v11 - 1;
    v15 = *(void **)(v10 + 48);
    if ( *(_QWORD *)(v10 + 64) < v11 )
    {
      v117 = *(const void **)v10;
      v111 = v11 - 1;
      srcc = (void *)v11;
      v39 = sub_1987B0(v10 + 48, v15, v11, 1);
      *(_QWORD *)(v12 + 48) = v39;
      v13 = v117;
      v15 = (void *)v39;
      v14 = v111;
      v11 = (unsigned __int64)srcc;
    }
    *(_QWORD *)(v12 + 56) = v11;
    srcd = (char *)v11;
    memmove(v15, v13, v14);
    srcd[*(_QWORD *)(v12 + 48) - 1] = 0;
    *(_DWORD *)(v12 + 72) = 0;
    goto LABEL_7;
  }
  v27 = (const char *)sub_17D700(a2, v10 + 72, &s, 0, 0.0, 0.0);
  if ( v27 && (src = v27, v28 = strlen(v27), v29 = src, (v30 = v28) != 0) )
  {
    v37 = *(void **)(v12 + 24);
    v38 = (void *)(v28 + 1);
    if ( *(_QWORD *)(v12 + 40) < v28 + 1 )
    {
      v120 = v28;
      v114 = src;
      srcg = (void *)(v28 + 1);
      v79 = sub_1987B0(v12 + 24, v37, v38, 1);
      *(_QWORD *)(v12 + 24) = v79;
      v30 = v120;
      v37 = (void *)v79;
      v29 = v114;
      v38 = srcg;
    }
    *(_QWORD *)(v12 + 32) = v38;
    srch = (_BYTE *)v30;
    memmove(v37, v29, v30);
    srch[*(_QWORD *)(v12 + 24)] = 0;
  }
  else
  {
    *(_QWORD *)(v12 + 32) = 0;
  }
  if ( s )
  {
    srca = s;
    v31 = strlen(s);
    v32 = srca;
    v33 = v31;
    if ( v31 )
    {
      v35 = *(void **)(v12 + 48);
      v36 = (void *)(v31 + 1);
      if ( *(_QWORD *)(v12 + 64) < v31 + 1 )
      {
        v119 = v31;
        v113 = srca;
        srce = (void *)(v31 + 1);
        v78 = sub_1987B0(v12 + 48, v35, v36, 1);
        *(_QWORD *)(v12 + 48) = v78;
        v33 = v119;
        v35 = (void *)v78;
        v32 = v113;
        v36 = srce;
      }
      *(_QWORD *)(v12 + 56) = v36;
      srcf = (_BYTE *)v33;
      memmove(v35, v32, v33);
      srcf[*(_QWORD *)(v12 + 48)] = 0;
LABEL_7:
      if ( !v9 )
        goto LABEL_8;
LABEL_34:
      v34 = sub_2C700(v9);
      goto LABEL_35;
    }
  }
  *(_QWORD *)(v12 + 56) = 0;
  if ( v9 )
    goto LABEL_34;
LABEL_8:
  if ( (_WORD)v130 == 1 )
  {
    *a1 = 1;
    goto LABEL_22;
  }
  v16 = sub_184A80((int)a2);
  if ( v16 )
    goto LABEL_44;
  if ( (_WORD)v136 != 61 )
  {
    v34 = sub_2C700(1347);
    goto LABEL_35;
  }
  v16 = sub_184A80((int)a2);
  if ( v16 )
  {
LABEL_44:
    v34 = sub_2C700(v16);
    goto LABEL_35;
  }
  v17 = (char *)s1;
  if ( (_QWORD)v129 )
    v17 = s2;
  if ( a4 )
  {
    v18 = 0;
    v19 = a4;
    v20 = v17;
    v21 = a3;
    do
    {
      if ( !strcmp(*(const char **)v21, v20) )
      {
        v8 = a2;
        goto LABEL_19;
      }
      ++v18;
      v21 += 40;
    }
    while ( v19 != v18 );
    v8 = a2;
    v21 = 0;
LABEL_19:
    v107 = sub_17E3E0(v8);
    v22 = nullptr;
    if ( v21 )
      goto LABEL_20;
  }
  else
  {
    v107 = sub_17E3E0(a2);
  }
  if ( *(_QWORD *)(v107 + 8) <= 1u || (v81 = sub_2FF60(), *v81 == *v81 + 32 * v81[1]) )
  {
    v80 = ((__int64 (__fastcall *)(void *, char **, void **, double, double))v7)(v8, &s2, &v134, 0.0, 0.0);
    goto LABEL_116;
  }
  srcb = (void *)(*v81 + 32 * v81[1]);
  v82 = (char *)s1;
  v83 = *v81;
  if ( (_QWORD)v129 )
    v82 = s2;
  v109 = v8;
  v115 = v7;
  do
  {
    v84 = *(_QWORD *)(v83 + 8);
    if ( v84 )
    {
      v85 = *(const char ***)v83;
      v86 = 0;
      while ( 1 )
      {
        v21 = (__int64)v85;
        if ( !strcmp(*v85, v82) )
          break;
        ++v86;
        v85 += 5;
        if ( v84 == v86 )
          goto LABEL_128;
      }
      if ( v85 )
      {
        v8 = v109;
        v22 = *(void (__fastcall **)(__int64, _QWORD, signed __int64 *))(v83 + 16);
        a6 = *(_QWORD *)(v83 + 24);
LABEL_20:
        v144 = 0;
        v145 = 0;
        v146 = 0;
        dest = nullptr;
        v150 = 0;
        v151 = 0;
        v152 = 0;
        s = nullptr;
        v125 = 0;
        v143 = 0;
        v147 = 0;
        v149 = 0;
        v153 = 0;
        v127 = 0;
        v23 = *(_DWORD *)(v21 + 16);
        v124 = nullptr;
        v121 = 0;
        v24 = v23 & 0xF;
        v122 = 0;
        v123[0] = 0;
        v123[1] = 0;
        *(_OWORD *)v142 = 0;
        switch ( v23 & 0xF )
        {
          case 1:
            if ( (v23 & 0x2000000) != 0 )
              v77 = sub_B8B50((__int64 *)&v124, (__int64)v8, (__int64)&v134);
            else
              v77 = sub_B86F0((__int64 *)&v124, (__int64)v8, (__int64)&v134);
            if ( !v77 )
              goto LABEL_92;
            v52 = (signed __int64 *)s1;
            v24 = *(_DWORD *)(v21 + 16) & 0xF;
            if ( (_QWORD)v125 )
              v52 = (signed __int64 *)v124;
            goto LABEL_50;
          case 2:
            v52 = &v122;
            v69 = 0x8000000;
            v70 = 0x4000000;
            goto LABEL_85;
          case 3:
            if ( (unsigned __int16)v136 > 0x83u )
            {
              if ( (unsigned __int16)(v136 - 132) > 1u )
              {
LABEL_90:
                v71 = sub_2C700(1355);
LABEL_91:
                sub_B81F0((__int64)v8, (__int64)"%s", v71);
LABEL_92:
                v72 = s;
                if ( s )
                {
                  v73 = v127;
                  if ( (_QWORD)v127 )
                  {
                    v74 = 0;
                    do
                    {
                      v75 = &v72[64 * v74];
                      v76 = *(void **)v75;
                      if ( *(_QWORD *)v75 )
                      {
                        *((_QWORD *)v75 + 1) = 0;
                        j__free(v76);
                        v72 = s;
                      }
                      ++v74;
                    }
                    while ( v73 != v74 );
                  }
                  *(_QWORD *)&v127 = 0;
                  j__free(v72);
                }
                sub_189C20(v123);
                if ( dest )
                {
                  *(_QWORD *)&v149 = 0;
                  j__free(dest);
                }
                if ( v142[1] )
                {
                  *(_QWORD *)&v143 = 0;
                  j__free(v142[1]);
                }
                if ( !v124 )
                  goto LABEL_36;
                *(_QWORD *)&v125 = 0;
                v25 = 0;
                j__free(v124);
                goto LABEL_23;
              }
            }
            else
            {
              if ( (unsigned __int16)v136 > 0x80u )
              {
LABEL_138:
                v52 = (signed __int64 *)&v121;
                goto LABEL_50;
              }
              if ( (_WORD)v136 != 128 )
                goto LABEL_90;
            }
            v121 = 1;
            goto LABEL_138;
          case 5:
            v52 = &v122;
            v69 = 0x2000000;
            v70 = 0x1000000;
LABEL_85:
            if ( !(unsigned __int8)sub_B8A80(v21, &v122, (__int64)v8, (__int64)&v134, v70, v69) )
              goto LABEL_92;
            v24 = *(_DWORD *)(v21 + 16) & 0xF;
            goto LABEL_50;
          case 6:
            v65 = v129;
            v142[0] = v8;
            if ( (unsigned __int64)v129 > 1 )
            {
              v93 = s2;
              v142[1] = (void *)sub_1987B0(&v142[1], 0, v129, 1);
              *(_QWORD *)&v143 = v65;
              memmove(v142[1], v93, v65 - 1);
              *((_BYTE *)v142[1] + v65 - 1) = 0;
            }
            v66 = n[0];
            v67 = _mm_load_si128(&v133);
            v144 = v130;
            v147 = v67;
            v145 = v131;
            v146 = v132;
            if ( n[0] > 1 )
            {
              v92 = v134;
              if ( *((_QWORD *)&v149 + 1) < n[0] )
                dest = (void *)sub_1987B0(&dest, dest, n[0], 1);
              *(_QWORD *)&v149 = v66;
              memmove(dest, v92, v66 - 1);
              *((char *)dest + v66 - 1) = 0;
            }
            else
            {
              *(_QWORD *)&v149 = 0;
            }
            v52 = (signed __int64 *)v142;
            si128 = _mm_load_si128(v139);
            v150 = v136;
            v153 = si128;
            v151 = v137;
            v152 = v138;
            v24 = *(_DWORD *)(v21 + 16) & 0xF;
            goto LABEL_50;
          case 7:
            v40 = n[0];
            if ( n[0] )
            {
              v42 = (void *)sub_198760(n[0]);
              memcpy(v42, v134, v40);
              v47 = v127;
              v90 = _mm_load_si128(v139);
              v43 = s;
              v140 = v138;
              v45 = v137;
              v41 = v127 + 1;
              v46 = v136;
              v141 = v90;
              if ( *((_QWORD *)&v127 + 1) >= (unsigned __int64)(v127 + 1) )
              {
LABEL_48:
                v48 = v140;
                v49 = &v43[64 * v47];
                *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
                v50 = _mm_load_si128(&v141);
                v49[40] = v48;
                *(_QWORD *)v49 = v42;
                *((_WORD *)v49 + 12) = v46;
                *((_QWORD *)v49 + 4) = v45;
                *((__m128i *)v49 + 3) = v50;
                *(_QWORD *)&v127 = v127 + 1;
                v51 = sub_18A900(v123, v8, &s);
                if ( !v51 )
                {
                  v52 = v123;
                  v24 = *(_DWORD *)(v21 + 16) & 0xF;
LABEL_50:
                  v53 = (const char *)sub_B83E0(v21, (__int64)v8, v24, v52, a6);
                  if ( (*(_DWORD *)(v21 + 16) & 0xF) == 6 )
                  {
                    v87 = v149;
                    if ( (_QWORD)v149 && (v88 = v149 - 1, (_QWORD)v149 != 1) )
                    {
                      v94 = dest;
                      if ( n[1] < (unsigned __int64)v149 )
                      {
                        v116 = v149 - 1;
                        v110 = v149;
                        v134 = (void *)sub_1987B0(&v134, v134, v149, 1);
                        v88 = v116;
                        v87 = v110;
                      }
                      n[0] = v87;
                      v96 = v87;
                      memmove(v134, v94, v88);
                      *((char *)v134 + v96 - 1) = 0;
                    }
                    else
                    {
                      n[0] = 0;
                    }
                    v89 = _mm_loadu_si128(&v153);
                    LOWORD(v136) = v150;
                    v139[0] = v89;
                    v137 = v151;
                    LOBYTE(v138) = v152;
                  }
                  if ( !v53 && v22 )
                    v22(v21, *(_DWORD *)(v21 + 16) & 0xF, v52);
                  v54 = s;
                  if ( s )
                  {
                    v55 = v127;
                    if ( (_QWORD)v127 )
                    {
                      v56 = 0;
                      do
                      {
                        v57 = &v54[64 * v56];
                        v58 = *(void **)v57;
                        if ( *(_QWORD *)v57 )
                        {
                          *((_QWORD *)v57 + 1) = 0;
                          j__free(v58);
                          v54 = s;
                        }
                        ++v56;
                      }
                      while ( v55 != v56 );
                    }
                    *(_QWORD *)&v127 = 0;
                    j__free(v54);
                  }
                  sub_189C20(v123);
                  if ( dest )
                  {
                    *(_QWORD *)&v149 = 0;
                    j__free(dest);
                  }
                  if ( v142[1] )
                  {
                    *(_QWORD *)&v143 = 0;
                    j__free(v142[1]);
                  }
                  if ( v124 )
                  {
                    *(_QWORD *)&v125 = 0;
                    j__free(v124);
                  }
                  goto LABEL_67;
                }
                v91 = sub_2C700(v51);
                sub_B81F0((__int64)v8, (__int64)"%s", v91);
                goto LABEL_92;
              }
            }
            else
            {
              v41 = 1;
              v42 = nullptr;
              v43 = nullptr;
              v44 = _mm_load_si128(v139);
              v45 = v137;
              v46 = v136;
              v140 = v138;
              v141 = v44;
            }
            v118 = v46;
            v112 = v45;
            s = (char *)sub_1987B0(&s, v43, v41, 64);
            v43 = s;
            v46 = v118;
            v47 = v127;
            v45 = v112;
            goto LABEL_48;
          default:
            v71 = sub_2C700(1364);
            goto LABEL_91;
        }
      }
    }
LABEL_128:
    v83 += 32;
  }
  while ( srcb != (void *)v83 );
  v8 = v109;
  v80 = ((__int64 (__fastcall *)(void *, char **, void **, double, double))v115)(v109, &s2, &v134, 0.0, 0.0);
LABEL_116:
  v53 = (const char *)v80;
LABEL_67:
  if ( v53 == (_BYTE *)&dword_0 + 2 )
    goto LABEL_117;
  if ( (unsigned __int64)v53 > 2 )
    goto LABEL_75;
  if ( !v53 )
    goto LABEL_22;
  if ( *(_QWORD *)(v107 + 8) <= 1u )
    goto LABEL_78;
  if ( byte_241DD9 )
    goto LABEL_36;
  v62 = *(__int64 (__fastcall ****)(_QWORD))v107;
  byte_241DD9 = 1;
  v63 = interr_exc_t___vtable_at_1764016(0x75u, v62, (const __m128i *)&interr_exc_t___vtable_at_1764016, v59, v60, v61);
  byte_241DD9 = 0;
  v53 = (const char *)v63;
  if ( v63 == 1 )
    goto LABEL_78;
  if ( v63 == 2 )
  {
LABEL_117:
    v64 = sub_2C700(1364);
LABEL_77:
    sub_B81F0((__int64)v8, (__int64)"%s", v64);
    goto LABEL_78;
  }
  if ( v63 <= 2 )
  {
LABEL_22:
    v25 = 1;
    goto LABEL_23;
  }
LABEL_75:
  if ( v53 == (_BYTE *)&dword_0 + 3 )
  {
    v64 = sub_2C700(1353);
    goto LABEL_77;
  }
  sub_B81F0((__int64)v8, (__int64)"%s", v53);
LABEL_78:
  v34 = sub_2C700(1363);
LABEL_35:
  sub_B81F0((__int64)v8, (__int64)"%s", v34);
LABEL_36:
  v25 = 0;
LABEL_23:
  if ( v134 )
  {
    n[0] = 0;
    j__free(v134);
  }
  if ( s2 )
  {
    *(_QWORD *)&v129 = 0;
    j__free(s2);
  }
  return v25;
}
