unsigned __int64 __fastcall sub_31EDC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __m128 v3; // xmm1
  __m128 v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // eax
  char v12; // r13
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  _QWORD *v20; // r8
  unsigned __int64 v21; // r11
  __int64 v22; // r9
  int v23; // r12d
  unsigned __int64 v24; // rcx
  _DWORD *v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // r12
  _DWORD *v28; // rdx
  int v29; // r15d
  _DWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  int *v33; // rax
  int *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // r9
  _DWORD *v37; // rdx
  _DWORD *v38; // r9
  __int64 v39; // r15
  char v40; // dl
  _QWORD *v41; // rdi
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r9d
  unsigned int *v46; // r12
  char v47; // r15
  int v48; // eax
  __int64 v49; // rdi
  __int64 v50; // r15
  __int64 v51; // rax
  int v52; // r8d
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r9
  _DWORD *v59; // rdx
  _DWORD *v60; // r9
  __int64 v61; // rdx
  int v62; // eax
  size_t v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // r9d
  __int64 v68; // r15
  __m128i *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r13
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // r9d
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // r9d
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r15
  __m128i *v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r13
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r15
  void *v97; // rax
  int v98; // r12d
  __int64 v99; // r12
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  int v103; // r9d
  __m128i *v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r13
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  int v110; // r9d
  _QWORD *v111; // rax
  __int64 v112; // rdx
  unsigned __int64 v113; // r15
  unsigned __int64 v114; // r12
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rdx
  __int64 v117; // rdx
  char v118; // al
  __int64 v119; // rax
  unsigned __int64 v120; // rsi
  __int64 v121; // rax
  int v122; // r9d
  __m128i *v123; // rdx
  __int64 v124; // rcx
  unsigned __int64 v125; // r15
  char v126; // r15
  int v127; // edx
  void *v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rax
  int v131; // [rsp-8h] [rbp-278h]
  __int64 v132; // [rsp+0h] [rbp-270h]
  __int64 v133; // [rsp+8h] [rbp-268h]
  unsigned __int64 **v134; // [rsp+10h] [rbp-260h]
  size_t v135; // [rsp+48h] [rbp-228h]
  size_t n; // [rsp+50h] [rbp-220h]
  __int64 nb; // [rsp+50h] [rbp-220h]
  __int64 na; // [rsp+50h] [rbp-220h]
  _QWORD *v139; // [rsp+58h] [rbp-218h]
  unsigned __int64 v140; // [rsp+58h] [rbp-218h]
  _QWORD *v141; // [rsp+60h] [rbp-210h]
  __int64 v142; // [rsp+60h] [rbp-210h]
  _QWORD *v143; // [rsp+68h] [rbp-208h]
  _QWORD *v144; // [rsp+70h] [rbp-200h]
  unsigned __int64 v145; // [rsp+78h] [rbp-1F8h]
  __int64 v146[2]; // [rsp+80h] [rbp-1F0h] BYREF
  __int64 v147; // [rsp+90h] [rbp-1E0h] BYREF
  __int128 v148; // [rsp+98h] [rbp-1D8h]
  __int64 v149[2]; // [rsp+B0h] [rbp-1C0h] BYREF
  void *v150; // [rsp+C0h] [rbp-1B0h] BYREF
  __int128 v151; // [rsp+C8h] [rbp-1A8h]
  __int64 v152[2]; // [rsp+E0h] [rbp-190h] BYREF
  __int64 v153; // [rsp+F0h] [rbp-180h] BYREF
  __int128 v154; // [rsp+F8h] [rbp-178h]
  __int64 v155[2]; // [rsp+110h] [rbp-160h] BYREF
  __int64 v156; // [rsp+120h] [rbp-150h] BYREF
  __int128 v157; // [rsp+128h] [rbp-148h]
  __int64 v158[2]; // [rsp+140h] [rbp-130h] BYREF
  __int64 v159; // [rsp+150h] [rbp-120h] BYREF
  __int128 v160; // [rsp+158h] [rbp-118h]
  __int64 v161[2]; // [rsp+170h] [rbp-100h] BYREF
  __int64 v162; // [rsp+180h] [rbp-F0h] BYREF
  __int64 v163; // [rsp+188h] [rbp-E8h]
  __int64 v164; // [rsp+1A0h] [rbp-D0h] BYREF
  __int128 v165; // [rsp+1A8h] [rbp-C8h] BYREF
  __int64 v166; // [rsp+1B8h] [rbp-B8h]
  __int64 v167[2]; // [rsp+1D0h] [rbp-A0h] BYREF
  void *src; // [rsp+1E0h] [rbp-90h] BYREF
  __int128 v169; // [rsp+1E8h] [rbp-88h]
  _DWORD *v170; // [rsp+200h] [rbp-70h] BYREF
  __m128 v171; // [rsp+208h] [rbp-68h] BYREF
  __int128 v172; // [rsp+218h] [rbp-58h]
  __int64 v173; // [rsp+228h] [rbp-48h]
  unsigned __int64 v174; // [rsp+238h] [rbp-38h]

  v174 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v2 + 4) < 0 )
    return v174 - __readfsqword(0x28u);
  v3 = (__m128)(unsigned __int64)a1;
  v6 = (__m128)_mm_unpacklo_epi64((__m128i)v2, (__m128i)(unsigned __int64)a1);
  *(__m128 *)(a2 + 8) = v6;
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 && *(_QWORD *)(v7 + 16) != a1 )
    sub_31B4C0(a2, 0xC698u, *(double *)v6.m128_u64);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 && *(_QWORD *)(v8 + 8) != a1 )
    sub_31B4C0(a2, 0xC699u, *(double *)v6.m128_u64);
  v9 = *(_DWORD *)(a1 + 72);
  if ( (v7 == 0) != (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 == v9) )
    sub_31B4C0(a2, 0xC69Au, *(double *)v6.m128_u64);
  if ( (v8 == 0) != (v9 == 0) )
    sub_31B4C0(a2, 0xC69Bu, *(double *)v6.m128_u64);
  v10 = *(_DWORD *)(a1 + 24);
  if ( v10 > 0x7FFFF )
    sub_31B4C0(a2, 0xC69Cu, *(double *)v6.m128_u64);
  if ( (v10 & 0x680) == 0 )
    sub_31B4C0(a2, 0xC69Du, *(double *)v6.m128_u64);
  v143 = (_QWORD *)(a1 + 120);
  v144 = (_QWORD *)(a1 + 160);
  if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 120), (_QWORD *)(a1 + 160))
    || (v134 = (unsigned __int64 **)(a1 + 176),
        v132 = a1 + 136,
        !(unsigned __int8)sub_317F40((__int64 *)(a1 + 176), a1 + 136)) )
  {
    sub_31B4C0(a2, 0xC69Eu, *(double *)v6.m128_u64);
  }
  v141 = (_QWORD *)(a1 + 200);
  v139 = (_QWORD *)(a1 + 240);
  if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 200), (_QWORD *)(a1 + 240))
    || (v133 = a1 + 216, (v12 = sub_317F40((__int64 *)(a1 + 256), a1 + 216)) == 0) )
  {
    sub_31B4C0(a2, 0xC69Fu, *(double *)v6.m128_u64);
  }
  v13 = *(unsigned int *)(a1 + 72);
  if ( !(_DWORD)v13 || (v14 = *(_DWORD *)(a1 + 76), v14 == 1) || v14 == 6 )
  {
    if ( *(_QWORD *)(a1 + 48) && (**(_BYTE **)(a1 + 64) & 4) == 0 )
      sub_31B4C0(a2, 0xCA66u, *(double *)v6.m128_u64);
    if ( !(unsigned __int8)sub_64880(v143)
      || *(_QWORD *)(a1 + 144)
      || !(unsigned __int8)sub_64880(v141)
      || *(_QWORD *)(a1 + 224) )
    {
      sub_31B4C0(a2, 0xC6A0u, *(double *)v6.m128_u64);
    }
    if ( *(_DWORD *)(a1 + 72) )
    {
      if ( !(unsigned __int8)sub_64880(v139) || *(_QWORD *)(a1 + 264) )
        sub_31B4C0(a2, 0xC6A2u, *(double *)v6.m128_u64);
    }
    else if ( !(unsigned __int8)sub_64880(v144) || *(_QWORD *)(a1 + 184) )
    {
      sub_31B4C0(a2, 0xC6A1u, *(double *)v6.m128_u64);
    }
    v13 = *(unsigned int *)(a1 + 72);
  }
  v15 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v15 + 64) <= (int)v13 )
    sub_31B4C0(a2, 0xC6A3u, *(double *)v6.m128_u64);
  if ( *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8LL * (int)v13) != a1 )
    sub_31B4C0(a2, 0xC6A4u, *(double *)v6.m128_u64);
  v16 = *(_QWORD *)(a1 + 328);
  if ( v16 && v16 < *(_QWORD *)(v15 + 152) )
    sub_31B4C0(a2, 0xC6A5u, *(double *)v6.m128_u64);
  v17 = *(unsigned int *)(a1 + 24);
  if ( (v17 & 0x40000) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 512);
    if ( !v18 )
      sub_31B4C0(a2, 0xCDF9u, *(double *)v6.m128_u64);
    if ( v18 >= *(_QWORD *)(v15 + 1480) )
      sub_31B4C0(a2, 0xCDFAu, *(double *)v6.m128_u64);
    v19 = *(_QWORD *)(a1 + 520);
    if ( v19 )
    {
      v20 = (_QWORD *)(*(_QWORD *)(v15 + 1472) + 40 * v18);
      v21 = v20[1];
      v22 = v20[2];
      if ( v19 != v22 + v21 && (v19 < v21 || !v22 || v22 + v21 - 1 < v19) )
        sub_31B4C0(a2, 0xCDFBu, *(double *)v6.m128_u64);
      if ( (signed __int64)v19 < v20[3] )
        sub_31B4C0(a2, 0xCDFCu, *(double *)v6.m128_u64);
    }
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    switch ( *(_DWORD *)(a1 + 76) )
    {
      case 1:
        v17 &= 0x200u;
        if ( (_DWORD)v17 )
          goto LABEL_98;
        if ( (*(_DWORD *)v15 & 0x1000) != 0 )
          sub_31B4C0(a2, 0xC880u, *(double *)v6.m128_u64);
        v51 = *(_QWORD *)(a1 + 56);
        if ( v51 )
          goto LABEL_99;
        v27 = *(_QWORD *)(a1 + 376);
        v52 = v27;
        if ( (_DWORD)v27 )
          goto LABEL_111;
        v6 = 0;
        v170 = nullptr;
        v171 = 0;
LABEL_136:
        if ( !v52 )
          goto LABEL_137;
        goto LABEL_186;
      case 2:
      case 6:
LABEL_98:
        v51 = *(_QWORD *)(a1 + 56);
        if ( v51 )
        {
LABEL_99:
          if ( *(_DWORD *)v51 != 53 )
          {
            v27 = *(_QWORD *)(a1 + 376);
            v52 = v27;
            if ( !(_DWORD)v27 )
            {
LABEL_101:
              v6 = 0;
              v170 = nullptr;
              v171 = 0;
LABEL_125:
              v61 = (unsigned int)(*(_DWORD *)v51 - 42);
              switch ( *(_DWORD *)v51 )
              {
                case '*':
                case '+':
                case ',':
                case '-':
                case '.':
                case '/':
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                  v23 = v13 + 1;
                  v170 = (_DWORD *)qvector_reserve((__int64)&v170, 0, 1, 4);
                  v170[v171.m128_u64[0]] = v23;
                  v24 = v171.m128_u64[0];
                  v25 = v170;
                  v26 = *(_QWORD *)(a1 + 56);
                  v27 = v171.m128_u64[0] + 1;
                  v28 = &v170[++v171.m128_u64[0]];
                  v29 = *(_DWORD *)(v26 + 72);
                  if ( v170 == v28 )
                    goto LABEL_248;
                  v30 = v170;
                  while ( v29 != *v30 )
                  {
                    if ( v28 == ++v30 )
                      goto LABEL_248;
                  }
                  if ( v28 != v30 )
                    goto LABEL_52;
LABEL_248:
                  if ( v171.m128_u64[1] < v24 + 2 )
                  {
                    v170 = (_DWORD *)qvector_reserve((__int64)&v170, (__int64)v170, v24 + 2, 4);
                    v28 = &v170[v171.m128_u64[0]];
                  }
                  *v28 = v29;
                  goto LABEL_185;
                case '5':
                  if ( *(_BYTE *)(v51 + 48) != 12 )
                    sub_31B4C0(a2, 0xC6ABu, *(double *)v6.m128_u64);
                  v96 = *(_QWORD *)(v51 + 56);
                  v145 = *(_QWORD *)(v96 + 32);
                  if ( !v145 )
                  {
                    v170 = nullptr;
                    v6 = 0;
                    v171 = 0;
LABEL_174:
                    if ( v27 )
                      goto LABEL_138;
                    goto LABEL_59;
                  }
                  v128 = (void *)qalloc_or_throw(4 * v145, v17, v61, v13);
                  v25 = memcpy(v128, *(const void **)(v96 + 24), 4 * v145);
                  v130 = *(_QWORD *)(a1 + 376);
                  v27 = v145;
                  v170 = v25;
                  v6 = (__m128)_mm_unpacklo_epi64((__m128i)v145, (__m128i)v145);
                  v171 = v6;
LABEL_180:
                  if ( v27 != v130 )
                    goto LABEL_138;
                  goto LABEL_54;
                case '6':
                case ':':
                  goto LABEL_174;
                case '7':
                  if ( *(_BYTE *)(v51 + 32) != 7 )
                    goto LABEL_137;
                  v98 = *(_DWORD *)(v51 + 40);
                  goto LABEL_184;
                case '>':
                  if ( !v27 )
                    goto LABEL_59;
                  v97 = (void *)qalloc_or_throw(4 * v27, v17, v61, v13);
                  v25 = memcpy(v97, *(const void **)(a1 + 368), 4 * v27);
                  v130 = *(_QWORD *)(a1 + 376);
                  v170 = v25;
                  v6 = (__m128)_mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
                  v171 = v6;
                  goto LABEL_180;
                default:
                  goto LABEL_136;
              }
            }
LABEL_111:
            sub_31B4C0(a2, 0xC6A8u, *(double *)v6.m128_u64);
          }
LABEL_128:
          sub_31B4C0(a2, 0xC6A7u, *(double *)v6.m128_u64);
        }
        v27 = *(_QWORD *)(a1 + 376);
        if ( (_DWORD)v27 )
          goto LABEL_111;
        v6 = 0;
        v170 = nullptr;
        v171 = 0;
LABEL_137:
        if ( !v27 )
          goto LABEL_59;
        break;
      case 3:
        v51 = *(_QWORD *)(a1 + 56);
        if ( !v51 )
          goto LABEL_110;
        if ( (unsigned int)(*(_DWORD *)v51 - 56) <= 1 )
        {
          if ( (unsigned __int8)sub_11C750(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 2) )
            sub_31B4C0(a2, 0xCA3Eu, *(double *)v6.m128_u64);
          v27 = *(_QWORD *)(a1 + 376);
          if ( !(_DWORD)v27
            || (v13 = *(unsigned int *)(a1 + 72), v17 = *(_QWORD *)(a1 + 368), (_DWORD)v13 + 1 != *(_DWORD *)v17) )
          {
            sub_31B4C0(a2, 0xC6A6u, *(double *)v6.m128_u64);
          }
          v51 = *(_QWORD *)(a1 + 56);
          v127 = *(_DWORD *)(a1 + 76);
          if ( v51 )
          {
            if ( (v127 == 5) != (*(_DWORD *)v51 == 53) )
              goto LABEL_128;
          }
          else if ( v127 == 5 )
          {
            goto LABEL_128;
          }
          v52 = *(_QWORD *)(a1 + 376);
          if ( (_DWORD)v27 != 1 )
            goto LABEL_111;
        }
        else
        {
          if ( *(_DWORD *)v51 == 53 )
            goto LABEL_128;
LABEL_110:
          v27 = *(_QWORD *)(a1 + 376);
          v52 = v27;
          if ( (_DWORD)v27 != 1 )
            goto LABEL_111;
LABEL_115:
          v17 = *(_QWORD *)(a1 + 368);
        }
        v55 = v17 + 4LL * v52;
        do
        {
          v56 = *(int *)v17;
          if ( (int)v56 < 0 || (v57 = *(_QWORD *)(a1 + 64), *(_DWORD *)(v57 + 64) <= (int)v56) )
            sub_31B4C0(a2, 0xC6A9u, *(double *)v6.m128_u64);
          v58 = *(_QWORD *)(*(_QWORD *)(v57 + 528) + 8 * v56);
          v59 = *(_DWORD **)(v58 + 344);
          v60 = &v59[*(_QWORD *)(v58 + 352)];
          if ( v59 == v60 )
LABEL_281:
            sub_31B4C0(a2, 0xC6AAu, *(double *)v6.m128_u64);
          while ( *(_DWORD *)(a1 + 72) != *v59 )
          {
            if ( v60 == ++v59 )
              goto LABEL_281;
          }
          v17 += 4;
        }
        while ( v55 != v17 );
        v6 = 0;
        v170 = nullptr;
        v171 = 0;
        if ( v51 )
          goto LABEL_125;
LABEL_186:
        v98 = v13 + 1;
LABEL_184:
        v170 = (_DWORD *)qvector_reserve((__int64)&v170, 0, 1, 4);
        v170[v171.m128_u64[0]] = v98;
LABEL_185:
        v25 = v170;
        v27 = ++v171.m128_u64[0];
LABEL_52:
        if ( *(_QWORD *)(a1 + 376) == v27 )
        {
          if ( !v27 )
          {
LABEL_57:
            if ( v25 )
            {
              v171.m128_u64[0] = 0;
              qfree((__int64)v25);
            }
            goto LABEL_59;
          }
LABEL_54:
          v31 = 0;
          while ( v25[v31] == *(_DWORD *)(*(_QWORD *)(a1 + 368) + 4 * v31) )
          {
            if ( ++v31 == v27 )
              goto LABEL_57;
          }
        }
        break;
      case 4:
        v51 = *(_QWORD *)(a1 + 56);
        if ( v51 && *(_DWORD *)v51 == 53 )
          goto LABEL_128;
        v27 = *(_QWORD *)(a1 + 376);
        v52 = v27;
        if ( (_DWORD)v27 != 2 )
          goto LABEL_111;
        goto LABEL_115;
      case 5:
        v27 = *(_QWORD *)(a1 + 376);
        v51 = *(_QWORD *)(a1 + 56);
        v52 = v27;
        if ( !v51 || *(_DWORD *)v51 != 53 )
          goto LABEL_128;
        if ( (int)v27 > 0 )
          goto LABEL_115;
        goto LABEL_101;
      default:
        sub_31B4C0(a2, 0xCA67u, *(double *)v6.m128_u64);
    }
LABEL_138:
    sub_31B4C0(a2, 0xC6ACu, *(double *)v6.m128_u64);
  }
LABEL_59:
  v32 = *(_QWORD *)(a1 + 352);
  if ( (int)v32 <= 0 )
  {
    v171.m128_i32[0] = 0;
    v41 = nullptr;
    v171.m128_u64[1] = 0;
    *(_QWORD *)&v172 = &v171;
    *((_QWORD *)&v172 + 1) = &v171;
    v173 = 0;
  }
  else
  {
    v33 = *(int **)(a1 + 344);
    v34 = v33;
    v35 = (__int64)&v33[(unsigned int)(v32 - 1) + 1];
    do
    {
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 528LL) + 8LL * *v34);
      v37 = *(_DWORD **)(v36 + 368);
      v38 = &v37[*(_QWORD *)(v36 + 376)];
      if ( v37 == v38 )
LABEL_273:
        sub_31B4C0(a2, 0xC6ADu, *(double *)v6.m128_u64);
      while ( *(_DWORD *)(a1 + 72) != *v37 )
      {
        if ( v38 == ++v37 )
          goto LABEL_273;
      }
      ++v34;
    }
    while ( (int *)v35 != v34 );
    v171.m128_i32[0] = 0;
    v39 = 0;
    v171.m128_u64[1] = 0;
    *(_QWORD *)&v172 = &v171;
    *((_QWORD *)&v172 + 1) = &v171;
    v173 = 0;
    while ( 1 )
    {
      LODWORD(v167[0]) = v33[v39];
      sub_C3BC0(&v170, (int *)v167);
      if ( !v40 )
        sub_31B4C0(a2, 0xC6AEu, *(double *)v6.m128_u64);
      if ( *(_DWORD *)(a1 + 352) <= (int)++v39 )
        break;
      v33 = *(int **)(a1 + 344);
    }
    v41 = (_QWORD *)v171.m128_u64[1];
  }
  sub_31B1E0(v41);
  v46 = *(unsigned int **)(a1 + 48);
  if ( !v46 )
    goto LABEL_291;
  v47 = 0;
  do
  {
    *(_QWORD *)(a2 + 24) = v46;
    sub_31E290(v46, (_QWORD *)a2, 1, v6, v43, v44, v45);
    if ( *(unsigned int **)(a1 + 56) == v46 )
    {
      v47 = v12;
    }
    else if ( sub_32ED40(*v46, *((_BYTE *)v46 + 64) == 0) )
    {
      sub_31B4C0(a2, 0xC6B0u, *(double *)v6.m128_u64);
    }
    v48 = *(_DWORD *)(a1 + 24);
    if ( (v48 & 0x10) == 0 )
    {
      v43 = *v46;
      if ( (unsigned int)(v43 - 59) <= 1 )
        sub_31B4C0(a2, 0xC6B1u, *(double *)v6.m128_u64);
    }
    v46 = *((unsigned int **)v46 + 1);
  }
  while ( v46 );
  v42 = *(_QWORD *)(a1 + 48);
  if ( !v42 )
  {
LABEL_291:
    if ( *(_QWORD *)(a1 + 56) )
      sub_31B4C0(a2, 0xC6B8u, *(double *)v6.m128_u64);
    goto LABEL_130;
  }
  if ( !v47 )
    sub_31B4C0(a2, 0xC6B2u, *(double *)v6.m128_u64);
  if ( *(_QWORD *)(v42 + 16) )
    sub_31B4C0(a2, 0xC6B3u, *(double *)v6.m128_u64);
  v43 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v43 + 8) )
    sub_31B4C0(a2, 0xC6B4u, *(double *)v6.m128_u64);
  v49 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)v49 & 2) == 0 )
  {
    v43 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 32) >= v43 && (v48 & 2) == 0 )
      sub_31B4C0(a2, 0xC6B5u, *(double *)v6.m128_u64);
    if ( v43 != -1 )
    {
      v53 = sub_1229A0(*(_QWORD *)(a1 + 48));
      v49 = *(_QWORD *)(a1 + 64);
      if ( !v53 || (*(_BYTE *)(v49 + 1) & 4) == 0 || (*(_BYTE *)(v49 + 755) & 0x20) != 0 )
        goto LABEL_131;
      v54 = sub_330F80((_QWORD *)v49, *(_QWORD *)(a1 + 40));
      if ( !(unsigned __int8)sub_332920(*(_QWORD *)(a1 + 64) + 8LL, v54 - 1) )
        sub_31B4C0(a2, 0xC6B6u, *(double *)v6.m128_u64);
LABEL_130:
      v49 = *(_QWORD *)(a1 + 64);
LABEL_131:
      v48 = *(_DWORD *)(a1 + 24);
    }
  }
  if ( (v48 & 0x600) == 0x200 && (*(_BYTE *)(v49 + 2) & 0x18) == 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v62 = *(_DWORD *)(a1 + 76);
      if ( v62 != 6 && v62 != 1 )
      {
        v63 = *(_QWORD *)(a1 + 48);
        v146[0] = 0;
        v146[1] = 0;
        v135 = v63;
        v147 = 0;
        v149[0] = 0;
        v149[1] = 0;
        v150 = nullptr;
        v152[0] = 0;
        v152[1] = 0;
        v153 = 0;
        v155[0] = 0;
        v155[1] = 0;
        v156 = 0;
        v158[0] = 0;
        v158[1] = 0;
        v159 = 0;
        v148 = 0;
        v151 = 0;
        v154 = 0;
        v157 = 0;
        v160 = 0;
        if ( v63 )
        {
          do
          {
            if ( *(char *)(v135 + 4) >= 0 )
            {
              sub_124680((__int64)v161, a1, v135, 1, 0.0, v3);
              if ( !(unsigned __int8)sub_64880(v161) || v163 )
              {
                sub_64640(v158, v161, v64, v65, v66, v67);
                sub_317C60(&v159, (__int64)&v162);
                v68 = *(_QWORD *)(a1 + 64);
                sub_64000((__int64 *)&v170, (__int64)v149, 0.0);
                v71 = v151;
                v171.m128_u64[1] = 0;
                v172 = 0;
                if ( (_QWORD)v151 )
                {
                  na = 16 * v151;
                  v171.m128_u64[1] = qalloc_or_throw(16 * v151, (__int64)v149, 16 * v151, v70);
                  *((_QWORD *)&v172 + 1) = v71;
                  memcpy((void *)v171.m128_u64[1], v150, na);
                  *(_QWORD *)&v172 = v71;
                }
                sub_3180C0(&v171.m128_i64[1], v68 + 208, v69, v70);
                sub_64640(v161, (__int64 *)&v170, v72, v73, v74, v75);
                sub_317C60(&v162, (__int64)&v171.m128_i64[1]);
                if ( v171.m128_u64[1] )
                {
                  *(_QWORD *)&v172 = 0;
                  qfree(v171.m128_i64[1]);
                }
                qfree((__int64)v170);
                sub_64280(v146, v161, 0.0);
                sub_316CB0(&v147, (const void **)&v162, v76, v77);
                sub_124680((__int64)&v170, a1, v135, 0, 0.0, v3);
                sub_64640((__int64 *)&v170, v149, v78, v79, v80, v81);
                sub_317C60(&v171.m128_i64[1], (__int64)&v150);
                sub_64280(v152, (__int64 *)&v170, 0.0);
                sub_316CB0(&v153, (const void **)&v171.m128_u64[1], v82, v83);
                if ( v171.m128_u64[1] )
                {
                  *(_QWORD *)&v172 = 0;
                  qfree(v171.m128_i64[1]);
                }
                qfree((__int64)v170);
              }
              sub_127A20((__int64)&v164, a1, v135, 1, v66, v67, 0.0, v3);
              if ( !(unsigned __int8)sub_64880(&v164) || v166 )
              {
                sub_64280(v149, &v164, 0.0);
                sub_316CB0((__int64 *)&v150, (const void **)&v165 + 1, v84, v85);
                sub_127A20((__int64)v167, a1, v135, 0, v86, v87, 0.0, v3);
                sub_64280(v155, v167, 0.0);
                sub_316CB0(&v156, (const void **)&src, v88, v89);
                v90 = *(_QWORD *)(a1 + 64);
                sub_64000((__int64 *)&v170, (__int64)v167, 0.0);
                v93 = v169;
                v171.m128_u64[1] = 0;
                v172 = 0;
                if ( (_QWORD)v169 )
                {
                  nb = 16 * v169;
                  v171.m128_u64[1] = qalloc_or_throw(16 * v169, (__int64)v167, 16 * v169, v92);
                  *((_QWORD *)&v172 + 1) = v93;
                  memcpy((void *)v171.m128_u64[1], src, nb);
                  *(_QWORD *)&v172 = v93;
                }
                sub_3180C0(&v171.m128_i64[1], v90 + 208, v91, v92);
                sub_64280(v158, (__int64 *)&v170, 0.0);
                sub_316CB0(&v159, (const void **)&v171.m128_u64[1], v94, v95);
                if ( v171.m128_u64[1] )
                {
                  *(_QWORD *)&v172 = 0;
                  qfree(v171.m128_i64[1]);
                }
                qfree((__int64)v170);
                if ( src )
                {
                  *(_QWORD *)&v169 = 0;
                  qfree((__int64)src);
                }
                qfree(v167[0]);
              }
              if ( *((_QWORD *)&v165 + 1) )
              {
                v166 = 0;
                qfree(*((__int64 *)&v165 + 1));
              }
              qfree(v164);
              if ( v162 )
              {
                v163 = 0;
                qfree(v162);
              }
              qfree(v161[0]);
            }
            v135 = *(_QWORD *)(v135 + 8);
          }
          while ( v135 );
          v49 = *(_QWORD *)(a1 + 64);
        }
        v99 = *(_QWORD *)(v49 + 1504);
        sub_64640(v155, (__int64 *)(v99 + 104), v42, v43, v44, v45);
        sub_317C60(&v156, v99 + 120);
        sub_64640(v149, (__int64 *)(v99 + 104), v100, v101, v102, v103);
        sub_317C60((__int64 *)&v150, v99 + 120);
        n = *(_QWORD *)(a1 + 64);
        sub_64000((__int64 *)&v170, v99 + 104, 0.0);
        v171.m128_u64[1] = 0;
        v172 = 0;
        v106 = *(_QWORD *)(v99 + 128);
        if ( v106 )
        {
          v171.m128_u64[1] = qalloc_or_throw(16 * v106, v99 + 104, 16 * v106, v105);
          *((_QWORD *)&v172 + 1) = v106;
          memcpy((void *)v171.m128_u64[1], *(const void **)(v99 + 120), 16 * v106);
          *(_QWORD *)&v172 = v106;
        }
        sub_3180C0(&v171.m128_i64[1], n + 208, v104, v105);
        sub_64640(v158, (__int64 *)&v170, v107, v108, v109, v110);
        sub_317C60(&v159, (__int64)&v171.m128_i64[1]);
        if ( v171.m128_u64[1] )
        {
          *(_QWORD *)&v172 = 0;
          qfree(v171.m128_i64[1]);
        }
        qfree((__int64)v170);
        if ( sub_122C30((__int64)v146, (__int64)v144) )
          sub_31B4C0(a2, 0xC6B9u, 0.0);
        if ( sub_122C30((__int64)v149, (__int64)v139) )
          sub_31B4C0(a2, 0xC6BAu, 0.0);
        if ( sub_122C30((__int64)v152, (__int64)v143) )
          sub_31B4C0(a2, 0xC6BBu, 0.0);
        if ( sub_122C30((__int64)v155, (__int64)v141) )
          sub_31B4C0(a2, 0xC6BCu, 0.0);
        if ( sub_122C30((__int64)v158, a1 + 280) )
          sub_31B4C0(a2, 0xC6BDu, 0.0);
        v111 = *(_QWORD **)(a1 + 64);
        v6.m128_u64[0] = 0;
        v112 = v111[184];
        v113 = v111[180];
        v114 = *(_QWORD *)(v112 + 8);
        v169 = 0;
        v167[0] = 0;
        v167[1] = 0;
        src = nullptr;
        if ( v114 + v113 - 1 >= v113 )
        {
          src = (void *)qvector_reserve((__int64)&src, 0, 1, 16);
          v6 = (__m128)_mm_unpacklo_epi64((__m128i)v113, (__m128i)v114);
          *((__m128 *)src + v169) = v6;
          v111 = *(_QWORD **)(a1 + 64);
          *(_QWORD *)&v169 = v169 + 1;
          v112 = v111[184];
        }
        v142 = v112 + 40LL * *(_QWORD *)(a1 + 512);
        if ( v111[185] > 1u )
        {
          v115 = *(int *)(v111[188] + 80LL);
          v116 = v113 + *(_QWORD *)(v142 + 8);
          if ( v115 > v116 )
            v115 = v113 + *(_QWORD *)(v142 + 8);
          v171.m128_u64[0] = v115 + *(_QWORD *)(v142 + 16);
          v170 = (_DWORD *)(v116 - v115);
          sub_317BD0((__int64 *)&src, (__m128i *)&v170);
        }
        if ( (unsigned __int8)sub_318470((unsigned __int64 **)&src, v132)
          && !(unsigned __int8)sub_F86C0(*(_QWORD *)(a1 + 64)) )
        {
          sub_31B4C0(a2, 0xCDF4u, *(double *)v6.m128_u64);
        }
        if ( !(unsigned __int8)sub_318470((unsigned __int64 **)&src, v133) )
          goto LABEL_226;
        v117 = *(_QWORD *)(a1 + 56);
        if ( !v117 )
          sub_31B4C0(a2, 0xCE75u, *(double *)v6.m128_u64);
        v140 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL);
        if ( *(_QWORD *)(v142 + 8) >= v140 && *(_DWORD *)v117 == 55 )
        {
          v118 = *(_BYTE *)(v117 + 32);
          if ( v118 != 7 )
          {
            if ( v118 != 6 )
              goto LABEL_279;
            v119 = *(_QWORD *)(a1 + 64);
            v120 = *(_QWORD *)(v117 + 40);
            if ( v120 == *(_QWORD *)(v119 + 40) || !(unsigned __int8)sub_332920(v119 + 8, v120) )
              goto LABEL_279;
            v117 = *(_QWORD *)(a1 + 56);
          }
          v121 = sub_129150(a1, v167, v117, 0, 0, 0, *(double *)v6.m128_u64, v3, 0x101u);
          if ( v121 && *(_QWORD *)(v121 + 24) == *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL) )
          {
            sub_127A20((__int64)&v170, a1, v121, 0, v131, v122, *(double *)v6.m128_u64, v3);
            sub_3180C0(&v171.m128_i64[1], (__int64)&src, v123, v124);
            v6.m128_u64[0] = 0;
            v125 = *(_QWORD *)(v142 + 8) + v113;
            v164 = 0;
            v165 = 0;
            if ( v125 - 1 >= v125 - v140 )
            {
              v164 = qvector_reserve((__int64)&v164, 0, 1, 16);
              v129 = (_QWORD *)(16 * v165 + v164);
              *v129 = v125 - v140;
              v129[1] = v140;
              *(_QWORD *)&v165 = v165 + 1;
            }
            sub_317C60((__int64 *)&src, (__int64)&v164);
            v126 = 0;
            if ( !(unsigned __int8)sub_318470((unsigned __int64 **)&src, v133) )
              v126 = sub_317F40(&v164, (__int64)&v171.m128_i64[1]);
            if ( v164 )
            {
              *(_QWORD *)&v165 = 0;
              qfree(v164);
            }
            if ( v171.m128_u64[1] )
            {
              *(_QWORD *)&v172 = 0;
              qfree(v171.m128_i64[1]);
            }
            qfree((__int64)v170);
            if ( v126 )
            {
LABEL_226:
              if ( src )
              {
                *(_QWORD *)&v169 = 0;
                qfree((__int64)src);
              }
              qfree(v167[0]);
              if ( v159 )
              {
                *(_QWORD *)&v160 = 0;
                qfree(v159);
              }
              qfree(v158[0]);
              if ( v156 )
              {
                *(_QWORD *)&v157 = 0;
                qfree(v156);
              }
              qfree(v155[0]);
              if ( v153 )
              {
                *(_QWORD *)&v154 = 0;
                qfree(v153);
              }
              qfree(v152[0]);
              if ( v150 )
              {
                *(_QWORD *)&v151 = 0;
                qfree((__int64)v150);
              }
              qfree(v149[0]);
              if ( v147 )
              {
                *(_QWORD *)&v148 = 0;
                qfree(v147);
              }
              qfree(v146[0]);
              v49 = *(_QWORD *)(a1 + 64);
              goto LABEL_89;
            }
          }
        }
LABEL_279:
        sub_31B4C0(a2, 0xCDFDu, *(double *)v6.m128_u64);
      }
    }
  }
LABEL_89:
  v50 = *(_QWORD *)(v49 + 1504);
  if ( (unsigned __int8)sub_64780(v144, (_QWORD *)(v50 + 104)) || (unsigned __int8)sub_318470(v134, v50 + 120) )
    sub_31B4C0(a2, 0xC6E8u, *(double *)v6.m128_u64);
  return v174 - __readfsqword(0x28u);
}

