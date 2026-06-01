__int64 __fastcall sub_3FE010(__int64 a1, __int64 a2, int a3, _DWORD *a4, int a5, double a6)
{
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v9; // r12
  __int64 v11; // rsi
  int v13; // r13d
  int v14; // eax
  char v15; // cl
  int v16; // eax
  int v17; // r8d
  __int64 v18; // rax
  int tinfo_size; // eax
  __m128i *v20; // rax
  __m128i si128; // xmm1
  __int64 v22; // rcx
  __int64 v23; // r8
  void *v24; // r8
  char *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  _DWORD *v31; // r10
  char *v32; // r11
  unsigned __int64 v33; // r8
  size_t v34; // r9
  int v35; // eax
  int v36; // r12d
  __int64 v37; // r12
  int v38; // eax
  __int64 v39; // r13
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r15
  __m128i v42; // xmm0
  _DWORD *v43; // rax
  int v44; // eax
  __int64 v45; // r15
  int v46; // eax
  char *i; // rbx
  __int64 v48; // rdi
  __int64 v49; // r12
  __int64 v50; // r15
  _QWORD *v51; // rbx
  _QWORD *v52; // rdi
  __int64 v53; // rax
  int v54; // edx
  char *v55; // rsi
  int v56; // eax
  __int64 v57; // r15
  int v58; // eax
  int v59; // eax
  __int64 v60; // r12
  int v61; // eax
  __int64 v62; // r9
  size_t v63; // r9
  char *v64; // r10
  unsigned __int64 v65; // r8
  char v66; // al
  _DWORD *v67; // rdi
  void **v68; // r12
  unsigned __int8 *v69; // r10
  void *v70; // r8
  char *v71; // r9
  size_t v72; // r11
  void *v73; // rax
  char tinfo_property; // al
  __int64 v75; // rax
  int v76; // edx
  unsigned int v77; // ecx
  unsigned int v78; // edx
  void (__fastcall *v79)(_QWORD *, __int64, int *, __int128 *, double); // rax
  int v80; // edx
  void (__fastcall *v81)(__int64 *, __int64, int *, __int128 *); // rax
  int v82; // edx
  bool v83; // r12
  _DWORD *v84; // r15
  size_t v85; // rdx
  void *v86; // rdi
  void *v87; // rax
  void *v88; // rax
  size_t v89; // [rsp+8h] [rbp-4F8h]
  int v90; // [rsp+20h] [rbp-4E0h]
  int v91; // [rsp+28h] [rbp-4D8h]
  int v92; // [rsp+2Ch] [rbp-4D4h]
  _DWORD *v93; // [rsp+40h] [rbp-4C0h]
  size_t v94; // [rsp+40h] [rbp-4C0h]
  size_t v95; // [rsp+40h] [rbp-4C0h]
  unsigned __int64 v96; // [rsp+40h] [rbp-4C0h]
  char v97; // [rsp+48h] [rbp-4B8h]
  void *v98; // [rsp+48h] [rbp-4B8h]
  int v99; // [rsp+50h] [rbp-4B0h]
  unsigned __int64 v100; // [rsp+50h] [rbp-4B0h]
  unsigned __int8 *v101; // [rsp+50h] [rbp-4B0h]
  unsigned __int64 v102; // [rsp+50h] [rbp-4B0h]
  unsigned __int64 v103; // [rsp+50h] [rbp-4B0h]
  void *v104; // [rsp+50h] [rbp-4B0h]
  _QWORD *v105; // [rsp+58h] [rbp-4A8h]
  _QWORD *v106; // [rsp+58h] [rbp-4A8h]
  void *v107; // [rsp+58h] [rbp-4A8h]
  __int64 v108; // [rsp+68h] [rbp-498h]
  int v109; // [rsp+68h] [rbp-498h]
  int v110; // [rsp+68h] [rbp-498h]
  int v111; // [rsp+68h] [rbp-498h]
  int v112; // [rsp+68h] [rbp-498h]
  char v113; // [rsp+73h] [rbp-48Dh]
  int v114; // [rsp+74h] [rbp-48Ch]
  size_t n; // [rsp+78h] [rbp-488h]
  size_t nb; // [rsp+78h] [rbp-488h]
  int na; // [rsp+78h] [rbp-488h]
  _QWORD *nc; // [rsp+78h] [rbp-488h]
  void *v119; // [rsp+80h] [rbp-480h]
  char *v120; // [rsp+80h] [rbp-480h]
  char *v121; // [rsp+80h] [rbp-480h]
  _BYTE *v122; // [rsp+88h] [rbp-478h]
  void *v123; // [rsp+88h] [rbp-478h]
  unsigned __int8 *v124; // [rsp+88h] [rbp-478h]
  void *v125; // [rsp+88h] [rbp-478h]
  void *v126; // [rsp+88h] [rbp-478h]
  __int64 src; // [rsp+90h] [rbp-470h]
  _DWORD *srce; // [rsp+90h] [rbp-470h]
  char *srca; // [rsp+90h] [rbp-470h]
  _QWORD *srcb; // [rsp+90h] [rbp-470h]
  void *srcc; // [rsp+90h] [rbp-470h]
  unsigned __int8 *srcd; // [rsp+90h] [rbp-470h]
  char srcf; // [rsp+90h] [rbp-470h]
  char *srch; // [rsp+90h] [rbp-470h]
  char *srcg; // [rsp+90h] [rbp-470h]
  __int64 v136; // [rsp+98h] [rbp-468h]
  __int64 v137; // [rsp+98h] [rbp-468h]
  __int64 *v138; // [rsp+98h] [rbp-468h]
  void *v139; // [rsp+98h] [rbp-468h]
  size_t v140; // [rsp+A0h] [rbp-460h]
  size_t v141; // [rsp+A0h] [rbp-460h]
  size_t v142; // [rsp+A0h] [rbp-460h]
  int v143; // [rsp+A0h] [rbp-460h]
  __int64 v144; // [rsp+B0h] [rbp-450h]
  __int64 v145; // [rsp+B8h] [rbp-448h]
  int v146; // [rsp+B8h] [rbp-448h]
  char *s1[2]; // [rsp+C0h] [rbp-440h] BYREF
  __int64 v148; // [rsp+D0h] [rbp-430h]
  char *v149; // [rsp+D8h] [rbp-428h]
  char *v150; // [rsp+E0h] [rbp-420h]
  __int64 v151; // [rsp+E8h] [rbp-418h]
  __int64 v152; // [rsp+F0h] [rbp-410h]
  __int64 v153; // [rsp+F8h] [rbp-408h]
  int v154; // [rsp+108h] [rbp-3F8h] BYREF
  int v155; // [rsp+10Ch] [rbp-3F4h] BYREF
  unsigned __int64 v156; // [rsp+110h] [rbp-3F0h] BYREF
  __int64 v157; // [rsp+118h] [rbp-3E8h] BYREF
  __int64 v158; // [rsp+120h] [rbp-3E0h] BYREF
  __int64 v159; // [rsp+128h] [rbp-3D8h] BYREF
  __int64 v160; // [rsp+130h] [rbp-3D0h] BYREF
  __int64 v161; // [rsp+138h] [rbp-3C8h] BYREF
  _QWORD v162[2]; // [rsp+140h] [rbp-3C0h] BYREF
  __int64 v163; // [rsp+150h] [rbp-3B0h] BYREF
  __int64 v164; // [rsp+158h] [rbp-3A8h]
  __int128 v165; // [rsp+160h] [rbp-3A0h] BYREF
  __int64 v166; // [rsp+170h] [rbp-390h]
  __int128 v167; // [rsp+178h] [rbp-388h]
  __int64 v168; // [rsp+190h] [rbp-370h]
  __int128 v169; // [rsp+198h] [rbp-368h]
  __int64 v170; // [rsp+1A8h] [rbp-358h]
  __int64 v171; // [rsp+1B0h] [rbp-350h]
  __int64 v172; // [rsp+1B8h] [rbp-348h]
  __int128 v173; // [rsp+1C0h] [rbp-340h]
  __int64 v174; // [rsp+1D0h] [rbp-330h]
  __int128 v175; // [rsp+1D8h] [rbp-328h]
  char v176; // [rsp+1E8h] [rbp-318h]
  _BYTE v177[16]; // [rsp+1F0h] [rbp-310h] BYREF
  __int64 v178; // [rsp+200h] [rbp-300h]
  void *dest; // [rsp+210h] [rbp-2F0h] BYREF
  char *v180; // [rsp+218h] [rbp-2E8h]
  unsigned __int64 v181; // [rsp+220h] [rbp-2E0h]
  int v182; // [rsp+228h] [rbp-2D8h]
  int v183; // [rsp+230h] [rbp-2D0h]
  _DWORD v184[142]; // [rsp+238h] [rbp-2C8h]
  char v185; // [rsp+470h] [rbp-90h] BYREF
  char v186; // [rsp+4C0h] [rbp-40h] BYREF
  unsigned __int64 v187; // [rsp+4C8h] [rbp-38h]

  v153 = a2;
  LODWORD(v150) = a3;
  v152 = (__int64)a4;
  LODWORD(v151) = a5;
  v187 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !*(_QWORD *)(*(_QWORD *)(v6 + 520) + 376LL) )
    return 0;
  v11 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a1 + 480);
  v149 = *(char **)(v9 + 1032);
  v148 = *(_QWORD *)(v9 + 112);
  v13 = !sub_118B80(v9, v11, 1) ? 4 : 12;
  if ( *(_BYTE *)(a2 + 32) != 11 )
    return 0;
  if ( !*(_QWORD *)(*(_QWORD *)(v153 + 72) + 32LL) )
    return 0;
  if ( (get_tinfo_property() & 0x3F) == 0x2D )
    return 0;
  v113 = sub_11C340(*(char **)(*(_QWORD *)(v153 + 72) + 24LL), &v156, 1u);
  if ( !v113 )
    return 0;
  s1[0] = *(char **)(v153 + 40);
  if ( strcmp(s1[0], "mac_syscall") )
  {
    v14 = strcmp(s1[0], "linux_eabi_syscall");
    v15 = v14;
    if ( !v14 )
    {
      v66 = v113;
      v17 = v156;
      v113 = 0;
      v97 = v66;
      goto LABEL_12;
    }
    v16 = strcmp(s1[0], "linux_syscall");
    v15 = v16;
    if ( !v16 )
    {
      v97 = 0;
      v17 = v156;
      v113 = 0;
LABEL_12:
      v92 = v17;
      v157 = 0;
      v158 = 0;
      if ( (unsigned __int8)sub_3FDBC0((__int64)v149, (__int64)&v158, (__int64)&v157, v15, v17) )
      {
        v18 = *(_QWORD *)(v153 + 72);
        v144 = v18;
        v91 = *(_DWORD *)(v18 + 280);
        s1[0] = *(char **)(v18 + 24);
        copy_tinfo_t();
        s1[0] = *(char **)(v144 + 24);
        v7 = sub_11C340(s1[0], &v161, 0);
        if ( (_BYTE)v7 )
        {
          tinfo_size = get_tinfo_size();
          sub_11CFD0((__int64)s1[0], v148, v161, tinfo_size, -1, 0);
          if ( !(_BYTE)v157 )
          {
LABEL_80:
            clear_tinfo_t();
            clear_tinfo_t();
            return v7;
          }
          v168 = 0;
          v170 = 0;
          v171 = 0;
          v172 = 0;
          v174 = 0;
          v176 = 16;
          v169 = 0;
          v173 = 0;
          v175 = 0;
          get_tinfo_details();
          v20 = (__m128i *)v177;
          si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
          v22 = v153;
          do
          {
            v20->m128i_i32[1] = -1;
            v20 += 5;
            v20[-5].m128i_i16[0] = 0;
            v20[-5].m128i_i16[1] = 0;
            v20[-5].m128i_i64[1] = 0;
            v20[-4] = si128;
            v20[-3].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v20[-3] + 8) = 0;
            v20[-2].m128i_i32[2] = 0;
            v20[-1].m128i_i64[0] = 0;
            v20[-1].m128i_i32[2] = 0;
          }
          while ( &v186 != (char *)v20 );
          v153 = v22;
          if ( v113 || *(_BYTE *)(v9 + 144) )
            LODWORD(v151) = *(_DWORD *)v152;
          v23 = *(_QWORD *)(v144 + 24);
          LODWORD(v161) = v151;
          v145 = v23;
          s1[0] = (char *)(v23 + 24);
          sub_121740((__int64)v177, (unsigned __int8 *)v23);
          v178 = *(_QWORD *)(v145 + 16);
          copy_tinfo_t();
          v24 = (void *)v145;
          if ( &dest != (void **)(v145 + 32) )
          {
            v25 = *(char **)(v145 + 40);
            if ( v25 && (v140 = (size_t)(v25 - 1), v25 != &byte_1) )
            {
              v139 = *(void **)(v145 + 32);
              if ( v181 < (unsigned __int64)v25 )
              {
                srcg = *(char **)(v145 + 40);
                dest = (void *)qvector_reserve();
                v24 = (void *)v145;
                v25 = srcg;
              }
              v126 = v24;
              v180 = v25;
              srch = v25;
              memmove(dest, v139, v140);
              v24 = v126;
              srch[(_QWORD)dest - 1] = 0;
            }
            else
            {
              v180 = nullptr;
            }
          }
          v141 = (size_t)v24;
          copy_argloc();
          v184[0] = *(_DWORD *)(v141 + 72);
          copy_tinfo_t();
          if ( v177[0] == 14 )
          {
            sub_3FCCF0((__int64)v177, &v161);
          }
          else
          {
            v182 = 3;
            v183 = v151;
          }
          v26 = *(_QWORD *)(v144 + 32);
          v90 = v26;
          v114 = v26;
          if ( (_QWORD)v169 && (int)v26 > 1 )
          {
            LODWORD(s1[0]) = 1;
            v146 = 1;
            v151 = 1;
            while ( 1 )
            {
              v163 = 0;
              v164 = 0;
              v136 = 80 * v151;
              v122 = &v177[80 * v151];
              if ( (unsigned __int8)get_tinfo_details() )
              {
                v161 = 0;
                v162[0] = 0;
                v165 = 0;
                copy_tinfo_t();
                v166 = 0;
                copy_tinfo_t();
                LODWORD(v167) = 0;
                WORD2(v167) = 0;
                clear_tinfo_t();
                clear_tinfo_t();
                v27 = v165;
                *(_QWORD *)&v165 = v163;
                v163 = v27;
                create_tinfo();
                clear_tinfo_t();
                clear_tinfo_t();
                clear_tinfo_t();
              }
              clear_tinfo_t();
              v108 = SLODWORD(s1[0]);
              src = 80LL * SLODWORD(s1[0]);
              v142 = *(int *)(*(_QWORD *)(v144 + 24) + src + 4);
              v28 = get_tinfo_size();
              if ( v142 < v28 )
              {
                if ( 2 * v142 != v28 )
                {
                  v7 = 0;
                  goto LABEL_65;
                }
                if ( *(_BYTE *)(v9 + 144) )
                {
                  if ( !under_debugger )
                    sub_37EEE0(0xC86Eu, 0.0);
                  goto LABEL_182;
                }
                if ( v97 )
                  LODWORD(s1[0]) += ((__int64)s1[0] & 1) == 0;
                v143 = LODWORD(s1[0]) + 1;
                if ( LODWORD(s1[0]) + 1 < v114 )
                {
                  v110 = v28;
                  v52 = (_QWORD *)j__qalloc_or_throw();
                  *v52 = 0xFFFFFFFF00000000LL;
                  v52[2] = 0xFFFFFFFF00000000LL;
                  v53 = v151;
                  v52[1] = 0;
                  v52[3] = 0;
                  v53 *= 80;
                  v177[v53] = 14;
                  *(_QWORD *)&v177[v53 + 8] = v52;
                  srca = (char *)(4LL * SLODWORD(s1[0]));
                  sub_121740((__int64)v52, (unsigned __int8 *)(*(_QWORD *)(v144 + 24) + 80LL * SLODWORD(s1[0])));
                  sub_121740(
                    *(_QWORD *)&v177[80 * v151 + 8] + 16LL,
                    (unsigned __int8 *)(*(_QWORD *)(v144 + 24) + 80LL * v143));
                  v54 = v110;
                  if ( *(_BYTE *)(v9 + 145) )
                  {
                    sub_118FD0(*(char **)&v177[80 * v151 + 8], (char *)(*(_QWORD *)&v177[80 * v151 + 8] + 16LL));
                    v54 = v110;
                  }
                  *(_DWORD *)&v177[80 * v151 + 4] = v54;
                  copy_tinfo_t();
                  v55 = &srca[v152];
                  if ( v177[80 * v151] == 14 )
                  {
                    sub_3FCCF0((__int64)v122, v55);
                  }
                  else
                  {
                    v56 = *(_DWORD *)v55;
                    *((_DWORD *)v122 + 14) = 3;
                    *((_DWORD *)v122 + 16) = v56;
                  }
                  LODWORD(s1[0]) += 2;
                }
                else
                {
                  if ( SLODWORD(s1[0]) >= v114 )
                  {
                    ++v146;
                    goto LABEL_44;
                  }
                  v62 = *(_QWORD *)(v144 + 24) + 80LL * SLODWORD(s1[0]);
                  v111 = *(_DWORD *)(v152 + 4LL * SLODWORD(s1[0]));
                  s1[0] = (char *)(v62 + 24);
                  LODWORD(v163) = v111;
                  srcb = (_QWORD *)v62;
                  sub_121740((__int64)v122, (unsigned __int8 *)v62);
                  *(&v178 + 10 * v151) = srcb[2];
                  copy_tinfo_t();
                  v63 = (size_t)srcb;
                  v64 = (char *)&dest + v136;
                  if ( (void **)((char *)&dest + v136) != srcb + 4 )
                  {
                    v65 = srcb[5];
                    if ( v65 && (n = v65 - 1, v65 != 1) )
                    {
                      v107 = (void *)srcb[4];
                      if ( *(unsigned __int64 *)((char *)&v181 + v136) < v65 )
                      {
                        v96 = srcb[5];
                        v88 = (void *)qvector_reserve();
                        v63 = (size_t)srcb;
                        v65 = v96;
                        v64 = (char *)&dest + v136;
                        *(&dest + 10 * v151) = v88;
                      }
                      v85 = n;
                      v86 = *(void **)v64;
                      *((_QWORD *)v64 + 1) = v65;
                      v94 = v63;
                      v103 = v65;
                      nc = v64;
                      memmove(v86, v107, v85);
                      v63 = v94;
                      *(_BYTE *)(*nc + v103 - 1) = 0;
                    }
                    else
                    {
                      (&v180)[(unsigned __int64)v136 / 8] = nullptr;
                    }
                  }
                  nb = v63;
                  copy_argloc();
                  v184[20 * v151] = *(_DWORD *)(nb + 72);
                  copy_tinfo_t();
                  if ( v177[80 * v151] == 14 )
                  {
                    sub_3FCCF0((__int64)v122, &v163);
                  }
                  else
                  {
                    *((_DWORD *)v122 + 14) = 3;
                    *((_DWORD *)v122 + 16) = v111;
                  }
                  LODWORD(s1[0]) = v143;
                }
              }
              else
              {
                v99 = v28;
                if ( v28 < v142 )
                {
                  v165 = 0xFFFFFFFF00000000LL;
                  v105 = (_QWORD *)j__qalloc_or_throw();
                  v29 = *(_QWORD *)(v153 + 24);
                  v105[4] = 0xFFFFFFFF00000000LL;
                  v105[5] = 0;
                  v105[6] = 0xFFFFFFFF00000000LL;
                  v105[7] = 0;
                  v105[8] = 0xFFFFFFFF00000000LL;
                  v105[9] = 0;
                  sub_32C520((__int64)v105, v29);
                  *(_DWORD *)v105 = 10;
                  sub_121740((__int64)(v105 + 4), (unsigned __int8 *)(*(_QWORD *)(v144 + 24) + src));
                  *((_DWORD *)v105 + 17) = v99;
                  *((_QWORD *)&v165 + 1) = v105;
                  LOBYTE(v165) = 4;
                  DWORD1(v165) = v99;
                  sub_118FD0((char *)(*(_QWORD *)(v144 + 24) + src), (char *)&v165);
                  sub_119360((__int64)&v165);
                }
                v30 = *(_QWORD *)(v144 + 24) + src;
                v109 = *(_DWORD *)(v152 + 4 * v108);
                LODWORD(v162[0]) = v109;
                sub_121740((__int64)v122, (unsigned __int8 *)v30);
                *(&v178 + 10 * v151) = *(_QWORD *)(v30 + 16);
                copy_tinfo_t();
                v31 = (_DWORD *)v30;
                v32 = (char *)&dest + v136;
                if ( (void **)((char *)&dest + v136) != (void **)(v30 + 32) )
                {
                  v33 = *(_QWORD *)(v30 + 40);
                  if ( v33 && (v34 = v33 - 1, v33 != 1) )
                  {
                    srcc = *(void **)(v30 + 32);
                    if ( *(unsigned __int64 *)((char *)&v181 + v136) < v33 )
                    {
                      v89 = v33 - 1;
                      v102 = *(_QWORD *)(v30 + 40);
                      v73 = (void *)qvector_reserve();
                      v34 = v89;
                      v31 = (_DWORD *)v30;
                      v33 = v102;
                      v32 = (char *)&dest + v136;
                      *(&dest + 10 * v151) = v73;
                    }
                    *((_QWORD *)v32 + 1) = v33;
                    v93 = v31;
                    v100 = v33;
                    v106 = v32;
                    memmove(*(void **)v32, srcc, v34);
                    v31 = v93;
                    *(_BYTE *)(*v106 + v100 - 1) = 0;
                  }
                  else
                  {
                    (&v180)[(unsigned __int64)v136 / 8] = nullptr;
                  }
                }
                srce = v31;
                copy_argloc();
                v184[20 * v151] = srce[18];
                copy_tinfo_t();
                if ( v177[80 * v151] == 14 )
                {
                  sub_3FCCF0((__int64)v122, v162);
                }
                else
                {
                  *((_DWORD *)v122 + 14) = 3;
                  *((_DWORD *)v122 + 16) = v109;
                }
                ++LODWORD(s1[0]);
              }
              v151 = ++v146;
              if ( (unsigned __int64)v169 < v146 || v114 <= SLODWORD(s1[0]) )
              {
                v143 = (int)s1[0];
                goto LABEL_44;
              }
            }
          }
          v143 = 1;
          v146 = 1;
LABEL_44:
          v35 = get_tinfo_property() & 0xFFFFFFF0;
          if ( v35 != 64 && v35 != 208 )
            goto LABEL_46;
          v112 = 4;
          if ( !v92 )
            v112 = *(_DWORD *)(v144 + 32);
          if ( v143 < v90 && v112 > v146 )
          {
            v67 = (_DWORD *)v152;
            LODWORD(v152) = v146;
            s1[0] = (char *)&v67[v143];
            v137 = 80LL * v143;
            v68 = &dest + 10 * v146;
            do
            {
              srcd = (unsigned __int8 *)(*(_QWORD *)(v144 + 24) + v137);
              na = *(_DWORD *)s1[0];
              v151 = (__int64)(srcd + 24);
              LODWORD(v165) = na;
              sub_121740((__int64)(v68 - 4), srcd);
              v123 = (void *)(int)v152;
              *(&v178 + 10 * (int)v152) = *((_QWORD *)srcd + 2);
              copy_tinfo_t();
              v69 = srcd;
              v70 = v123;
              if ( v68 != (void **)(srcd + 32) )
              {
                v71 = *((char **)srcd + 5);
                if ( v71 && (v72 = (size_t)(v71 - 1), v71 != &byte_1) )
                {
                  v125 = *((void **)srcd + 4);
                  if ( v68[2] < v71 )
                  {
                    v95 = (size_t)(v71 - 1);
                    v104 = v70;
                    v121 = *((char **)srcd + 5);
                    v87 = (void *)qvector_reserve();
                    v70 = v104;
                    v72 = v95;
                    v69 = srcd;
                    v71 = v121;
                    *(&dest + 10 * (_QWORD)v104) = v87;
                  }
                  v68[1] = v71;
                  v98 = v70;
                  v101 = v69;
                  v120 = v71;
                  memmove(*v68, v125, v72);
                  v69 = v101;
                  v70 = v98;
                  v120[(_QWORD)*v68 - 1] = 0;
                }
                else
                {
                  v68[1] = nullptr;
                }
              }
              v119 = v70;
              v124 = v69;
              copy_argloc();
              v184[20 * (_QWORD)v119] = *((_DWORD *)v124 + 18);
              copy_tinfo_t();
              if ( v177[80 * (_QWORD)v119] == 14 )
              {
                sub_3FCCF0((__int64)(v68 - 4), &v165);
              }
              else
              {
                *((_DWORD *)v68 + 6) = 3;
                *((_DWORD *)v68 + 8) = na;
              }
              v68 += 10;
              LODWORD(v152) = v152 + 1;
              s1[0] += 4;
              v137 += 80;
            }
            while ( v112 > (int)v152 && v114 > (int)v152 + v143 - v146 );
          }
          else
          {
LABEL_46:
            LODWORD(v152) = v146;
          }
          v159 = 0;
          v151 = (__int64)&v159;
          copy_tinfo_t();
          if ( (get_tinfo_property() & 0x3F) == 1 )
            v36 = 0;
          else
            v36 = get_tinfo_size();
          if ( (get_tinfo_property() & 0x3F) != 1 )
          {
            tinfo_property = get_tinfo_property();
            if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
              goto LABEL_51;
          }
          if ( v36 >= *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) )
            goto LABEL_51;
          v75 = sub_636A0((_QWORD *)v6);
          v76 = *(_DWORD *)(v6 + 64);
          v138 = (__int64 *)v75;
          v165 = 0u;
          v77 = v76 - 2;
          v78 = *(_DWORD *)(a1 + 72);
          LODWORD(s1[0]) = v77;
          srcf = sub_6C1F0(v75, (__int64 *)&v165, v78, v77);
          qfree();
          if ( !srcf )
            LODWORD(s1[0]) = -1;
          if ( (get_tinfo_property() & 0x3F) == 1 )
          {
            if ( !(_BYTE)v150 )
            {
              copy_tinfo_t();
              goto LABEL_51;
            }
            v79 = *(void (__fastcall **)(_QWORD *, __int64, int *, __int128 *, double))(*(_QWORD *)v148 + 104LL);
            *(_QWORD *)&v165 = 7;
            v79(v162, v148, &v154, &v165, 0.0);
            clear_tinfo_t();
            if ( !LODWORD(v162[0]) || (v80 = (unsigned __int8)getinf(), v80 != v154) )
            {
              if ( !under_debugger )
                sub_37EEE0(0xC94Cu, 0.0);
              goto LABEL_182;
            }
            v165 = 0u;
            v166 = 0;
            v167 = 0;
            sub_1BF770((__int64)v162, (__int64)&v165, v80, 0, 0);
            if ( sub_178AA0(
                   v138,
                   (__int64)&v165,
                   *(_DWORD *)(a1 + 72),
                   (unsigned int)s1[0],
                   *(_QWORD *)(v153 + 8),
                   0,
                   2u,
                   1u) )
            {
              v163 = 7;
              copy_tinfo_t();
              clear_tinfo_t();
              v36 = v154;
            }
            sub_90100((__int64)&v165);
            cleanup_argloc();
            if ( *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) != 8 || v36 > 7 )
            {
LABEL_51:
              v37 = sub_331530(
                      v6,
                      *(_QWORD *)(v153 + 24),
                      *(_QWORD *)(v153 + 40),
                      (_BYTE *)v151,
                      v152,
                      (__int64)v177,
                      0);
              v38 = v13 | v91 & 1;
              v39 = *(_QWORD *)(v37 + 72);
              LODWORD(v148) = v38;
              *(_DWORD *)(v39 + 280) |= v38;
              sub_60840((__int64 *)(v39 + 136), (__int64 *)(v144 + 136));
              sub_312B30((__int64 *)(v39 + 152), (__int64 **)(v144 + 152));
              v40 = *(_QWORD *)(v144 + 224);
              v152 = 0;
              v41 = v40;
              if ( v40 )
              {
                s1[0] = (char *)(16 * v40);
                v152 = qalloc_or_throw();
                memcpy((void *)v152, *(const void **)(v144 + 216), (size_t)s1[0]);
              }
              v42 = _mm_unpacklo_epi64((__m128i)v41, (__m128i)v41);
              if ( *(_QWORD *)(v39 + 216) )
              {
                *(_QWORD *)(v39 + 224) = 0;
                *(__m128i *)s1 = v42;
                qfree();
                v42 = _mm_load_si128((const __m128i *)s1);
              }
              v43 = (_DWORD *)v152;
              *(__m128i *)(v39 + 224) = v42;
              *(_QWORD *)(v39 + 216) = v43;
              v44 = get_tinfo_property() & 0xFFFFFFF0;
              if ( v44 == 64 || v44 == 208 )
                sub_3FD510(v149, v39);
              if ( (_BYTE)v150 || *(_DWORD *)(v37 + 68) >= *(_DWORD *)(v153 + 68) )
              {
                v45 = v153;
                sub_118FD0((char *)(v153 + 32), (char *)(v37 + 32));
                sub_118FD0((char *)(v45 + 48), (char *)(v37 + 48));
                sub_118FD0((char *)(v45 + 64), (char *)(v37 + 64));
              }
              else
              {
                v84 = (_DWORD *)v153;
                sub_1228A0(v153 + 32, (unsigned __int8 *)v37);
                sub_119360((__int64)(v84 + 12));
                *v84 = 9;
              }
              if ( (v148 & 8) != 0 )
                sub_67820(a1, *(_QWORD *)(v153 + 8));
              if ( v37 )
              {
                sub_119360(v37 + 64);
                sub_119360(v37 + 48);
                sub_119360(v37 + 32);
                j__qfree();
              }
              v46 = *(_DWORD *)(a1 + 24);
              BYTE1(v46) &= ~2u;
              LOBYTE(v46) = v46 | 0x80;
              *(_DWORD *)(a1 + 24) = v46;
              clear_tinfo_t();
LABEL_65:
              for ( i = &v185; ; i -= 80 )
              {
                cleanup_argloc();
                if ( *((_QWORD *)i + 4) )
                {
                  *((_QWORD *)i + 5) = 0;
                  qfree();
                }
                clear_tinfo_t();
                sub_119360((__int64)i);
                if ( v177 == i )
                  break;
              }
              if ( v174 )
              {
                *(_QWORD *)&v175 = 0;
                qfree();
              }
              cleanup_argloc();
              clear_tinfo_t();
              v48 = v168;
              if ( v168 )
              {
                v49 = v169;
                v50 = 0;
                if ( (_QWORD)v169 )
                {
                  do
                  {
                    v51 = (_QWORD *)(v48 + 80 * v50);
                    clear_tinfo_t();
                    if ( v51[5] )
                    {
                      v51[6] = 0;
                      qfree();
                    }
                    if ( v51[2] )
                    {
                      v51[3] = 0;
                      qfree();
                    }
                    cleanup_argloc();
                    v48 = v168;
                    ++v50;
                  }
                  while ( v49 != v50 );
                }
                *(_QWORD *)&v169 = 0;
                qfree();
              }
              goto LABEL_80;
            }
          }
          else
          {
            if ( *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) != 8 || v36 > 7 )
              goto LABEL_51;
            if ( !(_BYTE)v150 )
            {
              if ( v113 || *(_DWORD *)(v153 + 68) != 8 )
                goto LABEL_51;
              goto LABEL_155;
            }
          }
          v81 = *(void (__fastcall **)(__int64 *, __int64, int *, __int128 *))(*(_QWORD *)v148 + 104LL);
          *(_QWORD *)&v165 = 21;
          v81(&v163, v148, &v155, &v165);
          clear_tinfo_t();
          if ( (_DWORD)v163 != 3 || v155 != 8 )
          {
            if ( !under_debugger )
              sub_37EEE0(0xCC22u, 0.0);
            goto LABEL_182;
          }
          v165 = 0u;
          sub_60440((__int64 *)&v165, v36 + v164, 8 - v36);
          v82 = *(_DWORD *)(a1 + 72);
          v166 = 0;
          v167 = 0;
          v83 = sub_178AA0(v138, (__int64)&v165, v82, (unsigned int)s1[0], *(_QWORD *)(v153 + 8), 0, 2u, 1u);
          sub_90100((__int64)&v165);
          cleanup_argloc();
          if ( !v83 )
            goto LABEL_51;
LABEL_155:
          *(_QWORD *)&v165 = 21;
          copy_tinfo_t();
          clear_tinfo_t();
          goto LABEL_51;
        }
        if ( !under_debugger )
          sub_37EEE0(0xC86Du, a6);
LABEL_182:
        BUG();
      }
      clear_tinfo_t();
      clear_tinfo_t();
      return 0;
    }
    return 0;
  }
  v17 = v156;
  v97 = 0;
  v15 = 1;
  if ( (_DWORD)v156 != 0x80000000 )
    goto LABEL_12;
  if ( !(unsigned __int8)sub_11C340((char *)(*(_QWORD *)(*(_QWORD *)(v153 + 72) + 24LL) + 320LL), &v156, 1u) || v156 > 2 )
    return 0;
  v150 = (char *)(v153 + 64);
  sub_120000((__int64)&v165, (unsigned __int8 *)(v153 + 64));
  v57 = *((_QWORD *)&v165 + 1);
  sub_3FD510(v149, *((__int64 *)&v165 + 1));
  v58 = 4;
  if ( v156 == 2 )
    v58 = 3;
  *(_DWORD *)(v57 + 8) = v58;
  sub_7EA00((__int64 *)(v57 + 24), v58);
  v151 = sub_3FD780((__int64)v149, 1, 0x80000000);
  v149 = *(char **)(*(_QWORD *)(v153 + 72) + 24LL);
  v7 = sub_11C340(v149, &v160, 0);
  if ( !(_BYTE)v7 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC86Du, a6);
    goto LABEL_182;
  }
  v59 = get_tinfo_size();
  sub_11CFD0((__int64)v149, v148, v160, v59, -1, 0);
  sub_3FDEF0(*(_QWORD *)(v57 + 24), *(_QWORD *)(*(_QWORD *)(v153 + 72) + 24LL), v151, *(_DWORD *)v152);
  v60 = v9 + 264;
  sub_3FDEF0(
    *(_QWORD *)(v57 + 24) + 80LL,
    *(_QWORD *)(*(_QWORD *)(v153 + 72) + 24LL) + 320LL,
    v60,
    *(_DWORD *)(v152 + 16));
  sub_3FDEF0(
    *(_QWORD *)(v57 + 24) + 160LL,
    *(_QWORD *)(*(_QWORD *)(v153 + 72) + 24LL) + 80LL,
    *(_QWORD *)(*(_QWORD *)(v153 + 72) + 24LL) + 104LL,
    *(_DWORD *)(v152 + 4));
  if ( *(_DWORD *)(v57 + 8) == 4 )
    sub_3FDEF0(
      *(_QWORD *)(v57 + 24) + 240LL,
      *(_QWORD *)(*(_QWORD *)(v153 + 72) + 24LL) + 160LL,
      v60,
      *(_DWORD *)(v152 + 8));
  *(_DWORD *)(v57 + 280) |= v13;
  sub_118FD0(v150, (char *)&v165);
  if ( v13 != 4 )
    sub_67820(a1, *(_QWORD *)(v153 + 8));
  v61 = *(_DWORD *)(a1 + 24);
  BYTE1(v61) &= ~2u;
  LOBYTE(v61) = v61 | 0x80;
  *(_DWORD *)(a1 + 24) = v61;
  sub_119360((__int64)&v165);
  return v7;
}

