unsigned __int64 __fastcall sub_4D830(__m128i *a1, __int64 a2, const char *a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  int *v13; // rax
  int v14; // edi
  int v15; // esi
  const char *v16; // rbp
  const char *v17; // rsi
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 (*v24)(); // rcx
  char *v25; // rax
  __int64 (*v26)(); // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbp
  const char *v36; // r15
  size_t v37; // rax
  __int64 v38; // r13
  size_t v39; // rbp
  void *v40; // rax
  unsigned __int64 v41; // r13
  const char **v42; // r14
  unsigned __int64 v43; // r15
  const char *v44; // rsi
  const char *v45; // rdi
  const char *v46; // rax
  const char *v47; // rsi
  __int64 *v48; // rsi
  char *v49; // rax
  __int64 (*v50)(); // rcx
  __int64 v51; // rdx
  char *v52; // r14
  int v53; // eax
  char *v54; // rdx
  char *v55; // rcx
  int v56; // eax
  __m128i v58; // xmm0
  int v59; // eax
  int v60; // eax
  const char *v61; // rsi
  __int64 v62; // rdx
  __int64 (*v63)(); // rcx
  const char *v64; // rdx
  char *v65; // rbp
  char *v66; // r14
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int8 v71; // al
  __int64 selector; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  char *v76; // r14
  __int64 i; // rbp
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  const char *v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rbp
  __int64 v85; // rbx
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 *v88; // rbp
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // ebp
  __int64 *v95; // r13
  struct _Unwind_Exception *v96; // rbx
  char v97; // [rsp+0h] [rbp-4F8h]
  char *sa; // [rsp+8h] [rbp-4F0h]
  char *sb; // [rsp+8h] [rbp-4F0h]
  int v101[2]; // [rsp+10h] [rbp-4E8h]
  unsigned int v102; // [rsp+10h] [rbp-4E8h]
  char *v103; // [rsp+10h] [rbp-4E8h]
  char *v104; // [rsp+18h] [rbp-4E0h]
  int v105[4]; // [rsp+20h] [rbp-4D8h] BYREF
  __int64 v106; // [rsp+30h] [rbp-4C8h] BYREF
  int v107[4]; // [rsp+38h] [rbp-4C0h]
  __m128i v108; // [rsp+50h] [rbp-4A8h] BYREF
  int v109[2]; // [rsp+70h] [rbp-488h] BYREF
  __int64 v110; // [rsp+78h] [rbp-480h]
  __m128i si128; // [rsp+80h] [rbp-478h]
  __int64 v112; // [rsp+90h] [rbp-468h]
  int v113; // [rsp+98h] [rbp-460h]
  char v114; // [rsp+9Ch] [rbp-45Ch]
  __int64 v115; // [rsp+A0h] [rbp-458h]
  char v116; // [rsp+A8h] [rbp-450h]
  unsigned int v117; // [rsp+B0h] [rbp-448h]
  __int64 v118; // [rsp+B8h] [rbp-440h]
  __int128 v119; // [rsp+C0h] [rbp-438h]
  __m128i v120; // [rsp+D0h] [rbp-428h]
  char v121; // [rsp+E0h] [rbp-418h]
  __m128i v122; // [rsp+E8h] [rbp-410h]
  __int64 v123; // [rsp+F8h] [rbp-400h]
  __int128 v124; // [rsp+100h] [rbp-3F8h]
  __int16 v125; // [rsp+110h] [rbp-3E8h]
  int v126[3]; // [rsp+114h] [rbp-3E4h] BYREF
  int v127; // [rsp+120h] [rbp-3D8h]
  __int64 v128; // [rsp+138h] [rbp-3C0h]
  __int128 v129; // [rsp+140h] [rbp-3B8h]
  __int64 v130; // [rsp+150h] [rbp-3A8h]
  __int128 v131; // [rsp+158h] [rbp-3A0h]
  __int64 v132; // [rsp+168h] [rbp-390h]
  __int128 v133; // [rsp+170h] [rbp-388h]
  __int64 v134; // [rsp+180h] [rbp-378h]
  __int128 v135; // [rsp+188h] [rbp-370h]
  char *v136; // [rsp+198h] [rbp-360h] BYREF
  __int128 v137; // [rsp+1A0h] [rbp-358h]
  __int64 v138; // [rsp+1B0h] [rbp-348h] BYREF
  __int128 v139; // [rsp+1B8h] [rbp-340h]
  __int64 v140; // [rsp+1C8h] [rbp-330h]
  __int128 v141; // [rsp+1D0h] [rbp-328h]
  __int64 v142; // [rsp+1E0h] [rbp-318h]
  __int128 v143; // [rsp+1E8h] [rbp-310h]
  __int64 v144; // [rsp+1F8h] [rbp-300h]
  __int128 v145; // [rsp+200h] [rbp-2F8h]
  __int64 v146; // [rsp+210h] [rbp-2E8h]
  __int128 v147; // [rsp+218h] [rbp-2E0h]
  __int16 v148; // [rsp+228h] [rbp-2D0h]
  char v149; // [rsp+22Ah] [rbp-2CEh]
  int v150; // [rsp+22Ch] [rbp-2CCh]
  __int128 v151; // [rsp+230h] [rbp-2C8h]
  __int64 v152; // [rsp+240h] [rbp-2B8h]
  __int64 v153; // [rsp+248h] [rbp-2B0h]
  int v154; // [rsp+250h] [rbp-2A8h]
  __int64 v155; // [rsp+258h] [rbp-2A0h]
  __int128 v156; // [rsp+260h] [rbp-298h]
  __int64 v157; // [rsp+270h] [rbp-288h]
  __m128i v158[2]; // [rsp+280h] [rbp-278h] BYREF
  __int64 v159; // [rsp+2A0h] [rbp-258h]
  __int64 v160; // [rsp+2A8h] [rbp-250h]
  __int64 v161; // [rsp+2B0h] [rbp-248h]
  __int128 v162; // [rsp+2B8h] [rbp-240h]
  __int128 v163; // [rsp+2C8h] [rbp-230h]
  __int128 v164; // [rsp+2D8h] [rbp-220h]
  __int128 v165; // [rsp+2E8h] [rbp-210h]
  __int128 v166; // [rsp+2F8h] [rbp-200h]
  __int128 v167; // [rsp+308h] [rbp-1F0h]
  __int128 v168; // [rsp+318h] [rbp-1E0h]
  __int128 v169; // [rsp+328h] [rbp-1D0h]
  unsigned __int64 v170; // [rsp+338h] [rbp-1C0h]
  __m128i v171; // [rsp+340h] [rbp-1B8h] BYREF
  __int128 v172; // [rsp+350h] [rbp-1A8h]
  __int64 v173; // [rsp+360h] [rbp-198h]
  __int128 v174; // [rsp+368h] [rbp-190h]
  _OWORD v175[4]; // [rsp+378h] [rbp-180h] BYREF
  __int128 v176; // [rsp+3B8h] [rbp-140h]
  __int128 v177; // [rsp+3C8h] [rbp-130h]
  __int64 v178; // [rsp+3D8h] [rbp-120h] BYREF
  __int128 v179; // [rsp+3E0h] [rbp-118h]
  __int64 v180; // [rsp+3F0h] [rbp-108h] BYREF
  __int128 v181; // [rsp+3F8h] [rbp-100h]
  __int64 v182; // [rsp+408h] [rbp-F0h]
  int v183; // [rsp+410h] [rbp-E8h]
  __int64 v184; // [rsp+418h] [rbp-E0h]
  __int64 v185; // [rsp+420h] [rbp-D8h]
  int v186; // [rsp+428h] [rbp-D0h]
  __int128 v187; // [rsp+430h] [rbp-C8h]
  __int64 v188; // [rsp+440h] [rbp-B8h]
  __int128 v189; // [rsp+448h] [rbp-B0h]
  __int64 v190; // [rsp+458h] [rbp-A0h]
  __int128 v191; // [rsp+460h] [rbp-98h]
  __int64 v192; // [rsp+470h] [rbp-88h]
  __int128 v193; // [rsp+478h] [rbp-80h]
  __int128 v194; // [rsp+488h] [rbp-70h]
  __int128 v195; // [rsp+498h] [rbp-60h]
  int v196; // [rsp+4A8h] [rbp-50h]
  int v197; // [rsp+4ACh] [rbp-4Ch]
  unsigned __int64 v198; // [rsp+4B8h] [rbp-40h]

  v4 = a1->m128i_i64[1];
  v198 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_574B0);
  *(_QWORD *)v109 = &off_62AA0;
  v110 = v4;
  v112 = -1;
  v113 = 8;
  v114 = 1;
  v115 = a2;
  v116 = 0;
  v118 = 0;
  v121 = 0;
  v119 = 0;
  v120 = _mm_load_si128((const __m128i *)&xmmword_57480);
  v123 = 0;
  v122 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  v125 = 0;
  v128 = 0;
  v130 = 0;
  v132 = 0;
  v134 = 0;
  v136 = nullptr;
  v138 = 0;
  v140 = 0;
  v142 = 0;
  v144 = 0;
  v146 = 0;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v124 = 0;
  v129 = 0;
  v131 = 0;
  v133 = 0;
  v135 = 0;
  v137 = 0;
  v139 = 0;
  v141 = 0;
  v143 = 0;
  v145 = 0;
  v147 = 0;
  v151 = -1;
  v155 = 0;
  v157 = 0;
  v156 = 0;
  if ( !sub_25BB0((__int64)v109) )
    sub_1A260((__int64)"failed to parse Mach-O header", a2, v6, v7, v8, v9, v97);
  v10 = v119;
  if ( !(_QWORD)v119 || (v11 = v117) == 0 )
  {
LABEL_15:
    v17 = nullptr;
    v18 = 0;
    goto LABEL_16;
  }
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= v10 )
      goto LABEL_14;
    v13 = (int *)(v118 + 20 * v12);
    v14 = *v13;
    v15 = v13[1];
    *(_OWORD *)v107 = 0;
    v106 = 0;
    memset(&v108, 0, 24);
    sub_3CE10(v14, v15, &v106, v108.m128i_i64, 0);
    v16 = s1;
    if ( *(_QWORD *)v107 )
      v16 = (const char *)v106;
    if ( strstr(a3, v16) )
      break;
    if ( v108.m128i_i64[0] )
    {
      v108.m128i_i64[1] = 0;
      qfree();
    }
    if ( v106 )
    {
      *(_QWORD *)v107 = 0;
      qfree();
    }
LABEL_14:
    if ( v11 == ++v12 )
      goto LABEL_15;
    v10 = v119;
  }
  v17 = (const char *)(unsigned int)v12;
  if ( (debug & 0x10) != 0 )
  {
    sub_191F0((__int64)"loading kcache subfile %d %s\n", v12, v16);
    v17 = (const char *)(unsigned int)v12;
  }
  v18 = v12;
  if ( v108.m128i_i64[0] )
  {
    v108.m128i_i64[1] = 0;
    qfree();
    v17 = (const char *)(unsigned int)v17;
  }
  if ( v106 )
  {
    *(_QWORD *)v107 = 0;
    qfree();
    v17 = (const char *)(unsigned int)v17;
  }
LABEL_16:
  if ( !sub_25EF0((__int64)v109, (unsigned int)v17, 0, 0) )
    sub_1A260((__int64)"Failed to initialize kernelcache", (__int64)v17, v19, v20, v21, v22, v97);
  if ( v122.m128i_i64[0] == -1 )
  {
    sub_11CF0(v109, v17, v19, v20);
    goto LABEL_160;
  }
  a1[855].m128i_i8[12] = HIBYTE(v125);
  sub_1D1B0((__int64)a1, v126);
  if ( !a1[855].m128i_i8[10] )
    sub_3A180(a1, (__int64)v109, v23, v24);
  sub_4BB00((__int64)a1, (__int64)v109);
  v17 = "single kext";
  v25 = strstr(a3, "single kext");
  v29 = (unsigned int)v127;
  if ( !v25 )
  {
    v102 = v127;
    v48 = (__int64 *)"kernel only";
    *(__m128i *)v105 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_64188, (__m128i)(unsigned __int64)&v138);
    v49 = strstr(a3, "kernel only");
    v51 = v102;
    v52 = v49;
    if ( !v49 )
      goto LABEL_67;
    if ( v102 != 12 || v149 )
    {
      v53 = v150;
    }
    else
    {
      v48 = (__int64 *)&v108;
      v108 = _mm_load_si128((const __m128i *)v105);
      if ( !(unsigned int)sub_4ABA0((__int64)v109, &v108) )
      {
        if ( (_QWORD)v139 )
        {
          if ( (_QWORD)v139 == 1 && *(_DWORD *)(v138 + 24) == 1 )
          {
            v150 = 2;
            v149 = 1;
          }
          else
          {
            v150 = 3;
            v149 = 1;
          }
          goto LABEL_67;
        }
        v150 = 1;
        v149 = 1;
LABEL_50:
        if ( !HIBYTE(v148) )
          sub_4BCC0((__int64)v109, (__int64)v48, v51, v50);
        v54 = v136;
        v55 = &v136[80 * v137];
        if ( v55 != v136 )
        {
          while ( 1 )
          {
            if ( *((_QWORD *)v54 + 6) )
            {
              v104 = v55;
              v103 = v54;
              v56 = strcmp(*((const char **)v54 + 5), "com.apple.kernel");
              v54 = v103;
              v55 = v104;
              if ( !v56 )
                break;
            }
            v54 += 80;
            if ( v54 == v55 )
              goto LABEL_67;
          }
          sub_4B770(a1, (__int64)v109, v103, 0);
          goto LABEL_64;
        }
LABEL_67:
        v58 = _mm_loadu_si128(a1);
        v173 = 0;
        v171 = v58;
        v176 = 0;
        v177 = 0;
        v179 = 0;
        v181 = 0;
        v189 = 0;
        v191 = 0;
        v193 = 0;
        v178 = 0;
        v180 = 0;
        v182 = 0;
        v183 = -1;
        v184 = 0;
        v185 = -1;
        v186 = 0;
        v188 = 0;
        v190 = 0;
        v192 = 0;
        v197 = 0;
        v172 = (unsigned __int64)a2;
        v187 = -1;
        v174 = 0;
        memset(v175, 0, sizeof(v175));
        v194 = 0;
        v195 = 0;
        v196 = v18;
        if ( v127 != 12 || v149 )
        {
          v59 = v150;
        }
        else
        {
          v108 = _mm_load_si128((const __m128i *)v105);
          if ( (unsigned int)sub_4ABA0((__int64)v109, &v108) )
          {
            v59 = v150;
          }
          else if ( (_QWORD)v139 )
          {
            if ( (_QWORD)v139 == 1 && *(_DWORD *)(v138 + 24) == 1 )
            {
              v150 = 2;
              v59 = 2;
            }
            else
            {
              v150 = 3;
              v59 = 3;
            }
          }
          else
          {
            v150 = 1;
            v59 = 1;
          }
          v149 = 1;
        }
        v186 = v59;
        if ( !(_BYTE)v148 )
          sub_28840((__int64)v109);
        v185 = *((_QWORD *)&v151 + 1);
        v60 = v197 | 0xC;
        if ( !v52 )
          v60 = v197 | 4;
        v197 = v60;
        sub_44BA0((__int64)a1, (__int64)&v171);
        v61 = "kernel + all kexts";
        if ( strstr(a3, "kernel + all kexts") )
        {
          if ( !HIBYTE(v148) )
            sub_4BCC0((__int64)v109, (__int64)"kernel + all kexts", v62, v63);
          if ( (_QWORD)v137 )
            sub_19440((__int64)"Loading prelinked KEXTs");
          else
            sub_196C0((__int64)"No KEXTs detected");
          v65 = &v136[80 * v137];
          if ( v65 != v136 )
          {
            v66 = v136;
            do
            {
              while ( 1 )
              {
                if ( (unsigned __int8)callui(27, v61, v64) )
                  sub_1A260(0, (__int64)v61, v67, v68, v69, v70, v97);
                v61 = *((const char **)v66 + 3);
                v64 = *((const char **)v66 + 1);
                if ( v61 != v64 )
                {
                  sub_112F0((__int64)"relocating subfile at %a to %a...\n", 0.0, NAN);
                  v170 = 0xFFFFFFFF00000000LL;
                  v160 = 513;
                  v71 = a1[855].m128i_i8[12];
                  v159 = 0;
                  memset(v158, 0, sizeof(v158));
                  v161 = 0;
                  *(_DWORD *)((char *)&v160 + 3) = (unsigned __int8)(v71 + 1);
                  v162 = -1;
                  v163 = -1;
                  v164 = -1;
                  v165 = -1;
                  v166 = -1;
                  v167 = -1;
                  v168 = -1;
                  v169 = -1;
                  selector = allocate_selector();
                  v73 = a1->m128i_i64[1];
                  v161 = selector;
                  v74 = *((_QWORD *)v66 + 3);
                  v75 = *(_QWORD *)(v73 + 16);
                  v158[0].m128i_i64[0] = v75 & v74;
                  v158[0].m128i_i64[1] = v75 & (*((_QWORD *)v66 + 2) + v74);
                  add_segm_ex();
                  v61 = *((const char **)v66 + 1);
                  if ( (unsigned int)move_segm() )
                    break;
                }
                v66 += 80;
                if ( v65 == v66 )
                  goto LABEL_89;
              }
              move_segm_strerror();
              v61 = *((const char **)v66 + 3);
              sub_112F0((__int64)"error moving segment %a to %a: %s\n", 0.0, NAN, v61);
              v66 += 80;
            }
            while ( v65 != v66 );
LABEL_89:
            sb = &v136[80 * v137];
            if ( sb != v136 )
            {
              v76 = v136;
              for ( i = 0; ; ++i )
              {
                if ( (unsigned __int8)callui(27, v61, v64) )
                  sub_1A260(0, (__int64)v61, v78, v79, v80, v81, v97);
                v82 = s1;
                if ( *((_QWORD *)v76 + 6) )
                  v82 = *((const char **)v76 + 5);
                sub_112F0((__int64)"%llX: loading %s\n", *((_QWORD *)v76 + 1), v82);
                sub_19440((__int64)"%zu/%zu loading %s");
                v61 = (const char *)v109;
                sub_4B770(a1, (__int64)v109, v76, 65);
                v76 += 80;
                if ( sb == v76 )
                  break;
              }
            }
          }
          set_default_dataseg();
        }
        v83 = v192;
        if ( v192 )
        {
          v84 = v193;
          if ( (_QWORD)v193 )
          {
            v85 = 0;
            do
            {
              v86 = (_QWORD *)(v83 + 24 * v85);
              if ( *v86 )
              {
                v86[1] = 0;
                qfree();
                v83 = v192;
              }
              ++v85;
            }
            while ( v84 != v85 );
          }
          *(_QWORD *)&v193 = 0;
          qfree();
        }
        if ( v190 )
        {
          *(_QWORD *)&v191 = 0;
          qfree();
        }
        if ( v188 )
        {
          *(_QWORD *)&v189 = 0;
          qfree();
        }
        if ( v180 )
        {
          *(_QWORD *)&v181 = 0;
          qfree();
        }
        if ( v178 )
        {
          *(_QWORD *)&v179 = 0;
          qfree();
        }
        if ( *((_QWORD *)&v176 + 1) )
        {
          *(_QWORD *)&v177 = 0;
          qfree();
        }
        goto LABEL_64;
      }
      v149 = 1;
      v53 = v150;
    }
    if ( v53 != 1 )
      goto LABEL_67;
    goto LABEL_50;
  }
  if ( v127 != 12 )
  {
    if ( (v17 = "__PRELINK_TEXT", !(unsigned __int8)sub_290B0((__int64)v109, "__PRELINK_TEXT", "__text", v158))
      && (v17 = "__PRELINK", !(unsigned __int8)sub_290B0((__int64)v109, "__PRELINK", "__text", v158))
      || !v160 )
    {
      v17 = "AUTOHIDE REGISTRY\n"
            "HIDECANCEL\n"
            "IDA has detected that the kernel and all kexts are linked together in the same segment.\n"
            "The analysis for a single kext is likely useless without the kernel.\n"
            "Do you wish to continue?";
      if ( (int)sub_19F30() <= 0 )
        sub_1A260(
          0,
          (__int64)"AUTOHIDE REGISTRY\n"
                   "HIDECANCEL\n"
                   "IDA has detected that the kernel and all kexts are linked together in the same segment.\n"
                   "The analysis for a single kext is likely useless without the kernel.\n"
                   "Do you wish to continue?",
          v29,
          (__int64)v26,
          v27,
          v28,
          v97);
    }
  }
  if ( !HIBYTE(v148) )
    sub_4BCC0((__int64)v109, (__int64)v17, v29, v26);
  if ( !(_QWORD)v137 )
LABEL_160:
    sub_1A260((__int64)"No prelinked KEXTs detected", (__int64)v17, v29, (__int64)v26, v27, v28, v97);
  v106 = 0;
  *(_OWORD *)v107 = 0;
  v30 = qgetenv();
  if ( v30 )
  {
    v35 = *(_QWORD *)v107;
    if ( *(_QWORD *)v107 )
    {
      v31 = v106;
      memset(&v108, 0, 24);
      sa = (char *)v106;
      if ( v106 )
      {
LABEL_28:
        v37 = strlen(sa);
        v38 = v37 + 1;
        v39 = v37;
        v40 = (void *)qvector_reserve();
        v108.m128i_i64[1] = v38;
        v108.m128i_i64[0] = (__int64)v40;
        memmove(v40, sa, v39);
        *(_BYTE *)(v108.m128i_i64[0] + v39) = 0;
        v41 = v137;
        sa = (char *)v108.m128i_i64[0];
        if ( !(_QWORD)v137 )
        {
          if ( !v108.m128i_i64[0] )
            goto LABEL_116;
          v108.m128i_i64[1] = 0;
          qfree();
          v87 = *(_QWORD *)v107;
          goto LABEL_151;
        }
        v35 = v108.m128i_i64[1];
        v36 = s1;
        v30 = v108.m128i_i64[1] == 0;
      }
      else
      {
        v41 = v137;
        v35 = 0;
        v36 = s1;
        if ( !(_QWORD)v137 )
          goto LABEL_45;
      }
    }
    else
    {
      v36 = s1;
      memset(&v108, 0, 24);
      sa = (char *)s1;
      if ( s1 )
        goto LABEL_28;
      v41 = v137;
      if ( !(_QWORD)v137 )
        goto LABEL_118;
    }
    if ( !v30 )
      v36 = sa;
    v42 = (const char **)(v136 + 40);
    *(_QWORD *)v101 = v36;
    v43 = 0;
    while ( 2 )
    {
      v46 = v42[1];
      if ( v35 )
      {
        v44 = sa;
        v45 = s1;
        if ( v46 )
          goto LABEL_38;
      }
      else
      {
        if ( !v46 )
        {
LABEL_58:
          if ( sa )
          {
            v108.m128i_i64[1] = 0;
            qfree();
          }
          if ( (v43 & 0x80000000) == 0LL )
          {
            v31 = (int)v43;
            if ( (int)v43 < (unsigned __int64)v137 )
              goto LABEL_62;
          }
LABEL_116:
          v87 = *(_QWORD *)v107;
LABEL_151:
          if ( v87 )
          {
            v31 = v106;
LABEL_45:
            v47 = (const char *)v31;
LABEL_119:
            sub_1A260((__int64)"Invalid KEXT: %s", (__int64)v47, v31, v32, v33, v34, v97);
          }
LABEL_118:
          v47 = s1;
          goto LABEL_119;
        }
LABEL_38:
        v45 = *v42;
        v44 = *(const char **)v101;
      }
      if ( !strcmp(v45, v44) )
        goto LABEL_58;
      ++v43;
      v42 += 10;
      if ( v43 >= v41 )
      {
        if ( sa )
        {
          v108.m128i_i64[1] = 0;
          qfree();
        }
        goto LABEL_116;
      }
      continue;
    }
  }
  v173 = 0;
  v171.m128i_i64[1] = 0x3FF000004LL;
  *(_QWORD *)&v174 = "Choose a kext to load";
  v88 = (__int64 *)&v175[1] + 1;
  v172 = -1;
  v171.m128i_i64[0] = (__int64)&unk_65AF8;
  DWORD2(v174) = 2;
  LODWORD(v175[1]) = -1;
  v175[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_652A0), (__m128i)(unsigned __int64)&off_649F0);
  do
  {
    *v88 = 0;
    v88 += 3;
    *((_OWORD *)v88 - 1) = 0;
  }
  while ( v88 != &v180 );
  LODWORD(v180) = 0;
  if ( (((unsigned __int32)v171.m128i_i32[3] >> 19) & 0x3F) != 0 )
  {
    if ( v171.m128i_i8[11] != -1 )
    {
      if ( !under_debugger )
      {
        v96 = (struct _Unwind_Exception *)interr();
        sub_22FA0(&v171);
        sub_162E0((__int64)v109);
        _Unwind_Resume(v96);
      }
      BUG();
    }
    v171.m128i_i8[11] = (((unsigned __int32)v171.m128i_i32[3] >> 19) & 0x3F) - 1;
    v171.m128i_i32[3] &= 0xFE07FFFF;
  }
  v171.m128i_i64[0] = (__int64)off_64938;
  *(_QWORD *)&v181 = &v136;
  v108.m128i_i64[0] = 0;
  v89 = callui(16, 0, &v171);
  v94 = v89;
  if ( v89 < 0 )
    sub_1A260(0, 0, v90, v91, v92, v93, v97);
  v171.m128i_i64[0] = (__int64)&unk_65AF8;
  v95 = &v178;
  do
  {
    if ( *v95 )
    {
      v95[1] = 0;
      qfree();
    }
    v95 -= 3;
  }
  while ( v175 != (_OWORD *)v95 );
  v31 = v94;
LABEL_62:
  sub_4B770(a1, (__int64)v109, &v136[80 * v31], 0);
  if ( v106 )
  {
    *(_QWORD *)v107 = 0;
    qfree();
  }
LABEL_64:
  sub_162E0((__int64)v109);
  return v198 - __readfsqword(0x28u);
}

