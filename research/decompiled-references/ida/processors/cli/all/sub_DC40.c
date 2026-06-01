__int64 __fastcall sub_DC40(
        __int64 a1,
        int a2,
        unsigned int a3,
        const char *a4,
        const char *a5,
        double a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13)
{
  __int64 v15; // r15
  unsigned int v17; // ecx
  __int16 v18; // r13
  __int16 v19; // r11
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __m128i v26; // xmm0
  size_t v27; // rax
  unsigned __int64 v28; // rdx
  int v29; // eax
  const char *v30; // rcx
  char *v31; // rax
  __int64 v32; // rax
  char *v33; // r8
  double v34; // xmm4_8
  double v35; // xmm5_8
  unsigned __int64 v36; // rdx
  size_t v37; // r13
  unsigned __int64 v38; // r14
  size_t v39; // r9
  char *v40; // rsi
  char *v41; // r8
  int v42; // r14d
  void (__fastcall *v43)(__int64, __int64, __int64, __int64); // r13
  void *v44; // rcx
  void *v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // ebx
  const char *v49; // rcx
  size_t v50; // r14
  unsigned __int8 *v51; // rcx
  unsigned int v52; // edi
  const char *v53; // rcx
  char v54; // si
  char *v55; // rax
  const char *v56; // rcx
  char v57; // dl
  const char *v58; // rcx
  const char *v59; // rcx
  const char *v60; // rcx
  const char *v61; // rcx
  char *v62; // rcx
  char v63; // si
  char *v64; // rcx
  char v65; // si
  const char *v66; // rcx
  unsigned int v67; // edi
  char *v68; // rcx
  const char *v69; // rcx
  const char *v70; // rcx
  const char *v71; // rcx
  const char *v72; // rcx
  const char *v73; // rcx
  const char *v74; // rcx
  const char *v75; // rcx
  const char *v76; // rcx
  int v77; // edx
  unsigned int v78; // edi
  const char *v79; // rcx
  const char *v80; // rcx
  size_t v81; // rax
  __int16 v82; // r11
  size_t v83; // r14
  __int64 v84; // rax
  __int64 v85; // r14
  __int64 v86; // r8
  __m128i si128; // xmm0
  __m128i *v88; // r14
  char *v89; // rcx
  char *v90; // rcx
  char *v91; // rcx
  char *v92; // rcx
  char *v93; // rcx
  const char *v94; // rcx
  char *v95; // rcx
  char v96; // si
  unsigned __int8 *v97; // rcx
  int v98; // eax
  const char *v99; // rcx
  const char *v100; // rcx
  __int64 v101; // r8
  unsigned __int64 v102; // rdx
  __int64 v103; // rsi
  unsigned __int64 v104; // rdx
  size_t v105; // r8
  __int64 v106; // r14
  size_t v107; // r10
  __int64 v108; // r14
  unsigned __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // rsi
  char *v112; // rdi
  __int64 v113; // r8
  __int64 v114; // r10
  unsigned __int64 v115; // rdx
  __int64 v116; // rsi
  __int64 v117; // r8
  size_t v118; // rax
  __int64 v119; // r8
  size_t v120; // r11
  size_t v121; // r10
  __int64 v122; // rsi
  size_t v123; // rdx
  __int64 v124; // r8
  unsigned __int64 v125; // rdx
  __int64 v126; // r10
  __int64 v127; // rsi
  __int16 v128; // r8
  unsigned __int64 v129; // rdi
  const char *v130; // rax
  char v131; // dl
  int v132; // eax
  unsigned int v133; // esi
  const char *v134; // rax
  char v135; // cl
  int v136; // eax
  const char *v137; // rcx
  int v138; // eax
  const char *v139; // rcx
  const char *v140; // rax
  char v141; // cl
  unsigned int v142; // r8d
  unsigned int v143; // esi
  const char *v144; // rax
  char v145; // cl
  size_t v146; // rax
  __int64 v147; // r8
  size_t v148; // r9
  size_t v149; // r11
  __int64 v150; // rsi
  size_t v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r9
  __int64 v154; // r8
  int v155; // eax
  int v156; // eax
  const char *v157; // rax
  char v158; // dl
  const char *v159; // rax
  char v160; // cl
  unsigned int v161; // r8d
  int v162; // eax
  const char *v163; // rax
  char v164; // cl
  const char *v165; // rax
  char v166; // cl
  const char *v167; // rax
  char v168; // cl
  const char *v169; // rax
  char v170; // cl
  size_t v171; // [rsp+10h] [rbp-D50h]
  size_t v172; // [rsp+10h] [rbp-D50h]
  __int16 v173; // [rsp+18h] [rbp-D48h]
  __int16 v174; // [rsp+18h] [rbp-D48h]
  __int64 v175; // [rsp+18h] [rbp-D48h]
  size_t v176; // [rsp+18h] [rbp-D48h]
  __int64 v177; // [rsp+18h] [rbp-D48h]
  __int64 v178; // [rsp+18h] [rbp-D48h]
  size_t v179; // [rsp+18h] [rbp-D48h]
  __int64 v180; // [rsp+20h] [rbp-D40h]
  size_t v181; // [rsp+20h] [rbp-D40h]
  __int64 v182; // [rsp+20h] [rbp-D40h]
  __int64 v183; // [rsp+20h] [rbp-D40h]
  __int64 v184; // [rsp+20h] [rbp-D40h]
  size_t v185; // [rsp+20h] [rbp-D40h]
  unsigned __int64 v186; // [rsp+28h] [rbp-D38h]
  __int64 v187; // [rsp+28h] [rbp-D38h]
  __int64 v188; // [rsp+28h] [rbp-D38h]
  size_t v189; // [rsp+28h] [rbp-D38h]
  size_t v190; // [rsp+28h] [rbp-D38h]
  unsigned __int64 v191; // [rsp+28h] [rbp-D38h]
  unsigned __int64 v192; // [rsp+28h] [rbp-D38h]
  unsigned __int64 v193; // [rsp+28h] [rbp-D38h]
  void *v194; // [rsp+30h] [rbp-D30h]
  char *v195; // [rsp+30h] [rbp-D30h]
  void *v196; // [rsp+30h] [rbp-D30h]
  void *v197; // [rsp+30h] [rbp-D30h]
  unsigned int v198; // [rsp+40h] [rbp-D20h]
  unsigned int v199; // [rsp+44h] [rbp-D1Ch]
  __int16 n; // [rsp+48h] [rbp-D18h]
  size_t na; // [rsp+48h] [rbp-D18h]
  size_t nb; // [rsp+48h] [rbp-D18h]
  size_t nc; // [rsp+48h] [rbp-D18h]
  int v204[2]; // [rsp+50h] [rbp-D10h]
  __int64 v205; // [rsp+58h] [rbp-D08h]
  unsigned __int64 v206; // [rsp+58h] [rbp-D08h]
  int v208; // [rsp+68h] [rbp-CF8h]
  unsigned int v209; // [rsp+6Ch] [rbp-CF4h]
  _DWORD v210[2]; // [rsp+78h] [rbp-CE8h] BYREF
  char *s1; // [rsp+80h] [rbp-CE0h] BYREF
  unsigned __int64 v212; // [rsp+88h] [rbp-CD8h]
  unsigned __int64 v213; // [rsp+90h] [rbp-CD0h]
  __int64 v214; // [rsp+A0h] [rbp-CC0h] BYREF
  __int128 v215; // [rsp+A8h] [rbp-CB8h]
  int v216[2]; // [rsp+C0h] [rbp-CA0h] BYREF
  __int128 v217; // [rsp+C8h] [rbp-C98h]
  void *src; // [rsp+E0h] [rbp-C80h] BYREF
  __int128 v219; // [rsp+E8h] [rbp-C78h]
  char *v220; // [rsp+100h] [rbp-C60h] BYREF
  unsigned __int64 v221; // [rsp+108h] [rbp-C58h]
  unsigned int v222; // [rsp+110h] [rbp-C50h]
  unsigned int v223; // [rsp+114h] [rbp-C4Ch]
  int v224; // [rsp+118h] [rbp-C48h]
  char v225[1023]; // [rsp+120h] [rbp-C40h] BYREF
  char v226; // [rsp+51Fh] [rbp-841h] BYREF
  _BYTE v227[1023]; // [rsp+520h] [rbp-840h] BYREF
  char v228; // [rsp+91Fh] [rbp-441h] BYREF
  char s2[1032]; // [rsp+920h] [rbp-440h] BYREF
  unsigned __int64 v230; // [rsp+D28h] [rbp-38h]

  v209 = a3;
  v15 = *(_QWORD *)(a1 + 616);
  v230 = __readfsqword(0x28u);
  if ( (a3 & 0xFF000000) != 0x6000000 )
  {
    if ( (a3 & 0xFF000000) == 0xA000000 )
    {
      v205 = a3;
      if ( netnode_supval(*(_QWORD *)(v15 + 144), a3, &v220, 4, 97) > 0 )
      {
        v208 = 0;
        v17 = (unsigned int)v220;
        v18 = 0;
        v19 = 0;
        v198 = 0;
        v199 = 0;
        goto LABEL_5;
      }
    }
    else
    {
      sub_4550((__int64)"display_method() called with invalid token: %x.", a3);
    }
    return 0;
  }
  v205 = a3;
  if ( netnode_supval(*(_QWORD *)(v15 + 144), a3, &v220, 28, 97) <= 0 )
    return 0;
  v17 = (unsigned int)v220;
  v19 = WORD2(v220);
  v18 = WORD2(v221);
  v199 = v223;
  v198 = v222;
  v208 = v224;
LABEL_5:
  v20 = a1;
  n = v19;
  sub_82C0((__int64)&s1, a1, a2, v17, v209, a6, a7, a8);
  if ( v212 <= 1 )
  {
    v47 = 0;
    goto LABEL_46;
  }
  v25 = (__int64)a4;
  v26.m128i_i64[0] = 0;
  v214 = 0;
  v215 = 0;
  v217 = 0;
  *(_QWORD *)v216 = 0;
  src = nullptr;
  v219 = 0;
  if ( a4 )
  {
    v27 = strlen(a4);
    if ( v27 )
    {
      v50 = v27 + 1;
      na = v27;
      v20 = (__int64)a4;
      v25 = qvector_reserve(&v214, 0, v27 + 1, 1);
      *(_QWORD *)&v215 = v50;
      v214 = v25;
      memmove((void *)v25, a4, na);
      *(_BYTE *)(v214 + na) = 0;
    }
    goto LABEL_9;
  }
  v55 = v225;
  v56 = ".method";
  v20 = (__int64)&v226;
  do
  {
    v57 = *v56++;
    *v55 = v57;
    if ( !v57 )
    {
      switch ( n & 7 )
      {
        case 0:
          if ( v55 < v227 )
            goto LABEL_258;
          if ( under_debugger )
            goto LABEL_550;
          interr(520);
          break;
        case 1:
          goto LABEL_244;
        case 2:
          goto LABEL_237;
        case 3:
          goto LABEL_230;
        case 4:
          goto LABEL_223;
        case 5:
          goto LABEL_144;
        case 6:
          goto LABEL_251;
        default:
          goto LABEL_150;
      }
LABEL_502:
      if ( !under_debugger )
      {
        interr(520);
LABEL_504:
        if ( !under_debugger )
          interr(520);
      }
      goto LABEL_550;
    }
    ++v55;
  }
  while ( v55 != &v226 );
  v226 = 0;
  switch ( n & 7 )
  {
    case 0:
      v55 = &v226;
LABEL_258:
      v67 = v209;
      v94 = " privatescope";
      if ( v55 == &v226 )
        goto LABEL_272;
      while ( 1 )
      {
        v20 = *(unsigned __int8 *)v94++;
        *v55 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_149;
        if ( ++v55 == &v226 )
          goto LABEL_271;
      }
    case 1:
      v55 = &v226;
LABEL_244:
      if ( v55 >= v227 )
        goto LABEL_534;
      if ( v55 == &v226 )
        goto LABEL_272;
      v67 = v209;
      v92 = " private";
      while ( 1 )
      {
        v20 = (unsigned __int8)*v92++;
        *v55 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_149;
        if ( ++v55 == &v226 )
          goto LABEL_271;
      }
    case 2:
      v55 = &v226;
LABEL_237:
      if ( v55 >= v227 )
        goto LABEL_526;
      if ( v55 == &v226 )
        goto LABEL_272;
      v67 = v209;
      v91 = " famandassem";
      while ( 1 )
      {
        v20 = (unsigned __int8)*v91++;
        *v55 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_149;
        if ( ++v55 == &v226 )
          goto LABEL_271;
      }
    case 3:
      v55 = &v226;
LABEL_230:
      if ( v55 >= v227 )
        goto LABEL_504;
      if ( v55 == &v226 )
        goto LABEL_272;
      v67 = v209;
      v90 = " assembly";
      while ( 1 )
      {
        v20 = (unsigned __int8)*v90++;
        *v55 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_149;
        if ( ++v55 == &v226 )
          goto LABEL_271;
      }
    case 4:
      v55 = &v226;
LABEL_223:
      if ( v55 >= v227 )
        goto LABEL_502;
      if ( v55 == &v226 )
        goto LABEL_272;
      v67 = v209;
      v89 = " family";
      while ( 1 )
      {
        v20 = (unsigned __int8)*v89++;
        *v55 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_149;
        if ( ++v55 == &v226 )
          goto LABEL_271;
      }
    case 5:
      v55 = &v226;
LABEL_144:
      if ( v55 >= v227 )
      {
        if ( !under_debugger )
          interr(520);
        goto LABEL_550;
      }
      if ( v55 == &v226 )
        goto LABEL_272;
      v67 = v209;
      v68 = " famorassem";
      while ( 1 )
      {
        v20 = (unsigned __int8)*v68++;
        *v55 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_149;
        if ( ++v55 == &v226 )
          goto LABEL_271;
      }
    case 6:
      v55 = &v226;
LABEL_251:
      if ( v55 >= v227 )
      {
        if ( !under_debugger )
          interr(520);
        goto LABEL_550;
      }
      if ( v55 == &v226 )
        goto LABEL_272;
      v67 = v209;
      v93 = " public";
      break;
    default:
      goto LABEL_150;
  }
  do
  {
    v20 = (unsigned __int8)*v93++;
    *v55 = v20;
    if ( !(_BYTE)v20 )
    {
LABEL_149:
      v209 = v67;
LABEL_150:
      if ( (n & 0x10) == 0 )
        goto LABEL_156;
      if ( v55 >= v227 )
        goto LABEL_512;
      if ( v55 != &v226 )
      {
        v69 = " static";
        while ( 1 )
        {
          v20 = *(unsigned __int8 *)v69++;
          *v55 = v20;
          if ( !(_BYTE)v20 )
            break;
          if ( ++v55 == &v226 )
            goto LABEL_294;
        }
LABEL_156:
        if ( (n & 0x20) == 0 )
          goto LABEL_162;
        if ( v55 < v227 )
          goto LABEL_158;
        goto LABEL_498;
      }
LABEL_294:
      v226 = 0;
      if ( (n & 0x20) == 0 )
      {
        v55 = &v226;
        if ( (n & 0x80u) == 0 )
          goto LABEL_168;
LABEL_164:
        if ( v55 != &v226 )
        {
          v71 = " hidebysig";
          while ( 1 )
          {
            v20 = *(unsigned __int8 *)v71++;
            *v55 = v20;
            if ( !(_BYTE)v20 )
              goto LABEL_168;
            if ( ++v55 == &v226 )
              goto LABEL_288;
          }
        }
        goto LABEL_288;
      }
LABEL_291:
      v226 = 0;
      if ( (n & 0x80u) == 0 )
      {
        v55 = &v226;
        if ( (n & 0x40) == 0 )
          goto LABEL_174;
LABEL_170:
        if ( v55 != &v226 )
        {
          v72 = " virtual";
          while ( 1 )
          {
            v20 = *(unsigned __int8 *)v72++;
            *v55 = v20;
            if ( !(_BYTE)v20 )
              goto LABEL_174;
            if ( ++v55 == &v226 )
              goto LABEL_285;
          }
        }
        goto LABEL_285;
      }
LABEL_288:
      v226 = 0;
      if ( (n & 0x40) == 0 )
      {
        v55 = &v226;
        if ( (n & 0x100) != 0 )
          goto LABEL_176;
        goto LABEL_180;
      }
LABEL_285:
      v226 = 0;
      if ( (n & 0x100) != 0 )
        goto LABEL_297;
      v55 = &v226;
      if ( (n & 0x200) == 0 )
      {
LABEL_186:
        if ( (n & 0x400) == 0 )
          goto LABEL_192;
        if ( v55 < v227 )
          goto LABEL_188;
        goto LABEL_508;
      }
      goto LABEL_182;
    }
    ++v55;
  }
  while ( v55 != &v226 );
LABEL_271:
  v209 = v67;
LABEL_272:
  v226 = 0;
  if ( (n & 0x10) != 0 )
    goto LABEL_294;
  v55 = &v226;
  if ( (n & 0x20) == 0 )
    goto LABEL_162;
LABEL_158:
  if ( v55 == &v226 )
    goto LABEL_291;
  v70 = " final";
  while ( 1 )
  {
    v20 = *(unsigned __int8 *)v70++;
    *v55 = v20;
    if ( !(_BYTE)v20 )
      break;
    if ( ++v55 == &v226 )
      goto LABEL_291;
  }
LABEL_162:
  if ( (n & 0x80u) != 0 )
  {
    if ( v55 < v227 )
      goto LABEL_164;
    if ( under_debugger )
      goto LABEL_550;
    interr(520);
LABEL_498:
    if ( !under_debugger )
      interr(520);
    goto LABEL_550;
  }
LABEL_168:
  if ( (n & 0x40) != 0 )
  {
    if ( v55 < v227 )
      goto LABEL_170;
LABEL_485:
    if ( under_debugger )
      goto LABEL_550;
    interr(520);
LABEL_487:
    if ( !under_debugger )
      interr(520);
    goto LABEL_550;
  }
LABEL_174:
  if ( (n & 0x100) == 0 )
  {
LABEL_180:
    if ( (n & 0x200) == 0 )
      goto LABEL_186;
    if ( v55 >= v227 )
      goto LABEL_510;
LABEL_182:
    if ( v55 != &v226 )
    {
      v74 = " checkaccessonoverride";
      do
      {
        v20 = *(unsigned __int8 *)v74++;
        *v55 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_186;
      }
      while ( ++v55 != &v226 );
    }
LABEL_307:
    v226 = 0;
    if ( (n & 0x400) == 0 )
    {
      if ( (n & 0x800) != 0 )
      {
        v55 = &v226;
LABEL_194:
        if ( v55 != &v226 )
        {
          v76 = " specialname";
          while ( 1 )
          {
            v20 = *(unsigned __int8 *)v76++;
            *v55 = v20;
            if ( !(_BYTE)v20 )
              goto LABEL_198;
            if ( ++v55 == &v226 )
              goto LABEL_300;
          }
        }
        goto LABEL_300;
      }
      goto LABEL_306;
    }
LABEL_305:
    v226 = 0;
    if ( (n & 0x800) != 0 )
    {
LABEL_300:
      v226 = 0;
      v98 = n & 0xD000;
      if ( v98 == 0x4000 || v98 == 0x8000 || v98 == 4096 )
        goto LABEL_283;
      if ( (n & 8) == 0 )
        goto LABEL_213;
      v55 = &v226;
      goto LABEL_209;
    }
LABEL_306:
    v55 = &v226;
    goto LABEL_198;
  }
  if ( v55 >= v227 )
  {
    if ( !under_debugger )
      interr(520);
    goto LABEL_550;
  }
LABEL_176:
  if ( v55 != &v226 )
  {
    v73 = " newslot";
    do
    {
      v20 = *(unsigned __int8 *)v73++;
      *v55 = v20;
      if ( !(_BYTE)v20 )
        goto LABEL_180;
    }
    while ( ++v55 != &v226 );
  }
LABEL_297:
  v226 = 0;
  if ( (n & 0x200) != 0 )
    goto LABEL_307;
  v55 = &v226;
  if ( (n & 0x400) == 0 )
    goto LABEL_192;
LABEL_188:
  if ( v55 == &v226 )
    goto LABEL_305;
  v75 = " abstract";
  while ( 1 )
  {
    v20 = *(unsigned __int8 *)v75++;
    *v55 = v20;
    if ( !(_BYTE)v20 )
      break;
    if ( ++v55 == &v226 )
      goto LABEL_305;
  }
LABEL_192:
  if ( (n & 0x800) != 0 )
  {
    if ( v55 < v227 )
      goto LABEL_194;
    if ( under_debugger )
      goto LABEL_550;
    interr(520);
LABEL_508:
    if ( under_debugger )
      goto LABEL_550;
    interr(520);
LABEL_510:
    if ( under_debugger )
      goto LABEL_550;
    interr(520);
LABEL_512:
    if ( under_debugger )
      goto LABEL_550;
    v25 = 520;
    interr(520);
LABEL_514:
    sub_4B40(v25, v20, v28);
  }
LABEL_198:
  v77 = n & 0xD000;
  if ( v77 == 0x4000 )
  {
    if ( v55 >= v227 )
      goto LABEL_494;
    if ( v55 == &v226 )
      goto LABEL_283;
    v78 = v209;
    v99 = " hassecurity";
    while ( 1 )
    {
      v20 = *(unsigned __int8 *)v99++;
      *v55 = v20;
      if ( !(_BYTE)v20 )
        goto LABEL_206;
      if ( ++v55 == &v226 )
      {
LABEL_282:
        v209 = v78;
        goto LABEL_283;
      }
    }
  }
  if ( v77 == 0x8000 )
  {
    if ( v55 >= v227 )
    {
      if ( !under_debugger )
        interr(520);
      goto LABEL_550;
    }
    if ( v55 == &v226 )
      goto LABEL_283;
    v78 = v209;
    v100 = " requiresecobject";
    while ( 1 )
    {
      v20 = *(unsigned __int8 *)v100++;
      *v55 = v20;
      if ( !(_BYTE)v20 )
        break;
      if ( ++v55 == &v226 )
        goto LABEL_282;
    }
LABEL_206:
    v209 = v78;
    goto LABEL_207;
  }
  if ( v77 != 4096 )
  {
LABEL_207:
    if ( (n & 8) == 0 )
      goto LABEL_213;
    if ( v55 >= v227 )
    {
      if ( !under_debugger )
        interr(520);
      goto LABEL_550;
    }
LABEL_209:
    if ( v55 == &v226 )
      goto LABEL_284;
    v80 = " unmanagedexp";
    while ( 1 )
    {
      v20 = *(unsigned __int8 *)v80++;
      *v55 = v20;
      if ( !(_BYTE)v20 )
        goto LABEL_213;
      if ( ++v55 == &v226 )
        goto LABEL_284;
    }
  }
  if ( v55 >= v227 )
  {
    if ( !under_debugger )
      interr(520);
    goto LABEL_550;
  }
  if ( v55 != &v226 )
  {
    v78 = v209;
    v79 = " rtspecialname";
    while ( 1 )
    {
      v20 = *(unsigned __int8 *)v79++;
      *v55 = v20;
      if ( !(_BYTE)v20 )
        goto LABEL_206;
      if ( ++v55 == &v226 )
        goto LABEL_282;
    }
  }
LABEL_283:
  v226 = 0;
  if ( (n & 8) != 0 )
LABEL_284:
    v226 = 0;
LABEL_213:
  v25 = (__int64)v225;
  v81 = strlen(v225);
  v82 = n;
  v83 = v81;
  if ( v81 )
  {
    v194 = (void *)(v81 + 1);
    v20 = (__int64)v225;
    v25 = qvector_reserve(&v214, 0, v81 + 1, 1);
    v214 = v25;
    *(_QWORD *)&v215 = v194;
    memmove((void *)v25, v225, v83);
    v82 = n;
    *(_BYTE *)(v214 + v83) = 0;
  }
  if ( (v82 & 0x6000) == 0 )
    goto LABEL_9;
  v25 = *(_QWORD *)(v15 + 144);
  v84 = netnode_supval(v25, v205, v210, 8, 107);
  v85 = v215;
  if ( v84 != 8 )
  {
    if ( (_QWORD)v215 )
    {
      v86 = v215 + 25;
      v28 = v215 + 26;
      v85 = v215 - 1;
    }
    else
    {
      v28 = 27;
      v86 = 26;
    }
    v20 = v214;
    if ( *((_QWORD *)&v215 + 1) < v28 )
    {
      v25 = (__int64)&v214;
      v196 = (void *)v86;
      nb = v28;
      v214 = qvector_reserve(&v214, v214, v28, 1);
      v86 = (__int64)v196;
      v20 = v214;
      v28 = nb;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_155A0);
    *(_QWORD *)&v215 = v28;
    *(_BYTE *)(v20 + v86) = 0;
    v88 = (__m128i *)(v214 + v85);
    *v88 = si128;
    v26 = _mm_load_si128((const __m128i *)&xmmword_155B0);
    *(__m128i *)((char *)v88 + 10) = v26;
    goto LABEL_9;
  }
  if ( (_QWORD)v215 )
  {
    v101 = v215 + 13;
    v102 = v215 + 14;
    v85 = v215 - 1;
  }
  else
  {
    v102 = 15;
    v101 = 14;
  }
  v103 = v214;
  if ( *((_QWORD *)&v215 + 1) < v102 )
  {
    v187 = v101;
    v197 = (void *)v102;
    v214 = qvector_reserve(&v214, v214, v102, 1);
    v101 = v187;
    v103 = v214;
    v102 = (unsigned __int64)v197;
  }
  *(_QWORD *)&v215 = v102;
  *(_BYTE *)(v103 + v101) = 0;
  qmemcpy((void *)(v214 + v85), " pinvokeimpl(\"", 14);
  sub_7A10((__int64 *)&v220, a1, v210[1], 0.0, a7, a8);
  v104 = v221;
  v195 = v220;
  if ( v221 )
  {
    v105 = v221 - 1;
    if ( v221 != 1 )
    {
      v106 = v215;
      v107 = v221 - 1;
      if ( (_QWORD)v215 )
      {
        v106 = v215 - 1;
        v107 = v105 + v215 - 1;
        v104 = v221 + v215 - 1;
      }
      if ( *((_QWORD *)&v215 + 1) < v104 )
      {
        v179 = v107;
        v185 = v221 - 1;
        v193 = v104;
        v214 = qvector_reserve(&v214, v214, v104, 1);
        v107 = v179;
        v105 = v185;
        v104 = v193;
      }
      *(_QWORD *)&v215 = v104;
      *(_BYTE *)(v214 + v107) = 0;
      memcpy((void *)(v106 + v214), v195, v105);
    }
  }
  v108 = v215;
  if ( (_QWORD)v215 )
  {
    v109 = v215 + 1;
    v110 = v215;
    v108 = v215 - 1;
  }
  else
  {
    v109 = 2;
    v110 = 1;
  }
  v111 = v214;
  if ( *((_QWORD *)&v215 + 1) < v109 )
  {
    v180 = v110;
    v186 = v109;
    v214 = qvector_reserve(&v214, v214, v109, 1);
    v110 = v180;
    v111 = v214;
    v109 = v186;
  }
  *(_QWORD *)&v215 = v109;
  *(_BYTE *)(v111 + v110) = 0;
  *(_BYTE *)(v214 + v108) = 34;
  v20 = v205;
  if ( netnode_supstr(*(_QWORD *)(v15 + 144), v205, s2, 1024, 108) < 0 )
  {
    if ( v195 )
    {
      v47 = 0;
      qfree(v195, v205, v21, v22, v23, v24);
      goto LABEL_40;
    }
LABEL_58:
    v47 = 0;
    goto LABEL_40;
  }
  v112 = (char *)&unk_15584;
  if ( v212 )
    v112 = s1;
  if ( strcmp(v112, s2) )
  {
    v113 = v215;
    if ( (_QWORD)v215 )
    {
      v114 = v215 + 4;
      v115 = v215 + 5;
      v113 = v215 - 1;
    }
    else
    {
      v115 = 6;
      v114 = 5;
    }
    v116 = v214;
    if ( *((_QWORD *)&v215 + 1) < v115 )
    {
      v178 = v114;
      v184 = v113;
      v192 = v115;
      v214 = qvector_reserve(&v214, v214, v115, 1);
      v114 = v178;
      v116 = v214;
      v113 = v184;
      v115 = v192;
    }
    *(_QWORD *)&v215 = v115;
    *(_BYTE *)(v116 + v114) = 0;
    v117 = v214 + v113;
    *(_DWORD *)v117 = 544432416;
    *(_BYTE *)(v117 + 4) = 34;
    v118 = strlen(s2);
    v119 = v215;
    v120 = v118;
    v121 = v118;
    if ( (_QWORD)v215 )
    {
      v119 = v215 - 1;
      v121 = v118 + v215 - 1;
    }
    v122 = v214;
    v123 = v121 + 1;
    if ( *((_QWORD *)&v215 + 1) < v121 + 1 )
    {
      v172 = v118;
      v176 = v121;
      v182 = v119;
      v190 = v121 + 1;
      v214 = qvector_reserve(&v214, v214, v123, 1);
      v120 = v172;
      v122 = v214;
      v121 = v176;
      v119 = v182;
      v123 = v190;
    }
    *(_QWORD *)&v215 = v123;
    *(_BYTE *)(v122 + v121) = 0;
    memmove((void *)(v119 + v214), s2, v120);
    v124 = v215;
    if ( (_QWORD)v215 )
    {
      v125 = v215 + 1;
      v126 = v215;
      v124 = v215 - 1;
    }
    else
    {
      v125 = 2;
      v126 = 1;
    }
    v127 = v214;
    if ( *((_QWORD *)&v215 + 1) < v125 )
    {
      v177 = v126;
      v183 = v124;
      v191 = v125;
      v214 = qvector_reserve(&v214, v214, v125, 1);
      v126 = v177;
      v127 = v214;
      v124 = v183;
      v125 = v191;
    }
    *(_QWORD *)&v215 = v125;
    *(_BYTE *)(v127 + v126) = 0;
    *(_BYTE *)(v214 + v124) = 34;
  }
  v128 = v210[0];
  if ( (v210[0] & 1) == 0 )
  {
    v129 = (unsigned __int64)v225;
    v132 = v210[0] & 6;
    if ( v132 != 4 )
      goto LABEL_364;
    goto LABEL_413;
  }
  v129 = (unsigned __int64)v225;
  v130 = " nomangle";
  do
  {
    v131 = *v130++;
    *(_BYTE *)v129 = v131;
    if ( !v131 )
    {
      v132 = v128 & 6;
      if ( v132 != 4 )
      {
LABEL_364:
        if ( v132 != 6 )
        {
          if ( v132 != 2 )
            goto LABEL_372;
          if ( v129 < (unsigned __int64)v227 )
          {
            if ( (char *)v129 == &v226 )
              goto LABEL_421;
            v133 = v209;
            v134 = " ansi";
            while ( 1 )
            {
              v135 = *v134++;
              *(_BYTE *)v129 = v135;
              if ( !v135 )
                goto LABEL_371;
              if ( (char *)++v129 == &v226 )
                goto LABEL_420;
            }
          }
          goto LABEL_481;
        }
        if ( v129 >= (unsigned __int64)v227 )
        {
          if ( !under_debugger )
            interr(520);
          goto LABEL_550;
        }
        if ( (char *)v129 == &v226 )
          goto LABEL_421;
        v133 = v209;
        v163 = " autochar";
        while ( 1 )
        {
          v164 = *v163++;
          *(_BYTE *)v129 = v164;
          if ( !v164 )
            break;
          if ( (char *)++v129 == &v226 )
            goto LABEL_420;
        }
LABEL_371:
        v209 = v133;
        goto LABEL_372;
      }
      if ( v129 >= (unsigned __int64)v227 )
      {
        if ( !under_debugger )
          interr(520);
        goto LABEL_550;
      }
      if ( (char *)v129 == &v226 )
        goto LABEL_421;
LABEL_413:
      v133 = v209;
      v157 = " unicode";
      while ( 1 )
      {
        v158 = *v157++;
        *(_BYTE *)v129 = v158;
        if ( !v158 )
          goto LABEL_371;
        if ( (char *)++v129 == &v226 )
        {
LABEL_420:
          v209 = v133;
          goto LABEL_421;
        }
      }
    }
    ++v129;
  }
  while ( (char *)v129 != &v226 );
  v162 = v128 & 6;
  v226 = 0;
  if ( v162 == 4 || v162 == 6 || v162 == 2 )
LABEL_421:
    v226 = 0;
  v129 = (unsigned __int64)&v226;
LABEL_372:
  v136 = v128 & 0x30;
  if ( v136 == 16 )
  {
    v137 = "en";
  }
  else
  {
    v137 = "dis";
    if ( v136 != 32 )
      goto LABEL_374;
  }
  v174 = v128;
  v156 = qsnprintf(v129, &v227[-v129], "bestbit: %sabled", v137);
  v128 = v174;
  v129 += v156;
LABEL_374:
  v138 = v128 & 0x3000;
  if ( v138 == 4096 )
  {
    v139 = "en";
  }
  else
  {
    v139 = "dis";
    if ( v138 != 0x2000 )
      goto LABEL_376;
  }
  v173 = v128;
  v155 = qsnprintf(v129, &v227[-v129], "throwonunmappablechar: %sabled", v139);
  v128 = v173;
  v129 += v155;
LABEL_376:
  if ( (v128 & 0x40) == 0 )
  {
LABEL_382:
    v142 = v128 & 0x700;
    if ( v142 == 768 )
    {
      if ( v129 < (unsigned __int64)v227 )
      {
        if ( (char *)v129 != &v226 )
        {
          v143 = v209;
          v167 = " stdcall";
          do
          {
            v168 = *v167++;
            *(_BYTE *)v129 = v168;
            if ( !v168 )
              goto LABEL_391;
            ++v129;
          }
          while ( (char *)v129 != &v226 );
LABEL_417:
          v209 = v143;
        }
        goto LABEL_418;
      }
      if ( !under_debugger )
        interr(520);
      goto LABEL_550;
    }
    if ( v142 > 0x300 )
    {
      if ( v142 == 1024 )
      {
        if ( v129 >= (unsigned __int64)v227 )
        {
          if ( !under_debugger )
            interr(520);
          goto LABEL_550;
        }
        if ( (char *)v129 == &v226 )
          goto LABEL_418;
        v143 = v209;
        v165 = " thiscall";
        while ( 1 )
        {
          v166 = *v165++;
          *(_BYTE *)v129 = v166;
          if ( !v166 )
            break;
          if ( (char *)++v129 == &v226 )
            goto LABEL_417;
        }
      }
      else
      {
        if ( v142 != 1280 )
        {
LABEL_392:
          if ( v129 < (unsigned __int64)v227 )
            goto LABEL_393;
LABEL_528:
          if ( under_debugger )
            goto LABEL_550;
          interr(519);
          goto LABEL_530;
        }
        if ( v129 >= (unsigned __int64)v227 )
        {
LABEL_477:
          if ( !under_debugger )
            interr(520);
          goto LABEL_550;
        }
        if ( (char *)v129 == &v226 )
          goto LABEL_418;
        v143 = v209;
        v159 = " fastcall";
        while ( 1 )
        {
          v160 = *v159++;
          *(_BYTE *)v129 = v160;
          if ( !v160 )
            break;
          if ( (char *)++v129 == &v226 )
            goto LABEL_417;
        }
      }
    }
    else if ( v142 == 256 )
    {
      if ( v129 >= (unsigned __int64)v227 )
      {
LABEL_536:
        if ( !under_debugger )
          interr(520);
        goto LABEL_550;
      }
      if ( (char *)v129 == &v226 )
        goto LABEL_418;
      v143 = v209;
      v169 = " winapi";
      while ( 1 )
      {
        v170 = *v169++;
        *(_BYTE *)v129 = v170;
        if ( !v170 )
          break;
        if ( (char *)++v129 == &v226 )
          goto LABEL_417;
      }
    }
    else
    {
      if ( v142 != 512 )
        goto LABEL_392;
      if ( v129 >= (unsigned __int64)v227 )
      {
        if ( under_debugger )
          goto LABEL_550;
        interr(520);
LABEL_481:
        if ( under_debugger )
          goto LABEL_550;
        interr(520);
        goto LABEL_483;
      }
      if ( (char *)v129 == &v226 )
        goto LABEL_418;
      v143 = v209;
      v144 = " cdecl";
      while ( 1 )
      {
        v145 = *v144++;
        *(_BYTE *)v129 = v145;
        if ( !v145 )
          break;
        if ( (char *)++v129 == &v226 )
          goto LABEL_417;
      }
    }
LABEL_391:
    v209 = v143;
    goto LABEL_392;
  }
  if ( v129 >= (unsigned __int64)v227 )
    goto LABEL_487;
  v140 = " lasterr";
  if ( (char *)v129 != &v226 )
  {
    do
    {
      v141 = *v140++;
      *(_BYTE *)v129 = v141;
      if ( !v141 )
        goto LABEL_382;
    }
    while ( (char *)++v129 != &v226 );
  }
  v161 = v128 & 0x700;
  v226 = 0;
  if ( v161 == 768 )
    goto LABEL_418;
  if ( v161 <= 0x300 )
  {
    if ( v161 != 256 && v161 != 512 )
      goto LABEL_419;
LABEL_418:
    v226 = 0;
    goto LABEL_419;
  }
  if ( v161 == 1024 || v161 == 1280 )
    goto LABEL_418;
LABEL_419:
  v129 = (unsigned __int64)&v226;
LABEL_393:
  *(_BYTE *)v129 = 0;
  v146 = strlen(v225);
  v147 = v215;
  v148 = v146;
  v149 = v146;
  if ( (_QWORD)v215 )
  {
    v147 = v215 - 1;
    v149 = v146 + v215 - 1;
  }
  v150 = v214;
  v151 = v149 + 1;
  if ( *((_QWORD *)&v215 + 1) < v149 + 1 )
  {
    v171 = v146;
    v175 = v147;
    v181 = v149;
    v189 = v149 + 1;
    v214 = qvector_reserve(&v214, v214, v151, 1);
    v150 = v214;
    v148 = v171;
    v147 = v175;
    v149 = v181;
    v151 = v189;
  }
  *(_QWORD *)&v215 = v151;
  *(_BYTE *)(v150 + v149) = 0;
  memmove((void *)(v147 + v214), v225, v148);
  v154 = v215;
  v28 = 2;
  if ( (_QWORD)v215 )
  {
    v28 = v215 + 1;
    v154 = v215 - 1;
  }
  v20 = v214;
  if ( *((_QWORD *)&v215 + 1) < v28 )
  {
    v188 = v154;
    nc = v28;
    v214 = qvector_reserve(&v214, v214, v28, 1);
    v20 = v214;
    v154 = v188;
    v28 = nc;
  }
  *(_QWORD *)&v215 = v28;
  v25 = (__int64)v195;
  *(_BYTE *)(v20 + v154) = 41;
  *(_BYTE *)(v214 + v154 + 1) = 0;
  if ( v195 )
    qfree(v195, v20, v28, v152, v154, v153);
LABEL_9:
  v29 = v18 & 3;
  switch ( v29 )
  {
    case 2:
      v25 = v209;
      v59 = "optil";
      v31 = v227;
      v20 = (__int64)&v228;
      do
      {
        v28 = *(unsigned __int8 *)v59++;
        *v31 = v28;
        if ( !(_BYTE)v28 )
          goto LABEL_15;
        ++v31;
        v28 = (unsigned __int64)&v228;
      }
      while ( v31 != &v228 );
LABEL_60:
      v209 = v25;
      v228 = 0;
      if ( (v18 & 4) != 0 )
        goto LABEL_120;
      v31 = &v228;
      if ( (v18 & 0x10) == 0 )
        goto LABEL_17;
      goto LABEL_62;
    case 3:
      v25 = v209;
      v49 = "runtime";
      v31 = v227;
      v20 = (__int64)&v228;
      while ( 1 )
      {
        v28 = *(unsigned __int8 *)v49++;
        *v31 = v28;
        if ( !(_BYTE)v28 )
          break;
        ++v31;
        v28 = (unsigned __int64)&v228;
        if ( v31 == &v228 )
          goto LABEL_60;
      }
LABEL_15:
      v209 = v25;
      if ( (v18 & 4) == 0 )
        goto LABEL_16;
      if ( v227 >= v31 )
        goto LABEL_79;
      if ( v31 >= s2 )
        goto LABEL_514;
      v28 = (unsigned __int64)&v228;
      if ( v31 != &v228 )
      {
        v25 = (unsigned int)v25;
        v97 = (unsigned __int8 *)&unk_14DCD;
        while ( 1 )
        {
          v20 = *v97++;
          *v31 = v20;
          if ( !(_BYTE)v20 )
            break;
          if ( ++v31 == &v228 )
          {
LABEL_119:
            v209 = v25;
            goto LABEL_120;
          }
        }
        v209 = v25;
        goto LABEL_79;
      }
LABEL_120:
      v228 = 0;
      if ( (v18 & 0x10) == 0 )
      {
        v31 = &v228;
        if ( (v18 & 0x1000) == 0 )
          goto LABEL_18;
        goto LABEL_122;
      }
LABEL_112:
      v228 = 0;
      if ( (v18 & 0x1000) == 0 )
      {
        v31 = &v228;
        if ( (v18 & 0x20) == 0 )
          goto LABEL_19;
        goto LABEL_114;
      }
LABEL_108:
      v228 = 0;
      if ( (v18 & 0x20) == 0 )
      {
        if ( (v18 & 8) == 0 )
        {
          v31 = &v228;
          goto LABEL_20;
        }
        goto LABEL_105;
      }
      goto LABEL_104;
    case 1:
      v25 = v209;
      v30 = "native";
      v31 = v227;
      v20 = (__int64)&v228;
      while ( 1 )
      {
        v28 = *(unsigned __int8 *)v30++;
        *v31 = v28;
        if ( !(_BYTE)v28 )
          goto LABEL_15;
        ++v31;
        v28 = (unsigned __int64)&v228;
        if ( v31 == &v228 )
          goto LABEL_60;
      }
  }
  v31 = v227;
  if ( (v18 & 4) != 0 )
  {
LABEL_79:
    if ( v31 < s2 )
    {
      v28 = (unsigned __int64)&v228;
      if ( v31 == &v228 )
        goto LABEL_120;
      v25 = v209;
      v58 = "unmanaged";
      while ( 1 )
      {
        v20 = *(unsigned __int8 *)v58++;
        *v31 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_16;
        if ( ++v31 == &v228 )
          goto LABEL_119;
      }
    }
LABEL_532:
    if ( !under_debugger )
    {
      interr(520);
LABEL_534:
      if ( !under_debugger )
      {
        interr(520);
        goto LABEL_536;
      }
    }
LABEL_550:
    BUG();
  }
LABEL_16:
  if ( (v18 & 0x10) != 0 )
  {
    if ( v227 >= v31 )
    {
LABEL_136:
      if ( v31 >= s2 )
      {
LABEL_483:
        if ( under_debugger )
          goto LABEL_550;
        interr(520);
        goto LABEL_485;
      }
      v28 = (unsigned __int64)&v228;
      if ( v31 != &v228 )
      {
        v25 = v209;
        v66 = "forwardref";
        while ( 1 )
        {
          v20 = *(unsigned __int8 *)v66++;
          *v31 = v20;
          if ( !(_BYTE)v20 )
            goto LABEL_17;
          if ( ++v31 == &v228 )
            goto LABEL_111;
        }
      }
      goto LABEL_112;
    }
    if ( v31 >= s2 )
      sub_4B40(v25, v20, v28);
    v28 = (unsigned __int64)&v228;
LABEL_62:
    if ( v31 != &v228 )
    {
      v25 = v209;
      v51 = (unsigned __int8 *)&unk_14DCD;
      do
      {
        v20 = *v51++;
        *v31 = v20;
        if ( !(_BYTE)v20 )
          goto LABEL_136;
        ++v31;
      }
      while ( v31 != &v228 );
LABEL_111:
      v209 = v25;
    }
    goto LABEL_112;
  }
LABEL_17:
  if ( (v18 & 0x1000) == 0 )
    goto LABEL_18;
  if ( v227 < v31 )
  {
    if ( v31 < s2 )
    {
LABEL_122:
      if ( v31 != &v228 )
      {
        LODWORD(v25) = v209;
        v64 = (char *)&unk_14DCD;
        do
        {
          v65 = *v64++;
          *v31 = v65;
          if ( !v65 )
            goto LABEL_90;
          ++v31;
        }
        while ( v31 != &v228 );
LABEL_107:
        v209 = v25;
      }
      goto LABEL_108;
    }
    sub_4B40(v25, v20, v28);
LABEL_494:
    if ( !under_debugger )
      interr(520);
    goto LABEL_550;
  }
LABEL_90:
  if ( v31 >= s2 )
  {
LABEL_524:
    if ( under_debugger )
      goto LABEL_550;
    interr(520);
LABEL_526:
    if ( under_debugger )
      goto LABEL_550;
    interr(520);
    goto LABEL_528;
  }
  v28 = (unsigned __int64)&v228;
  if ( v31 == &v228 )
    goto LABEL_108;
  v25 = v209;
  v60 = "internalcall";
  while ( 1 )
  {
    v20 = *(unsigned __int8 *)v60++;
    *v31 = v20;
    if ( !(_BYTE)v20 )
      break;
    if ( ++v31 == &v228 )
      goto LABEL_107;
  }
LABEL_18:
  if ( (v18 & 0x20) != 0 )
  {
    if ( v227 >= v31 )
    {
LABEL_97:
      if ( v31 >= s2 )
      {
LABEL_530:
        if ( !under_debugger )
        {
          interr(520);
          goto LABEL_532;
        }
        goto LABEL_550;
      }
      v28 = (unsigned __int64)&v228;
      if ( v31 != &v228 )
      {
        v25 = v209;
        v61 = "synchronized";
        while ( 1 )
        {
          v20 = *(unsigned __int8 *)v61++;
          *v31 = v20;
          if ( !(_BYTE)v20 )
            goto LABEL_19;
          if ( ++v31 == &v228 )
            goto LABEL_103;
        }
      }
LABEL_104:
      v228 = 0;
      if ( (v18 & 8) == 0 )
      {
LABEL_106:
        v31 = &v228;
        goto LABEL_21;
      }
LABEL_105:
      v228 = 0;
      goto LABEL_106;
    }
    if ( v31 >= s2 )
      sub_4B40(v25, v20, v28);
LABEL_114:
    if ( v31 != &v228 )
    {
      LODWORD(v25) = v209;
      v62 = (char *)&unk_14DCD;
      do
      {
        v63 = *v62++;
        *v31 = v63;
        if ( !v63 )
          goto LABEL_97;
        ++v31;
      }
      while ( v31 != &v228 );
LABEL_103:
      v209 = v25;
    }
    goto LABEL_104;
  }
LABEL_19:
  if ( (v18 & 8) == 0 )
    goto LABEL_20;
  if ( v227 < v31 )
  {
    if ( v31 < s2 )
    {
      if ( v31 != &v228 )
      {
        v52 = v209;
        v95 = (char *)&unk_14DCD;
        do
        {
          v96 = *v95++;
          *v31 = v96;
          if ( !v96 )
            goto LABEL_68;
          ++v31;
        }
        while ( v31 != &v228 );
LABEL_127:
        v209 = v52;
      }
      goto LABEL_105;
    }
    sub_4B40(v25, v20, v28);
    goto LABEL_522;
  }
LABEL_68:
  if ( v31 >= s2 )
  {
LABEL_522:
    if ( under_debugger )
      goto LABEL_550;
    interr(520);
    goto LABEL_524;
  }
  if ( v31 == &v228 )
    goto LABEL_105;
  v52 = v209;
  v53 = "noinlining  ";
  while ( 1 )
  {
    v54 = *v53++;
    *v31 = v54;
    if ( !v54 )
      break;
    if ( ++v31 == &v228 )
      goto LABEL_127;
  }
LABEL_20:
  if ( v31 >= s2 )
  {
    if ( under_debugger )
      goto LABEL_550;
    interr(519);
    goto LABEL_477;
  }
LABEL_21:
  *v31 = 0;
  v20 = v205;
  v220 = nullptr;
  v32 = netnode_supval(*(_QWORD *)(v15 + 144), v205, s2, 1024, 100);
  if ( v32 < 0 )
  {
    if ( v220 )
    {
      v33 = nullptr;
      goto LABEL_23;
    }
    goto LABEL_58;
  }
  v220 = s2;
  v33 = &s2[v32];
LABEL_23:
  sub_C470(
    a1,
    (__int64 *)v216,
    (__int64 *)&src,
    (unsigned __int8 **)&v220,
    (unsigned __int64)v33,
    v209,
    *(double *)v26.m128i_i64,
    a7,
    a8,
    nullptr);
  v36 = v219;
  if ( (_QWORD)v219 )
  {
    v37 = v219 - 1;
    if ( (_QWORD)v219 != 1 )
    {
      v38 = v212;
      v39 = v219 - 1;
      if ( v212 )
      {
        v38 = v212 - 1;
        v39 = v37 + v212 - 1;
        v36 = v219 + v212 - 1;
      }
      v40 = s1;
      if ( v213 < v36 )
      {
        *(_QWORD *)v204 = v39;
        v206 = v36;
        s1 = (char *)qvector_reserve(&s1, s1, v36, 1);
        v40 = s1;
        v39 = *(_QWORD *)v204;
        v36 = v206;
      }
      v212 = v36;
      v40[v39] = 0;
      memcpy(&s1[v38], src, v37);
    }
  }
  v41 = (char *)&unk_15584;
  v42 = *(_DWORD *)(a1 + 144) & 0x1890;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0xFFFFE76F | 0x10;
  v43 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 136LL);
  if ( !a5 )
    a5 = &s;
  if ( v212 )
    v41 = s1;
  v44 = &unk_15584;
  if ( (_QWORD)v217 )
    v44 = *(void **)v216;
  v45 = &unk_15584;
  if ( (_QWORD)v215 )
    v45 = (void *)v214;
  v20 = sub_5010(
          v15,
          5,
          *(double *)v26.m128i_i64,
          a7,
          *(double *)a8.m128_u64,
          a9,
          v34,
          v35,
          a12,
          a13,
          v45,
          v44,
          v41,
          v227,
          a5);
  v43(a1, v20, 2, v46);
  if ( !a4 )
  {
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 136LL))(a1, "{", 2);
    v20 = v209;
    if ( (unsigned __int8)sub_B660(a1, v209) )
    {
      if ( *(_QWORD *)(a1 + 16) == getinf(16) )
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(
          a1,
          ".entrypoint",
          0xFFFFFFFFLL);
      v20 = 8 * (unsigned int)(v208 != -1) - 4;
      if ( !(unsigned __int8)sub_4D60(a1, v20, (__int64)&unk_1509B, v199) )
      {
        if ( (v198 & 0xFFFFFF) != 0 )
          sub_9080(a1, v198, v208);
        v20 = v209;
        sub_108C0(a1);
      }
    }
  }
  *(_DWORD *)(a1 + 144) |= v42;
  v47 = (v208 == -1) + 1;
LABEL_40:
  if ( src )
  {
    *(_QWORD *)&v219 = 0;
    qfree(src, v20, v21, v22, v23, v24);
  }
  if ( *(_QWORD *)v216 )
  {
    *(_QWORD *)&v217 = 0;
    qfree(*(_QWORD *)v216, v20, v21, v22, v23, v24);
  }
  if ( v214 )
  {
    *(_QWORD *)&v215 = 0;
    qfree(v214, v20, v21, v22, v23, v24);
  }
LABEL_46:
  if ( s1 )
  {
    v212 = 0;
    qfree(s1, v20, v21, v22, v23, v24);
  }
  return v47;
}

