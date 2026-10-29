unsigned __int64 __fastcall sub_319CC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __m128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // eax
  char v11; // r13
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // esi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  _QWORD *v19; // r8
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  int v22; // r12d
  unsigned __int64 v23; // rcx
  _DWORD *v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  _DWORD *v27; // rdx
  int v28; // r15d
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  int *v32; // rax
  int *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r9
  _DWORD *v36; // rdx
  _DWORD *v37; // r9
  __int64 v38; // r15
  char v39; // dl
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  unsigned int *v45; // r12
  char v46; // r15
  int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // r15
  __int64 v50; // rax
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rax
  int *v54; // rsi
  int *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r9
  _DWORD *v59; // rdx
  _DWORD *v60; // r9
  int v61; // eax
  size_t v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  __int64 v67; // r15
  __int64 v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  int v76; // r9d
  __int64 v77; // r15
  __int64 v78; // r13
  __int64 v79; // r15
  void *v80; // rax
  int v81; // r12d
  __int64 v82; // r12
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  int v86; // r9d
  __int64 v87; // r13
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  int v91; // r9d
  _QWORD *v92; // rax
  __int64 v93; // rdx
  unsigned __int64 v94; // r15
  unsigned __int64 v95; // r12
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // rdx
  char v99; // al
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rax
  unsigned __int64 v103; // r15
  char v104; // r15
  int v105; // edx
  void *v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // [rsp+0h] [rbp-270h]
  __int64 v110; // [rsp+8h] [rbp-268h]
  unsigned __int64 **v111; // [rsp+10h] [rbp-260h]
  size_t v112; // [rsp+48h] [rbp-228h]
  size_t n; // [rsp+50h] [rbp-220h]
  __int64 nb; // [rsp+50h] [rbp-220h]
  __int64 na; // [rsp+50h] [rbp-220h]
  _QWORD *v116; // [rsp+58h] [rbp-218h]
  unsigned __int64 v117; // [rsp+58h] [rbp-218h]
  _QWORD *v118; // [rsp+60h] [rbp-210h]
  __int64 v119; // [rsp+60h] [rbp-210h]
  _QWORD *v120; // [rsp+68h] [rbp-208h]
  _QWORD *v121; // [rsp+70h] [rbp-200h]
  unsigned __int64 v122; // [rsp+78h] [rbp-1F8h]
  __int64 v123[2]; // [rsp+80h] [rbp-1F0h] BYREF
  __int64 v124; // [rsp+90h] [rbp-1E0h] BYREF
  __int128 v125; // [rsp+98h] [rbp-1D8h]
  __int64 v126[2]; // [rsp+B0h] [rbp-1C0h] BYREF
  void *v127; // [rsp+C0h] [rbp-1B0h] BYREF
  __int128 v128; // [rsp+C8h] [rbp-1A8h]
  __int64 v129[2]; // [rsp+E0h] [rbp-190h] BYREF
  __int64 v130; // [rsp+F0h] [rbp-180h] BYREF
  __int128 v131; // [rsp+F8h] [rbp-178h]
  __int64 v132[2]; // [rsp+110h] [rbp-160h] BYREF
  __int64 v133; // [rsp+120h] [rbp-150h] BYREF
  __int128 v134; // [rsp+128h] [rbp-148h]
  __int64 v135[2]; // [rsp+140h] [rbp-130h] BYREF
  __int64 v136; // [rsp+150h] [rbp-120h] BYREF
  __int128 v137; // [rsp+158h] [rbp-118h]
  __int64 v138[2]; // [rsp+170h] [rbp-100h] BYREF
  __int64 *v139; // [rsp+180h] [rbp-F0h] BYREF
  __int64 v140; // [rsp+188h] [rbp-E8h]
  __int64 v141; // [rsp+1A0h] [rbp-D0h] BYREF
  __int128 v142; // [rsp+1A8h] [rbp-C8h] BYREF
  __int64 v143; // [rsp+1B8h] [rbp-B8h]
  __int64 v144[2]; // [rsp+1D0h] [rbp-A0h] BYREF
  void *src; // [rsp+1E0h] [rbp-90h] BYREF
  __int128 v146; // [rsp+1E8h] [rbp-88h]
  _DWORD *v147; // [rsp+200h] [rbp-70h] BYREF
  __m128 v148; // [rsp+208h] [rbp-68h] BYREF
  __int128 v149; // [rsp+218h] [rbp-58h]
  __int64 v150; // [rsp+228h] [rbp-48h]
  unsigned __int64 v151; // [rsp+238h] [rbp-38h]

  v151 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v2 + 4) < 0 )
    return v151 - __readfsqword(0x28u);
  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v2, (__m128i)(unsigned __int64)a1);
  *(__m128 *)(a2 + 8) = v5;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 && *(_QWORD *)(v6 + 16) != a1 )
    sub_3163C0(a2, 0xC698u);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 && *(_QWORD *)(v7 + 8) != a1 )
    sub_3163C0(a2, 0xC699u);
  v8 = *(_DWORD *)(a1 + 72);
  if ( (v6 == 0) != (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 == v8) )
    sub_3163C0(a2, 0xC69Au);
  if ( (v7 == 0) != (v8 == 0) )
    sub_3163C0(a2, 0xC69Bu);
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 > 0x7FFFF )
    sub_3163C0(a2, 0xC69Cu);
  if ( (v9 & 0x680) == 0 )
    sub_3163C0(a2, 0xC69Du);
  v120 = (_QWORD *)(a1 + 120);
  v121 = (_QWORD *)(a1 + 160);
  if ( !(unsigned __int8)sub_604A0((_QWORD *)(a1 + 120), (_QWORD *)(a1 + 160))
    || (v111 = (unsigned __int64 **)(a1 + 176),
        v109 = a1 + 136,
        !(unsigned __int8)sub_312E40((__int64 *)(a1 + 176), a1 + 136)) )
  {
    sub_3163C0(a2, 0xC69Eu);
  }
  v118 = (_QWORD *)(a1 + 200);
  v116 = (_QWORD *)(a1 + 240);
  if ( !(unsigned __int8)sub_604A0((_QWORD *)(a1 + 200), (_QWORD *)(a1 + 240))
    || (v110 = a1 + 216, (v11 = sub_312E40((__int64 *)(a1 + 256), a1 + 216)) == 0) )
  {
    sub_3163C0(a2, 0xC69Fu);
  }
  v12 = *(_DWORD *)(a1 + 72);
  if ( !v12 || (v13 = *(_DWORD *)(a1 + 76), v13 == 1) || v13 == 6 )
  {
    if ( *(_QWORD *)(a1 + 48) && (**(_BYTE **)(a1 + 64) & 4) == 0 )
      sub_3163C0(a2, 0xCA66u);
    if ( !(unsigned __int8)sub_60500(v120)
      || *(_QWORD *)(a1 + 144)
      || !(unsigned __int8)sub_60500(v118)
      || *(_QWORD *)(a1 + 224) )
    {
      sub_3163C0(a2, 0xC6A0u);
    }
    if ( *(_DWORD *)(a1 + 72) )
    {
      if ( !(unsigned __int8)sub_60500(v116) || *(_QWORD *)(a1 + 264) )
        sub_3163C0(a2, 0xC6A2u);
    }
    else if ( !(unsigned __int8)sub_60500(v121) || *(_QWORD *)(a1 + 184) )
    {
      sub_3163C0(a2, 0xC6A1u);
    }
    v12 = *(_DWORD *)(a1 + 72);
  }
  v14 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v14 + 64) <= v12 )
    sub_3163C0(a2, 0xC6A3u);
  if ( *(_QWORD *)(*(_QWORD *)(v14 + 528) + 8LL * v12) != a1 )
    sub_3163C0(a2, 0xC6A4u);
  v15 = *(_QWORD *)(a1 + 328);
  if ( v15 && v15 < *(_QWORD *)(v14 + 152) )
    sub_3163C0(a2, 0xC6A5u);
  v16 = *(_DWORD *)(a1 + 24);
  if ( (v16 & 0x40000) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 512);
    if ( !v17 )
      sub_3163C0(a2, 0xCDF9u);
    if ( v17 >= *(_QWORD *)(v14 + 1480) )
      sub_3163C0(a2, 0xCDFAu);
    v18 = *(_QWORD *)(a1 + 520);
    if ( v18 )
    {
      v19 = (_QWORD *)(*(_QWORD *)(v14 + 1472) + 40 * v17);
      v20 = v19[1];
      v21 = v19[2];
      if ( v18 != v21 + v20 && (v18 < v20 || !v21 || v21 + v20 - 1 < v18) )
        sub_3163C0(a2, 0xCDFBu);
      if ( (signed __int64)v18 < v19[3] )
        sub_3163C0(a2, 0xCDFCu);
    }
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    switch ( *(_DWORD *)(a1 + 76) )
    {
      case 1:
        if ( (v16 & 0x200) != 0 )
          goto LABEL_98;
        if ( (*(_DWORD *)v14 & 0x1000) != 0 )
          sub_3163C0(a2, 0xC880u);
        v50 = *(_QWORD *)(a1 + 56);
        if ( v50 )
          goto LABEL_99;
        v26 = *(_QWORD *)(a1 + 376);
        v51 = v26;
        if ( (_DWORD)v26 )
          goto LABEL_111;
        v5 = 0;
        v147 = nullptr;
        v148 = 0;
LABEL_136:
        if ( !v51 )
          goto LABEL_137;
        goto LABEL_186;
      case 2:
      case 6:
LABEL_98:
        v50 = *(_QWORD *)(a1 + 56);
        if ( v50 )
        {
LABEL_99:
          if ( *(_DWORD *)v50 != 53 )
          {
            v26 = *(_QWORD *)(a1 + 376);
            v51 = v26;
            if ( !(_DWORD)v26 )
            {
LABEL_101:
              v5 = 0;
              v147 = nullptr;
              v148 = 0;
LABEL_125:
              switch ( *(_DWORD *)v50 )
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
                  v22 = v12 + 1;
                  v147 = (_DWORD *)qvector_reserve();
                  v147[v148.m128_u64[0]] = v22;
                  v23 = v148.m128_u64[0];
                  v24 = v147;
                  v25 = *(_QWORD *)(a1 + 56);
                  v26 = v148.m128_u64[0] + 1;
                  v27 = &v147[++v148.m128_u64[0]];
                  v28 = *(_DWORD *)(v25 + 72);
                  if ( v147 == v27 )
                    goto LABEL_248;
                  v29 = v147;
                  while ( v28 != *v29 )
                  {
                    if ( v27 == ++v29 )
                      goto LABEL_248;
                  }
                  if ( v27 != v29 )
                    goto LABEL_52;
LABEL_248:
                  if ( v148.m128_u64[1] < v23 + 2 )
                  {
                    v147 = (_DWORD *)qvector_reserve();
                    v27 = &v147[v148.m128_u64[0]];
                  }
                  *v27 = v28;
                  goto LABEL_185;
                case '5':
                  if ( *(_BYTE *)(v50 + 48) != 12 )
                    sub_3163C0(a2, 0xC6ABu);
                  v79 = *(_QWORD *)(v50 + 56);
                  v122 = *(_QWORD *)(v79 + 32);
                  if ( !v122 )
                  {
                    v147 = nullptr;
                    v5 = 0;
                    v148 = 0;
LABEL_174:
                    if ( v26 )
                      goto LABEL_138;
                    goto LABEL_59;
                  }
                  v106 = (void *)qalloc_or_throw();
                  v24 = memcpy(v106, *(const void **)(v79 + 24), 4 * v122);
                  v108 = *(_QWORD *)(a1 + 376);
                  v26 = v122;
                  v147 = v24;
                  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v122, (__m128i)v122);
                  v148 = v5;
LABEL_180:
                  if ( v26 != v108 )
                    goto LABEL_138;
                  goto LABEL_54;
                case '6':
                case ':':
                  goto LABEL_174;
                case '7':
                  if ( *(_BYTE *)(v50 + 32) != 7 )
                    goto LABEL_137;
                  v81 = *(_DWORD *)(v50 + 40);
                  goto LABEL_184;
                case '>':
                  if ( !v26 )
                    goto LABEL_59;
                  v80 = (void *)qalloc_or_throw();
                  v24 = memcpy(v80, *(const void **)(a1 + 368), 4 * v26);
                  v108 = *(_QWORD *)(a1 + 376);
                  v147 = v24;
                  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
                  v148 = v5;
                  goto LABEL_180;
                default:
                  goto LABEL_136;
              }
            }
LABEL_111:
            sub_3163C0(a2, 0xC6A8u);
          }
LABEL_128:
          sub_3163C0(a2, 0xC6A7u);
        }
        v26 = *(_QWORD *)(a1 + 376);
        if ( (_DWORD)v26 )
          goto LABEL_111;
        v5 = 0;
        v147 = nullptr;
        v148 = 0;
LABEL_137:
        if ( !v26 )
          goto LABEL_59;
        break;
      case 3:
        v50 = *(_QWORD *)(a1 + 56);
        if ( !v50 )
          goto LABEL_110;
        if ( (unsigned int)(*(_DWORD *)v50 - 56) <= 1 )
        {
          if ( (unsigned __int8)sub_118290(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 2) )
            sub_3163C0(a2, 0xCA3Eu);
          v26 = *(_QWORD *)(a1 + 376);
          if ( !(_DWORD)v26 || (v12 = *(_DWORD *)(a1 + 72), v54 = *(int **)(a1 + 368), v12 + 1 != *v54) )
            sub_3163C0(a2, 0xC6A6u);
          v50 = *(_QWORD *)(a1 + 56);
          v105 = *(_DWORD *)(a1 + 76);
          if ( v50 )
          {
            if ( (v105 == 5) != (*(_DWORD *)v50 == 53) )
              goto LABEL_128;
          }
          else if ( v105 == 5 )
          {
            goto LABEL_128;
          }
          v51 = *(_QWORD *)(a1 + 376);
          if ( (_DWORD)v26 != 1 )
            goto LABEL_111;
        }
        else
        {
          if ( *(_DWORD *)v50 == 53 )
            goto LABEL_128;
LABEL_110:
          v26 = *(_QWORD *)(a1 + 376);
          v51 = v26;
          if ( (_DWORD)v26 != 1 )
            goto LABEL_111;
LABEL_115:
          v54 = *(int **)(a1 + 368);
        }
        v55 = &v54[v51];
        do
        {
          v56 = *v54;
          if ( (int)v56 < 0 || (v57 = *(_QWORD *)(a1 + 64), *(_DWORD *)(v57 + 64) <= (int)v56) )
            sub_3163C0(a2, 0xC6A9u);
          v58 = *(_QWORD *)(*(_QWORD *)(v57 + 528) + 8 * v56);
          v59 = *(_DWORD **)(v58 + 344);
          v60 = &v59[*(_QWORD *)(v58 + 352)];
          if ( v59 == v60 )
LABEL_281:
            sub_3163C0(a2, 0xC6AAu);
          while ( *(_DWORD *)(a1 + 72) != *v59 )
          {
            if ( v60 == ++v59 )
              goto LABEL_281;
          }
          ++v54;
        }
        while ( v55 != v54 );
        v5 = 0;
        v147 = nullptr;
        v148 = 0;
        if ( v50 )
          goto LABEL_125;
LABEL_186:
        v81 = v12 + 1;
LABEL_184:
        v147 = (_DWORD *)qvector_reserve();
        v147[v148.m128_u64[0]] = v81;
LABEL_185:
        v24 = v147;
        v26 = ++v148.m128_u64[0];
LABEL_52:
        if ( *(_QWORD *)(a1 + 376) == v26 )
        {
          if ( !v26 )
          {
LABEL_57:
            if ( v24 )
            {
              v148.m128_u64[0] = 0;
              qfree();
            }
            goto LABEL_59;
          }
LABEL_54:
          v30 = 0;
          while ( v24[v30] == *(_DWORD *)(*(_QWORD *)(a1 + 368) + 4 * v30) )
          {
            if ( ++v30 == v26 )
              goto LABEL_57;
          }
        }
        break;
      case 4:
        v50 = *(_QWORD *)(a1 + 56);
        if ( v50 && *(_DWORD *)v50 == 53 )
          goto LABEL_128;
        v26 = *(_QWORD *)(a1 + 376);
        v51 = v26;
        if ( (_DWORD)v26 != 2 )
          goto LABEL_111;
        goto LABEL_115;
      case 5:
        v26 = *(_QWORD *)(a1 + 376);
        v50 = *(_QWORD *)(a1 + 56);
        v51 = v26;
        if ( !v50 || *(_DWORD *)v50 != 53 )
          goto LABEL_128;
        if ( (int)v26 > 0 )
          goto LABEL_115;
        goto LABEL_101;
      default:
        sub_3163C0(a2, 0xCA67u);
    }
LABEL_138:
    sub_3163C0(a2, 0xC6ACu);
  }
LABEL_59:
  v31 = *(_QWORD *)(a1 + 352);
  if ( (int)v31 <= 0 )
  {
    v148.m128_i32[0] = 0;
    v40 = nullptr;
    v148.m128_u64[1] = 0;
    *(_QWORD *)&v149 = &v148;
    *((_QWORD *)&v149 + 1) = &v148;
    v150 = 0;
  }
  else
  {
    v32 = *(int **)(a1 + 344);
    v33 = v32;
    v34 = (__int64)&v32[(unsigned int)(v31 - 1) + 1];
    do
    {
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 528LL) + 8LL * *v33);
      v36 = *(_DWORD **)(v35 + 368);
      v37 = &v36[*(_QWORD *)(v35 + 376)];
      if ( v36 == v37 )
LABEL_273:
        sub_3163C0(a2, 0xC6ADu);
      while ( *(_DWORD *)(a1 + 72) != *v36 )
      {
        if ( v37 == ++v36 )
          goto LABEL_273;
      }
      ++v33;
    }
    while ( (int *)v34 != v33 );
    v148.m128_i32[0] = 0;
    v38 = 0;
    v148.m128_u64[1] = 0;
    *(_QWORD *)&v149 = &v148;
    *((_QWORD *)&v149 + 1) = &v148;
    v150 = 0;
    while ( 1 )
    {
      LODWORD(v144[0]) = v32[v38];
      sub_BF700(&v147, (int *)v144);
      if ( !v39 )
        sub_3163C0(a2, 0xC6AEu);
      if ( *(_DWORD *)(a1 + 352) <= (int)++v38 )
        break;
      v32 = *(int **)(a1 + 344);
    }
    v40 = (_QWORD *)v148.m128_u64[1];
  }
  sub_3160E0(v40);
  v45 = *(unsigned int **)(a1 + 48);
  if ( !v45 )
    goto LABEL_291;
  v46 = 0;
  do
  {
    *(_QWORD *)(a2 + 24) = v45;
    sub_319190(v45, (_QWORD *)a2, 1, v5, v42, v43, v44);
    if ( *(unsigned int **)(a1 + 56) == v45 )
    {
      v46 = v11;
    }
    else if ( (unsigned __int8)sub_329A80(*v45, *((_BYTE *)v45 + 64) == 0) )
    {
      sub_3163C0(a2, 0xC6B0u);
    }
    v47 = *(_DWORD *)(a1 + 24);
    if ( (v47 & 0x10) == 0 )
    {
      v42 = *v45;
      if ( (unsigned int)(v42 - 59) <= 1 )
        sub_3163C0(a2, 0xC6B1u);
    }
    v45 = *((unsigned int **)v45 + 1);
  }
  while ( v45 );
  v41 = *(_QWORD *)(a1 + 48);
  if ( !v41 )
  {
LABEL_291:
    if ( *(_QWORD *)(a1 + 56) )
      sub_3163C0(a2, 0xC6B8u);
    goto LABEL_130;
  }
  if ( !v46 )
    sub_3163C0(a2, 0xC6B2u);
  if ( *(_QWORD *)(v41 + 16) )
    sub_3163C0(a2, 0xC6B3u);
  v42 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v42 + 8) )
    sub_3163C0(a2, 0xC6B4u);
  v48 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)v48 & 2) == 0 )
  {
    v42 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 32) >= v42 && (v47 & 2) == 0 )
      sub_3163C0(a2, 0xC6B5u);
    if ( v42 != -1 )
    {
      v52 = sub_11E4E0(*(_QWORD *)(a1 + 48));
      v48 = *(_QWORD *)(a1 + 64);
      if ( !v52 || (*(_BYTE *)(v48 + 1) & 4) == 0 || (*(_BYTE *)(v48 + 755) & 0x20) != 0 )
        goto LABEL_131;
      v53 = sub_32BBA0(v48);
      if ( !(unsigned __int8)sub_32D560(*(_QWORD *)(a1 + 64) + 8LL, v53 - 1) )
        sub_3163C0(a2, 0xC6B6u);
LABEL_130:
      v48 = *(_QWORD *)(a1 + 64);
LABEL_131:
      v47 = *(_DWORD *)(a1 + 24);
    }
  }
  if ( (v47 & 0x600) == 0x200 && (*(_BYTE *)(v48 + 2) & 0x18) == 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v61 = *(_DWORD *)(a1 + 76);
      if ( v61 != 6 && v61 != 1 )
      {
        v62 = *(_QWORD *)(a1 + 48);
        v123[0] = 0;
        v123[1] = 0;
        v112 = v62;
        v124 = 0;
        v126[0] = 0;
        v126[1] = 0;
        v127 = nullptr;
        v129[0] = 0;
        v129[1] = 0;
        v130 = 0;
        v132[0] = 0;
        v132[1] = 0;
        v133 = 0;
        v135[0] = 0;
        v135[1] = 0;
        v136 = 0;
        v125 = 0;
        v128 = 0;
        v131 = 0;
        v134 = 0;
        v137 = 0;
        if ( v62 )
        {
          do
          {
            if ( *(char *)(v112 + 4) >= 0 )
            {
              sub_1201C0((__int64)v138, a1, v112, 1u);
              if ( !(unsigned __int8)sub_60500(v138) || v140 )
              {
                sub_602C0(v135, v138, v63, v64, v65, v66);
                sub_312B60(&v136, (__int64)&v139);
                v67 = *(_QWORD *)(a1 + 64);
                sub_5FC80((__int64 *)&v147, (__int64)v126);
                v68 = v128;
                v148.m128_u64[1] = 0;
                v149 = 0;
                if ( (_QWORD)v128 )
                {
                  na = 16 * v128;
                  v148.m128_u64[1] = qalloc_or_throw();
                  *((_QWORD *)&v149 + 1) = v68;
                  memcpy((void *)v148.m128_u64[1], v127, na);
                  *(_QWORD *)&v149 = v68;
                }
                sub_312FC0(&v148.m128_i64[1], (__m128i **)(v67 + 208));
                sub_602C0(v138, (__int64 *)&v147, v69, v70, v71, v72);
                sub_312B60((__int64 *)&v139, (__int64)&v148.m128_i64[1]);
                if ( v148.m128_u64[1] )
                {
                  *(_QWORD *)&v149 = 0;
                  qfree();
                }
                qfree();
                sub_5FF00(v123, v138);
                sub_311BB0(&v124, &v139);
                sub_1201C0((__int64)&v147, a1, v112, 0);
                sub_602C0((__int64 *)&v147, v126, v73, v74, v75, v76);
                sub_312B60(&v148.m128_i64[1], (__int64)&v127);
                sub_5FF00(v129, (__int64 *)&v147);
                sub_311BB0(&v130, (__int64 **)&v148.m128_u64[1]);
                if ( v148.m128_u64[1] )
                {
                  *(_QWORD *)&v149 = 0;
                  qfree();
                }
                qfree();
              }
              sub_123560((__int64)&v141, a1, v112, 1);
              if ( !(unsigned __int8)sub_60500(&v141) || v143 )
              {
                sub_5FF00(v126, &v141);
                sub_311BB0((__int64 *)&v127, (__int64 **)&v142 + 1);
                sub_123560((__int64)v144, a1, v112, 0);
                sub_5FF00(v132, v144);
                sub_311BB0(&v133, (__int64 **)&src);
                v77 = *(_QWORD *)(a1 + 64);
                sub_5FC80((__int64 *)&v147, (__int64)v144);
                v78 = v146;
                v148.m128_u64[1] = 0;
                v149 = 0;
                if ( (_QWORD)v146 )
                {
                  nb = 16 * v146;
                  v148.m128_u64[1] = qalloc_or_throw();
                  *((_QWORD *)&v149 + 1) = v78;
                  memcpy((void *)v148.m128_u64[1], src, nb);
                  *(_QWORD *)&v149 = v78;
                }
                sub_312FC0(&v148.m128_i64[1], (__m128i **)(v77 + 208));
                sub_5FF00(v135, (__int64 *)&v147);
                sub_311BB0(&v136, (__int64 **)&v148.m128_u64[1]);
                if ( v148.m128_u64[1] )
                {
                  *(_QWORD *)&v149 = 0;
                  qfree();
                }
                qfree();
                if ( src )
                {
                  *(_QWORD *)&v146 = 0;
                  qfree();
                }
                qfree();
              }
              if ( *((_QWORD *)&v142 + 1) )
              {
                v143 = 0;
                qfree();
              }
              qfree();
              if ( v139 )
              {
                v140 = 0;
                qfree();
              }
              qfree();
            }
            v112 = *(_QWORD *)(v112 + 8);
          }
          while ( v112 );
          v48 = *(_QWORD *)(a1 + 64);
        }
        v82 = *(_QWORD *)(v48 + 1504);
        sub_602C0(v132, (__int64 *)(v82 + 104), v41, v42, v43, v44);
        sub_312B60(&v133, v82 + 120);
        sub_602C0(v126, (__int64 *)(v82 + 104), v83, v84, v85, v86);
        sub_312B60((__int64 *)&v127, v82 + 120);
        n = *(_QWORD *)(a1 + 64);
        sub_5FC80((__int64 *)&v147, v82 + 104);
        v148.m128_u64[1] = 0;
        v149 = 0;
        v87 = *(_QWORD *)(v82 + 128);
        if ( v87 )
        {
          v148.m128_u64[1] = qalloc_or_throw();
          *((_QWORD *)&v149 + 1) = v87;
          memcpy((void *)v148.m128_u64[1], *(const void **)(v82 + 120), 16 * v87);
          *(_QWORD *)&v149 = v87;
        }
        sub_312FC0(&v148.m128_i64[1], (__m128i **)(n + 208));
        sub_602C0(v135, (__int64 *)&v147, v88, v89, v90, v91);
        sub_312B60(&v136, (__int64)&v148.m128_i64[1]);
        if ( v148.m128_u64[1] )
        {
          *(_QWORD *)&v149 = 0;
          qfree();
        }
        qfree();
        if ( sub_11E770((__int64)v123, (__int64)v121) )
          sub_3163C0(a2, 0xC6B9u);
        if ( sub_11E770((__int64)v126, (__int64)v116) )
          sub_3163C0(a2, 0xC6BAu);
        if ( sub_11E770((__int64)v129, (__int64)v120) )
          sub_3163C0(a2, 0xC6BBu);
        if ( sub_11E770((__int64)v132, (__int64)v118) )
          sub_3163C0(a2, 0xC6BCu);
        if ( sub_11E770((__int64)v135, a1 + 280) )
          sub_3163C0(a2, 0xC6BDu);
        v92 = *(_QWORD **)(a1 + 64);
        v93 = v92[184];
        v94 = v92[180];
        v95 = *(_QWORD *)(v93 + 8);
        v146 = 0;
        v144[0] = 0;
        v144[1] = 0;
        src = nullptr;
        if ( v95 + v94 - 1 >= v94 )
        {
          src = (void *)qvector_reserve();
          *((__m128i *)src + v146) = _mm_unpacklo_epi64((__m128i)v94, (__m128i)v95);
          v92 = *(_QWORD **)(a1 + 64);
          *(_QWORD *)&v146 = v146 + 1;
          v93 = v92[184];
        }
        v119 = v93 + 40LL * *(_QWORD *)(a1 + 512);
        if ( v92[185] > 1u )
        {
          v96 = *(int *)(v92[188] + 80LL);
          v97 = v94 + *(_QWORD *)(v119 + 8);
          if ( v96 > v97 )
            v96 = v94 + *(_QWORD *)(v119 + 8);
          v148.m128_u64[0] = v96 + *(_QWORD *)(v119 + 16);
          v147 = (_DWORD *)(v97 - v96);
          sub_312AD0((__int64 *)&src, (__m128i *)&v147);
        }
        if ( (unsigned __int8)sub_313370((unsigned __int64 **)&src, v109)
          && !(unsigned __int8)sub_F4200(*(_QWORD *)(a1 + 64)) )
        {
          sub_3163C0(a2, 0xCDF4u);
        }
        if ( !(unsigned __int8)sub_313370((unsigned __int64 **)&src, v110) )
          goto LABEL_226;
        v98 = *(_QWORD *)(a1 + 56);
        if ( !v98 )
          sub_3163C0(a2, 0xCE75u);
        v117 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL);
        if ( *(_QWORD *)(v119 + 8) >= v117 && *(_DWORD *)v98 == 55 )
        {
          v99 = *(_BYTE *)(v98 + 32);
          if ( v99 != 7 )
          {
            if ( v99 != 6 )
              goto LABEL_279;
            v100 = *(_QWORD *)(a1 + 64);
            v101 = *(_QWORD *)(v98 + 40);
            if ( v101 == *(_QWORD *)(v100 + 40) || !(unsigned __int8)sub_32D560(v100 + 8, v101) )
              goto LABEL_279;
            v98 = *(_QWORD *)(a1 + 56);
          }
          v102 = sub_124C90(a1, v144, v98, 0, nullptr, 0, 0x101u);
          if ( v102 && *(_QWORD *)(v102 + 24) == *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL) )
          {
            sub_123560((__int64)&v147, a1, v102, 0);
            sub_312FC0(&v148.m128_i64[1], (__m128i **)&src);
            v103 = *(_QWORD *)(v119 + 8) + v94;
            v141 = 0;
            v142 = 0;
            if ( v103 - 1 >= v103 - v117 )
            {
              v141 = qvector_reserve();
              v107 = (_QWORD *)(16 * v142 + v141);
              *v107 = v103 - v117;
              v107[1] = v117;
              *(_QWORD *)&v142 = v142 + 1;
            }
            sub_312B60((__int64 *)&src, (__int64)&v141);
            v104 = 0;
            if ( !(unsigned __int8)sub_313370((unsigned __int64 **)&src, v110) )
              v104 = sub_312E40(&v141, (__int64)&v148.m128_i64[1]);
            if ( v141 )
            {
              *(_QWORD *)&v142 = 0;
              qfree();
            }
            if ( v148.m128_u64[1] )
            {
              *(_QWORD *)&v149 = 0;
              qfree();
            }
            qfree();
            if ( v104 )
            {
LABEL_226:
              if ( src )
              {
                *(_QWORD *)&v146 = 0;
                qfree();
              }
              qfree();
              if ( v136 )
              {
                *(_QWORD *)&v137 = 0;
                qfree();
              }
              qfree();
              if ( v133 )
              {
                *(_QWORD *)&v134 = 0;
                qfree();
              }
              qfree();
              if ( v130 )
              {
                *(_QWORD *)&v131 = 0;
                qfree();
              }
              qfree();
              if ( v127 )
              {
                *(_QWORD *)&v128 = 0;
                qfree();
              }
              qfree();
              if ( v124 )
              {
                *(_QWORD *)&v125 = 0;
                qfree();
              }
              qfree();
              v48 = *(_QWORD *)(a1 + 64);
              goto LABEL_89;
            }
          }
        }
LABEL_279:
        sub_3163C0(a2, 0xCDFDu);
      }
    }
  }
LABEL_89:
  v49 = *(_QWORD *)(v48 + 1504);
  if ( (unsigned __int8)sub_60400(v121, (_QWORD *)(v49 + 104)) || (unsigned __int8)sub_313370(v111, v49 + 120) )
    sub_3163C0(a2, 0xC6E8u);
  return v151 - __readfsqword(0x28u);
}

