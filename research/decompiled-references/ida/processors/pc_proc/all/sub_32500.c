__int64 __fastcall sub_32500(
        __int128 a1,
        bool *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        char a8)
{
  __int64 *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbp
  char *v12; // rax
  __int128 *v13; // rbp
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  int func_chunknum; // ebx
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r14d
  __int64 v28; // r13
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 *v43; // rdx
  int v44; // eax
  size_t v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  char v48; // al
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // rbx
  __int64 v51; // r8
  __int16 v52; // ax
  int v53; // eax
  unsigned __int8 v54; // r12
  unsigned __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // ebx
  __int16 v61; // ax
  int v62; // r12d
  __int16 v63; // ax
  __int64 v64; // rbx
  __int64 v65; // rbx
  __int64 v66; // r12
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  unsigned int v73; // r13d
  unsigned __int8 v74; // al
  __int16 v75; // bx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r12
  __int64 v79; // rbx
  _QWORD *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 ea_name; // rax
  __int64 v85; // r12
  const char *i; // rdi
  int v87; // r13d
  __int64 v88; // rax
  __int64 v89; // r12
  char v90; // al
  bool v91; // al
  _QWORD *k; // rax
  _QWORD *v93; // r13
  unsigned __int64 v94; // rdx
  size_t v95; // rax
  int v96; // eax
  char v97; // al
  unsigned __int64 v98; // rax
  int v99; // eax
  int v100; // eax
  __int64 v101; // rdi
  __int64 flags; // rax
  unsigned __int64 that; // rbx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r12
  _QWORD *v108; // rax
  __int64 v109; // rdi
  _QWORD *v110; // rdx
  int v111; // eax
  size_t v112; // rax
  __int64 v113; // rcx
  __int16 v114; // ax
  char v115; // r12
  unsigned __int8 v116; // r12
  unsigned __int64 *v117; // r13
  size_t v118; // rax
  int v119; // eax
  __int64 v120; // rcx
  int v121; // ebx
  __int64 v122; // rdi
  __int64 v123; // r12
  __int64 v124; // rbp
  _QWORD *v125; // rbx
  size_t v126; // rax
  int v127; // eax
  __int64 v128; // r13
  int v129; // eax
  int v130; // eax
  int v131; // eax
  unsigned __int64 v132; // rbp
  _QWORD *v133; // rbx
  unsigned __int64 v134; // rdx
  unsigned __int8 v135; // cl
  _QWORD *v136; // rax
  __int64 *v137; // r8
  unsigned __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // r12
  __int64 v143; // rbp
  _QWORD *v144; // rbx
  __int64 v145; // rdx
  __int64 v146; // rdx
  int v147; // ecx
  __int64 v148; // rax
  __int64 v149; // rdx
  bool v150; // cc
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // r13
  __int64 v155; // rcx
  __int64 v156; // rbx
  __int64 v157; // r8
  void *v158; // rax
  _QWORD *v159; // rcx
  __int64 v160; // rbx
  _QWORD *v161; // rsi
  unsigned __int64 v162; // r12
  char *v163; // rdx
  char *v164; // rax
  __int64 v165; // rax
  __int64 v166; // r12
  char j; // al
  unsigned int v168; // eax
  unsigned int v169; // ebx
  int dword; // edx
  _QWORD *v171; // rsi
  unsigned __int64 v172; // rbx
  char *v173; // rdx
  char *v174; // rax
  char byte; // al
  __int64 func; // rbx
  __int16 word; // dx
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  int v182; // eax
  __int64 v183; // rax
  __int64 *p_src; // rax
  __int16 v185; // ax
  unsigned __int64 v186; // rdx
  __int64 v187; // rax
  unsigned __int8 v188; // bl
  __int64 v189; // rax
  __m128i v190; // xmm0
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // r12
  __int64 v194; // rax
  __int64 v195; // rbx
  __int64 v196; // rax
  __int64 v197; // rcx
  int v198; // edx
  __int64 v199; // rax
  __int64 v200; // rsi
  __int64 *v201; // [rsp+0h] [rbp-598h]
  __int64 v202; // [rsp+0h] [rbp-598h]
  __int64 v203; // [rsp+0h] [rbp-598h]
  __int64 v204; // [rsp+0h] [rbp-598h]
  __int64 v205; // [rsp+0h] [rbp-598h]
  _QWORD *v206; // [rsp+0h] [rbp-598h]
  __int64 *v207; // [rsp+0h] [rbp-598h]
  char v208; // [rsp+10h] [rbp-588h]
  int v209; // [rsp+10h] [rbp-588h]
  int v213; // [rsp+40h] [rbp-558h]
  char v214; // [rsp+40h] [rbp-558h]
  __int64 v216; // [rsp+50h] [rbp-548h]
  unsigned __int8 v217; // [rsp+50h] [rbp-548h]
  _QWORD *v218; // [rsp+50h] [rbp-548h]
  __int128 *v219; // [rsp+50h] [rbp-548h]
  _QWORD *v220; // [rsp+50h] [rbp-548h]
  __int64 v221; // [rsp+50h] [rbp-548h]
  size_t n; // [rsp+58h] [rbp-540h]
  signed __int64 na; // [rsp+58h] [rbp-540h]
  __int64 nb; // [rsp+58h] [rbp-540h]
  int v225; // [rsp+60h] [rbp-538h]
  __int64 *v226; // [rsp+60h] [rbp-538h]
  unsigned __int8 v227; // [rsp+68h] [rbp-530h]
  int v228; // [rsp+68h] [rbp-530h]
  char v229; // [rsp+6Eh] [rbp-52Ah]
  unsigned __int8 v230; // [rsp+6Fh] [rbp-529h]
  unsigned __int8 v231; // [rsp+70h] [rbp-528h]
  __int64 ind_purged; // [rsp+78h] [rbp-520h]
  __int64 *v233; // [rsp+80h] [rbp-518h]
  char v234; // [rsp+9Eh] [rbp-4FAh] BYREF
  unsigned __int8 v235; // [rsp+9Fh] [rbp-4F9h] BYREF
  unsigned __int64 v236; // [rsp+A0h] [rbp-4F8h] BYREF
  __int64 v237; // [rsp+A8h] [rbp-4F0h] BYREF
  __int64 v238; // [rsp+B0h] [rbp-4E8h] BYREF
  __int128 v239; // [rsp+B8h] [rbp-4E0h]
  __int64 v240; // [rsp+D0h] [rbp-4C8h] BYREF
  int v241; // [rsp+D8h] [rbp-4C0h]
  __int128 v242; // [rsp+E0h] [rbp-4B8h]
  __m128i v243; // [rsp+F0h] [rbp-4A8h] BYREF
  __int128 v244; // [rsp+100h] [rbp-498h]
  __int64 v245; // [rsp+110h] [rbp-488h]
  unsigned int v246; // [rsp+118h] [rbp-480h]
  void *src; // [rsp+120h] [rbp-478h] BYREF
  __int128 v248; // [rsp+128h] [rbp-470h]
  __int64 v249; // [rsp+138h] [rbp-460h]
  __int128 v250; // [rsp+140h] [rbp-458h]
  int v251; // [rsp+150h] [rbp-448h]
  __int64 v252; // [rsp+158h] [rbp-440h]
  __m128i v253; // [rsp+160h] [rbp-438h] BYREF
  __int64 v254; // [rsp+170h] [rbp-428h]
  int v255; // [rsp+178h] [rbp-420h]
  __m128i v256; // [rsp+180h] [rbp-418h] BYREF
  __int64 v257; // [rsp+190h] [rbp-408h]
  __int64 v258; // [rsp+198h] [rbp-400h]
  int v259; // [rsp+1A0h] [rbp-3F8h]
  __int64 v260; // [rsp+1B0h] [rbp-3E8h] BYREF
  _BYTE v261[24]; // [rsp+1B8h] [rbp-3E0h] BYREF
  _BYTE *v262; // [rsp+1D0h] [rbp-3C8h]
  __int64 v263; // [rsp+1D8h] [rbp-3C0h]
  void *v264; // [rsp+1E0h] [rbp-3B8h]
  __int128 v265; // [rsp+1E8h] [rbp-3B0h]
  __int64 v266; // [rsp+1F8h] [rbp-3A0h]
  __int128 v267; // [rsp+200h] [rbp-398h]
  int v268; // [rsp+210h] [rbp-388h]
  __int64 v269; // [rsp+218h] [rbp-380h]
  __m128i v270; // [rsp+220h] [rbp-378h]
  __int64 v271; // [rsp+230h] [rbp-368h]
  int v272; // [rsp+238h] [rbp-360h]
  __m128i v273; // [rsp+240h] [rbp-358h] BYREF
  __int64 v274; // [rsp+250h] [rbp-348h]
  __int64 v275; // [rsp+258h] [rbp-340h]
  int v276; // [rsp+260h] [rbp-338h]
  __m128i v277; // [rsp+270h] [rbp-328h] BYREF
  __int128 v278; // [rsp+280h] [rbp-318h] BYREF
  unsigned __int64 v279; // [rsp+290h] [rbp-308h]
  __int64 v280; // [rsp+298h] [rbp-300h]
  __int64 v281; // [rsp+2A0h] [rbp-2F8h]
  char v282; // [rsp+2A8h] [rbp-2F0h] BYREF
  char v283; // [rsp+2A9h] [rbp-2EFh]
  unsigned __int16 v284; // [rsp+2AEh] [rbp-2EAh]
  __int64 v285; // [rsp+2B0h] [rbp-2E8h]
  __int64 v286; // [rsp+2B8h] [rbp-2E0h]
  char v287; // [rsp+2D1h] [rbp-2C7h]
  __int16 v288; // [rsp+2D6h] [rbp-2C2h]
  __int64 v289; // [rsp+2D8h] [rbp-2C0h]
  char v290; // [rsp+3E8h] [rbp-1B0h] BYREF
  _BYTE v291[360]; // [rsp+3F0h] [rbp-1A8h] BYREF
  unsigned __int64 v292; // [rsp+558h] [rbp-40h]

  v8 = *((__int64 **)&a1 + 1);
  v9 = a1;
  v292 = __readfsqword(0x28u);
  if ( !a8 )
  {
    if ( a2 )
      *a2 = 0;
    if ( a3 )
      *a3 = 0;
    if ( a4 )
      *a4 = 0;
    if ( a5 )
      *a5 = 0;
    if ( a6 )
      *a6 = -1;
  }
  if ( a7 )
    *(_OWORD *)a7 = 0;
  v236 = **((_QWORD **)&a1 + 1);
  v229 = is_spec_ea();
  if ( v229 )
  {
    if ( a6 )
      *a6 = get_ind_purged();
    return 0;
  }
  v230 = a8 | sub_25160(a1, *((_QWORD **)&a1 + 1), a4, &v237, a5, a7) ^ 1;
  if ( !v230 )
  {
    if ( a2 )
      *a2 = (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 16LL) & 0x10) != 0;
    if ( a3 )
      *a3 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 56LL);
    if ( a6 )
    {
      v22 = -1;
      if ( (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 17LL) & 0x40) != 0 )
        v22 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 48LL);
      *a6 = v22;
    }
    return v237;
  }
  v12 = &v282;
  v279 = -1;
  v280 = 0;
  v281 = 0;
  v278 = -1;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 40;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( &v290 != v12 );
  v13 = &v278;
  if ( !(unsigned int)decode_insn() )
    return 0;
  v243.m128i_i32[0] = 192;
  v243.m128i_i64[1] = 0;
  v245 = -1;
  v246 = 0;
  src = nullptr;
  v249 = 0;
  v251 = 0;
  v252 = -1;
  v254 = 0;
  v255 = 144;
  v256 = (__m128i)a1;
  v257 = 0;
  v258 = -1;
  v259 = 0x1000000;
  v244 = 0;
  v248 = 0;
  v250 = 0;
  v253 = 0;
  if ( (unsigned __int16)(v280 - 1775) <= 1u )
  {
    src = (void *)qvector_reserve();
    *((_QWORD *)src + v248) = v236;
    *(_QWORD *)&v248 = v248 + 1;
    v236 += WORD1(v280);
    if ( !(unsigned int)decode_insn() )
    {
      v10 = 0;
      goto LABEL_47;
    }
  }
  v14.m128i_i64[0] = 0;
  v277 = 0;
  v213 = ((v280 & 0x800000000LL) != 0) - 1;
  v15 = sub_2B120((__int64)&v243, (__int64)&v278);
  if ( v15 != -1 )
  {
    v236 = v15;
    decode_insn();
  }
  v16 = sub_2B250(&v243, (__int64)&v278);
  if ( v16 != -1 )
    v236 = v16;
  v227 = sub_2F1E0(&v243, (__int64)&v278);
  if ( v227 )
  {
    v227 = 0;
    goto LABEL_30;
  }
  v245 = -1;
  v257 = 0;
  if ( v243.m128i_i64[1] )
  {
    *(_QWORD *)&v244 = 0;
    qfree();
    v243.m128i_i64[1] = 0;
    *((_QWORD *)&v244 + 1) = 0;
  }
  v209 = 0;
  v55 = v236;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v55 >= *(_QWORD *)(v256.m128i_i64[1] + 8) || !(unsigned int)decode_insn() )
          goto LABEL_30;
        v60 = v246;
        if ( (v209 || (_WORD)v280 != 134) && sub_30470(v9, (__int64)v13, v56, v57, v58, v59) )
          goto LABEL_215;
        if ( (unsigned __int8)sub_31B80((__int64)&v243, (__int64)v13) )
        {
          v8 = (__int64 *)v256.m128i_i64[1];
          v236 = v279;
        }
        v61 = v280;
        if ( (_WORD)v280 != 16 )
          goto LABEL_134;
        if ( (unsigned __int8)sub_6C3E0(v9, v13, *(double *)v14.m128i_i64) )
        {
          if ( !(unsigned int)decode_insn() )
            goto LABEL_30;
          if ( (_WORD)v280 == 134 )
          {
            if ( v283 == 1 )
              v246 |= 1 << sub_72FC0(v284, 1);
            goto LABEL_209;
          }
          decode_insn();
          break;
        }
        if ( sub_74080(v9, v13, 0, v81, v82, v83) == -1 )
          break;
        v14.m128i_i64[0] = 0;
        *(_OWORD *)v261 = 0;
        v260 = 0;
        ea_name = get_ea_name();
        v85 = v260;
        if ( ea_name <= 0 )
        {
          if ( v260 )
          {
            *(_QWORD *)v261 = 0;
            qfree();
            v61 = v280;
            goto LABEL_134;
          }
          break;
        }
        for ( i = (const char *)v260; *i == 95; ++i )
          ;
        v87 = strcmp(i, "security_init_cookie");
        if ( v85 )
        {
          *(_QWORD *)v261 = 0;
          qfree();
        }
        if ( v87 )
          break;
LABEL_209:
        v55 = v279 + WORD1(v280);
        v236 = v55;
      }
      v61 = v280;
LABEL_134:
      if ( v61 != 143 )
        goto LABEL_141;
      v62 = -1;
      if ( v283 == 1 )
        v62 = v284;
      if ( (int)decode_insn() <= 0 )
        break;
      if ( (_WORD)v280 == 134 )
      {
        if ( v283 != 1 )
          goto LABEL_215;
        if ( v284 != v62 )
        {
          v246 |= 1 << sub_72FC0(v284, 1);
LABEL_215:
          v236 = v279;
          goto LABEL_30;
        }
        break;
      }
      if ( (_WORD)v280 != 159 )
        break;
      decode_insn();
      if ( v209 || v283 != 5 )
        goto LABEL_30;
      v236 = sub_80350(v9, v13, &v282);
      set_abits();
LABEL_432:
      v209 = 1;
      v213 = -1;
      v55 = v236;
      v227 = v230;
    }
    decode_insn();
LABEL_141:
    if ( (unsigned __int8)sub_2BEA0((__int64)&v243, (__int64)v13) )
      goto LABEL_202;
    if ( (unsigned __int8)sub_2CA80((__int64)&v243, (__int64)v13)
      || (unsigned __int8)sub_2BF40((__int64)&v243, (__int64)v13)
      || (unsigned __int8)sub_2B780((__int64)&v243, (__int64)v13)
      || (unsigned __int8)sub_27390(&v243, (__int64)v13) )
    {
      goto LABEL_199;
    }
    if ( (unsigned __int8)sub_2D330((__int64)&v243, (__int64)v13, &v234) )
      goto LABEL_202;
    if ( !v209 && (_WORD)v280 == 86 )
    {
      v236 = sub_80350(v9, v13, &v282);
      if ( (int)get_func_chunknum() < 0 )
        break;
      set_abits();
      goto LABEL_432;
    }
    if ( v234 == 80 && (unsigned __int8)sub_2AB00(&v243, v13, 1) )
      break;
    v63 = v280;
    if ( (_WORD)v280 == 143 )
    {
      if ( (unsigned __int8)sub_27160((__int64)&v243, (__int64)v13) )
      {
LABEL_202:
        ++v209;
        goto LABEL_203;
      }
      if ( !v227 && (v243.m128i_i8[0] & 3) == 0 )
      {
        v182 = sub_2DF80(&v243, (__int64)v13, (__int64 *)&v236);
        if ( v182 == -1 )
          break;
        if ( v182 == 1 )
        {
          ++v209;
          v55 = WORD1(v280) + v236;
          goto LABEL_200;
        }
        decode_insn();
      }
      v63 = v280;
    }
    if ( (unsigned __int16)(v63 - 36) <= 3u )
    {
      v160 = (int)sub_23C00((__int64)v13);
      sub_23F60(&v243, v279, 5, v160);
      v161 = src;
      v162 = v279;
      v163 = (char *)src + 8 * v248;
      v245 = v244;
      if ( src == v163 )
        goto LABEL_545;
      v164 = (char *)src;
      while ( v279 != *(_QWORD *)v164 )
      {
        v164 += 8;
        if ( v163 == v164 )
          goto LABEL_545;
      }
      if ( v164 == v163 )
      {
LABEL_545:
        if ( *((_QWORD *)&v248 + 1) < (unsigned __int64)(v248 + 1) )
        {
          src = (void *)qvector_reserve();
          v161 = src;
        }
        v161[(_QWORD)v248] = v162;
        *(_QWORD *)&v248 = v248 + 1;
      }
      LOBYTE(v240) = 1;
      netnode_supset();
      v165 = sub_751C0(v9, v8, v13);
      sub_23F60(&v243, v279, -1, -(v160 + v165));
      v236 += WORD1(v280);
      v166 = v236;
      for ( j = get_byte(); ; j = get_byte() )
      {
        v234 = j;
        if ( (j & 0xFD) != 0x50 )
          break;
        ++v236;
      }
      if ( (unsigned int)decode_insn() && (_WORD)v280 == 209 && v283 == 1 && v284 == 5 && v287 == 5 )
      {
        v183 = v257 + v289;
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 24LL) != 8 )
          v183 = (int)v183;
        v257 = v183;
        p_src = (__int64 *)&src;
        while ( v236 != v166 )
        {
          v207 = p_src;
          sub_226A0(p_src, v166);
          p_src = v207;
          ++v166;
        }
        sub_226A0(p_src, v279);
        break;
      }
      v236 = v166;
      decode_insn();
    }
    else
    {
      if ( (unsigned __int8)sub_2EF40(&v243, (__int64)v13, v60) )
        goto LABEL_202;
      if ( (_WORD)v280 == 122 && v283 == 1 && v284 == 5 && v287 == 1 && v288 == 4 )
      {
        v171 = src;
        v172 = v279;
        v173 = (char *)src + 8 * v248;
        v245 = v244;
        if ( src == v173 )
          goto LABEL_540;
        v174 = (char *)src;
        while ( v279 != *(_QWORD *)v174 )
        {
          v174 += 8;
          if ( v173 == v174 )
            goto LABEL_540;
        }
        if ( v173 == v174 )
        {
LABEL_540:
          if ( *((_QWORD *)&v248 + 1) < (unsigned __int64)(v248 + 1) )
          {
            src = (void *)qvector_reserve();
            v171 = src;
          }
          v171[(_QWORD)v248] = v172;
          *(_QWORD *)&v248 = v248 + 1;
        }
        LOBYTE(v260) = 1;
        netnode_supset();
        v236 = v279 + WORD1(v280);
        decode_insn();
        byte = get_byte();
        v234 = byte;
        if ( byte == 80 )
        {
          if ( (unsigned __int8)get_byte() == 83 )
          {
            v260 = 0;
            *(_OWORD *)v261 = 0;
            v260 = qvector_reserve();
            v14.m128i_i64[0] = 0;
            v137 = (__int64 *)(80LL * *(_QWORD *)v261 + v260);
            *v137 = 0;
            *(_OWORD *)(v137 + 1) = 0;
            v137[3] = 0;
            v137[6] = 0;
            *((_DWORD *)v137 + 18) = -1;
            *((_OWORD *)v137 + 2) = 0;
            *(_OWORD *)(v137 + 7) = 0;
            ++*(_QWORD *)v261;
            v138 = v137[1];
            v203 = v138 + 5;
            if ( v138 >= 0xFFFFFFFFFFFFFFFBLL )
            {
              v203 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else
            {
              v226 = v137;
              v139 = qvector_reserve();
              v140 = v226[1];
              *v226 = v139;
              memset((void *)(v139 + v140), 0, v138 + 5 - v140);
              v137 = v226;
            }
            v137[1] = v203;
            v141 = *v137;
            *(_DWORD *)(v141 + v138) = 1575324507;
            *(_BYTE *)(v141 + v138 + 4) = -61;
            v204 = bin_search();
            if ( v260 )
            {
              v142 = *(_QWORD *)v261;
              if ( *(_QWORD *)v261 )
              {
                v219 = v13;
                v143 = 0;
                do
                {
                  v144 = (_QWORD *)(v260 + 80 * v143);
                  if ( v144[6] )
                  {
                    v144[7] = 0;
                    qfree();
                  }
                  if ( v144[3] )
                  {
                    v144[4] = 0;
                    qfree();
                  }
                  if ( *v144 )
                  {
                    v144[1] = 0;
                    qfree();
                  }
                  ++v143;
                }
                while ( v142 != v143 );
                v13 = v219;
              }
              *(_QWORD *)v261 = 0;
              qfree();
            }
            if ( v204 != -1 && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
            {
              sub_23F60(&v243, v279, -1, 4);
              break;
            }
          }
          else if ( (unsigned __int8)sub_2AB00(&v243, v13, 0) )
          {
            break;
          }
        }
        else if ( (unsigned __int8)sub_2AE70(&v243, (__int64)v13, byte) )
        {
          v234 = get_byte();
        }
        func = get_func();
        do
        {
          if ( !(unsigned __int8)sub_27390(&v243, (__int64)v13)
            && !(unsigned __int8)sub_2D330((__int64)&v243, (__int64)v13, &v234) )
          {
            break;
          }
          v236 = v279 + WORD1(v280);
          if ( !(unsigned int)decode_insn() )
            break;
        }
        while ( (unsigned __int8)sub_6C050(func, v236, *(double *)v14.m128i_i64) );
      }
    }
LABEL_154:
    sub_31B80((__int64)&v243, (__int64)v13);
    v8 = (__int64 *)v256.m128i_i64[1];
    if ( (_WORD)v280 == 16 )
    {
      v178 = sub_2CB00(&v243, (__int64)v13, nullptr);
      if ( v178 != -1 )
      {
        ++v209;
        v55 = v178 + WORD1(v280);
        goto LABEL_200;
      }
      v193 = sub_74080(v9, v13, 0, v179, v180, v181);
      if ( v193 != -1 )
      {
        v194 = get_func();
        v195 = v194;
        if ( v194 )
        {
          if ( v194 != v256.m128i_i64[1] && (*(_BYTE *)(v194 + 16) & 1) == 0 && *(_QWORD *)v194 == v193 )
          {
            v196 = sub_6ECD0(v194, &v240);
            v197 = v196;
            if ( (_BYTE)v240 )
            {
              if ( (*(_BYTE *)(v195 + 16) & 2) != 0 )
                v197 = v196 - 2;
              if ( v197 > 0 )
              {
                v198 = v244;
                v199 = v243.m128i_i64[1] + 32LL * ((int)v244 - 1);
                while ( v198 > 0 )
                {
                  v200 = *(_QWORD *)(v199 + 16);
                  v199 -= 32;
                  if ( v200 > v197 )
                    break;
                  v197 -= v200;
                  --v198;
                }
                if ( v198 < (unsigned __int64)v244 )
                {
                  if ( v245 != -1 && v245 > v198 )
                  {
                    v245 = -1;
                    v257 = 0;
                  }
                  sub_309E0(&v243, v198);
                }
              }
            }
          }
        }
      }
      break;
    }
    if ( (v280 & 0x1800000000LL) == 0 && (unsigned __int8)sub_2B030(&v243, (__int64)v13) )
      break;
    v64 = v244;
    memset(v261, 0, sizeof(v261));
    LODWORD(v260) = v243.m128i_i32[0];
    if ( (_QWORD)v244 )
    {
      *(_QWORD *)v261 = qalloc_or_throw();
      *(_QWORD *)&v261[16] = v64;
      memcpy(*(void **)v261, (const void *)v243.m128i_i64[1], 32 * v64);
      *(_QWORD *)&v261[8] = v64;
    }
    v65 = v248;
    v264 = nullptr;
    v265 = 0;
    v262 = (_BYTE *)v245;
    LODWORD(v263) = v246;
    if ( (_QWORD)v248 )
    {
      v264 = (void *)qalloc_or_throw();
      *((_QWORD *)&v265 + 1) = v65;
      memcpy(v264, src, 8 * v65);
      *(_QWORD *)&v265 = v65;
    }
    v66 = v250;
    v266 = 0;
    v267 = 0;
    if ( (_QWORD)v250 )
    {
      v153 = qalloc_or_throw();
      v266 = v153;
      v154 = 0;
      *((_QWORD *)&v267 + 1) = v66;
      while ( 1 )
      {
        v155 = v153 + 24 * v154;
        v156 = 24 * v154 + v249;
        *(_QWORD *)v155 = 0;
        *(_OWORD *)(v155 + 8) = 0;
        v157 = *(_QWORD *)(v156 + 8);
        if ( v157 )
        {
          v220 = (_QWORD *)(v153 + 24 * v154);
          v205 = *(_QWORD *)(v156 + 8);
          nb = 8 * v157;
          v158 = (void *)qalloc_or_throw();
          v159 = v220;
          v220[2] = v205;
          *v220 = v158;
          v221 = v205;
          v206 = v159;
          memcpy(v158, *(const void **)v156, nb);
          v206[1] = v221;
        }
        if ( v66 == ++v154 )
          break;
        v153 = v266;
      }
      *(_QWORD *)&v267 = v66;
    }
    v67 = _mm_load_si128(&v253);
    v268 = v251;
    v270 = v67;
    v14 = _mm_load_si128(&v256);
    v269 = v252;
    v273 = v14;
    v271 = v254;
    v272 = v255;
    v274 = v257;
    v275 = v258;
    v276 = v259;
    v234 = get_byte();
    v235 = 0;
    v68 = sub_26B40((__int64)&v243, (__int64)v13, v234, &v235, (unsigned int *)&v238);
    v72 = v235;
    v202 = v68;
    v217 = v235;
    if ( v235 )
      goto LABEL_490;
    if ( v68 > 0 )
    {
      if ( !(unsigned __int8)sub_31B80((__int64)&v243, (__int64)v13) )
      {
        v8 = (__int64 *)v256.m128i_i64[1];
        if ( !v235 )
          goto LABEL_165;
LABEL_490:
        sub_23CF0(&v260);
        break;
      }
      v234 = get_byte();
      v202 = sub_26B40((__int64)&v243, (__int64)v13, v234, &v235, (unsigned int *)&v238);
      v8 = (__int64 *)v256.m128i_i64[1];
      if ( v235 )
        goto LABEL_490;
    }
    if ( v202 < 0 )
    {
      v168 = sub_72FC0((unsigned int)v238, 1);
      v169 = v246;
      if ( !_bittest((const int *)&v169, sub_72FC0(v168, 1)) )
      {
        v240 = 0;
        if ( (unsigned __int8)get_tinfo() && (((unsigned int)get_tinfo_property() - 48) & 0xFFFFFFDF) == 0 )
          v202 = 0;
        clear_tinfo_t();
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_165:
          v73 = v246;
          if ( sub_30470(v9, (__int64)v13, v69, v72, v70, v71) )
          {
            v236 = v279;
            goto LABEL_178;
          }
          if ( (unsigned __int8)sub_6C3E0(v9, v13, *(double *)v14.m128i_i64) )
          {
            if ( !(unsigned int)decode_insn() )
              goto LABEL_178;
            if ( (_WORD)v280 == 134 )
            {
              v236 = v279 + WORD1(v280);
              if ( v283 == 1 )
                v246 |= 1 << sub_72FC0(v284, 1);
            }
            decode_insn();
          }
          v236 = v279;
          if ( !(unsigned __int8)sub_27390(&v243, (__int64)v13) )
            break;
LABEL_426:
          decode_insn();
        }
        if ( (unsigned __int8)sub_2D330((__int64)&v243, (__int64)v13, nullptr) )
          break;
        if ( (unsigned __int8)sub_2B600((__int64)&v243, (__int64)v13)
          || (unsigned __int8)sub_27160((__int64)&v243, (__int64)v13) )
        {
          v217 = v230;
          goto LABEL_176;
        }
        if ( BYTE2(v259) )
          goto LABEL_178;
        na = sub_26B40((__int64)&v243, (__int64)v13, 0, nullptr, nullptr);
        if ( na <= 0 )
          goto LABEL_178;
        v236 = v279;
        if ( v217 )
          goto LABEL_179;
        v202 = na;
      }
      if ( v217 )
      {
        v74 = sub_2BEA0((__int64)&v243, (__int64)v13);
        if ( v74 )
          break;
      }
      if ( (unsigned __int8)sub_2B780((__int64)&v243, (__int64)v13) )
        goto LABEL_426;
LABEL_176:
      if ( v202 < 0 )
      {
        v145 = 0xFFFFFFFFLL;
        if ( v245 != -1 )
          v145 = 5;
        if ( (unsigned __int8)sub_26F10((__int64)v13, (__int64)&v282, v145) )
        {
          v146 = *(_QWORD *)(v9 + 16);
          v147 = *(_DWORD *)(v146 + 104);
          if ( v147 <= (unsigned __int16)v280
            && *(_DWORD *)(v146 + 108) > (int)(unsigned __int16)v280
            && (*(_BYTE *)(*(_QWORD *)(v146 + 112) + 16LL * ((unsigned __int16)v280 - v147) + 8) & 4) != 0 )
          {
            v148 = v286;
            if ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 24LL) != 8 )
              v148 = (int)v286;
            v149 = 0;
            if ( v284 != 5 )
              v149 = -v202;
            v150 = v149 <= v148;
            v151 = 0;
            if ( v150 )
              v151 = v202;
            v202 = v151;
          }
        }
      }
      v236 += WORD1(v280);
      if ( !(unsigned int)decode_insn() )
        goto LABEL_178;
    }
    v217 = v74;
LABEL_178:
    na = v202;
LABEL_179:
    if ( sub_30470(v9, (__int64)v13, v69, v72, v70, v71) )
    {
      v236 = v279;
      goto LABEL_603;
    }
    v75 = v288;
    if ( (_BYTE)v281 == 33 && v283 == 2 && (_WORD)v280 == 122 && v287 == 1 && !v286 )
    {
      sub_23580((__int64)v291);
      if ( decode_prev_insn() != -1 && *(_WORD *)&v291[24] == 92 && v291[41] == 1 && *(_WORD *)&v291[46] == v75 )
      {
        sub_226A0((__int64 *)&src, v279);
        sub_236C0();
        sub_226A0((__int64 *)&src, *(__int64 *)&v291[16]);
        sub_236C0();
        if ( v258 != -1 )
          sub_318C0((__int64)&v243, (__int64)v13, *(double *)v14.m128i_i64);
        goto LABEL_186;
      }
      if ( v258 != -1 && (unsigned __int8)sub_318C0((__int64)&v243, (__int64)v13, *(double *)v14.m128i_i64) )
        goto LABEL_186;
    }
    if ( (unsigned __int8)sub_2B780((__int64)&v243, (__int64)v13) )
    {
      sub_23CF0(&v260);
LABEL_199:
      ++v209;
      v55 = v279 + WORD1(v280);
      goto LABEL_200;
    }
    if ( (unsigned __int8)sub_2EF40(&v243, (__int64)v13, v73) || (unsigned __int8)sub_2D940(&v243, (__int64)v13) )
      goto LABEL_186;
    qmemcpy(v291, v13, sizeof(v291));
    if ( (unsigned __int8)sub_27390(&v243, (__int64)v291)
      || (unsigned __int8)sub_2D330((__int64)&v243, (__int64)v291, nullptr) )
    {
      sub_2D800(&v243, (__int64)v291, -1);
    }
    if ( (unsigned __int8)sub_2B3D0(&v243, v291, &v236) )
      goto LABEL_603;
    if ( na >= 0 || v217 == 1 )
    {
      if ( na && (_WORD)v280 == 6 && v283 == 1 )
        goto LABEL_482;
      goto LABEL_483;
    }
    if ( (_WORD)v280 == 16 )
    {
      v76 = sub_2CB00(&v243, (__int64)v13, &v240);
      if ( v76 == -1 )
      {
        if ( !(_BYTE)v240 )
          goto LABEL_478;
LABEL_603:
        v188 = v227;
LABEL_604:
        sub_23CF0(&v260);
        v227 = v188;
        break;
      }
      goto LABEL_187;
    }
LABEL_478:
    if ( na != -8 || v234 != 81 )
      goto LABEL_613;
    if ( (_WORD)v280 != 6 || v283 != 1 )
      goto LABEL_605;
LABEL_482:
    if ( v284 == 4 && v287 == 5 )
    {
      v189 = v289;
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 24LL) != 8 )
        v189 = (int)v289;
      if ( na == v189 )
      {
LABEL_613:
        sub_22840((__int64)&v243, (__int64)&v260);
        v190 = _mm_load_si128(&v273);
        v257 = v274;
        v256 = v190;
        v258 = v275;
        v259 = v276;
        goto LABEL_603;
      }
    }
LABEL_483:
    if ( !v217 )
    {
LABEL_605:
      if ( v258 != -1 )
      {
LABEL_606:
        if ( (unsigned __int8)sub_318C0((__int64)&v243, (__int64)v13, *(double *)v14.m128i_i64) )
          goto LABEL_186;
      }
      v185 = v280;
      if ( BYTE2(v259) )
        goto LABEL_584;
      goto LABEL_586;
    }
    if ( !BYTE2(v259) )
    {
      sub_26B40((__int64)&v243, (__int64)v13, 0, nullptr, nullptr);
      if ( (_WORD)v280 == 16 )
      {
        sub_23CF0(&v260);
        goto LABEL_154;
      }
      goto LABEL_605;
    }
    if ( v258 != -1 )
      goto LABEL_606;
    v185 = v280;
LABEL_584:
    if ( v245 != -1 && v185 == 209 )
    {
      if ( v283 != 1 || v284 != 5 || v287 != 5 )
        goto LABEL_593;
      v191 = v257 + v289;
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 24LL) != 8 )
        v191 = (int)v191;
      v257 = v191;
      sub_226A0((__int64 *)&src, v279);
LABEL_186:
      v76 = v279;
LABEL_187:
      v236 = v76;
LABEL_188:
      v77 = v266;
      if ( v266 )
      {
        v78 = v267;
        v79 = 0;
        if ( (_QWORD)v267 )
        {
          do
          {
            v80 = (_QWORD *)(v77 + 24 * v79);
            if ( *v80 )
            {
              v80[1] = 0;
              qfree();
              v77 = v266;
            }
            ++v79;
          }
          while ( v78 != v79 );
        }
        *(_QWORD *)&v267 = 0;
        qfree();
      }
      if ( v264 )
      {
        *(_QWORD *)&v265 = 0;
        qfree();
      }
      ++v209;
      if ( *(_QWORD *)v261 )
      {
        *(_QWORD *)&v261[8] = 0;
        qfree();
        v55 = v236 + WORD1(v280);
        goto LABEL_200;
      }
LABEL_203:
      v55 = v236 + WORD1(v280);
      goto LABEL_200;
    }
LABEL_586:
    if ( (unsigned __int16)(v185 - 53) > 0x20u )
    {
      if ( v185 != 143 )
        goto LABEL_593;
      v188 = v227 | (v283 != 5);
      if ( v188 || (v243.m128i_i8[0] & 3) != 0 )
        goto LABEL_593;
      if ( (unsigned int)sub_2DF80(&v243, (__int64)v13, (__int64 *)&v236) != -1 )
      {
        decode_insn();
        goto LABEL_593;
      }
      goto LABEL_604;
    }
    if ( (_QWORD)v244 )
      goto LABEL_593;
    v186 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 16LL);
    v187 = v286 + 16 * v278;
    if ( v187 == v186 )
    {
LABEL_591:
      if ( v186 < *v8 || v186 >= v279 )
        goto LABEL_593;
      goto LABEL_188;
    }
    if ( v187 != -1 )
    {
      v186 &= v187;
      goto LABEL_591;
    }
LABEL_593:
    if ( !na || (v280 & 0x1000000000LL) == 0 )
      goto LABEL_603;
    v236 = v279 - WORD1(v280);
    sub_23CF0(&v260);
    ++v209;
    v55 = v236 + WORD1(v280);
LABEL_200:
    v236 = v55;
  }
  while ( v209 != 20 );
LABEL_30:
  func_chunknum = get_func_chunknum();
  if ( (unsigned int)sub_23600() )
  {
    if ( a6 )
      ind_purged = get_ind_purged();
    else
      ind_purged = -1;
    goto LABEL_33;
  }
  if ( a6 )
    ind_purged = get_ind_purged();
  else
    ind_purged = -1;
  if ( func_chunknum >= 0 )
  {
    if ( v227 || v236 == -1 || v236 >= v8[1] )
      v236 = *(_QWORD *)v256.m128i_i64[1];
    decode_insn();
    v228 = -1;
    if ( sub_30310(v9, (__int64)v13, v23, v24, v25, v26) )
    {
      v201 = v8;
      v27 = v244;
      v28 = v243.m128i_i64[1] + 32LL * ((int)v244 - 1) + 16;
      while ( v27 > 1 )
      {
        if ( *(_WORD *)(v28 + 8) != 0xFFFF )
          break;
        v29 = *(_QWORD *)v28;
        v28 -= 32;
        if ( v29 != (int)sub_23C00((__int64)v13) )
          break;
        --v27;
      }
      v30 = v245;
      v31 = v27;
      v8 = v201;
      if ( v31 >= v245 )
        v30 = v31;
      v228 = v30;
    }
    v291[8] = 0;
    *(_QWORD *)v291 = off_180BC8;
    *(_QWORD *)&v261[16] = v261;
    v262 = v261;
    *(_QWORD *)&v291[56] = v256.m128i_i64[1];
    v239 = 0;
    memset(&v291[16], 0, 24);
    memset(&v291[72], 0, 28);
    *(_DWORD *)v261 = 0;
    *(_QWORD *)&v261[8] = 0;
    v263 = 0;
    v238 = 0;
    *(_DWORD *)&v291[64] = 2;
    *(_OWORD *)&v291[40] = -1;
    create_qflow_chart();
    v32 = v256.m128i_i64[1];
    v33 = v236;
    v231 = 0;
    v225 = -1;
    n = -1;
    if ( v236 >= *(_QWORD *)(v256.m128i_i64[1] + 8) )
      goto LABEL_290;
    while ( 2 )
    {
      v50 = sub_30780(v9, v33, v32);
      if ( v50 != -1 )
      {
        if ( (get_flags_ex() & 0x600) == 0x200 )
          del_items();
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
          create_insn();
        if ( v50 < *(_QWORD *)(v256.m128i_i64[1] + 8) )
        {
          set_func_end();
          if ( (_QWORD)v244 )
          {
            v98 = 0;
            while ( *(_QWORD *)(v243.m128i_i64[1] + 32 * v98) < v50 )
            {
              if ( (_QWORD)v244 == ++v98 )
                goto LABEL_283;
            }
            *(_QWORD *)&v244 = v98;
            if ( v245 >= v98 )
              v245 = -1;
          }
        }
LABEL_283:
        auto_mark_range();
        auto_mark_range();
        v99 = sub_27D00(&v243, v256.m128i_i64[0], v236, v256.m128i_i64[1], SHIBYTE(v259));
        if ( v245 != -1 )
          v99 = v244;
        if ( v228 >= v99 )
          v99 = v228;
        v228 = v99;
        if ( v256.m128i_i64[1] )
        {
          update_func();
          v236 += 5LL;
          v32 = v256.m128i_i64[1];
          goto LABEL_289;
        }
        v236 += 5LL;
        if ( v213 != 3 )
          v277 = 0;
        goto LABEL_336;
      }
      decode_insn();
      v52 = v280;
      v33 = v236 + WORD1(v280);
      if ( (unsigned int)(unsigned __int16)v280 - 159 <= 1 || (unsigned int)(unsigned __int16)v280 - 736 <= 5 )
      {
        v53 = -1;
        if ( v213 )
          v53 = v213;
        v213 = v53;
        if ( netnode_supval() == 8 || (v54 = sub_22640((__int64)&v260, (__int64)&v238, (__int64)v291, v236)) == 0 )
        {
          v52 = v280;
          goto LABEL_86;
        }
        if ( !v231 )
        {
          ind_purged = 0;
          if ( v283 == 5 )
          {
            ind_purged = v285;
            if ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 24LL) != 8 )
              ind_purged = (int)v285;
          }
        }
        v130 = sub_27D00(&v243, v256.m128i_i64[0], v236, v256.m128i_i64[1], SHIBYTE(v259));
        v231 = v54;
        if ( v228 >= v130 )
          v130 = v228;
        v228 = v130;
        v131 = 3;
        if ( v213 != 2 )
          v131 = v213;
        v213 = v131;
      }
      else
      {
LABEL_86:
        v34 = (unsigned int)v213;
        if ( v213 > 2 )
          goto LABEL_92;
        v35 = v236;
        v36 = v236;
        if ( v213 == 1 )
        {
          if ( v236 <= 6 || (_BYTE)v281 != 33 || v52 != 134 )
            goto LABEL_92;
          if ( v283 == 2 && !v286 )
          {
            if ( (get_dword() & 0xFFFFFF) == (_DWORD)&unk_CC483 && (unsigned __int8)get_byte() == 0xE8 )
            {
              word = get_word();
              v52 = v280;
              if ( word == 3956 )
              {
                v34 = v256.m128i_i64[1];
                v213 = 2;
                v277.m128i_i64[1] = v236 - 7 - *(_QWORD *)v256.m128i_i64[1];
              }
            }
            else
            {
              v52 = v280;
            }
            goto LABEL_92;
          }
          goto LABEL_111;
        }
        if ( (unsigned __int16)(v52 - 53) <= 0x24u )
        {
          v213 += 64;
          if ( v236 > 1 && v213 == 64 )
          {
            if ( (_DWORD)v280 == (_DWORD)&loc_20055 )
            {
LABEL_454:
              v152 = sub_80350(v9, v13, &v282);
              if ( v236 + 10 == v152 && (unsigned __int16)get_word() == 0xD284 )
              {
                dword = get_dword();
                v213 = 64;
                v52 = v280;
                if ( dword == -386874237 )
                {
                  v213 = 1;
                  v277.m128i_i64[0] = v236 - *(_QWORD *)v256.m128i_i64[1];
                }
              }
              else
              {
                v213 = 64;
                v52 = v280;
              }
              goto LABEL_92;
            }
            v213 = 64;
LABEL_94:
            v35 = v36;
          }
          goto LABEL_95;
        }
        if ( (unsigned __int16)(v52 - 16) <= 2u )
        {
          v213 += 64;
          v34 = (unsigned int)v213;
          if ( v213 == 64 && v236 > 1 )
          {
            v213 = 64;
            if ( (_DWORD)v280 == (_DWORD)&loc_20055 )
              goto LABEL_454;
          }
LABEL_92:
          if ( v52 != 16 )
          {
            v36 = v236;
            goto LABEL_94;
          }
          v88 = sub_74080(v9, v13, 0, v34, v51, v35);
          v35 = v236;
          v89 = v88;
          if ( v88 != -1 )
          {
            if ( (unsigned __int8)netnode_charval() != 1 )
            {
              v90 = getinf_flag();
              v35 = v236;
              if ( v90 )
                goto LABEL_232;
              v128 = get_func();
              v129 = sub_24DD0((_QWORD *)v9, (__int64)v13, v89, nullptr);
              if ( v128 && v129 == 2 )
                sub_6F060(v9, v128);
            }
            v35 = v236;
          }
LABEL_232:
          v52 = v280;
LABEL_95:
          if ( (unsigned __int16)(v52 - 86) <= 3u )
          {
            v208 = sub_22640((__int64)&v260, (__int64)&v238, (__int64)v291, v35);
            v216 = sub_74080(v9, v13, 0, v37, v38, v39);
            v40 = (__int64 *)get_func();
            v41 = v256.m128i_i64[1];
            v42 = v216;
            v43 = v40;
            if ( !v40 )
            {
              if ( (int)get_func_chunknum() < 0 && v208 )
                v225 = v244;
              v97 = is_spec_ea();
              v35 = v236;
              if ( !v97 )
              {
                if ( v256.m128i_i64[1] )
                  goto LABEL_109;
                goto LABEL_111;
              }
              v96 = sub_27D00(&v243, v256.m128i_i64[0], v236, v256.m128i_i64[1], SHIBYTE(v259));
              goto LABEL_261;
            }
            if ( v40 == (__int64 *)v256.m128i_i64[1] )
              goto LABEL_235;
            if ( *v40 != v216 )
            {
              v233 = v40;
              v44 = get_func_chunknum();
              v42 = v216;
              v43 = v233;
              if ( v44 >= 0 )
              {
                v41 = v256.m128i_i64[1];
                if ( v208 )
                  goto LABEL_101;
LABEL_234:
                if ( v233 == (__int64 *)v41 )
                  goto LABEL_235;
LABEL_265:
                v46 = *v43;
LABEL_107:
                if ( v42 != v46 )
                {
                  v47 = get_func_chunknum();
                  v35 = v236;
                  if ( v47 < 0 )
                  {
LABEL_109:
                    if ( v208 )
                      v225 = v244;
                  }
                  goto LABEL_111;
                }
LABEL_260:
                v96 = sub_27D00(&v243, v256.m128i_i64[0], v236, v41, SHIBYTE(v259));
LABEL_261:
                v35 = v236;
                if ( v96 > v228 )
                {
                  if ( !v208 )
                    v96 = v228;
                  v228 = v96;
                }
                goto LABEL_111;
              }
              if ( !v208 )
              {
                v41 = v256.m128i_i64[1];
                goto LABEL_234;
              }
              v41 = v256.m128i_i64[1];
              v225 = v244;
LABEL_101:
              if ( v233 == (__int64 *)v41 )
              {
LABEL_235:
                v35 = v236;
                goto LABEL_111;
              }
              v45 = v233[6];
              v46 = *v233;
              if ( v45 == -1 )
                goto LABEL_107;
              if ( !v45 )
              {
LABEL_104:
                if ( (*((_BYTE *)v43 + 17) & 0x40) == 0 )
                  goto LABEL_107;
                v45 = 0;
              }
              n = v45;
              goto LABEL_107;
            }
            if ( !v208 )
              goto LABEL_265;
            v95 = v40[6];
            if ( v95 == -1 )
              goto LABEL_260;
            if ( v95 )
            {
              n = v95;
              goto LABEL_260;
            }
            v46 = v216;
            goto LABEL_104;
          }
        }
LABEL_111:
        v48 = sub_22640((__int64)&v260, (__int64)&v238, (__int64)v291, v35);
        v32 = v256.m128i_i64[1];
        v49 = *(_QWORD *)(v256.m128i_i64[1] + 8);
        if ( v49 == v33 && v48 )
        {
          if ( (*(_BYTE *)(v256.m128i_i64[1] + 16) & 1) == 0 )
          {
            v91 = sub_303E0(v9, (__int64)v13);
            v32 = v256.m128i_i64[1];
            v49 = *(_QWORD *)(v256.m128i_i64[1] + 8);
            if ( !v91 )
            {
              for ( k = (_QWORD *)get_func(); ; k = (_QWORD *)get_func() )
              {
                v93 = k;
                if ( k )
                  break;
                if ( (unsigned __int8)get_byte() != 0x90 )
                {
                  v32 = v256.m128i_i64[1];
                  v94 = *(_QWORD *)(v256.m128i_i64[1] + 8);
                  goto LABEL_251;
                }
                ++v49;
              }
              v32 = v256.m128i_i64[1];
              v94 = *(_QWORD *)(v256.m128i_i64[1] + 8);
              if ( k != (_QWORD *)v256.m128i_i64[1] && *k == v49 )
              {
                sub_27D00(&v243, v256.m128i_i64[0], v94, v256.m128i_i64[1], SHIBYTE(v259));
                v32 = v256.m128i_i64[1];
                v225 = v244;
                if ( n == -1 )
                {
                  v192 = v93[6];
                  if ( v192 != -1 && (v192 || (*((_BYTE *)v93 + 17) & 0x40) != 0) )
                    n = v93[6];
                }
LABEL_289:
                if ( v213 != 3 )
LABEL_290:
                  v277 = 0;
                if ( v32 )
                {
                  v240 = 0;
                  v242 = 0;
                  func_tail_iterator_set();
                  if ( v240 )
                  {
                    v241 = 0;
                    if ( *(int *)(v240 + 128) > 0 )
                    {
                      v100 = 0;
                      v101 = v240;
                      while ( 2 )
                      {
                        v117 = (unsigned __int64 *)(*(_QWORD *)(v101 + 136) + 16LL * v100);
LABEL_295:
                        if ( *v117 >= *v8 && v8[1] >= v117[1] )
                          goto LABEL_334;
                        v236 = *v117;
                        flags = get_flags_ex();
                        that = v236;
                        if ( (~BYTE1(flags) & 6) != 0 )
                          goto LABEL_315;
                        while ( 1 )
                        {
                          if ( that >= v117[1] )
                            goto LABEL_333;
                          decode_insn();
                          v114 = v280;
                          that = v236 + WORD1(v280);
                          if ( (unsigned int)(unsigned __int16)v280 - 159 > 1
                            && (unsigned int)(unsigned __int16)v280 - 736 > 5 )
                          {
                            goto LABEL_299;
                          }
                          v115 = sub_22640((__int64)&v260, (__int64)&v238, (__int64)v291, v236);
                          v116 = (netnode_supval() != 8) & v115;
                          if ( !v116 )
                            break;
                          if ( !v231 )
                          {
                            ind_purged = 0;
                            if ( v283 == 5 )
                            {
                              ind_purged = v285;
                              if ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 24LL) != 8 )
                                ind_purged = (int)v285;
                            }
                          }
                          v127 = sub_27D00(&v243, v256.m128i_i64[0], v236, v256.m128i_i64[1], SHIBYTE(v259));
                          v231 = v116;
                          if ( v228 >= v127 )
                            v127 = v228;
                          v228 = v127;
LABEL_316:
                          v236 = that;
                        }
                        v114 = v280;
LABEL_299:
                        if ( (unsigned __int16)(v114 - 86) > 3u )
                          goto LABEL_314;
                        v214 = sub_22640((__int64)&v260, (__int64)&v238, (__int64)v291, v236);
                        v107 = sub_74080(v9, v13, 0, v104, v105, v106);
                        v108 = (_QWORD *)get_func();
                        v109 = v256.m128i_i64[1];
                        v110 = v108;
                        if ( v108 )
                        {
                          if ( v108 == (_QWORD *)v256.m128i_i64[1] )
                            goto LABEL_314;
                          if ( *v108 == v107 )
                          {
                            v118 = v108[6];
                            if ( v118 != -1 )
                            {
                              if ( !v118 )
                              {
                                v113 = v107;
                                goto LABEL_362;
                              }
                              if ( !v214 )
                                v118 = n;
                              n = v118;
                            }
                          }
                          else
                          {
                            v218 = v108;
                            v111 = get_func_chunknum();
                            v110 = v218;
                            if ( v111 < 0 && v214 )
                              v225 = v244;
                            v109 = v256.m128i_i64[1];
                            if ( (_QWORD *)v256.m128i_i64[1] == v218 )
                              goto LABEL_314;
                            v112 = v218[6];
                            v113 = *v218;
                            if ( v112 == -1 )
                              goto LABEL_310;
                            if ( v112 )
                            {
                              if ( !v214 )
                                v112 = n;
                              n = v112;
                              goto LABEL_310;
                            }
LABEL_362:
                            if ( (*((_BYTE *)v110 + 17) & 0x40) != 0 )
                            {
                              v126 = 0;
                              if ( !v214 )
                                v126 = n;
                              n = v126;
                            }
LABEL_310:
                            if ( v107 != v113 )
                            {
                              if ( (int)get_func_chunknum() < 0 )
                              {
LABEL_312:
                                if ( v214 )
                                  v225 = v244;
                              }
LABEL_314:
                              if ( v117[1] >= that )
                                goto LABEL_315;
LABEL_333:
                              v101 = v240;
                              if ( !v240 )
                                goto LABEL_336;
LABEL_334:
                              v100 = v241 + 1;
                              if ( v241 + 1 >= *(_DWORD *)(v101 + 128) )
                                goto LABEL_335;
                              ++v241;
                              if ( v100 >= 0 )
                                continue;
                              v117 = (unsigned __int64 *)v101;
                              goto LABEL_295;
                            }
                          }
                          v119 = sub_27D00(&v243, v256.m128i_i64[0], v236, v109, SHIBYTE(v259));
                        }
                        else
                        {
                          if ( (int)get_func_chunknum() < 0 && v214 )
                            v225 = v244;
                          if ( !(unsigned __int8)is_spec_ea() )
                          {
                            if ( v256.m128i_i64[1] )
                              goto LABEL_312;
                            goto LABEL_314;
                          }
                          v119 = sub_27D00(&v243, v256.m128i_i64[0], v236, v256.m128i_i64[1], SHIBYTE(v259));
                        }
                        break;
                      }
                      if ( v119 <= v228 )
                        goto LABEL_314;
                      if ( !v214 )
                        v119 = v228;
                      v228 = v119;
                      if ( v117[1] >= that )
                      {
LABEL_315:
                        that = next_that();
                        goto LABEL_316;
                      }
                      goto LABEL_333;
                    }
LABEL_335:
                    lock_func_range();
                  }
                }
LABEL_336:
                v120 = n;
                if ( ((v231 ^ 1) & (n != -1)) != 0 )
                {
                  if ( !a6 )
                    v120 = ind_purged;
                  ind_purged = v120;
                }
                v121 = v225;
                if ( v225 >= 0 && v231 != 1 )
                {
                  if ( HIBYTE(v259) )
                  {
                    if ( v228 >= v225 )
                      v121 = v228;
                    v228 = v121;
LABEL_346:
                    if ( v228 < (unsigned __int64)v244 )
                      sub_309E0(&v243, v228);
                  }
                }
                else if ( v228 >= 0 && HIBYTE(v259) )
                {
                  goto LABEL_346;
                }
                if ( v238 )
                {
                  *(_QWORD *)&v239 = 0;
                  qfree();
                }
                sub_23170(*(_QWORD **)&v261[8]);
                v122 = *(_QWORD *)&v291[72];
                *(_QWORD *)v291 = off_180BC8;
                if ( *(_QWORD *)&v291[72] )
                {
                  v123 = *(_QWORD *)&v291[80];
                  if ( *(_QWORD *)&v291[80] )
                  {
                    v124 = 0;
                    do
                    {
                      v125 = (_QWORD *)(v122 + (v124 << 6));
                      if ( v125[5] )
                      {
                        v125[6] = 0;
                        qfree();
                      }
                      if ( v125[2] )
                      {
                        v125[3] = 0;
                        qfree();
                      }
                      ++v124;
                      v122 = *(_QWORD *)&v291[72];
                    }
                    while ( v123 != v124 );
                  }
                  *(_QWORD *)&v291[80] = 0;
                  qfree();
                }
                if ( *(_QWORD *)&v291[16] )
                {
                  *(_QWORD *)&v291[24] = 0;
                  qfree();
                }
                break;
              }
LABEL_251:
              v49 = v94;
            }
            goto LABEL_113;
          }
        }
        else
        {
LABEL_113:
          if ( v49 < v33 )
            goto LABEL_289;
        }
        v33 = next_that();
      }
      v32 = v256.m128i_i64[1];
      v236 = v33;
      if ( v33 >= *(_QWORD *)(v256.m128i_i64[1] + 8) )
        goto LABEL_289;
      continue;
    }
  }
LABEL_33:
  if ( *(_QWORD *)(v256.m128i_i64[1] + 8) - *(_QWORD *)v256.m128i_i64[1] != 1 )
  {
    if ( *(_BYTE *)(v9 + 144) )
    {
      if ( (*(_BYTE *)(v9 + 4453) & 0x20) == 0 )
        v229 = sub_70A40(v9, v8) ^ 1;
      sub_25500((__int64)&v243, v9, *v8);
      v8[2] &= ~0x400uLL;
      update_func();
      if ( v229 )
      {
        sub_725C0(v9, v8);
        if ( !a8 )
          reanalyze_function();
      }
      sub_23000((_QWORD *)(v9 + 5360), *v8);
      goto LABEL_41;
    }
    v132 = *v8;
    v133 = *(_QWORD **)(v9 + 5376);
    if ( !v133 )
    {
      v133 = (_QWORD *)(v9 + 5368);
      goto LABEL_450;
    }
    while ( 1 )
    {
      v134 = v133[4];
      v135 = 0;
      v136 = (_QWORD *)v133[3];
      if ( v132 < v134 )
      {
        v136 = (_QWORD *)v133[2];
        v135 = v230;
      }
      if ( !v136 )
        break;
      v133 = v136;
    }
    if ( v135 )
    {
LABEL_450:
      if ( v133 != *(_QWORD **)(v9 + 5384) )
      {
        v134 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
        goto LABEL_402;
      }
    }
    else
    {
LABEL_402:
      if ( v134 >= v132 )
        goto LABEL_41;
    }
    *(_QWORD *)(operator new(0x28u) + 32) = *v8;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v9 + 5400);
  }
LABEL_41:
  sub_269A0((__int64)&v243);
  sub_26A80((__int64)&v243);
  v237 = sub_267E0((__int64)&v243, a2, (unsigned __int64 *)a4, a5, &v277, a8);
  v10 = v237;
  if ( a3 )
    *a3 = v257;
  if ( a6 )
    *a6 = ind_purged;
  if ( a7 )
    *(__m128i *)a7 = _mm_load_si128(&v277);
LABEL_47:
  v18 = v249;
  if ( v249 )
  {
    v19 = v250;
    if ( (_QWORD)v250 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 24 * v20);
        if ( *v21 )
        {
          v21[1] = 0;
          qfree();
          v18 = v249;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v250 = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)&v248 = 0;
    qfree();
  }
  if ( v243.m128i_i64[1] )
  {
    *(_QWORD *)&v244 = 0;
    qfree();
  }
  return v10;
}

