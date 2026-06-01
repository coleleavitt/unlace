__int64 __fastcall sub_7AD90(__int64 a1)
{
  const char *v1; // rsi
  bool v2; // zf
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  const void *v6; // rsi
  __int64 v7; // rdx
  const char *v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // r12
  const char *v11; // r13
  char *v12; // rsi
  size_t v13; // rax
  size_t v14; // r8
  const char *v15; // r8
  const char *v16; // rdx
  char *v17; // rsi
  const char *v18; // r8
  const char *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 *v24; // r12
  __int64 v25; // r13
  const char *v26; // rcx
  const char *v27; // rcx
  __int64 v28; // r13
  const char *v29; // rax
  const char *v30; // rax
  const char *v31; // rsi
  const char *v32; // rsi
  size_t v33; // r15
  void *v34; // rax
  size_t v35; // rdx
  void *v36; // r15
  size_t v38; // rax
  size_t v39; // r12
  __int64 (__fastcall **v40)(); // rdi
  __int64 v41; // rcx
  const char *v42; // rcx
  size_t v43; // rax
  size_t v44; // r13
  __int64 v45; // rax
  __int64 v46; // r12
  __int16 word; // ax
  char v48; // al
  __int64 v49; // r15
  unsigned __int64 v50; // r12
  __int64 v51; // r12
  char *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r12
  int v60; // r13d
  __int64 v61; // rcx
  unsigned __int64 v62; // rax
  int v63; // r12d
  char *v64; // r15
  __int64 v65; // rdx
  char *v66; // rsi
  __int64 v67; // rdi
  char *v68; // rax
  size_t v69; // rax
  size_t v70; // r12
  void *v71; // rdi
  __int64 (__fastcall **v72)(); // rdi
  __int64 v73; // rax
  __int64 (__fastcall **v74)(); // rdx
  __m128i v75; // xmm0
  void *v76; // rdi
  size_t v77; // r13
  void *v78; // rdi
  size_t v79; // rdx
  void *v80; // rdi
  size_t v81; // r13
  size_t v82; // rax
  size_t v83; // r14
  void *v84; // rdi
  size_t v85; // rdx
  __int64 (__fastcall **v86)(); // rsi
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rcx
  const char *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  size_t v97; // rax
  size_t v98; // r14
  void *v99; // rdi
  void *v100; // rdi
  size_t v101; // r12
  __int64 v102; // rax
  __int64 v103; // r13
  __int64 v104; // r12
  int v105; // edx
  int v106; // eax
  __int64 v107; // rdx
  _QWORD *v108; // r15
  unsigned __int64 v109; // r15
  __int64 v110; // rdx
  __int64 *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r12
  unsigned __int64 v115; // r15
  void *v116; // rdi
  __int64 bytes; // rax
  void *v118; // rdi
  __int64 v119; // rdx
  void *v120; // rdi
  size_t v121; // r12
  int v122; // eax
  __int64 v123; // r15
  unsigned int v124; // r8d
  int v125; // r10d
  __int64 v126; // r11
  __int64 v127; // rdx
  __int64 v128; // rdi
  int v129; // eax
  int v130; // r9d
  unsigned int v131; // eax
  __int64 v132; // rax
  int v133; // ecx
  int v134; // edx
  __int64 v135; // rdx
  __int64 v136; // rsi
  _DWORD *v137; // r12
  __int64 v138; // rax
  __int64 v139; // r13
  __int64 v140; // rax
  unsigned int v141; // r12d
  unsigned __int64 v142; // rax
  __int64 v143; // rcx
  unsigned __int64 v144; // rdx
  unsigned __int64 v145; // r12
  unsigned __int64 v146; // r13
  unsigned int v147; // eax
  unsigned __int64 v148; // rcx
  unsigned __int64 v149; // rdx
  char v150; // al
  char v151; // r9
  char v152; // al
  char *v153; // r12
  __int64 (__fastcall **v154)(); // rsi
  __int64 v155; // r15
  __int64 v156; // r13
  __int64 v157; // r12
  char *v158; // rax
  __int64 v159; // r15
  __int64 v160; // r9
  char *v161; // rdx
  __int64 (__fastcall **v162)(); // rdi
  __int64 v163; // rax
  __m128i v164; // xmm0
  size_t v165; // r13
  char *v166; // r15
  char *v167; // rdx
  unsigned __int16 v168; // ax
  __int64 v169; // rax
  char v170; // r9
  char *v171; // [rsp-8h] [rbp-4448h]
  size_t v172; // [rsp+10h] [rbp-4430h]
  __int64 v173; // [rsp+10h] [rbp-4430h]
  signed __int64 na; // [rsp+18h] [rbp-4428h]
  int n; // [rsp+18h] [rbp-4428h]
  size_t nb; // [rsp+18h] [rbp-4428h]
  size_t nd; // [rsp+18h] [rbp-4428h]
  size_t nc; // [rsp+18h] [rbp-4428h]
  size_t ne; // [rsp+18h] [rbp-4428h]
  int nf; // [rsp+18h] [rbp-4428h]
  size_t ng; // [rsp+18h] [rbp-4428h]
  void *v182; // [rsp+20h] [rbp-4420h]
  unsigned int v183; // [rsp+20h] [rbp-4420h]
  unsigned __int64 v184; // [rsp+20h] [rbp-4420h]
  __int64 v185; // [rsp+28h] [rbp-4418h]
  __int64 *v186; // [rsp+28h] [rbp-4418h]
  char v187; // [rsp+28h] [rbp-4418h]
  unsigned __int8 v188; // [rsp+30h] [rbp-4410h]
  __int64 v189; // [rsp+30h] [rbp-4410h]
  __int64 v190; // [rsp+30h] [rbp-4410h]
  char v191; // [rsp+38h] [rbp-4408h]
  char *v192; // [rsp+38h] [rbp-4408h]
  char *s; // [rsp+40h] [rbp-4400h]
  char *sa; // [rsp+40h] [rbp-4400h]
  char *se; // [rsp+40h] [rbp-4400h]
  char *sb; // [rsp+40h] [rbp-4400h]
  char *sf; // [rsp+40h] [rbp-4400h]
  char *sc; // [rsp+40h] [rbp-4400h]
  char sg; // [rsp+40h] [rbp-4400h]
  char sd; // [rsp+40h] [rbp-4400h]
  char sh; // [rsp+40h] [rbp-4400h]
  char *v202; // [rsp+48h] [rbp-43F8h]
  char *v203; // [rsp+48h] [rbp-43F8h]
  char *v204; // [rsp+48h] [rbp-43F8h]
  _QWORD v205[2]; // [rsp+50h] [rbp-43F0h] BYREF
  const char *v206; // [rsp+60h] [rbp-43E0h] BYREF
  __int128 v207; // [rsp+68h] [rbp-43D8h]
  const char *v208; // [rsp+80h] [rbp-43C0h] BYREF
  __int128 v209; // [rsp+88h] [rbp-43B8h]
  void *dest; // [rsp+A0h] [rbp-43A0h] BYREF
  __int128 v211; // [rsp+A8h] [rbp-4398h]
  unsigned int v212; // [rsp+B8h] [rbp-4388h]
  unsigned int v213; // [rsp+148h] [rbp-42F8h]
  unsigned int v214; // [rsp+14Ch] [rbp-42F4h]
  __int64 (__fastcall **v215)(); // [rsp+1A0h] [rbp-42A0h] BYREF
  _BYTE src[312]; // [rsp+1A8h] [rbp-4298h] BYREF
  _BYTE v217[264]; // [rsp+2E0h] [rbp-4160h] BYREF
  __int64 v218; // [rsp+3E8h] [rbp-4058h]
  __int64 v219; // [rsp+3F0h] [rbp-4050h]
  char v220; // [rsp+3F8h] [rbp-4048h]
  char v221[4096]; // [rsp+400h] [rbp-4040h] BYREF
  char v222[4096]; // [rsp+1400h] [rbp-3040h] BYREF
  char v223[4096]; // [rsp+2400h] [rbp-2040h] BYREF
  _QWORD v224[520]; // [rsp+3400h] [rbp-1040h] BYREF

  v1 = ::src;
  v2 = *(_QWORD *)(a1 + 104) == 0;
  v224[513] = __readfsqword(0x28u);
  if ( !v2 )
    v1 = *(const char **)(a1 + 96);
  sub_7A340((__int64 *)(a1 + 176), v1);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 > 1 )
    goto LABEL_4;
  v46 = *(_QWORD *)(a1 + 120);
  v189 = a1 + 24;
  if ( v46 == -1 )
    goto LABEL_124;
  if ( (debug & 0x400000) != 0 )
  {
    sub_29350();
    v46 = *(_QWORD *)(a1 + 120);
  }
  word = get_word(v46);
  if ( word == 23117 || word == 19802 )
    v46 += (unsigned int)get_dword(v46 + 60);
  if ( get_bytes(&v215, 264, v46, 0, 0) != 264 )
    goto LABEL_124;
  v48 = sub_790E0((__m128i *)&dest, (const __m128i *)&v215, 1, 1);
  v4 = debug & 0x400000;
  if ( !v48 || (_DWORD)dest != 17744 )
    goto LABEL_124;
  if ( v214 > 0x1B && v213 )
  {
    v49 = *(_QWORD *)(a1 + 120) + v213;
    v50 = v214 / 0x1CuLL;
    if ( (_DWORD)v4 )
      sub_29350();
    v51 = v49 + 28 * v50;
    while ( get_bytes(&v215, 28, v49, 0, 0) == 28 )
    {
      if ( *(_DWORD *)&src[4] == 2 )
      {
        v114 = *(_QWORD *)(a1 + 120) + *(unsigned int *)&src[12];
        v115 = *(unsigned int *)&src[8];
        if ( (debug & 0x400000) != 0 )
          sub_29350();
        v116 = nullptr;
        dest = nullptr;
        v211 = 0;
        if ( v115 )
        {
          dest = (void *)qvector_reserve(&dest, 0, v115, 1);
          memset((char *)dest + v211, 0, v115 - v211);
          *(_QWORD *)&v211 = v115;
          v116 = dest;
        }
        bytes = get_bytes(v116, v115, v114, 0, 0);
        v118 = dest;
        if ( v115 == bytes )
        {
          v152 = sub_79490(v189, (__int64)dest, v115);
          v118 = dest;
          if ( v152 )
          {
            if ( dest )
            {
              *(_QWORD *)&v211 = 0;
              qfree(dest);
            }
            goto LABEL_328;
          }
        }
        if ( v118 )
        {
          *(_QWORD *)&v211 = 0;
          qfree(v118);
        }
        goto LABEL_124;
      }
      v49 += 28;
      if ( v49 == v51 )
        goto LABEL_124;
    }
    goto LABEL_124;
  }
  if ( (_DWORD)v4 )
  {
    sub_29350();
LABEL_124:
    if ( (debug & 0x400000) != 0 )
      sub_29350();
  }
  sa = (char *)::src;
  if ( *(_QWORD *)(a1 + 56) )
    sa = *(char **)(a1 + 48);
  v52 = nullptr;
  v191 = 0;
  v202 = (char *)open_linput(sa, 0, v5, v4);
  if ( !v202 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v52 = sa;
      sub_29350();
    }
    se = (char *)qbasename(sa, v52, v53);
    v191 = 0;
    v202 = (char *)open_linput(se, 0, v87, v88);
    if ( !v202 )
    {
      if ( (debug & 0x400000) != 0 )
        sub_29350();
      if ( !dbg )
        goto LABEL_211;
      v191 = *(_BYTE *)(dbg + 32) & 1;
      if ( (*(_DWORD *)(dbg + 32) & 1) == 0 )
        goto LABEL_211;
      sb = (char *)::src;
      if ( *(_QWORD *)(a1 + 56) )
        sb = *(char **)(a1 + 48);
      v90 = 1;
      v202 = (char *)open_linput(sb, 1, v89, v54);
      if ( !v202 )
      {
        if ( (debug & 0x400000) != 0 )
        {
          v90 = (__int64)sb;
          sub_29350();
        }
        sf = (char *)qbasename(sb, v90, v91);
        v202 = (char *)open_linput(sf, 1, v92, v93);
        if ( !v202 )
        {
          if ( (debug & 0x400000) != 0 )
            sub_29350();
          goto LABEL_211;
        }
      }
    }
  }
  v220 = 0;
  v215 = off_B2330;
  memset(src, 0, 24);
  LODWORD(dest) = 0;
  qlseek(v202, 0, 0, v54);
  if ( qlread(v202, &src[24], 28) != 28 )
    goto LABEL_207;
  switch ( *(_WORD *)&src[24] )
  {
    case 0x4550:
      break;
    case 0x5A56:
      qlseek(v202, (unsigned int)dest, 0, v55);
      if ( qlread(v202, &src[24], 40) == 40 )
      {
        memset(&src[72], 0, 0xF0u);
        *(_DWORD *)&src[64] = *(unsigned __int16 *)&src[24];
        v57 = *(unsigned __int16 *)&src[26];
        v96 = *(_QWORD *)&src[40];
        *(_DWORD *)&src[68] = *(unsigned __int16 *)&src[26] | (src[28] << 16);
        if ( *(_WORD *)&src[26] == 512 || *(_WORD *)&src[26] == 0x8664 || *(_WORD *)&src[26] == 0xAA64 )
        {
          *(_WORD *)&src[88] = 523;
          *(_QWORD *)&src[104] = *(_QWORD *)&src[32];
          *(_DWORD *)&src[148] = *(_DWORD *)&src[36] + 40 - *(unsigned __int16 *)&src[30];
          *(_QWORD *)&src[112] = *(_QWORD *)&src[40];
        }
        else
        {
          v57 = 267;
          *(_DWORD *)&src[116] = *(_DWORD *)&src[40];
          v96 = *(unsigned int *)&src[40];
          *(_WORD *)&src[88] = 267;
          *(_QWORD *)&src[104] = *(_QWORD *)&src[32];
          *(_DWORD *)&src[148] = *(_DWORD *)&src[36] + 40 - *(unsigned __int16 *)&src[30];
        }
        *(_WORD *)&src[156] = src[29];
        v218 = v96;
        *(_QWORD *)&src[224] = *(_QWORD *)&src[48];
        *(_QWORD *)&src[232] = *(_QWORD *)&src[56];
        *(_QWORD *)&src[120] = 0x100000001LL;
        v219 = (unsigned int)dest;
        goto LABEL_143;
      }
LABEL_207:
      if ( (debug & 0x400000) == 0 )
        goto LABEL_209;
      goto LABEL_208;
    case 0x5A4D:
    case 0x4D5A:
      if ( qlread(v202, v224, 8) == 8 && v224[0] == 0x6B6E694C696E55LL )
        v220 = 1;
      qlseek(v202, 60, 0, v56);
      if ( qlread(v202, &dest, 4) != 4 )
        goto LABEL_207;
      break;
  }
  v219 = (unsigned int)dest;
  qlseek(v202, (unsigned int)dest, 0, v55);
  memset(v217, 0, sizeof(v217));
  qlseek(v202, v219, 0, 0);
  if ( (unsigned __int64)(qlread(v202, v217, 264) - 93) > 0xAB
    || *(_DWORD *)v217 != 4542530 && *(_DWORD *)v217 != 17744 && *(_DWORD *)v217 != 19536
    || !(unsigned __int8)sub_790E0((__m128i *)&src[64], (const __m128i *)v217, 1, 1) )
  {
    goto LABEL_207;
  }
  v58 = *(_QWORD *)&src[112];
  if ( *(_WORD *)&src[88] != 523 )
    v58 = *(unsigned int *)&src[116];
  v218 = v58;
LABEL_143:
  if ( *(_DWORD *)&src[236] <= 0x1Bu || !*(_DWORD *)&src[232] )
  {
    if ( (debug & 0x400000) == 0 )
      goto LABEL_209;
LABEL_208:
    sub_29350();
    goto LABEL_209;
  }
  if ( v191 )
    sub_29760();
  if ( *(_DWORD *)&src[64] == 23126 )
    LODWORD(v59) = v219 + 40;
  else
    LODWORD(v59) = *(unsigned __int16 *)&src[84] + (_DWORD)v219 + 24;
  v59 = (int)v59;
  *(_QWORD *)&src[8] = 0;
  v60 = *(unsigned __int16 *)&src[70];
  dest = nullptr;
  v211 = 0;
  v187 = *(_DWORD *)&src[120] <= 0xFFFu && *(_DWORD *)&src[124] == *(_DWORD *)&src[120];
  qlseek(v202, (int)v59, 0, v57);
  if ( (int)v59 == -1 )
    v59 = qlseek(v202, 0, 1, v61);
  v62 = qlsize(v202) - v59;
  if ( ((v62 | v59) & 0x8000000000000000LL) != 0LL )
  {
    v60 = 0;
    goto LABEL_155;
  }
  if ( (_WORD)v60 )
  {
    if ( v62 >= 40 * (unsigned __int64)(unsigned __int16)v60 )
      goto LABEL_157;
    v60 = v62 / 0x28;
LABEL_155:
    v31 = "AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s";
    if ( (unsigned int)sub_29C90() != 1 )
      goto LABEL_382;
    if ( v60 )
    {
LABEL_157:
      v63 = 0;
      while ( 1 )
      {
        v65 = v211;
        v66 = (char *)dest;
        v67 = v211 + 1;
        if ( *((_QWORD *)&v211 + 1) < (unsigned __int64)(v211 + 1) )
        {
          v68 = (char *)qvector_reserve(&dest, dest, v211 + 1, 40);
          v65 = v211;
          dest = v68;
          v66 = v68;
          v67 = v211 + 1;
        }
        *(_QWORD *)&v211 = v67;
        v64 = &v66[40 * v65];
        if ( qlread(v202, v64, 40) != 40 )
          goto LABEL_252;
        if ( *((_DWORD *)v64 + 3) == *((_DWORD *)v64 + 5) )
          v187 &= *((_DWORD *)v64 + 4) >= *((_DWORD *)v64 + 2);
        else
          v187 = 0;
        if ( v60 == ++v63 )
        {
          v122 = 512;
          if ( v187 )
            v122 = *(_DWORD *)&src[124];
          if ( (unsigned __int16)(*(_WORD *)&src[156] - 10) <= 3u )
            goto LABEL_323;
          goto LABEL_285;
        }
      }
    }
    if ( (unsigned __int16)(*(_WORD *)&src[156] - 10) > 3u && *(_DWORD *)&src[64] != 23126 )
      goto LABEL_244;
    goto LABEL_359;
  }
  v168 = *(_WORD *)&src[156] - 10;
  if ( v187 )
  {
    if ( v168 <= 3u )
      goto LABEL_359;
    v122 = *(_DWORD *)&src[124];
    v60 = 0;
  }
  else
  {
    if ( v168 <= 3u )
    {
LABEL_359:
      if ( *(_DWORD *)&src[64] == 23126 )
        *(_DWORD *)&src[144] = 0;
      goto LABEL_244;
    }
    v122 = 512;
    v60 = 0;
  }
LABEL_285:
  if ( *(_DWORD *)&src[64] == 23126 )
  {
LABEL_323:
    if ( !v60 )
      goto LABEL_359;
    v122 = 1;
LABEL_287:
    v123 = 0;
    v124 = 0;
    v125 = -v122;
    v126 = 40LL * v60;
    do
    {
      v135 = *(_QWORD *)&src[8];
      v136 = *(_QWORD *)src;
      v137 = (char *)dest + v123;
      v138 = *(_QWORD *)&src[8] + 1LL;
      v139 = *(_DWORD *)((_BYTE *)dest + v123 + 20) & (unsigned int)v125;
      if ( *(_QWORD *)&src[16] < (unsigned __int64)(*(_QWORD *)&src[8] + 1LL) )
      {
        v173 = v126;
        nf = v125;
        v183 = v124;
        v140 = qvector_reserve(src, *(_QWORD *)src, *(_QWORD *)&src[8] + 1LL, 32);
        v135 = *(_QWORD *)&src[8];
        *(_QWORD *)src = v140;
        v136 = v140;
        v126 = v173;
        v125 = nf;
        v124 = v183;
        v138 = *(_QWORD *)&src[8] + 1LL;
      }
      *(_QWORD *)&src[8] = v138;
      v127 = 32 * v135;
      v128 = v136 + v127;
      *(_QWORD *)(v136 + v127) = (unsigned int)v137[3];
      v129 = *(_DWORD *)&src[120];
      if ( !*(_DWORD *)&src[120] )
        v129 = 1;
      v130 = v137[2];
      if ( !v130 )
        v130 = v137[4];
      v131 = (v129 + v130 - 1) & -v129;
      if ( v131 > v137[4] )
        v131 = v137[4];
      *(_QWORD *)(v136 + v127 + 24) = v131;
      v132 = v137[3] + v131;
      if ( (unsigned __int16)(*(_WORD *)&src[156] - 10) > 3u )
      {
        if ( *(_DWORD *)&src[120] == 4096 || !*(_DWORD *)&src[124] )
        {
          v134 = -512;
          v133 = 511;
        }
        else
        {
          v133 = *(_DWORD *)&src[124] - 1;
          v134 = -*(_DWORD *)&src[124];
        }
        v132 = v134 & (unsigned int)(v133 + v132);
      }
      *(_QWORD *)(v128 + 8) = v132;
      *(_QWORD *)(v128 + 16) = v139;
      if ( *(_DWORD *)&src[64] == 23126 )
        *(_QWORD *)(v128 + 16) = v139 + 40 - *(unsigned __int16 *)&src[30];
      if ( v124 < v137[3] + v137[2] )
        v124 = v137[3] + v137[2];
      v123 += 40;
    }
    while ( v126 != v123 );
    if ( *(_DWORD *)&src[64] == 23126 )
      *(_DWORD *)&src[144] = v124;
    if ( !v187 )
      goto LABEL_252;
    goto LABEL_244;
  }
  if ( v60 )
    goto LABEL_287;
LABEL_244:
  v103 = qlsize(v202);
  v104 = *(unsigned int *)&src[144];
  if ( (unsigned __int16)(*(_WORD *)&src[156] - 10) > 3u )
  {
    if ( *(_DWORD *)&src[120] == 4096 || !*(_DWORD *)&src[124] )
    {
      v106 = -512;
      v105 = 511;
    }
    else
    {
      v105 = *(_DWORD *)&src[124] - 1;
      v106 = -*(_DWORD *)&src[124];
    }
    v104 = v106 & (unsigned int)(v105 + *(_DWORD *)&src[144]);
  }
  v107 = *(_QWORD *)&src[8];
  v108 = *(_QWORD **)src;
  if ( *(_QWORD *)&src[16] < (unsigned __int64)(*(_QWORD *)&src[8] + 1LL) )
  {
    *(_QWORD *)src = qvector_reserve(src, *(_QWORD *)src, *(_QWORD *)&src[8] + 1LL, 32);
    v107 = *(_QWORD *)&src[8];
    v108 = *(_QWORD **)src;
  }
  memmove(v108 + 4, v108, 32 * v107);
  *v108 = 0;
  v108[1] = v104;
  v108[2] = 0;
  v108[3] = v103;
  ++*(_QWORD *)&src[8];
LABEL_252:
  if ( dest )
  {
    *(_QWORD *)&v211 = 0;
    qfree(dest);
  }
  v109 = *(unsigned int *)&src[232];
  v110 = *(_QWORD *)&src[8] - 1LL;
  if ( *(_QWORD *)&src[8] - 1LL >= 0 )
  {
    v111 = (__int64 *)(*(_QWORD *)src + 32LL * *(_QWORD *)&src[8] - 32);
    while ( 1 )
    {
      v112 = *v111;
      if ( *(unsigned int *)&src[232] >= (unsigned __int64)*v111
        && *(unsigned int *)&src[232] < (unsigned __int64)v111[1] )
      {
        break;
      }
      --v110;
      v111 -= 4;
      if ( v110 == -1 )
        goto LABEL_259;
    }
    v119 = *(unsigned int *)&src[232] + v111[2];
    if ( v119 - v112 != -1 )
      v109 = v119 - v112;
  }
LABEL_259:
  if ( !v109 )
    goto LABEL_260;
  v141 = *(_DWORD *)&src[236];
  v142 = qlsize(v202);
  v184 = v142;
  if ( v142 < v109 || (int)v142 - (int)v109 < v141 || v141 <= 0x1B )
    goto LABEL_260;
  v144 = v141;
  v145 = 0;
  v146 = v144 / 0x1C;
  while ( 1 )
  {
    qlseek(v202, v109, 0, v143);
    if ( qlread(v202, &dest, 28) != 28 )
      goto LABEL_260;
    if ( DWORD1(v211) != 2 )
      goto LABEL_311;
    v147 = v212;
    v148 = v184;
    if ( v212 + DWORD2(v211) >= v184 )
      goto LABEL_260;
    v208 = nullptr;
    v209 = 0;
    if ( DWORD2(v211) )
    {
      ng = DWORD2(v211);
      v208 = (const char *)qvector_reserve(&v208, 0, DWORD2(v211), 1);
      memset((void *)&v208[v209], 0, ng - v209);
      v147 = v212;
      *(_QWORD *)&v209 = ng;
    }
    qlseek(v202, v147, 0, v148);
    v149 = qlread(v202, v208, DWORD2(v211));
    if ( v149 != DWORD2(v211) )
    {
      if ( v208 )
      {
        *(_QWORD *)&v209 = 0;
        qfree(v208);
      }
LABEL_260:
      if ( v191 )
        callui(24);
      if ( (debug & 0x400000) != 0 )
        sub_29350();
LABEL_209:
      close_linput(v202);
      v215 = off_B2330;
      if ( *(_QWORD *)src )
      {
        *(_QWORD *)&src[8] = 0;
        qfree(*(_QWORD *)src);
      }
      goto LABEL_211;
    }
    v150 = sub_79490(v189, (__int64)v208, v149);
    v151 = v150;
    if ( v150 )
      break;
    if ( v208 )
    {
      *(_QWORD *)&v209 = 0;
      qfree(v208);
    }
LABEL_311:
    ++v145;
    v109 += 28LL;
    if ( v145 >= v146 )
    {
      v151 = 0;
      goto LABEL_366;
    }
  }
  if ( v208 )
  {
    sh = v150;
    *(_QWORD *)&v209 = 0;
    qfree(v208);
    v151 = sh;
  }
LABEL_366:
  if ( v191 )
  {
    sg = v151;
    callui(24);
    v151 = sg;
  }
  sd = v151;
  close_linput(v202);
  v170 = sd;
  v215 = off_B2330;
  if ( *(_QWORD *)src )
  {
    *(_QWORD *)&src[8] = 0;
    qfree(*(_QWORD *)src);
    v170 = sd;
  }
  if ( !v170 )
    goto LABEL_211;
LABEL_328:
  v2 = *(_QWORD *)(a1 + 32) == 0;
  v215 = nullptr;
  v203 = nullptr;
  sc = (char *)::src;
  *(_OWORD *)src = 0;
  if ( !v2 )
  {
    sc = *(char **)(a1 + 24);
    v203 = strchr(sc, 92);
  }
  v153 = sc;
  v154 = nullptr;
  while ( 2 )
  {
    if ( v203 )
    {
      if ( v203 != v153 )
      {
        v159 = *(_QWORD *)src;
        v160 = v203 - v153;
        if ( *(_QWORD *)src )
        {
          v159 = *(_QWORD *)src - 1LL;
          v160 = v203 - v153 + *(_QWORD *)src - 1LL;
        }
        v161 = (char *)(v160 + 1);
        if ( *(_QWORD *)&src[8] < (unsigned __int64)(v160 + 1) )
        {
          v190 = v160;
          v192 = (char *)(v160 + 1);
          v215 = (__int64 (__fastcall **)())qvector_reserve(&v215, v154, v161, 1);
          v160 = v190;
          v154 = v215;
          v161 = v192;
        }
        *(_QWORD *)src = v161;
        *((_BYTE *)v154 + v160) = 0;
        memmove((char *)v215 + v159, v153, v203 - v153);
        v154 = v215;
      }
      v157 = *(_QWORD *)src;
      if ( *(_QWORD *)src )
      {
        v155 = *(_QWORD *)src + 1LL;
        v156 = *(_QWORD *)src;
        v157 = *(_QWORD *)src - 1LL;
        if ( *(_QWORD *)&src[8] < (unsigned __int64)(*(_QWORD *)src + 1LL) )
          goto LABEL_337;
      }
      else
      {
        v155 = 2;
        v156 = 1;
        if ( *(_QWORD *)&src[8] < 2u )
        {
LABEL_337:
          v215 = (__int64 (__fastcall **)())qvector_reserve(&v215, v154, v155, 1);
          v154 = v215;
        }
      }
      *(_QWORD *)src = v155;
      *((_BYTE *)v154 + v156) = 0;
      *((_BYTE *)v215 + v157) = 47;
      v153 = v203 + 1;
      v158 = strchr(v203 + 1, 92);
      v154 = v215;
      v203 = v158;
      continue;
    }
    break;
  }
  if ( v153 == sc )
  {
    v162 = v154;
  }
  else
  {
    if ( *v153 && v153 )
    {
      v204 = *(char **)src;
      v165 = strlen(v153);
      v166 = (char *)v165;
      if ( v204 )
      {
        --v204;
        v166 = &v204[v165];
      }
      v167 = v166 + 1;
      if ( *(_QWORD *)&src[8] < (unsigned __int64)(v166 + 1) )
      {
        v215 = (__int64 (__fastcall **)())qvector_reserve(&v215, v154, v167, 1);
        v167 = v166 + 1;
        v154 = v215;
      }
      *(_QWORD *)src = v167;
      v166[(_QWORD)v154] = 0;
      memmove(&v204[(_QWORD)v215], v153, v165);
      v154 = v215;
    }
    v162 = *(__int64 (__fastcall ***)())(a1 + 24);
    v163 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v154;
    v164 = _mm_loadu_si128((const __m128i *)src);
    v215 = v162;
    *(_QWORD *)&src[8] = v163;
    *(__m128i *)(a1 + 32) = v164;
  }
  if ( v162 )
  {
    *(_QWORD *)src = 0;
    qfree(v162);
  }
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 <= 1 )
  {
LABEL_211:
    v94 = ::src;
    if ( *(_QWORD *)(a1 + 56) )
      v94 = *(const char **)(a1 + 48);
    sub_37FD0((__int64 *)(a1 + 152), (__int64)"Failed to get PDB file details from '%s'", v94);
    if ( (debug & 0x400000) != 0 )
      sub_29350();
    return 0;
  }
LABEL_4:
  if ( (debug & 0x400000) == 0 || (v6 = *(const void **)(a1 + 24), sub_29350(), (v5 = *(_QWORD *)(a1 + 32)) != 0) )
  {
    v33 = v5;
    v34 = (void *)qalloc_or_throw(v5);
    v6 = *(const void **)(a1 + 24);
    v35 = v33;
    v36 = v34;
    v182 = v34;
    memcpy(v34, v6, v35);
    v188 = qfileexist(v36, v6);
    if ( v188 )
      goto LABEL_84;
  }
  else
  {
    v188 = qfileexist(0, v6);
    if ( v188 )
      return v188;
    v182 = nullptr;
  }
  s = (char *)qbasename(v182, v6, v7);
  v8 = ::src;
  if ( *(_QWORD *)(a1 + 56) )
    v8 = *(const char **)(a1 + 48);
  qdirname(v224, 4096, v8);
  v9 = (_QWORD *)(&stru_FF0 + 16);
  qmakepath(v224, 4096, v224, s, 0);
  if ( (debug & 0x400000) != 0 )
  {
    v9 = v224;
    sub_29350();
  }
  v188 = qfileexist(v224, v9);
  if ( v188 )
  {
    v82 = strlen((const char *)v224);
    v83 = v82;
    if ( v82 )
    {
      v100 = *(void **)(a1 + 24);
      v101 = v82 + 1;
      if ( *(_QWORD *)(a1 + 40) < v82 + 1 )
      {
        v113 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v101, 1);
        *(_QWORD *)(a1 + 24) = v113;
        v100 = (void *)v113;
      }
      *(_QWORD *)(a1 + 32) = v101;
      memmove(v100, v224, v83);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v83) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = 0;
    }
    goto LABEL_84;
  }
  v206 = nullptr;
  v207 = 0;
  sub_7ACC0((__int64 *)&v206, (__int64 *)(a1 + 72));
  v10 = *(_QWORD *)(a1 + 176);
  v185 = v10 + 24LL * *(_QWORD *)(a1 + 184);
  if ( v185 != v10 )
  {
    while ( 2 )
    {
      v11 = ::src;
      if ( *(_QWORD *)(v10 + 8) )
        v11 = *(const char **)v10;
      v12 = (_BYTE *)(&stru_FF0 + 16);
      qmakepath(v223, 4096, v11, s, 0);
      if ( (debug & 0x400000) != 0 )
      {
        v12 = v223;
        sub_29350();
      }
      if ( (unsigned __int8)qfileexist(v223, v12) )
      {
        v38 = strlen(v223);
        v39 = v38;
        if ( v38 )
        {
          v80 = *(void **)(a1 + 24);
          v81 = v38 + 1;
          if ( *(_QWORD *)(a1 + 40) < v38 + 1 )
          {
            v95 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v81, 1);
            *(_QWORD *)(a1 + 24) = v95;
            v80 = (void *)v95;
          }
          *(_QWORD *)(a1 + 32) = v81;
          memmove(v80, v223, v39);
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v39) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = 0;
        }
        goto LABEL_89;
      }
      if ( (unsigned __int64)v207 <= 1 )
        goto LABEL_48;
      dest = nullptr;
      v211 = 0;
      qmakepath(v224, 4096, v11, "index2.txt", 0);
      if ( !(unsigned __int8)qfileexist(v224, 4096) || strlen(s) <= 1 )
      {
        if ( !v11 || (v13 = strlen(v11), (v14 = v13) == 0) )
        {
          v15 = ::src;
          v16 = ::src;
          *(_QWORD *)&v211 = 0;
          if ( (_QWORD)v207 )
            v15 = v206;
          goto LABEL_26;
        }
        v78 = dest;
        v79 = v13 + 1;
        if ( *((_QWORD *)&v211 + 1) < v13 + 1 )
        {
          v172 = v13;
          nc = v13 + 1;
          dest = (void *)qvector_reserve(&dest, dest, v79, 1);
          v14 = v172;
          v78 = dest;
          v79 = nc;
        }
        *(_QWORD *)&v211 = v79;
        nd = v14;
        memmove(v78, v11, v14);
        *((_BYTE *)dest + nd) = 0;
        v45 = v211;
LABEL_104:
        v15 = ::src;
        if ( (_QWORD)v207 )
          v15 = v206;
        v16 = ::src;
        if ( v45 )
          v16 = (const char *)dest;
LABEL_26:
        qmakepath(v223, 4096, v16, s, v15);
        v17 = v171;
        if ( (debug & 0x400000) != 0 )
        {
          v17 = v223;
          sub_29350();
        }
        if ( (unsigned __int8)qfileexist(v223, v17) )
        {
          v69 = strlen(v223);
          v70 = v69;
          if ( v69 )
          {
            v76 = *(void **)(a1 + 24);
            v77 = v69 + 1;
            if ( *(_QWORD *)(a1 + 40) < v69 + 1 )
            {
              v102 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v77, 1);
              *(_QWORD *)(a1 + 24) = v102;
              v76 = (void *)v102;
            }
            *(_QWORD *)(a1 + 32) = v77;
            memmove(v76, v223, v70);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v70) = 0;
            v71 = dest;
            if ( !dest )
              goto LABEL_89;
          }
          else
          {
            v71 = dest;
            *(_QWORD *)(a1 + 32) = 0;
            if ( !v71 )
              goto LABEL_89;
          }
LABEL_166:
          *(_QWORD *)&v211 = 0;
          qfree(v71);
          goto LABEL_89;
        }
        v18 = ::src;
        if ( (_QWORD)v207 )
          v18 = v206;
        v19 = ::src;
        if ( (_QWORD)v211 )
          v19 = (const char *)dest;
        qmakepath(v223, 4096, v19, s, v18);
        if ( (debug & 0x400000) != 0 )
          sub_29350();
        v20 = qfopen(v223, "r");
        v21 = v20;
        if ( v20 )
        {
          v22 = (const char *)v20;
          v215 = nullptr;
          *(_OWORD *)src = 0;
          na = qgetline(&v215, v20);
          qfclose(v21);
          if ( na > 0 )
          {
            if ( (debug & 0x400000) != 0 )
            {
              v22 = ::src;
              if ( *(_QWORD *)src )
                v22 = (const char *)v215;
              sub_29350();
            }
            v23 = ::src;
            if ( *(_QWORD *)src )
              v23 = (const char *)v215;
            if ( (unsigned __int8)qfileexist(v23, v22) )
            {
              v73 = *(_QWORD *)(a1 + 40);
              v74 = v215;
              v75 = _mm_loadu_si128((const __m128i *)src);
              v215 = *(__int64 (__fastcall ***)())(a1 + 24);
              v72 = v215;
              *(_QWORD *)(a1 + 24) = v74;
              *(_QWORD *)&src[8] = v73;
              *(__m128i *)(a1 + 32) = v75;
              if ( v72 )
              {
                *(_QWORD *)src = 0;
                qfree(v72);
              }
              v71 = dest;
              if ( !dest )
                goto LABEL_89;
              goto LABEL_166;
            }
          }
          if ( v215 )
          {
            *(_QWORD *)src = 0;
            qfree(v215);
          }
        }
        if ( dest )
        {
          *(_QWORD *)&v211 = 0;
          qfree(dest);
        }
LABEL_48:
        v10 += 24;
        if ( v185 == v10 )
          goto LABEL_49;
        continue;
      }
      break;
    }
    v215 = nullptr;
    *(_OWORD *)src = 0;
    if ( s )
    {
      nb = strlen(s);
      v215 = (__int64 (__fastcall **)())qvector_reserve(&v215, 0, nb + 1, 1);
      *(_QWORD *)src = nb + 1;
      memmove(v215, s, nb);
      *((_BYTE *)v215 + nb) = 0;
      v40 = v215;
    }
    else
    {
      v40 = nullptr;
    }
    qstrlwr(v40);
    v41 = *(_QWORD *)src;
    if ( *(_QWORD *)src <= 2u )
    {
      v86 = v215;
      if ( *(_QWORD *)&src[8] <= 2u )
      {
        v215 = (__int64 (__fastcall **)())qvector_reserve(&v215, v215, 3, 1);
        v41 = *(_QWORD *)src;
        v86 = v215;
      }
      memset((char *)v86 + v41, 0, 3 - v41);
      *(_QWORD *)src = 3;
    }
    else if ( *(_QWORD *)src != 3 )
    {
      *(_QWORD *)src = 3;
    }
    v42 = ::src;
    *((_BYTE *)v215 + 2) = 0;
    if ( *(_QWORD *)src )
      v42 = (const char *)v215;
    qmakepath(v223, 4096, v11, v42, 0);
    v43 = strlen(v223);
    v44 = v43;
    if ( v43 )
    {
      v84 = dest;
      v85 = v43 + 1;
      if ( *((_QWORD *)&v211 + 1) < v43 + 1 )
      {
        ne = v43 + 1;
        dest = (void *)qvector_reserve(&dest, dest, v85, 1);
        v85 = ne;
        v84 = dest;
      }
      *(_QWORD *)&v211 = v85;
      memmove(v84, v223, v44);
      *((_BYTE *)dest + v44) = 0;
      if ( (debug & 0x400000) == 0 )
        goto LABEL_101;
    }
    else
    {
      *(_QWORD *)&v211 = 0;
      if ( (debug & 0x400000) == 0 )
      {
LABEL_101:
        if ( v215 )
        {
          *(_QWORD *)src = 0;
          qfree(v215);
        }
        v45 = v211;
        goto LABEL_104;
      }
    }
    sub_29350();
    goto LABEL_101;
  }
LABEL_49:
  if ( (*(_BYTE *)(a1 + 137) & 1) == 0 )
    goto LABEL_90;
  if ( (unsigned __int64)v207 <= 1 )
    goto LABEL_90;
  v24 = *(__int64 **)(a1 + 200);
  v186 = &v24[7 * *(_QWORD *)(a1 + 208)];
  if ( v186 == v24 )
    goto LABEL_90;
  while ( 2 )
  {
    if ( (unsigned __int64)v24[1] <= 1 )
      goto LABEL_82;
    v25 = *v24;
    if ( (debug & 0x400000) != 0 )
      sub_29350();
    set_file_ext(v221, 4096, s, "pdb");
    qmakepath(v222, 4096, v25, v221, 0);
    if ( !(unsigned __int8)qisdir(v222) )
    {
      if ( (unsigned int)qmkdir(v222, 511) )
        goto LABEL_82;
    }
    v26 = ::src;
    if ( (_QWORD)v207 )
      v26 = v206;
    qmakepath(v222, 4096, v222, v26, 0);
    if ( !(unsigned __int8)qisdir(v222) )
    {
      if ( (unsigned int)qmkdir(v222, 511) )
      {
LABEL_82:
        sub_244A0();
        goto LABEL_79;
      }
    }
    qmakepath(v222, 4096, v222, v221, 0);
    v208 = nullptr;
    v27 = ::src;
    v209 = 0;
    if ( (_QWORD)v207 )
      v27 = v206;
    sub_37FD0((__int64 *)&v208, (__int64)"/%s/%s/%s", v221, v27, v221);
    set_file_ext(v223, 4096, v222, "$$$");
    v28 = qfopen(v223, "wb");
    if ( !v28 )
    {
      get_errdesc("", 0xFFFFFFFFLL);
      sub_299B0();
      goto LABEL_77;
    }
    sub_244A0();
    v205[0] = &off_B2358;
    v205[1] = v28;
    dest = nullptr;
    v211 = 0;
    memset(&src[8], 0, 0x58u);
    *(_DWORD *)&src[4] = 0xFFFF;
    v215 = (__int64 (__fastcall **)())&qword_68;
    *(_DWORD *)src = *((_DWORD *)v24 + 12) | 1;
    v29 = ::src;
    if ( v24[4] )
      v29 = (const char *)v24[3];
    *(_QWORD *)&src[8] = v29;
    v30 = ::src;
    if ( (_QWORD)v209 )
      v30 = v208;
    v31 = (const char *)v205;
    *(_QWORD *)&src[16] = v30;
    n = http_get_file(&v215, v205, &dest);
    qfclose(v28);
    if ( n == -1 )
    {
      if ( under_debugger )
        BUG();
      interr(30576);
LABEL_382:
      sub_78F60(0, v31);
    }
    if ( !n )
    {
      v32 = ::src;
      if ( (_QWORD)v211 )
        v32 = (const char *)dest;
      sub_244A0();
      if ( !qfilesize(v223) )
      {
        qunlink(v223, v32);
        qdirname(v224, 4096, v223);
        if ( !(unsigned int)qrmdir(v224) )
        {
          qdirname(v224, 4096, v224);
          qrmdir(v224);
        }
        if ( (debug & 0x400000) != 0 )
          sub_29350();
      }
LABEL_75:
      if ( dest )
      {
        *(_QWORD *)&v211 = 0;
        qfree(dest);
      }
LABEL_77:
      if ( v208 )
      {
        *(_QWORD *)&v209 = 0;
        qfree(v208);
      }
LABEL_79:
      if ( (unsigned __int8)callui(27) )
        goto LABEL_90;
      v24 += 7;
      if ( v186 == v24 )
        goto LABEL_90;
      continue;
    }
    break;
  }
  if ( !(unsigned __int8)sub_55510((__int64)v223) )
    goto LABEL_75;
  if ( (unsigned int)qrename(v223, v222) )
  {
    sub_299B0();
    goto LABEL_75;
  }
  v97 = strlen(v222);
  v98 = v97;
  if ( v97 )
  {
    v120 = *(void **)(a1 + 24);
    v121 = v97 + 1;
    if ( *(_QWORD *)(a1 + 40) < v97 + 1 )
    {
      v169 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v121, 1);
      *(_QWORD *)(a1 + 24) = v169;
      v120 = (void *)v169;
    }
    *(_QWORD *)(a1 + 32) = v121;
    memmove(v120, v222, v98);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v98) = 0;
    v99 = dest;
    if ( dest )
    {
LABEL_230:
      *(_QWORD *)&v211 = 0;
      qfree(v99);
    }
  }
  else
  {
    v99 = dest;
    *(_QWORD *)(a1 + 32) = 0;
    if ( v99 )
      goto LABEL_230;
  }
  if ( v208 )
  {
    *(_QWORD *)&v209 = 0;
    qfree(v208);
  }
LABEL_89:
  v188 = 1;
LABEL_90:
  if ( v206 )
  {
    *(_QWORD *)&v207 = 0;
    qfree(v206);
  }
LABEL_84:
  if ( v182 )
    qfree(v182);
  return v188;
}
