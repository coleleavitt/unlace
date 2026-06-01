unsigned __int64 __fastcall sub_4D7B0(const __m128i *a1, unsigned __int64 a2, const char *a3)
{
  __int64 v4; // rax
  double v6; // xmm0_8
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  int *v14; // rax
  int v15; // edi
  int v16; // esi
  const char *v17; // rbp
  int v18; // ecx
  int v19; // r8d
  const char *v20; // rsi
  int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  char *v26; // rax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // edx
  __int64 *v31; // rsi
  char v32; // al
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rbp
  const char *v38; // r15
  size_t v39; // rax
  __int64 v40; // r13
  size_t v41; // rbp
  void *v42; // rax
  unsigned __int64 v43; // r13
  const char **v44; // r14
  unsigned __int64 v45; // r15
  const char *v46; // rdi
  const char *v47; // rax
  const char *v48; // rsi
  char *v49; // r14
  int v50; // eax
  char *v51; // rdx
  char *v52; // rcx
  int v53; // eax
  __m128i v55; // xmm0
  int v56; // eax
  int v57; // eax
  const char *v58; // rsi
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  char *v63; // rbp
  char *v64; // r14
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  int v68; // r9d
  const char *v69; // rdx
  __int8 v70; // al
  __int64 selector; // rax
  __int64 v72; // rdx
  const char *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdx
  unsigned int v76; // eax
  int v77; // eax
  int v78; // r8d
  int v79; // r9d
  char *v80; // r14
  int i; // ebp
  int v82; // edx
  int v83; // ecx
  int v84; // r8d
  int v85; // r9d
  const char *v86; // rdx
  int v87; // r8d
  int v88; // r9d
  const char *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rbp
  __int64 v92; // rbx
  __int64 *v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 *v96; // rbp
  double v97; // xmm0_8
  int v98; // edx
  int v99; // ecx
  __int64 v100; // rbp
  int v101; // r8d
  int v102; // r9d
  __int64 *v103; // r13
  __int64 v104; // rdi
  struct _Unwind_Exception *v105; // rbx
  char *sa; // [rsp+8h] [rbp-4F0h]
  char *sb; // [rsp+8h] [rbp-4F0h]
  int v109[2]; // [rsp+10h] [rbp-4E8h]
  int v110; // [rsp+10h] [rbp-4E8h]
  int v111[2]; // [rsp+10h] [rbp-4E8h]
  char *v112; // [rsp+18h] [rbp-4E0h]
  int v113[4]; // [rsp+20h] [rbp-4D8h] BYREF
  __int64 v114; // [rsp+30h] [rbp-4C8h] BYREF
  int v115[4]; // [rsp+38h] [rbp-4C0h]
  __m128i v116; // [rsp+50h] [rbp-4A8h] BYREF
  int v117[2]; // [rsp+70h] [rbp-488h] BYREF
  __int64 v118; // [rsp+78h] [rbp-480h]
  __m128i si128; // [rsp+80h] [rbp-478h]
  __int64 v120; // [rsp+90h] [rbp-468h]
  int v121; // [rsp+98h] [rbp-460h]
  char v122; // [rsp+9Ch] [rbp-45Ch]
  unsigned __int64 v123; // [rsp+A0h] [rbp-458h]
  char v124; // [rsp+A8h] [rbp-450h]
  unsigned int v125; // [rsp+B0h] [rbp-448h]
  __int64 v126; // [rsp+B8h] [rbp-440h]
  __int128 v127; // [rsp+C0h] [rbp-438h]
  __m128i v128; // [rsp+D0h] [rbp-428h]
  char v129; // [rsp+E0h] [rbp-418h]
  __m128i v130; // [rsp+E8h] [rbp-410h]
  __int64 v131; // [rsp+F8h] [rbp-400h]
  __int128 v132; // [rsp+100h] [rbp-3F8h]
  __int16 v133; // [rsp+110h] [rbp-3E8h]
  char v134[12]; // [rsp+114h] [rbp-3E4h] BYREF
  int v135; // [rsp+120h] [rbp-3D8h]
  __int64 v136; // [rsp+138h] [rbp-3C0h]
  __int128 v137; // [rsp+140h] [rbp-3B8h]
  __int64 v138; // [rsp+150h] [rbp-3A8h]
  __int128 v139; // [rsp+158h] [rbp-3A0h]
  __int64 v140; // [rsp+168h] [rbp-390h]
  __int128 v141; // [rsp+170h] [rbp-388h]
  __int64 v142; // [rsp+180h] [rbp-378h]
  __int128 v143; // [rsp+188h] [rbp-370h]
  char *v144; // [rsp+198h] [rbp-360h] BYREF
  __int128 v145; // [rsp+1A0h] [rbp-358h]
  __int64 v146; // [rsp+1B0h] [rbp-348h] BYREF
  __int128 v147; // [rsp+1B8h] [rbp-340h]
  __int64 v148; // [rsp+1C8h] [rbp-330h]
  __int128 v149; // [rsp+1D0h] [rbp-328h]
  __int64 v150; // [rsp+1E0h] [rbp-318h]
  __int128 v151; // [rsp+1E8h] [rbp-310h]
  __int64 v152; // [rsp+1F8h] [rbp-300h]
  __int128 v153; // [rsp+200h] [rbp-2F8h]
  __int64 v154; // [rsp+210h] [rbp-2E8h]
  __int128 v155; // [rsp+218h] [rbp-2E0h]
  __int16 v156; // [rsp+228h] [rbp-2D0h]
  char v157; // [rsp+22Ah] [rbp-2CEh]
  int v158; // [rsp+22Ch] [rbp-2CCh]
  __int128 v159; // [rsp+230h] [rbp-2C8h]
  __int64 v160; // [rsp+240h] [rbp-2B8h]
  __int64 v161; // [rsp+248h] [rbp-2B0h]
  int v162; // [rsp+250h] [rbp-2A8h]
  __int64 v163; // [rsp+258h] [rbp-2A0h]
  __int128 v164; // [rsp+260h] [rbp-298h]
  __int64 v165; // [rsp+270h] [rbp-288h]
  _OWORD v166[2]; // [rsp+280h] [rbp-278h] BYREF
  __int64 v167; // [rsp+2A0h] [rbp-258h]
  __int64 v168; // [rsp+2A8h] [rbp-250h]
  __int64 v169; // [rsp+2B0h] [rbp-248h]
  __int128 v170; // [rsp+2B8h] [rbp-240h]
  __int128 v171; // [rsp+2C8h] [rbp-230h]
  __int128 v172; // [rsp+2D8h] [rbp-220h]
  __int128 v173; // [rsp+2E8h] [rbp-210h]
  __int128 v174; // [rsp+2F8h] [rbp-200h]
  __int128 v175; // [rsp+308h] [rbp-1F0h]
  __int128 v176; // [rsp+318h] [rbp-1E0h]
  __int128 v177; // [rsp+328h] [rbp-1D0h]
  unsigned __int64 v178; // [rsp+338h] [rbp-1C0h]
  __m128i v179; // [rsp+340h] [rbp-1B8h] BYREF
  __int128 v180; // [rsp+350h] [rbp-1A8h]
  __int64 v181; // [rsp+360h] [rbp-198h]
  __int128 v182; // [rsp+368h] [rbp-190h]
  _OWORD v183[4]; // [rsp+378h] [rbp-180h] BYREF
  __int128 v184; // [rsp+3B8h] [rbp-140h]
  __int128 v185; // [rsp+3C8h] [rbp-130h]
  __int64 v186; // [rsp+3D8h] [rbp-120h] BYREF
  __int128 v187; // [rsp+3E0h] [rbp-118h]
  __int64 v188; // [rsp+3F0h] [rbp-108h] BYREF
  __int128 v189; // [rsp+3F8h] [rbp-100h]
  __int64 v190; // [rsp+408h] [rbp-F0h]
  int v191; // [rsp+410h] [rbp-E8h]
  __int64 v192; // [rsp+418h] [rbp-E0h]
  __int64 v193; // [rsp+420h] [rbp-D8h]
  int v194; // [rsp+428h] [rbp-D0h]
  __int128 v195; // [rsp+430h] [rbp-C8h]
  __int64 v196; // [rsp+440h] [rbp-B8h]
  __int128 v197; // [rsp+448h] [rbp-B0h]
  __int64 v198; // [rsp+458h] [rbp-A0h]
  __int128 v199; // [rsp+460h] [rbp-98h]
  __int64 v200; // [rsp+470h] [rbp-88h]
  __int128 v201; // [rsp+478h] [rbp-80h]
  __int128 v202; // [rsp+488h] [rbp-70h]
  __int128 v203; // [rsp+498h] [rbp-60h]
  int v204; // [rsp+4A8h] [rbp-50h]
  int v205; // [rsp+4ACh] [rbp-4Ch]
  unsigned __int64 v206; // [rsp+4B8h] [rbp-40h]

  v4 = a1->m128i_i64[1];
  v206 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_574B0);
  v6 = 0.0;
  *(_QWORD *)v117 = &off_62AA0;
  v118 = v4;
  v120 = -1;
  v121 = 8;
  v122 = 1;
  v123 = a2;
  v124 = 0;
  v126 = 0;
  v129 = 0;
  v127 = 0;
  v128 = _mm_load_si128((const __m128i *)&xmmword_57480);
  v131 = 0;
  v130 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  v133 = 0;
  v136 = 0;
  v138 = 0;
  v140 = 0;
  v142 = 0;
  v144 = 0;
  v146 = 0;
  v148 = 0;
  v150 = 0;
  v152 = 0;
  v154 = 0;
  v156 = 0;
  v157 = 0;
  v158 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v132 = 0;
  v137 = 0;
  v139 = 0;
  v141 = 0;
  v143 = 0;
  v145 = 0;
  v147 = 0;
  v149 = 0;
  v151 = 0;
  v153 = 0;
  v155 = 0;
  v159 = -1;
  v163 = 0;
  v165 = 0;
  v164 = 0;
  if ( !(unsigned __int8)sub_25BB0(v117) )
    sub_1A260((unsigned int)"failed to parse Mach-O header", a2, v7, v8, v9, v10);
  v11 = v127;
  if ( !(_QWORD)v127 || (v12 = v125) == 0 )
  {
LABEL_15:
    v20 = 0;
    v21 = 0;
    goto LABEL_16;
  }
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v11 )
      goto LABEL_14;
    v6 = 0.0;
    v14 = (int *)(v126 + 20 * v13);
    v15 = *v14;
    v16 = v14[1];
    *(_OWORD *)v115 = 0;
    v114 = 0;
    memset(&v116, 0, 24);
    sub_3CDB0(v15, v16, &v114, v116.m128i_i64, 0, v10);
    v17 = s1;
    if ( *(_QWORD *)v115 )
      v17 = (const char *)v114;
    if ( strstr(a3, v17) )
      break;
    if ( v116.m128i_i64[0] )
    {
      v116.m128i_i64[1] = 0;
      v6 = qfree(v116.m128i_i64[0], v17);
    }
    if ( v114 )
    {
      *(_QWORD *)v115 = 0;
      v6 = qfree(v114, v17);
    }
LABEL_14:
    if ( v12 == ++v13 )
      goto LABEL_15;
    v11 = v127;
  }
  v20 = (const char *)(unsigned int)v13;
  if ( (debug & 0x10) != 0 )
  {
    sub_191F0((unsigned int)"loading kcache subfile %d %s\n", v13, (_DWORD)v17, v18, v19, v10);
    v20 = (const char *)(unsigned int)v13;
  }
  v21 = v13;
  if ( v116.m128i_i64[0] )
  {
    v116.m128i_i64[1] = 0;
    v6 = qfree(v116.m128i_i64[0], v20);
    v20 = (const char *)(unsigned int)v20;
  }
  if ( v114 )
  {
    *(_QWORD *)v115 = 0;
    v6 = qfree(v114, v20);
    v20 = (const char *)(unsigned int)v20;
  }
LABEL_16:
  if ( !(unsigned __int8)sub_25EF0(v117, v20, 0, 0) )
    sub_1A260((unsigned int)"Failed to initialize kernelcache", (_DWORD)v20, v22, v23, v24, v25);
  if ( v130.m128i_i64[0] == -1 )
  {
    sub_11CF0(v117, v20, v22, v23);
    goto LABEL_164;
  }
  a1[855].m128i_i8[12] = HIBYTE(v133);
  sub_1D1B0(a1, v134);
  if ( !a1[855].m128i_i8[10] )
    sub_3A180(a1, v117, v6, NAN);
  sub_4BA80(a1, v117);
  v20 = "single kext";
  v26 = strstr(a3, "single kext");
  v30 = v135;
  if ( !v26 )
  {
    v110 = v135;
    *(__m128i *)v113 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_64188, (__m128i)(unsigned __int64)&v146);
    v49 = strstr(a3, "kernel only");
    if ( !v49 )
      goto LABEL_67;
    if ( v110 != 12 || v157 )
    {
      v50 = v158;
    }
    else
    {
      v116 = _mm_load_si128((const __m128i *)v113);
      if ( !(unsigned int)sub_4AB20((__int64)v117, &v116) )
      {
        if ( (_QWORD)v147 )
        {
          if ( (_QWORD)v147 == 1 && *(_DWORD *)(v146 + 24) == 1 )
          {
            v158 = 2;
            v157 = 1;
          }
          else
          {
            v158 = 3;
            v157 = 1;
          }
          goto LABEL_67;
        }
        v158 = 1;
        v157 = 1;
LABEL_50:
        if ( !HIBYTE(v156) )
          sub_4BC40((int)v117);
        v51 = v144;
        v52 = &v144[80 * v145];
        if ( v52 != v144 )
        {
          while ( 1 )
          {
            if ( *((_QWORD *)v51 + 6) )
            {
              v112 = v52;
              *(_QWORD *)v111 = v51;
              v53 = strcmp(*((const char **)v51 + 5), "com.apple.kernel");
              v51 = *(char **)v111;
              v52 = v112;
              if ( !v53 )
                break;
            }
            v51 += 80;
            if ( v51 == v52 )
              goto LABEL_67;
          }
          sub_4B6F0(a1, v117, *(_QWORD *)v111, 0);
          goto LABEL_64;
        }
LABEL_67:
        v55 = _mm_loadu_si128(a1);
        v181 = 0;
        v179 = v55;
        v184 = 0;
        v185 = 0;
        v187 = 0;
        v189 = 0;
        v197 = 0;
        v199 = 0;
        v201 = 0;
        v186 = 0;
        v188 = 0;
        v190 = 0;
        v191 = -1;
        v192 = 0;
        v193 = -1;
        v194 = 0;
        v196 = 0;
        v198 = 0;
        v200 = 0;
        v205 = 0;
        v180 = a2;
        v195 = -1;
        v182 = 0;
        memset(v183, 0, sizeof(v183));
        v202 = 0;
        v203 = 0;
        v204 = v21;
        if ( v135 != 12 || v157 )
        {
          v56 = v158;
        }
        else
        {
          v116 = _mm_load_si128((const __m128i *)v113);
          if ( (unsigned int)sub_4AB20((__int64)v117, &v116) )
          {
            v56 = v158;
          }
          else if ( (_QWORD)v147 )
          {
            if ( (_QWORD)v147 == 1 && *(_DWORD *)(v146 + 24) == 1 )
            {
              v158 = 2;
              v56 = 2;
            }
            else
            {
              v158 = 3;
              v56 = 3;
            }
          }
          else
          {
            v158 = 1;
            v56 = 1;
          }
          v157 = 1;
        }
        v194 = v56;
        if ( !(_BYTE)v156 )
          sub_28840(v117);
        v193 = *((_QWORD *)&v159 + 1);
        v57 = v205 | 0xC;
        if ( !v49 )
          v57 = v205 | 4;
        v205 = v57;
        sub_44B20((__int64)a1, (__int64)&v179);
        v58 = "kernel + all kexts";
        if ( strstr(a3, "kernel + all kexts") )
        {
          if ( !HIBYTE(v156) )
            sub_4BC40((int)v117);
          if ( (_QWORD)v145 )
            sub_19440((unsigned int)"Loading prelinked KEXTs", (unsigned int)"kernel + all kexts", v59, v60, v61, v62);
          else
            sub_196C0((unsigned int)"No KEXTs detected", (unsigned int)"kernel + all kexts", v59, v60, v61, v62);
          v63 = &v144[80 * v145];
          if ( v63 != v144 )
          {
            v64 = v144;
            do
            {
              while ( 1 )
              {
                if ( (unsigned __int8)callui(27) )
                  sub_1A260(0, (_DWORD)v58, v65, v66, v67, v68);
                v58 = (const char *)*((_QWORD *)v64 + 3);
                v69 = (const char *)*((_QWORD *)v64 + 1);
                if ( v58 != v69 )
                {
                  sub_112F0(
                    (unsigned int)"relocating subfile at %a to %a...\n",
                    (_DWORD)v58,
                    (_DWORD)v69,
                    v66,
                    v67,
                    v68);
                  v178 = 0xFFFFFFFF00000000LL;
                  v168 = 513;
                  v70 = a1[855].m128i_i8[12];
                  v167 = 0;
                  memset(v166, 0, sizeof(v166));
                  v169 = 0;
                  *(_DWORD *)((char *)&v168 + 3) = (unsigned __int8)(v70 + 1);
                  v170 = -1;
                  v171 = -1;
                  v172 = -1;
                  v173 = -1;
                  v174 = -1;
                  v175 = -1;
                  v176 = -1;
                  v177 = -1;
                  selector = allocate_selector(0);
                  v72 = a1->m128i_i64[1];
                  v169 = selector;
                  v73 = s1;
                  v74 = *((_QWORD *)v64 + 3);
                  v75 = *(_QWORD *)(v72 + 16);
                  *(_QWORD *)&v166[0] = v75 & v74;
                  *((_QWORD *)&v166[0] + 1) = v75 & (*((_QWORD *)v64 + 2) + v74);
                  if ( *((_QWORD *)v64 + 6) )
                    v73 = (const char *)*((_QWORD *)v64 + 5);
                  add_segm_ex(v166, v73, "", 1);
                  v58 = (const char *)*((_QWORD *)v64 + 1);
                  v76 = move_segm(v166, v58, 3);
                  if ( v76 )
                    break;
                }
                v64 += 80;
                if ( v63 == v64 )
                  goto LABEL_91;
              }
              v77 = move_segm_strerror(v76);
              v58 = (const char *)*((_QWORD *)v64 + 3);
              sub_112F0(
                (unsigned int)"error moving segment %a to %a: %s\n",
                (_DWORD)v58,
                *((_QWORD *)v64 + 1),
                v77,
                v78,
                v79);
              v64 += 80;
            }
            while ( v63 != v64 );
LABEL_91:
            sb = &v144[80 * v145];
            if ( sb != v144 )
            {
              v80 = v144;
              for ( i = 0; ; ++i )
              {
                if ( (unsigned __int8)callui(27) )
                  sub_1A260(0, (_DWORD)v58, v82, v83, v84, v85);
                v86 = s1;
                if ( *((_QWORD *)v80 + 6) )
                  v86 = (const char *)*((_QWORD *)v80 + 5);
                sub_112F0((unsigned int)"%llX: loading %s\n", *((_QWORD *)v80 + 1), (_DWORD)v86, v83, v84, v85);
                v89 = s1;
                if ( *((_QWORD *)v80 + 6) )
                  v89 = (const char *)*((_QWORD *)v80 + 5);
                sub_19440((unsigned int)"%zu/%zu loading %s", i, v145, (_DWORD)v89, v87, v88);
                v58 = (const char *)v117;
                sub_4B6F0(a1, v117, v80, 65);
                v80 += 80;
                if ( sb == v80 )
                  break;
              }
            }
          }
          set_default_dataseg(0);
        }
        v90 = v200;
        if ( v200 )
        {
          v91 = v201;
          if ( (_QWORD)v201 )
          {
            v92 = 0;
            do
            {
              v93 = (__int64 *)(v90 + 24 * v92);
              v94 = *v93;
              if ( *v93 )
              {
                v93[1] = 0;
                qfree(v94, v58);
                v90 = v200;
              }
              ++v92;
            }
            while ( v91 != v92 );
          }
          *(_QWORD *)&v201 = 0;
          qfree(v90, v58);
        }
        if ( v198 )
        {
          *(_QWORD *)&v199 = 0;
          qfree(v198, v58);
        }
        if ( v196 )
        {
          *(_QWORD *)&v197 = 0;
          qfree(v196, v58);
        }
        if ( v188 )
        {
          *(_QWORD *)&v189 = 0;
          qfree(v188, v58);
        }
        if ( v186 )
        {
          *(_QWORD *)&v187 = 0;
          qfree(v186, v58);
        }
        if ( *((_QWORD *)&v184 + 1) )
        {
          *(_QWORD *)&v185 = 0;
          qfree(*((_QWORD *)&v184 + 1), v58);
        }
        goto LABEL_64;
      }
      v157 = 1;
      v50 = v158;
    }
    if ( v50 != 1 )
      goto LABEL_67;
    goto LABEL_50;
  }
  if ( v135 != 12 )
  {
    if ( (v20 = "__PRELINK_TEXT", !(unsigned __int8)sub_290B0(v117, "__PRELINK_TEXT", "__text", v166))
      && (v20 = "__PRELINK", !(unsigned __int8)sub_290B0(v117, "__PRELINK", "__text", v166))
      || !v168 )
    {
      v20 = "AUTOHIDE REGISTRY\n"
            "HIDECANCEL\n"
            "IDA has detected that the kernel and all kexts are linked together in the same segment.\n"
            "The analysis for a single kext is likely useless without the kernel.\n"
            "Do you wish to continue?";
      if ( (int)sub_19F30(
                  1,
                  (unsigned int)"AUTOHIDE REGISTRY\n"
                                "HIDECANCEL\n"
                                "IDA has detected that the kernel and all kexts are linked together in the same segment.\n"
                                "The analysis for a single kext is likely useless without the kernel.\n"
                                "Do you wish to continue?",
                  v30,
                  v27,
                  v28,
                  v29) <= 0 )
        sub_1A260(
          0,
          (unsigned int)"AUTOHIDE REGISTRY\n"
                        "HIDECANCEL\n"
                        "IDA has detected that the kernel and all kexts are linked together in the same segment.\n"
                        "The analysis for a single kext is likely useless without the kernel.\n"
                        "Do you wish to continue?",
          v30,
          v27,
          v28,
          v29);
    }
  }
  if ( !HIBYTE(v156) )
    sub_4BC40((int)v117);
  if ( !(_QWORD)v145 )
LABEL_164:
    sub_1A260((unsigned int)"No prelinked KEXTs detected", (_DWORD)v20, v30, v27, v28, v29);
  v31 = &v114;
  v114 = 0;
  *(_OWORD *)v115 = 0;
  v32 = qgetenv("IDA_KCACHE_KEXT", &v114);
  if ( v32 )
  {
    v37 = *(_QWORD *)v115;
    if ( *(_QWORD *)v115 )
    {
      LODWORD(v33) = v114;
      memset(&v116, 0, 24);
      sa = (char *)v114;
      if ( v114 )
      {
LABEL_28:
        v39 = strlen(sa);
        v40 = v39 + 1;
        v41 = v39;
        v42 = (void *)qvector_reserve(&v116, 0, v39 + 1, 1);
        v31 = (__int64 *)sa;
        v116.m128i_i64[1] = v40;
        v116.m128i_i64[0] = (__int64)v42;
        memmove(v42, sa, v41);
        *(_BYTE *)(v116.m128i_i64[0] + v41) = 0;
        v43 = v145;
        sa = (char *)v116.m128i_i64[0];
        if ( !(_QWORD)v145 )
        {
          if ( !v116.m128i_i64[0] )
            goto LABEL_120;
          v116.m128i_i64[1] = 0;
          qfree(v116.m128i_i64[0], (const char *)v31);
          v95 = *(_QWORD *)v115;
          goto LABEL_155;
        }
        v37 = v116.m128i_i64[1];
        v38 = s1;
        v32 = v116.m128i_i64[1] == 0;
      }
      else
      {
        v43 = v145;
        v37 = 0;
        v38 = s1;
        if ( !(_QWORD)v145 )
          goto LABEL_45;
      }
    }
    else
    {
      v38 = s1;
      memset(&v116, 0, 24);
      sa = (char *)s1;
      if ( s1 )
        goto LABEL_28;
      v43 = v145;
      if ( !(_QWORD)v145 )
        goto LABEL_122;
    }
    if ( !v32 )
      v38 = sa;
    v44 = (const char **)(v144 + 40);
    *(_QWORD *)v109 = v38;
    v45 = 0;
    while ( 2 )
    {
      v47 = v44[1];
      if ( v37 )
      {
        v31 = (__int64 *)sa;
        v46 = s1;
        if ( v47 )
          goto LABEL_38;
      }
      else
      {
        if ( !v47 )
        {
LABEL_58:
          if ( sa )
          {
            v116.m128i_i64[1] = 0;
            qfree(sa, (const char *)v31);
          }
          if ( (v45 & 0x80000000) == 0LL )
          {
            v33 = (int)v45;
            if ( (int)v45 < (unsigned __int64)v145 )
              goto LABEL_62;
          }
LABEL_120:
          v95 = *(_QWORD *)v115;
LABEL_155:
          if ( v95 )
          {
            LODWORD(v33) = v114;
LABEL_45:
            LODWORD(v48) = v33;
LABEL_123:
            sub_1A260((unsigned int)"Invalid KEXT: %s", (_DWORD)v48, v33, v34, v35, v36);
          }
LABEL_122:
          v48 = s1;
          goto LABEL_123;
        }
LABEL_38:
        v46 = *v44;
        v31 = *(__int64 **)v109;
      }
      if ( !strcmp(v46, (const char *)v31) )
        goto LABEL_58;
      ++v45;
      v44 += 10;
      if ( v45 >= v43 )
      {
        if ( sa )
        {
          v116.m128i_i64[1] = 0;
          qfree(sa, (const char *)v31);
        }
        goto LABEL_120;
      }
      continue;
    }
  }
  v181 = 0;
  v179.m128i_i64[1] = 0x3FF000004LL;
  *(_QWORD *)&v182 = "Choose a kext to load";
  v96 = (__int64 *)&v183[1] + 1;
  v180 = -1;
  v179.m128i_i64[0] = (__int64)&unk_65AF8;
  DWORD2(v182) = 2;
  LODWORD(v183[1]) = -1;
  v183[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_652A0), (__m128i)(unsigned __int64)&off_649F0);
  v97 = 0.0;
  do
  {
    *v96 = 0;
    v96 += 3;
    *((_OWORD *)v96 - 1) = 0;
  }
  while ( v96 != &v188 );
  LODWORD(v188) = 0;
  if ( (((unsigned __int32)v179.m128i_i32[3] >> 19) & 0x3F) != 0 )
  {
    if ( v179.m128i_i8[11] != -1 )
    {
      if ( !under_debugger )
      {
        v105 = (struct _Unwind_Exception *)interr(0);
        sub_22F90(&v179);
        sub_162E0(v117);
        _Unwind_Resume(v105);
      }
      BUG();
    }
    v179.m128i_i8[11] = (((unsigned __int32)v179.m128i_i32[3] >> 19) & 0x3F) - 1;
    v179.m128i_i32[3] &= 0xFE07FFFF;
  }
  v179.m128i_i64[0] = (__int64)off_64938;
  *(_QWORD *)&v189 = &v144;
  v116.m128i_i64[0] = 0;
  v100 = callui(16);
  if ( v100 < 0 )
    sub_1A260(0, 0, v98, v99, v101, v102);
  v179.m128i_i64[0] = (__int64)&unk_65AF8;
  v103 = &v186;
  do
  {
    v104 = *v103;
    if ( *v103 )
    {
      v103[1] = 0;
      v97 = qfree(v104, 0, v97);
    }
    v103 -= 3;
  }
  while ( v183 != (_OWORD *)v103 );
  v33 = (int)v100;
LABEL_62:
  sub_4B6F0(a1, v117, &v144[80 * v33], 0);
  if ( v114 )
  {
    *(_QWORD *)v115 = 0;
    qfree(v114, (const char *)v117);
  }
LABEL_64:
  sub_162E0(v117);
  return v206 - __readfsqword(0x28u);
}
