__int64 __fastcall sub_2FE0(
        __int64 a1,
        char a2,
        double a3,
        double a4,
        __m128 si128,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rax
  int v19; // ebp
  int v20; // ecx
  __int64 v21; // r10
  __m128 v22; // xmm0
  __int64 v23; // rdi
  __m128 v24; // xmm1
  const char *v25; // rbx
  const char *v26; // r15
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  char v29; // al
  int v30; // edx
  unsigned __int64 v31; // rax
  char v32; // al
  __int64 v33; // rdx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  __int64 v36; // r12
  int v37; // ebp
  const char *v38; // rcx
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  _BYTE *v52; // r12
  _BYTE *v53; // rbx
  unsigned int v54; // ebp
  char *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __m128 v59; // xmm4
  __m128 v60; // xmm5
  __int64 v61; // rdx
  const char *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  char **v66; // r9
  __m128 v67; // xmm4
  __m128 v68; // xmm5
  __int64 v69; // rsi
  int v70; // r10d
  char *v71; // rax
  unsigned __int64 v72; // rdx
  int v73; // edx
  _BOOL8 v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // rsi
  char *v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __m128 v82; // xmm4
  __m128 v83; // xmm5
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rsi
  __int64 v90; // rdx
  unsigned int v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdi
  unsigned int v98; // r12d
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __m128 v103; // xmm4
  __m128 v104; // xmm5
  const char *v105; // rbx
  char *v106; // rax
  const char *v107; // rbp
  unsigned int v108; // esi
  int v109; // ebx
  unsigned __int64 v110; // rbp
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // r12
  unsigned __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  unsigned __int64 v119; // rdi
  __int64 v120; // rdi
  unsigned __int64 v121; // rdx
  __int64 v122; // rbp
  __int16 v123; // cx
  bool v124; // cf
  __int64 v125; // r15
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __m128 v131; // xmm4
  __m128 v132; // xmm5
  __int64 v133; // rbx
  __int64 v134; // rdx
  int v135; // r12d
  __int64 v136; // rax
  FILE *v137; // rbp
  __int64 **v138; // rax
  int v139; // edx
  int v140; // eax
  __int64 *v141; // r14
  __int64 *v142; // r13
  unsigned __int16 v143; // r15
  unsigned __int16 v144; // r15
  unsigned __int8 v145; // al
  int v146; // ebx
  unsigned __int16 v147; // ax
  int v148; // ebp
  __int16 v149; // dx
  unsigned __int16 v150; // r15
  int v151; // ebp
  __int64 *v152; // rbx
  __int64 *v153; // rbx
  __int64 *v154; // rbx
  __int64 *v155; // rbx
  __int64 *v156; // rbx
  __int64 *v157; // rbx
  unsigned __int8 v158; // al
  unsigned __int16 v159; // bx
  __int64 *v160; // rcx
  int v161; // r14d
  __int64 *v162; // rbp
  __int16 v163; // dx
  int v164; // ebx
  int i; // ebp
  int v166; // r13d
  char v167; // cl
  int v168; // ebp
  __int64 v169; // rdx
  __int64 v170; // rdx
  __int64 v171; // rdx
  int v172; // ebp
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __m128 v177; // xmm4
  __m128 v178; // xmm5
  __int64 v179; // rax
  int v180; // r14d
  char *v181; // rax
  __int64 v182; // r8
  __int64 v183; // r9
  __m128 v184; // xmm4
  __m128 v185; // xmm5
  __int64 v186; // rdx
  char v187; // dl
  __int64 v188; // rax
  int v189; // eax
  char v190; // bp
  __int64 v192; // rsi
  unsigned __int64 v193; // rcx
  unsigned int v194; // edx
  int v196; // r15d
  __int64 v197; // rbx
  int dword; // eax
  __int64 v199; // rax
  __int64 v200; // r13
  unsigned __int64 v201; // rbx
  char v202; // r15
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  __m128 v207; // xmm4
  __m128 v208; // xmm5
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __m128 v213; // xmm4
  __m128 v214; // xmm5
  char v215; // al
  __int64 v216; // r9
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __m128 v221; // xmm4
  __m128 v222; // xmm5
  __int64 v223; // rdx
  __int64 v224; // rax
  __int64 **v225; // [rsp+0h] [rbp-1F8h]
  unsigned __int64 v226; // [rsp+0h] [rbp-1F8h]
  char v227; // [rsp+0h] [rbp-1F8h]
  char v228; // [rsp+0h] [rbp-1F8h]
  unsigned int *v229; // [rsp+0h] [rbp-1F8h]
  __int64 v230; // [rsp+0h] [rbp-1F8h]
  char v231; // [rsp+0h] [rbp-1F8h]
  char v232; // [rsp+0h] [rbp-1F8h]
  __int64 *v233; // [rsp+8h] [rbp-1F0h]
  __int64 v234; // [rsp+8h] [rbp-1F0h]
  __int64 v235; // [rsp+8h] [rbp-1F0h]
  __int64 **v236; // [rsp+10h] [rbp-1E8h]
  __int64 v237; // [rsp+10h] [rbp-1E8h]
  __int64 v238; // [rsp+10h] [rbp-1E8h]
  __int64 **v239; // [rsp+18h] [rbp-1E0h]
  __int64 v240; // [rsp+18h] [rbp-1E0h]
  __int64 v241; // [rsp+18h] [rbp-1E0h]
  unsigned int v244; // [rsp+3Ch] [rbp-1BCh]
  bool v245; // [rsp+47h] [rbp-1B1h] BYREF
  unsigned int v246; // [rsp+48h] [rbp-1B0h] BYREF
  unsigned int v247; // [rsp+4Ch] [rbp-1ACh] BYREF
  unsigned int v248; // [rsp+50h] [rbp-1A8h] BYREF
  int v249; // [rsp+54h] [rbp-1A4h] BYREF
  int v250; // [rsp+58h] [rbp-1A0h] BYREF
  int v251; // [rsp+5Ch] [rbp-19Ch] BYREF
  __int64 v252; // [rsp+60h] [rbp-198h] BYREF
  _BYTE v253[24]; // [rsp+68h] [rbp-190h]
  __int64 v254; // [rsp+80h] [rbp-178h]
  __int16 v255; // [rsp+88h] [rbp-170h]
  __int128 v256; // [rsp+90h] [rbp-168h]
  __int64 v257; // [rsp+A0h] [rbp-158h]
  __int64 v258; // [rsp+A8h] [rbp-150h]
  int v259; // [rsp+B0h] [rbp-148h]
  __int64 v260; // [rsp+B8h] [rbp-140h]
  int v261; // [rsp+C0h] [rbp-138h]
  __int64 v262; // [rsp+C8h] [rbp-130h]
  int v263; // [rsp+D0h] [rbp-128h]
  __int64 v264; // [rsp+D8h] [rbp-120h]
  int v265; // [rsp+E0h] [rbp-118h]
  __int64 v266; // [rsp+E8h] [rbp-110h]
  _OWORD v267[2]; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v268; // [rsp+110h] [rbp-E8h]
  __int64 v269; // [rsp+118h] [rbp-E0h]
  __int64 v270; // [rsp+120h] [rbp-D8h]
  __m128 v271; // [rsp+128h] [rbp-D0h]
  __m128 v272; // [rsp+138h] [rbp-C0h]
  __m128 v273; // [rsp+148h] [rbp-B0h]
  __m128 v274; // [rsp+158h] [rbp-A0h]
  __m128 v275; // [rsp+168h] [rbp-90h]
  __m128 v276; // [rsp+178h] [rbp-80h]
  __m128 v277; // [rsp+188h] [rbp-70h]
  __m128 v278; // [rsp+198h] [rbp-60h]
  unsigned __int64 v279; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v280; // [rsp+1B8h] [rbp-40h]

  v280 = __readfsqword(0x28u);
  set_processor_type("metapc", 1);
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  add_til("nlm", 0);
  qword_8220 = a1;
  v10 = (int *)&unk_8228;
  if ( qlread(a1, &unk_8228, 130) != 130 )
    goto LABEL_336;
  if ( (dword_8240 & 0x80u) == 0 )
    goto LABEL_3;
  if ( qlread(qword_8220, &stream, 276) != 276 )
    sub_2BB0(820);
  if ( byte_83B8 != 1 || byte_83B9 != 10 )
    sub_2B00((__int64)"Unknown compressing method");
  v135 = dword_83BA;
  if ( (unsigned int)dword_83BA <= 0x190 )
    sub_2BB0(827);
  v136 = qtmpfile();
  v137 = (FILE *)v136;
  if ( !v136 )
    sub_2B00((__int64)"Cannot create temporary file for decompressing");
  v10 = (int *)&unk_8228;
  qfwrite(v136, &unk_8228, 400);
  qword_82BA = qalloc(0x2000);
  if ( !qword_82BA )
    sub_2890((__int64)"NLM-loader (for unpacking)");
  dword_82B2 = 400;
  dword_82C2 = 400;
  stream = v137;
  dword_82B6 = v135;
  sub_2950((__int64)"Decompressing module...");
  v239 = (__int64 **)sub_2CA0();
  v225 = (__int64 **)sub_2CA0();
  v138 = (__int64 **)sub_2CA0();
  v139 = dword_82B2;
  v236 = v138;
  v140 = dword_82B6;
  if ( dword_82B2 < (unsigned int)dword_82B6 )
  {
    v141 = &qword_8220;
    v142 = &v252;
    while ( 1 )
    {
      while ( 1 )
      {
        v143 = HIWORD(dword_82C2);
        if ( HIWORD(dword_82C2) <= 0xFFu )
        {
          v10 = (int *)&v247;
          if ( qlread(*v141, &v247, 1) != 1 )
LABEL_326:
            sub_2BB0(897);
          v143 = (unsigned __int8)v247 | 0x8000;
        }
        HIWORD(dword_82C2) = v143 >> 1;
        v144 = v143 & 1;
        if ( !v144 )
          break;
        v158 = sub_2BD0(v239);
        sub_2480(v158);
        v139 = dword_82B2;
        v140 = dword_82B6;
        if ( dword_82B2 >= (unsigned int)dword_82B6 )
          goto LABEL_188;
      }
      v145 = sub_2BD0(v225);
      if ( v145 == 0xFE )
        break;
      if ( v145 == 0xFF )
      {
        v164 = 8;
        HIWORD(dword_82C2) = 0;
        do
        {
          if ( qlread(*v141, &v248, 1) != 1 )
            goto LABEL_326;
          sub_2480(v248);
          --v164;
        }
        while ( v164 );
        v233 = v142;
        for ( i = 0; i != 32; i += 8 )
        {
          v10 = &v249;
          if ( qlread(*v141, &v249, 1) != 1 )
            goto LABEL_326;
          v166 = (unsigned __int8)v249;
          sub_2480(v249);
          v167 = i;
          v164 |= v166 << v167;
        }
        v142 = v233;
        v168 = v164 - 1;
        if ( !v164 )
          goto LABEL_187;
        do
        {
          v10 = &v250;
          if ( qlread(*v141, &v250, 1) != 1 )
            goto LABEL_326;
          sub_2480(v250);
          v124 = v168-- == 0;
        }
        while ( !v124 );
        v139 = dword_82B2;
        v140 = dword_82B6;
        if ( dword_82B2 >= (unsigned int)dword_82B6 )
          goto LABEL_188;
      }
      else
      {
        LOWORD(v146) = v145;
        v147 = HIWORD(dword_82C2);
LABEL_175:
        v148 = 5;
        do
        {
          if ( v147 <= 0xFFu )
          {
            v10 = (int *)v142;
            if ( qlread(*v141, v142, 1) != 1 )
              goto LABEL_326;
            v147 = (unsigned __int8)v252 | 0x8000;
          }
          v149 = v147 << 15;
          v147 >>= 1;
          v144 = v149 | (v144 >> 1);
          --v148;
        }
        while ( v148 );
        HIWORD(dword_82C2) = v147;
        v150 = (32 * (unsigned __int8)sub_2BD0(v236)) | (v144 >> 11);
        if ( !v150 || !(_WORD)v146 || v150 >= (unsigned int)dword_82B2 )
          sub_2BB0(878);
        v151 = (unsigned __int16)dword_82C2 - v150 + ((unsigned __int16)dword_82C2 - v150 < 0 ? 0x2000 : 0);
        while ( 1 )
        {
          sub_2480(*(_BYTE *)(qword_82BA + v151));
          LOWORD(v146) = v146 - 1;
          if ( !(_WORD)v146 )
            break;
          if ( ++v151 == 0x2000 )
            v151 = 0;
        }
LABEL_187:
        v139 = dword_82B2;
        v140 = dword_82B6;
        if ( dword_82B2 >= (unsigned int)dword_82B6 )
          goto LABEL_188;
      }
    }
    v147 = HIWORD(dword_82C2);
    v159 = 0;
    v233 = (__int64 *)&v251;
    v160 = v141;
    v161 = 13;
    v162 = v160;
    do
    {
      if ( v147 <= 0xFFu )
      {
        v10 = &v251;
        if ( qlread(*v162, &v251, 1) != 1 )
          goto LABEL_326;
        v147 = (unsigned __int8)v251 | 0x8000;
      }
      v163 = v147 << 15;
      v147 >>= 1;
      v159 = v163 | (v159 >> 1);
      --v161;
    }
    while ( v161 );
    HIWORD(dword_82C2) = v147;
    v141 = v162;
    v146 = v159 >> 3;
    goto LABEL_175;
  }
LABEL_188:
  if ( v139 != v140 )
    sub_2BB0(1025);
  v152 = *v239;
  if ( *v239 )
  {
    if ( *v152 )
    {
      sub_2600(*v152);
      sub_2600(v152[1]);
    }
    qfree(v152);
    v153 = v239[1];
    if ( *v153 )
    {
      sub_2600(*v153);
      sub_2600(v153[1]);
    }
    qfree(v153);
  }
  qfree(v239);
  v154 = *v225;
  if ( *v225 )
  {
    if ( *v154 )
    {
      sub_2600(*v154);
      sub_2600(v154[1]);
    }
    qfree(v154);
    v155 = v225[1];
    if ( *v155 )
    {
      sub_2600(*v155);
      sub_2600(v155[1]);
    }
    qfree(v155);
  }
  qfree(v225);
  v156 = *v236;
  if ( *v236 )
  {
    if ( *v156 )
    {
      sub_2600(*v156);
      sub_2600(v156[1]);
    }
    qfree(v156);
    v157 = v236[1];
    if ( *v157 )
    {
      sub_2600(*v157);
      sub_2600(v157[1]);
    }
    qfree(v157);
  }
  qfree(v236);
  qfree(qword_82BA);
  if ( (unsigned int)qflush(stream) || ferror(stream) || feof(stream) )
    sub_2B00((__int64)"disk full or cannot write temporary file");
  sub_2950((__int64)"Ok\n");
  qword_8220 = make_linput(stream);
LABEL_3:
  v15 = getinf(12, v10, v11, v12, v13, v14, v225, v233, v236, v239);
  v16 = (unsigned int)dword_8252;
  v17 = 0;
  qword_86B2 = 0;
  qword_86BA = 0;
  v18 = 16 * v15;
  qword_86AA = v18;
  qword_86C2 = 0;
  qword_86CA = 0;
  qword_86D2 = -1;
  if ( dword_8252 )
  {
    v17 = dword_8256;
    if ( dword_8256 )
    {
      qword_86B2 = v18;
      qword_86BA = (unsigned int)dword_8256;
    }
  }
  v19 = 2;
  v20 = 1;
  v21 = 0;
  v22 = (__m128)-1LL;
  while ( 1 )
  {
    v23 = v20;
    v271 = v22;
    v24 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
    v279 = 0xFFFFFFFF00000000LL;
    v269 = 16777734;
    v268 = 0;
    v270 = v20;
    v267[1] = 0;
    v272 = v22;
    v273 = v22;
    v274 = v22;
    v275 = v22;
    v276 = v22;
    v277 = v22;
    v278 = v22;
    v267[0] = v24;
    if ( v20 == 1 )
    {
      LOBYTE(v279) = 2;
      v26 = "CODE";
      if ( !((unsigned int)v21 | v17) )
        goto LABEL_13;
      v23 = 1;
      v25 = ".bss";
      if ( v17 )
        goto LABEL_8;
    }
    else
    {
      if ( v17 )
      {
        LOBYTE(v279) = 3;
        v25 = ".data";
        v26 = "DATA";
        qword_86C2 = v18;
        qword_86CA = v17;
LABEL_8:
        LODWORD(v234) = v21;
        v226 = v16;
        *((_QWORD *)&v267[0] + 1) = v18 + v17;
        v27 = qlsize(qword_8220);
        if ( *((_QWORD *)&v267[0] + 1) < *(_QWORD *)&v267[0]
          || v27 < v16
          || v27 - v16 < *((_QWORD *)&v267[0] + 1) - *(_QWORD *)&v267[0] )
        {
          sub_2B00((__int64)"Truncated input file");
        }
        file2base(qword_8220, v16, *(_QWORD *)&v267[0], *((_QWORD *)&v267[0] + 1), 1);
        v18 = *((_QWORD *)&v267[0] + 1);
        v21 = (unsigned int)v234;
        v23 = v270;
        goto LABEL_103;
      }
      if ( !(_DWORD)v21 )
      {
        v26 = "BSS";
LABEL_13:
        LOBYTE(v279) = 7;
        v28 = v18 + 4096;
        v25 = ".bss";
        goto LABEL_14;
      }
      LOBYTE(v279) = 3;
      v23 = 2;
      v26 = "BSS";
      v25 = ".bss";
      qword_86C2 = v18;
      qword_86CA = 0;
    }
LABEL_103:
    *((_QWORD *)&v267[0] + 1) = v18 + v21;
    v28 = (v18 + v21 + 4095) & 0xFFFFFFFFFFFFF000LL;
LABEL_14:
    qword_86AA = v28;
    set_selector(v23, 0);
    v29 = add_segm_ex(v267, v25, v26, 33);
    v22 = (__m128)-1LL;
    if ( !v29 )
      goto LABEL_292;
    if ( v19 == 1 )
      break;
    v16 = (unsigned int)dword_825A;
    v17 = 0;
    v21 = (unsigned int)dword_8262;
    v19 = 1;
    v18 = qword_86AA;
    v20 = 2;
    if ( dword_825A )
      v17 = dword_825E;
  }
  LOBYTE(v237) = v29;
  set_default_dataseg(2, NAN);
  v30 = dword_8296;
  if ( (unsigned int)dword_8296 < (unsigned __int64)qword_86BA )
  {
    v133 = qword_86B2 + (unsigned int)dword_8296;
    setinf(14, 1, (unsigned int)dword_8296);
    setinf(15, v133, v134);
    add_entry(v133, v133, "nlm_start", 1, 0);
    v30 = dword_8296;
  }
  if ( dword_829A | v30 && (unsigned int)dword_829A < (unsigned __int64)qword_86BA )
  {
    add_entry(qword_86B2 + (unsigned int)dword_829A, qword_86B2 + (unsigned int)dword_829A, "nlm_terminate", 1, 0);
    v31 = (unsigned int)dword_829E;
    if ( !dword_829E )
      goto LABEL_24;
  }
  else
  {
    v31 = (unsigned int)dword_829E;
    if ( !dword_829E )
      goto LABEL_24;
  }
  if ( v31 < qword_86BA )
    add_entry(qword_86B2 + v31, qword_86B2 + v31, "nlm_check_unload", 1, 0);
LABEL_24:
  v32 = getinf_flag(3, 4);
  setinf(9, (-(__int64)(v32 == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8, v33);
  if ( dword_827E )
  {
    v34 = dword_8282;
    if ( dword_8282 )
    {
      sub_2950((__int64)"Creating imported names and relocating it...\n");
      netnode_check(&qword_86D2, "$ IDALDR node for ids loading $", 0, 1);
      qlseek(qword_8220, (unsigned int)dword_827E, 0);
      v110 = qword_86AA;
      v111 = qlsize(qword_8220);
      v112 = v110 + 4LL * v34;
      if ( (unsigned int)dword_827E >= v111 )
        goto LABEL_339;
      v113 = v111 - (unsigned int)dword_827E;
      if ( v34 > 0x3FFFFFFF || v110 >= v112 || v113 < 2 * (unsigned __int64)v34 )
        sub_2B00((__int64)"Bad import count");
      set_selector(3, 0);
      if ( !(unsigned __int8)add_segm(3, v110, v112, "extern", 0, 0) )
        goto LABEL_292;
      v114 = getseg(v110);
      *(_BYTE *)(v114 + 184) = 1;
      update_segm(v114);
      v234 = getinf(9, v110, v115, v116, v117, v118, v226, v234, v237, v240);
      do
      {
        LODWORD(v226) = sub_2E50();
        if ( (_DWORD)v226 )
          break;
        show_auto(v110, 0);
        set_name(v110, &stream, 1027);
        if ( (_BYTE)v234 == 8 )
        {
          put_qword(v110, 0);
          if ( !(unsigned __int8)netnode_exist(&qword_86D2) )
            goto LABEL_141;
        }
        else
        {
          put_dword(v110, 0);
          if ( !(unsigned __int8)netnode_exist(&qword_86D2) )
            goto LABEL_141;
        }
        set_import_name(qword_86D2, v110, &stream);
LABEL_141:
        if ( qlread(qword_8220, &v250, 4) != 4 )
          goto LABEL_142;
        if ( v250-- )
        {
          v244 = v34;
          v240 = (unsigned __int8)v234 - 1LL;
          while ( qlread(qword_8220, &v251, 4) == 4 )
          {
            v196 = v251;
            if ( (v251 & 0x40000000) != 0 )
            {
              v192 = qword_86B2;
              v193 = qword_86BA;
            }
            else
            {
              v192 = qword_86C2;
              v193 = qword_86CA;
            }
            v194 = v251 & 0x3FFFFFFF;
            v251 &= 0x3FFFFFFFu;
            if ( (v196 & 0x3FFFFFFFu) < v193 )
            {
              v197 = v192 + v194;
              dword = get_dword(v197);
              si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_6800);
              *(_QWORD *)&v253[16] = v110;
              LOWORD(v252) = 4;
              HIDWORD(v252) = 2;
              v254 = dword;
              *(__m128 *)v253 = si128;
              if ( v196 < 0 )
              {
                put_dword(v197, (unsigned int)(dword + v110));
                set_fixup(v197, &v252);
              }
              else
              {
                put_dword(v197, (unsigned int)(dword + v110 - v197));
                set_fixup(v197, &v252);
                if ( (_DWORD)v226 != 1 )
                {
                  v22 = 0;
                  v252 = v110;
                  v254 = 0;
                  *(_QWORD *)v253 = v240 + v110;
                  v255 = 0;
                  v257 = 0xFFFFFFFFLL;
                  v258 = 0;
                  v259 = 0;
                  v260 = 0;
                  v261 = 0;
                  v262 = 0;
                  v263 = 0;
                  v264 = 0;
                  v265 = 0;
                  v266 = 0;
                  *(__m128i *)&v253[8] = _mm_load_si128((const __m128i *)&xmmword_6810);
                  v256 = 0;
                  add_func_ex(&v252);
                  LODWORD(v226) = 1;
                }
              }
            }
            else
            {
              sub_2950((__int64)"Skip reference to extern '%s' with illegal offset 0x%X\n", (const char *)&stream, v194);
            }
            if ( !v250-- )
            {
              v34 = v244;
              goto LABEL_269;
            }
          }
LABEL_142:
          if ( (int)sub_2A20(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") <= 0 )
            goto LABEL_292;
          v119 = v110 + (unsigned __int8)v234;
          if ( v119 < v112 )
            set_segm_end(v119, v110 + (unsigned __int8)v234, 1);
          break;
        }
LABEL_269:
        v110 += (unsigned __int8)v234;
        --v34;
      }
      while ( v34 );
    }
  }
  v35 = dword_828A;
  if ( dword_8286 && dword_828A )
  {
    v36 = (unsigned int)dword_8286;
    v37 = 0;
    sub_2950((__int64)"Applying %s names...\n", "exported");
    qlseek(qword_8220, v36, 0);
    v38 = "Number of exports";
  }
  else
  {
LABEL_32:
    v35 = dword_8292;
    if ( !dword_828E || !dword_8292 )
      goto LABEL_39;
    v36 = (unsigned int)dword_828E;
    sub_2950((__int64)"Applying %s names...\n", "public");
    v37 = 1;
    qlseek(qword_8220, v36, 0);
    v38 = "Number of publics";
  }
  sub_2F20(qword_8220, v35, 4u, v38, v36, -1);
  while ( 2 )
  {
    if ( v37 )
    {
      if ( qlread(qword_8220, &v245, 1) != 1 || qlread(qword_8220, &v252, 4) != 4 )
      {
        if ( (int)sub_2A20(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") <= 0 )
          goto LABEL_292;
        goto LABEL_39;
      }
      if ( (unsigned int)sub_2E50() )
        goto LABEL_39;
      v73 = v252;
      v74 = v245;
    }
    else
    {
      if ( (unsigned int)sub_2E50() )
        goto LABEL_32;
      if ( qlread(qword_8220, &v252, 4) != 4 )
      {
        if ( (int)sub_2A20(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") <= 0 )
          goto LABEL_292;
        goto LABEL_32;
      }
      v73 = v252;
      v245 = (int)v252 < 0;
      v74 = (int)v252 < 0;
    }
    v75 = v73 & 0x3FFFFFFF;
    if ( v74 )
    {
      v76 = qword_86B2;
      if ( v75 >= qword_86BA )
        goto LABEL_65;
LABEL_70:
      add_entry(v75 + v76, v75 + v76, &stream, v74, 1);
    }
    else
    {
      v76 = qword_86C2;
      if ( v75 < qword_86CA )
        goto LABEL_70;
LABEL_65:
      sub_2950((__int64)"Skip name '%s' with illegal offset (0x%a)\n", (const char *)&stream, *(double *)v22.m128_u64);
    }
    if ( --v35 )
      continue;
    break;
  }
  if ( v37 != 1 )
    goto LABEL_32;
LABEL_39:
  if ( !dword_8276 )
    goto LABEL_41;
  v39 = dword_827A;
  if ( !dword_827A )
    goto LABEL_41;
  sub_2950((__int64)"Applying internal fixup records...\n");
  qlseek(qword_8220, (unsigned int)dword_8276, 0);
  v108 = v39;
  v109 = v39 - 1;
  sub_2F20(qword_8220, v108, 4u, "Number of fixups", (unsigned int)dword_8276, -1);
  while ( 2 )
  {
    if ( qlread(qword_8220, &v249, 4) == 4 )
    {
      if ( (v249 & 0x40000000) != 0 )
      {
        v120 = qword_86B2;
        v121 = qword_86BA;
        if ( v249 >= 0 )
        {
LABEL_149:
          v122 = qword_86C2;
          v123 = 2;
LABEL_150:
          v249 &= 0x3FFFFFFFu;
          if ( (unsigned int)v249 < v121 && v122 )
          {
            v125 = (unsigned int)v249 + v120;
            LOWORD(v226) = v123;
            v126 = get_dword(v125);
            *(_QWORD *)&v253[16] = v122;
            v252 = 4;
            *(_QWORD *)v253 = 0;
            v254 = 0;
            *(_QWORD *)&v253[8] = (unsigned __int16)v226;
            put_dword(v125, (unsigned int)(v126 + v122));
            set_fixup(v125, &v252);
          }
          else
          {
            sub_2950((__int64)"Skip invalid relocation for offset 0x%X (to base %a)\n", v249, *(double *)v22.m128_u64);
          }
          v124 = v109-- == 0;
          if ( v124 )
            goto LABEL_41;
          continue;
        }
      }
      else
      {
        v120 = qword_86C2;
        v121 = qword_86CA;
        if ( v249 >= 0 )
          goto LABEL_149;
      }
      v122 = qword_86B2;
      v123 = 1;
      goto LABEL_150;
    }
    break;
  }
  if ( (int)sub_2A20(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") <= 0 )
    goto LABEL_292;
LABEL_41:
  v246 = -1;
  create_filename_cmt();
  qlseek(qword_8220, 130, 0);
  if ( byte_8245 )
  {
    sub_27C0(
      (__int64)"Module Name            : %.12s",
      (__int64)&byte_8245,
      v40,
      v41,
      v42,
      v43,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v44,
      v45,
      a9,
      a10,
      v226);
    if ( !(unsigned int)sub_2E50() )
      goto LABEL_233;
LABEL_43:
    v52 = nullptr;
    v53 = nullptr;
    goto LABEL_44;
  }
  if ( (unsigned int)sub_2E50() )
    goto LABEL_43;
LABEL_233:
  sub_27C0(
    (__int64)"Description            : %s",
    (__int64)&stream,
    v46,
    v47,
    v48,
    v49,
    v22,
    v24,
    si128,
    (__m128)0LL,
    v50,
    v51,
    a9,
    a10,
    v226);
  qlseek(qword_8220, 1, 1);
  if ( qlread(qword_8220, &v246, 4) != 4 )
  {
    if ( (int)sub_2A20(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") <= 0 )
      goto LABEL_292;
    v246 = -1;
    goto LABEL_43;
  }
  qlseek(qword_8220, 9, 1);
  if ( (unsigned int)sub_2E50() )
    goto LABEL_43;
  v52 = nullptr;
  v54 = 0;
  v53 = (_BYTE *)qstrdup(&stream);
  qlseek(qword_8220, 1, 1);
  if ( (unsigned int)sub_2E50() )
    goto LABEL_45;
  v52 = (_BYTE *)qstrdup(&stream);
  v199 = qlseek(qword_8220, 0, 1);
  v49 = (unsigned int)dword_825E;
  v47 = (unsigned int)dword_8252;
  v200 = v199;
  if ( dword_825E && dword_8252 > (unsigned int)dword_825A )
    v47 = (unsigned int)dword_825A;
  if ( v47 > 0x1000 )
    v47 = 4096;
  if ( v199 + 12 >= v47 )
  {
LABEL_44:
    v54 = 0;
    goto LABEL_45;
  }
  LOBYTE(v226) = 0;
  v54 = 0;
  v234 = (__int64)v53;
  v201 = v47;
  v240 = (__int64)v52;
  v202 = 0;
  do
  {
    if ( qlread(qword_8220, &stream, 12) != 12 )
    {
LABEL_291:
      v53 = (_BYTE *)v234;
      if ( (int)sub_2A20(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") > 0 )
        goto LABEL_45;
      goto LABEL_292;
    }
    if ( !v54 && stream == (FILE *)0x734567417353654DLL )
    {
      v54 = v200 + 8;
      v200 += 124;
      goto LABEL_311;
    }
    if ( !v202 && stream == (FILE *)0x234E6F4973526556LL )
    {
      if ( qlread(qword_8220, &dword_82B6, 20) != 20 )
        goto LABEL_291;
      v200 += 31;
      v216 = 32;
      if ( (_DWORD)qword_82BA )
        v216 = (unsigned int)(char)(qword_82BA + 64);
      *(double *)v22.m128_u64 = qsnprintf(
                                  &dword_82CA,
                                  992,
                                  "%u.%02u%c (%02u.%02u.%04u)",
                                  dword_82B2,
                                  (unsigned __int8)dword_82B6,
                                  v216,
                                  (unsigned __int8)dword_82C6,
                                  (unsigned __int8)dword_82C2,
                                  WORD2(qword_82BA));
      v202 = 1;
      sub_27C0(
        (__int64)"Version                : %s",
        (__int64)&dword_82CA,
        v217,
        v218,
        v219,
        v220,
        v22,
        v24,
        si128,
        (__m128)0LL,
        v221,
        v222,
        a9,
        a10,
        v226);
      v215 = v237;
LABEL_306:
      if ( v54 && v215 )
      {
        if ( (_BYTE)v226 )
          break;
        v202 = 1;
      }
      goto LABEL_310;
    }
    if ( (_BYTE)v226 || stream != (FILE *)0x6847695279506F43LL || (_WORD)dword_82B2 != 15700 )
    {
      v47 = 0x6441654874537543LL;
      v215 = v202 & 1;
      if ( stream == (FILE *)0x6441654874537543LL )
      {
        v200 += (unsigned int)dword_82B2 + 8LL;
        goto LABEL_311;
      }
      goto LABEL_306;
    }
    LOBYTE(v226) = BYTE2(dword_82B2);
    qlseek(qword_8220, -2, 1);
    if ( (unsigned int)sub_2E50() )
      break;
    sub_27C0(
      (__int64)"Copyright              : %s",
      (__int64)&stream,
      v223,
      v47,
      v48,
      v49,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v50,
      v51,
      a9,
      a10,
      v226);
    if ( v54 )
    {
      if ( v202 )
        break;
    }
    v224 = (unsigned __int8)v226;
    LOBYTE(v226) = 1;
    v200 += v224 + 10;
LABEL_310:
    ++v200;
LABEL_311:
    qlseek(qword_8220, v200, 0);
  }
  while ( v200 + 12 < v201 );
  v53 = (_BYTE *)v234;
LABEL_45:
  v55 = "";
  if ( (dword_8240 & 0x80u) != 0 )
    v55 = " (compressed)";
  sub_27C0(
    (__int64)"File Format Version    : %08Xh%s",
    (unsigned int)dword_8240,
    (__int64)v55,
    v47,
    v48,
    v49,
    v22,
    v24,
    si128,
    (__m128)0LL,
    v50,
    v51,
    a9,
    a10,
    v226);
  v61 = 14;
  v62 = "Unknown";
  if ( (unsigned int)dword_82A2 <= 0xE )
  {
    v56 = dword_82A2;
    v62 = off_7CE0[dword_82A2];
    v61 = dword_82A2;
  }
  sub_27C0(
    (__int64)"Module type            : %s (%d)",
    (__int64)v62,
    v61,
    v56,
    v57,
    v58,
    v22,
    v24,
    si128,
    (__m128)0LL,
    v59,
    v60,
    a9,
    a10,
    v227);
  if ( dword_8262 )
    sub_27C0(
      (__int64)"Unitialized data size  : %08Xh",
      (unsigned int)dword_8262,
      v63,
      v64,
      v65,
      (__int64)v66,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v67,
      v68,
      a9,
      a10,
      v228);
  if ( dword_8266 && dword_826A )
    sub_27C0(
      (__int64)"Custom data            : off=%08Xh len=%08Xh",
      (unsigned int)dword_8266,
      (unsigned int)dword_826A,
      v64,
      v65,
      (__int64)v66,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v67,
      v68,
      a9,
      a10,
      v228);
  v69 = (unsigned int)dword_82A6;
  LOBYTE(stream) = 0;
  if ( !dword_82A6 )
    goto LABEL_78;
  v64 = 0;
  v70 = 0;
  v65 = 1;
  LOWORD(stream) = 10272;
  v71 = (char *)&stream + 2;
  v66 = off_7CC0;
  while ( 1 )
  {
    v72 = (unsigned int)(1 << v64);
    if ( ((unsigned int)v69 & (unsigned int)v72) != 0 )
    {
      v72 = (unsigned __int64)&qword_86AA;
      if ( v70 )
      {
        if ( v71 >= (char *)&qword_86AA )
          goto LABEL_334;
        v69 = (__int64)(v71 + 1);
        *v71 = 44;
        if ( v71 + 1 >= (char *)&qword_86AA || (v69 = (__int64)(v71 + 2), v71[1] = 32, v71 + 2 >= (char *)&qword_86AA) )
        {
          byte_86A9 = 0;
          v71 = &byte_86A9;
        }
        else
        {
          v71 += 2;
        }
        ++v70;
      }
      else
      {
        if ( v71 >= (char *)&qword_86AA )
        {
          if ( !under_debugger )
          {
            interr(520, v69, &qword_86AA, v64, 1, off_7CC0);
LABEL_339:
            sub_2B00((__int64)"Bad import offset");
          }
LABEL_343:
          BUG();
        }
        v70 = 1;
      }
      v72 = (unsigned __int64)off_7CC0[v64];
      if ( v71 == &byte_86A9 )
      {
LABEL_72:
        byte_86A9 = 0;
        v71 = &byte_86A9;
      }
      else
      {
        while ( 1 )
        {
          v69 = *(unsigned __int8 *)v72++;
          *v71 = v69;
          if ( !(_BYTE)v69 )
            break;
          if ( ++v71 == &byte_86A9 )
            goto LABEL_72;
        }
      }
    }
    if ( ++v64 == 4 )
      break;
    v69 = (unsigned int)dword_82A6;
  }
  if ( !v70 )
  {
    v77 = (char *)&stream;
    goto LABEL_77;
  }
  v64 = (__int64)&qword_86AA;
  if ( v71 >= (char *)&qword_86AA )
  {
LABEL_334:
    if ( under_debugger )
      goto LABEL_343;
    interr(518, v69, v72, v64, 1, off_7CC0);
LABEL_336:
    sub_2BB0(719);
  }
  v77 = v71 + 1;
  *v71 = 41;
  if ( v71 + 1 >= (char *)&qword_86AA )
  {
    byte_86A9 = 0;
    v77 = &byte_86A9;
  }
LABEL_77:
  *v77 = 0;
  v69 = (unsigned int)dword_82A6;
LABEL_78:
  sub_27C0(
    (__int64)"Flags                  : %08Xh%s",
    v69,
    (__int64)&stream,
    v64,
    v65,
    (__int64)v66,
    v22,
    v24,
    si128,
    (__m128)0LL,
    v67,
    v68,
    a9,
    a10,
    v228);
  v84 = v246;
  if ( v246 != -1 )
    sub_27C0(
      (__int64)"CLIB Stack Size        : %08Xh",
      v246,
      v78,
      v79,
      v80,
      v81,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v82,
      v83,
      a9,
      a10,
      (char)v229);
  if ( v53 )
  {
    if ( *v53 )
    {
      v84 = (__int64)v53;
      sub_27C0(
        (__int64)"CLIB Screen Name       : %s",
        (__int64)v53,
        v78,
        v79,
        v80,
        v81,
        v22,
        v24,
        si128,
        (__m128)0LL,
        v82,
        v83,
        a9,
        a10,
        (char)v229);
    }
    qfree(v53);
  }
  if ( v52 )
  {
    if ( *v52 )
    {
      v84 = (__int64)v52;
      sub_27C0(
        (__int64)"CLIB Thread Name       : %s",
        (__int64)v52,
        v78,
        v79,
        v80,
        v81,
        v22,
        v24,
        si128,
        (__m128)0LL,
        v82,
        v83,
        a9,
        a10,
        (char)v229);
    }
    qfree(v52);
  }
  if ( dword_826E )
  {
    v84 = (unsigned int)dword_8272;
    if ( dword_8272 )
    {
      v84 = (unsigned int)dword_826E;
      qlseek(qword_8220, (unsigned int)dword_826E, 0);
      if ( dword_8272 )
      {
        LODWORD(v229) = v54;
        v98 = 0;
        do
        {
          if ( (unsigned int)sub_2E50() )
            break;
          v84 = (__int64)&stream;
          sub_27C0(
            (__int64)"Referenced Modules     : '%s'",
            (__int64)&stream,
            v99,
            v100,
            v101,
            v102,
            v22,
            v24,
            si128,
            (__m128)0LL,
            v103,
            v104,
            a9,
            a10,
            (char)v229);
          if ( (unsigned __int8)netnode_exist(&qword_86D2) )
          {
            v105 = (const char *)&stream;
            if ( *(_BYTE *)trim(&stream) )
            {
              while ( 1 )
              {
                v84 = 124;
                v106 = strchr(v105, 124);
                if ( !v106 )
                  break;
                *v106 = 0;
                v107 = v106 + 1;
                if ( *(_BYTE *)trim(v105) )
                {
                  v84 = 0;
                  import_module(v105, 0, qword_86D2, 0, "netware");
                }
                v105 = v107;
                if ( !*(_BYTE *)trim(v107) )
                  goto LABEL_107;
              }
              v84 = 0;
              import_module(v105, 0, qword_86D2, 0, "netware");
            }
          }
LABEL_107:
          ++v98;
        }
        while ( v98 < dword_8272 );
        v54 = (unsigned int)v229;
      }
    }
  }
  if ( v54 )
  {
    qlseek(qword_8220, v54, 0);
    if ( qlread(qword_8220, &stream, 116) != 116 )
      goto LABEL_159;
    if ( dword_8302 )
    {
      sub_27C0(
        (__int64)"Product ID             : %08Xh",
        (unsigned int)dword_8302,
        v127,
        v128,
        v129,
        v130,
        v22,
        v24,
        si128,
        (__m128)0LL,
        v131,
        v132,
        a9,
        a10,
        (char)v229);
      v84 = (unsigned int)stream;
      if ( !(_DWORD)stream )
      {
LABEL_238:
        v169 = (unsigned int)dword_82D6;
        if ( !dword_82D6 )
          goto LABEL_239;
        goto LABEL_295;
      }
    }
    else
    {
      v84 = (unsigned int)stream;
      if ( !(_DWORD)stream )
        goto LABEL_238;
    }
    sub_27C0(
      (__int64)"Language ID            : %u",
      v84,
      v127,
      v128,
      v129,
      v130,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v131,
      v132,
      a9,
      a10,
      (char)v229);
    v169 = (unsigned int)dword_82D6;
    if ( !dword_82D6 )
    {
LABEL_239:
      v170 = (unsigned int)dword_82CE;
      if ( !dword_82CE )
        goto LABEL_240;
      goto LABEL_296;
    }
LABEL_295:
    v84 = (unsigned int)dword_82D2;
    sub_27C0(
      (__int64)"Shared Data            : off=%08Xh, size=%08Xh",
      (unsigned int)dword_82D2,
      v169,
      v128,
      v129,
      v130,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v131,
      v132,
      a9,
      a10,
      (char)v229);
    v170 = (unsigned int)dword_82CE;
    if ( !dword_82CE )
    {
LABEL_240:
      v171 = HIDWORD(qword_82BA);
      if ( !HIDWORD(qword_82BA) )
      {
LABEL_241:
        if ( dword_82C6 )
        {
          v84 = (unsigned int)dword_82C2;
          sub_27C0(
            (__int64)"RPC & BAG              : off=%08Xh, size=%08Xh",
            (unsigned int)dword_82C2,
            (unsigned int)dword_82C6,
            v128,
            v129,
            v130,
            v22,
            v24,
            si128,
            (__m128)0LL,
            v131,
            v132,
            a9,
            a10,
            (char)v229);
        }
        if ( !dword_82B2 )
          goto LABEL_90;
        v172 = HIDWORD(stream);
        v84 = HIDWORD(stream);
        sub_27C0(
          (__int64)"Message                : off=%08Xh, size=%08Xh",
          HIDWORD(stream),
          (unsigned int)dword_82B2,
          v128,
          v129,
          v130,
          v22,
          v24,
          si128,
          (__m128)0LL,
          v131,
          v132,
          a9,
          a10,
          (char)v229);
        if ( (a2 & 2) == 0 )
          goto LABEL_90;
        qlseek(qword_8220, (unsigned int)(v172 + 106), 0);
        v229 = &v247;
        if ( qlread(qword_8220, &v247, 4) == 4 && qlread(qword_8220, &v248, 4) == 4 )
        {
          v84 = v247;
          sub_27C0(
            (__int64)"Message Language       : %08Xh",
            v247,
            v173,
            v174,
            v175,
            v176,
            v22,
            v24,
            si128,
            (__m128)0LL,
            v177,
            v178,
            a9,
            a10,
            (char)&v247);
          v246 = 0;
          LODWORD(v237) = v172 + 118;
          v234 = (unsigned int)(v172 + 118);
          v179 = 0;
          if ( !v248 )
            goto LABEL_90;
          while ( 1 )
          {
            qlseek(qword_8220, v234 + 4 * v179, 0);
            if ( qlread(qword_8220, v229, 4) != 4 )
              break;
            v180 = 0;
            v84 = v247 + (unsigned int)v237;
            qlseek(qword_8220, v84, 0);
            do
            {
              v189 = qlgetc(qword_8220);
              v190 = v189;
              if ( v189 == -1 )
                goto LABEL_90;
              if ( !v189 )
                break;
              if ( v189 == 255 )
              {
                v187 = 46;
              }
              else if ( v189 <= 31 && (v84 = (unsigned int)v189, (v181 = strchr(s, v189)) != nullptr) )
              {
                if ( v180 == 1022 )
                  break;
                v186 = v180++;
                *((_BYTE *)&qword_8220 + v186 + 138) = 92;
                v187 = aTnravf[(_DWORD)v181 - (unsigned int)s];
              }
              else
              {
                v187 = v190;
              }
              v188 = v180++;
              *((_BYTE *)&qword_8220 + v188 + 138) = v187;
            }
            while ( v180 != 1023 );
            v84 = v246;
            *((_BYTE *)&qword_8220 + v180 + 138) = 0;
            sub_27C0(
              (__int64)"   %08X : %s",
              v84,
              (__int64)&stream,
              v180,
              v182,
              v183,
              v22,
              v24,
              si128,
              (__m128)0LL,
              v184,
              v185,
              a9,
              a10,
              (char)v229);
            v179 = v246 + 1;
            v246 = v179;
            if ( (unsigned int)v179 >= v248 )
              goto LABEL_90;
          }
        }
LABEL_159:
        v84 = (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?";
        if ( (int)sub_2A20(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") > 0 )
        {
          if ( (unsigned __int8)netnode_exist(&qword_86D2) )
            goto LABEL_161;
          goto LABEL_91;
        }
LABEL_292:
        sub_2B00(0, *(double *)v22.m128_u64);
      }
LABEL_297:
      v84 = (unsigned int)qword_82BA;
      sub_27C0(
        (__int64)"Help                   : off=%08Xh, size=%08Xh",
        (unsigned int)qword_82BA,
        v171,
        v128,
        v129,
        v130,
        v22,
        v24,
        si128,
        (__m128)0LL,
        v131,
        v132,
        a9,
        a10,
        (char)v229);
      goto LABEL_241;
    }
LABEL_296:
    sub_27C0(
      (__int64)"Shared Code            : off=%08Xh, size=%08Xh",
      (unsigned int)dword_82CA,
      v170,
      v128,
      v129,
      v130,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v131,
      v132,
      a9,
      a10,
      (char)v229);
    sub_27C0(
      (__int64)"Shared Start Procedure : off=%08Xh",
      (unsigned int)dword_82FA,
      v203,
      v204,
      v205,
      v206,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v207,
      v208,
      a9,
      a10,
      v231);
    v84 = (unsigned int)dword_82FE;
    sub_27C0(
      (__int64)"Shared Exit Procedure  : off=%08Xh",
      (unsigned int)dword_82FE,
      v209,
      v210,
      v211,
      v212,
      v22,
      v24,
      si128,
      (__m128)0LL,
      v213,
      v214,
      a9,
      a10,
      v232);
    v171 = HIDWORD(qword_82BA);
    if ( !HIDWORD(qword_82BA) )
      goto LABEL_241;
    goto LABEL_297;
  }
LABEL_90:
  if ( !(unsigned __int8)netnode_exist(&qword_86D2) )
    goto LABEL_91;
LABEL_161:
  v84 = 0;
  import_module("nlm_root", 0, qword_86D2, 0, "netware");
LABEL_91:
  v89 = getinf(19, v84, v85, v86, v87, v88, v229, v234, v237, v240);
  setinf(23, v89, v90);
  if ( qword_8220 != a1 )
    close_linput();
  v91 = *(_DWORD *)(get_ph() + 84);
  v96 = getinf(16, v89, v92, v93, v94, v95, v230, v235, v238, v241);
  return split_sreg_range(v96, v91, 2, 4, 1);
}

