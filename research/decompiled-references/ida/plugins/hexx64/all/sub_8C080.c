__int64 __fastcall sub_8C080(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  __m128i *v9; // rbx
  int v11; // eax
  int v12; // r12d
  int v14; // eax
  unsigned int v15; // edx
  int v16; // r13d
  int v17; // eax
  int v18; // eax
  int v19; // r14d
  _QWORD *func; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  __int64 *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // r12
  __m128 si128; // xmm0
  __int64 v28; // rdi
  unsigned __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // r12
  __m128 v32; // xmm0
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r12
  __int64 *v37; // r12
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // r14
  void (__fastcall *v43)(_QWORD); // rax
  _QWORD *v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rdi
  int v47; // eax
  unsigned __int64 *v48; // r10
  __m128 v49; // xmm0
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // rax
  unsigned __int64 i; // r12
  unsigned __int64 v53; // r14
  __int64 v54; // rax
  unsigned __int64 *v55; // r10
  unsigned __int64 *v56; // r11
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r12
  __m128 v61; // xmm0
  __int64 v62; // rdi
  int v63; // eax
  unsigned __int64 v64; // r12
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 *v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // r8d
  int v72; // r9d
  __int64 v73; // rax
  bool v74; // cf
  __int64 v75; // rax
  __int64 v76; // r15
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rdx
  __int64 v81; // rax
  _QWORD *v82; // rax
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // r15
  __int64 v85; // r13
  _QWORD *v86; // rdi
  void *v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rdi
  __int64 v90; // rdx
  __m128i v91; // xmm0
  __int64 v92; // rcx
  _DWORD *v93; // rdi
  __int64 v94; // rcx
  _DWORD *v95; // rdi
  unsigned __int64 *v96; // r10
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  __int64 v99; // rax
  __int64 v100; // rdx
  int v101; // r12d
  __int64 *v102; // r14
  __int64 *v103; // r14
  __int64 v104; // rax
  __int64 *v105; // rdi
  __int64 *v106; // rdi
  unsigned __int64 v107; // rax
  char v108; // al
  int v109; // eax
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rdi
  int v114; // eax
  int v115; // eax
  unsigned __int64 v116; // r14
  __int64 v117; // rax
  unsigned __int64 *v118; // r10
  unsigned __int64 *v119; // r11
  char v120; // al
  __int64 v121; // rax
  char v122; // al
  __int64 v123; // rdx
  __m128i v124; // xmm0
  __int64 v125; // rcx
  _DWORD *v126; // rdi
  __int64 v127; // rcx
  _DWORD *v128; // rdi
  unsigned __int64 v129; // r10
  __m128i v130; // xmm0
  __m128i v131; // xmm0
  __int64 v132; // rax
  unsigned __int64 v133; // rdx
  unsigned __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rsi
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rdi
  __int64 *v140; // r14
  __int64 v141; // rdi
  __int64 v142; // r14
  __int64 v143; // r14
  __int64 v144; // r14
  int v145; // r13d
  unsigned __int64 *v146; // r14
  int v147; // r13d
  unsigned __int64 *v148; // r14
  __int64 v149; // rax
  __m128i *v150; // rax
  __int64 v151; // r14
  __int64 *v152; // rax
  __int64 v153; // r14
  __int64 v154; // rdi
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 *v159; // r14
  __int64 v160; // rdi
  __int64 v161; // rax
  __int64 v162; // rdi
  unsigned __int64 v163; // rdx
  unsigned __int64 v164; // rdx
  __int64 *v165; // r13
  __int64 *v166; // r14
  __int64 v167; // rax
  size_t n[2]; // [rsp+0h] [rbp-188h] BYREF
  __m128 v169; // [rsp+10h] [rbp-178h] BYREF
  unsigned __int64 v170; // [rsp+28h] [rbp-160h]
  int v171; // [rsp+30h] [rbp-158h]
  char v172; // [rsp+37h] [rbp-151h]
  __m128i *v173; // [rsp+38h] [rbp-150h]
  unsigned __int64 *v174; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v175; // [rsp+48h] [rbp-140h]
  const __m128i *v176; // [rsp+58h] [rbp-130h] BYREF
  const __m128i *v177; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int64 *v178; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v179; // [rsp+70h] [rbp-118h] BYREF
  __m128i v180; // [rsp+78h] [rbp-110h]
  __int64 v181; // [rsp+88h] [rbp-100h]
  void *src; // [rsp+90h] [rbp-F8h]
  __int128 v183; // [rsp+98h] [rbp-F0h]
  void *v184; // [rsp+A8h] [rbp-E0h]
  __int128 v185; // [rsp+B0h] [rbp-D8h]
  __int64 v186; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v187; // [rsp+C8h] [rbp-C0h]
  __int64 v188; // [rsp+D0h] [rbp-B8h]
  _BYTE v189[24]; // [rsp+E0h] [rbp-A8h] BYREF
  int v190; // [rsp+F8h] [rbp-90h]
  void *v191; // [rsp+100h] [rbp-88h]
  __int128 v192; // [rsp+108h] [rbp-80h]
  void *v193; // [rsp+118h] [rbp-70h]
  __int128 v194; // [rsp+120h] [rbp-68h]
  __int64 v195; // [rsp+130h] [rbp-58h]
  unsigned __int64 v196; // [rsp+138h] [rbp-50h]
  __int64 v197; // [rsp+140h] [rbp-48h]
  unsigned __int64 v198; // [rsp+148h] [rbp-40h]

  v9 = (__m128i *)a2;
  v198 = __readfsqword(0x28u);
  v11 = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
  *(_DWORD *)(a2 + 48) = v11;
  if ( (unsigned int)(v11 - 1) > 0xC )
    return 0;
  v14 = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
  v15 = *(_DWORD *)(a2 + 48);
  v16 = v14;
  v17 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 44) = v17;
  if ( v15 <= 3 )
  {
    if ( !v16 )
    {
      if ( v17 != 4 )
      {
        *(_DWORD *)(a2 + 40) = 4;
        v16 = 4;
        goto LABEL_8;
      }
      goto LABEL_114;
    }
    if ( v16 != v17 )
    {
      if ( v16 != 4 )
        goto LABEL_85;
      goto LABEL_113;
    }
LABEL_111:
    if ( v16 == 3 )
      return 0;
    goto LABEL_89;
  }
  if ( v16 != v17 )
  {
    if ( v16 != 4 )
    {
      if ( !v16 )
      {
        if ( v17 == 4 )
          return 0;
        *(_DWORD *)(a2 + 40) = 0;
LABEL_8:
        LODWORD(n[0]) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
        v18 = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
        *(_DWORD *)a1 = v18 & 0xEFFFFFFF;
        v19 = v18 & 4;
        if ( (v18 & 4) != 0 )
          return 0;
        *(_DWORD *)(a1 + 4) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
        if ( *(_DWORD *)(a2 + 48) > 3u )
        {
          if ( *(_DWORD *)(a2 + 40) == 4 )
          {
            a3 = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
          }
          else if ( a3 == -1 )
          {
            return 0;
          }
          *(_QWORD *)(a2 + 32) = a3;
          *(_QWORD *)(a1 + 40) = a3;
          if ( SLOBYTE(n[0]) < 0 )
          {
            if ( !(unsigned __int8)sub_7DB20(a2, a1 + 16, (__m128i)a4) || !*(_QWORD *)(a1 + 24) )
              return 0;
            v82 = *(_QWORD **)(a1 + 8);
            if ( !v82 )
              v82 = *(_QWORD **)(a1 + 16);
            if ( *(_QWORD *)(a1 + 40) != *v82 )
              return 0;
          }
          else
          {
            func = (_QWORD *)get_func();
            *(_QWORD *)(a1 + 8) = func;
            if ( !func
              || *func != *(_QWORD *)(a1 + 40)
              || *(_DWORD *)(a2 + 48) > 4u && !(unsigned __int8)sub_7DB20(a2, a1 + 16, (__m128i)a4) )
            {
              return 0;
            }
          }
LABEL_16:
          *(_QWORD *)(a1 + 48) = sub_7CFC0(a2, 1u, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 56) = sub_7CFC0(a2, 1u, *(double *)a4.m128_u64);
          *(_DWORD *)(a1 + 68) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64) - 1;
          *(_DWORD *)(a1 + 72) = sub_7DD90((unsigned __int8 **)a2, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 80) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 88) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 96) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 104) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          *(_DWORD *)(a1 + 112) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
          *(_DWORD *)(a1 + 116) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
          *(_DWORD *)(a1 + 120) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 128) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 136) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 144) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          v21 = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 152) = v21;
          v22 = v21;
          v23 = sub_1CE9E0(a1);
          sub_1CEA30((_QWORD *)a1, v23, v22);
          *(_QWORD *)(a1 + 160) = sub_7CFC0(a2, 1u, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 168) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          *(_QWORD *)(a1 + 176) = sub_7D020(a2, 0, *(double *)a4.m128_u64);
          v24 = *(_DWORD *)(a2 + 48);
          if ( v24 > 8 )
          {
            if ( !(unsigned __int8)sub_7F110((__int64 *)(a1 + 1448), (char **)a2, *(double *)a4.m128_u64) )
              return 0;
            v24 = *(_DWORD *)(a2 + 48);
          }
          if ( v24 <= 6 )
            goto LABEL_18;
          if ( !(unsigned __int8)sub_7F300((__int64 *)(a1 + 1472), (_QWORD *)a2, *(double *)a4.m128_u64) )
            return 0;
          if ( *(_DWORD *)(a2 + 48) <= 9u )
          {
LABEL_18:
            a4 = 0;
            *(_OWORD *)v189 = 0;
            if ( !(unsigned __int8)sub_7DFD0((__int64 *)v189, a2, 0.0)
              || !(unsigned __int8)sub_7DFD0((__int64 *)v189, a2, 0.0) )
            {
              return 0;
            }
          }
          if ( !(unsigned __int8)sub_7E080((__int64 *)(a1 + 184), a2, a4)
            || !(unsigned __int8)sub_7E080((__int64 *)(a1 + 208), a2, a4)
            || !(unsigned __int8)sub_7E080((__int64 *)(a1 + 232), a2, a4)
            || !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 256), (unsigned __int64 *)a2, a4)
            || !(unsigned __int8)sub_7E660((__int64 *)(a1 + 296), (unsigned __int64 *)a2, *(double *)a4.m128_u64) )
          {
            return 0;
          }
          *(_DWORD *)(a1 + 312) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
          *(_DWORD *)(a1 + 316) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
          *(_BYTE *)(a1 + 320) = n[0];
          *(_BYTE *)(a1 + 320) &= 1u;
          sub_7D2C0((unsigned __int8 **)a2, (_BYTE *)(a1 + 328), *(double *)a4.m128_u64);
          if ( (*(_BYTE *)a1 & 0x20) != 0 )
          {
            sub_7C6D0((_QWORD *)a2, (__int64 *)(a1 + 336), *(double *)a4.m128_u64);
            if ( !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 360), (unsigned __int64 *)a2, a4) )
              return 0;
          }
          else
          {
            v88 = *(_QWORD *)(a1 + 336);
            if ( v88 )
            {
              *(_QWORD *)(a1 + 344) = 0;
              qfree(v88);
              *(_QWORD *)(a1 + 336) = 0;
              *(_QWORD *)(a1 + 352) = 0;
            }
            v89 = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(a1 + 368) = 0;
            if ( v89 )
            {
              *(_QWORD *)(a1 + 384) = 0;
              qfree(v89);
              *(_QWORD *)(a1 + 376) = 0;
              *(_QWORD *)(a1 + 392) = 0;
            }
          }
          *(_DWORD *)(a1 + 400) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
          if ( *(_DWORD *)(a2 + 48) <= 3u )
            sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
          sub_7D150((__int64)v189, (_QWORD *)a2, *(double *)a4.m128_u64);
          v25 = *(_QWORD *)(a1 + 408);
          v26 = *(_QWORD *)v189;
          si128 = (__m128)_mm_loadu_si128((const __m128i *)&v189[8]);
          memset(v189, 0, sizeof(v189));
          if ( v25 )
          {
            v169 = si128;
            *(_QWORD *)(a1 + 416) = 0;
            qfree(v25);
            si128 = (__m128)_mm_load_si128((const __m128i *)&v169);
          }
          v28 = *(_QWORD *)v189;
          *(_QWORD *)(a1 + 408) = v26;
          *(__m128 *)(a1 + 416) = si128;
          if ( v28 )
          {
            *(_QWORD *)&v189[8] = 0;
            qfree(v28);
          }
          if ( !(unsigned __int8)sub_88A40((_QWORD *)a2, (__int64 *)(a1 + 432), *(double *)si128.m128_u64) )
            return 0;
          v29 = *(_QWORD *)(a1 + 432);
          for ( v169.m128_u64[0] = v29 + 104LL * *(_QWORD *)(a1 + 440); v169.m128_u64[0] != v29; v29 += 104LL )
            sub_7DE20(v29, (unsigned __int8 **)a2, *(double *)si128.m128_u64);
          if ( !(unsigned __int8)sub_7D530((_QWORD *)a2, (__int64 *)(a1 + 456), *(double *)si128.m128_u64) )
            return 0;
          *(_DWORD *)(a1 + 480) = sub_7CD20((_QWORD *)a2, *(double *)si128.m128_u64) - 1;
          *(_QWORD *)(a1 + 488) = sub_7CFC0(a2, 1u, *(double *)si128.m128_u64);
          sub_7D150((__int64)v189, (_QWORD *)a2, *(double *)si128.m128_u64);
          v30 = *(_QWORD *)(a1 + 496);
          v31 = *(_QWORD *)v189;
          v32 = (__m128)_mm_loadu_si128((const __m128i *)&v189[8]);
          memset(v189, 0, sizeof(v189));
          if ( v30 )
          {
            v169 = v32;
            *(_QWORD *)(a1 + 504) = 0;
            qfree(v30);
            v32 = (__m128)_mm_load_si128((const __m128i *)&v169);
          }
          v33 = *(_QWORD *)v189;
          *(_QWORD *)(a1 + 496) = v31;
          *(__m128 *)(a1 + 504) = v32;
          if ( v33 )
          {
            *(_QWORD *)&v189[8] = 0;
            qfree(v33);
          }
          *(_DWORD *)(a1 + 64) = sub_7CD20((_QWORD *)a2, *(double *)v32.m128_u64);
          *(_QWORD *)(a1 + 520) = 0;
          v172 = 0;
          while ( *(_DWORD *)(a1 + 64) > v19 )
          {
            v36 = j__qalloc_or_throw(528, a2, v34, v35);
            sub_330B10(v36, *(_QWORD *)(a1 + 1496));
            *(_DWORD *)(v36 + 72) = v19;
            sub_67BE0(a1, v36, 0);
            a2 = (__int64)v9;
            if ( !(unsigned __int8)sub_8BB70(v36, (__int64)v9, a1, v32) )
              return 0;
            ++v19;
            v172 |= (*(_BYTE *)(v36 + 24) & 8) != 0;
          }
          sub_67D80(a1);
          sub_1D4FD0(a1);
          v37 = (__int64 *)(a1 + 536);
          do
          {
            if ( !(unsigned __int8)sub_7DFD0(v37, (__int64)v9, *(double *)v32.m128_u64) )
              return 0;
            v37 += 4;
          }
          while ( (__int64 *)(a1 + 728) != v37 );
          sub_1AEE70(a1);
          LOBYTE(v170) = sub_82A00(v9, (__int64 *)(a1 + 728), *(double *)v32.m128_u64);
          if ( !(_BYTE)v170 )
            return 0;
          v38 = *(_QWORD *)(a1 + 728);
          v39 = v38 + 40LL * *(_QWORD *)(a1 + 736);
          while ( v38 != v39 )
          {
            sub_7EBF0(v38, v9, *(double *)v32.m128_u64);
            v38 += 40;
          }
          sub_7D240((__int64)v9, (char *)(a1 + 752), 32, *(double *)v32.m128_u64);
          v42 = *(_QWORD **)(a1 + 784);
          if ( v42 )
          {
            v43 = *(void (__fastcall **)(_QWORD))(*v42 + 8LL);
            if ( (char *)v43 == (char *)sub_66F30 )
            {
              v44 = v42 + 27;
              *v42 = off_4EC750;
              v169.m128_u64[0] = (unsigned __int64)(v42 + 3);
              do
              {
                v45 = (__int64)v44;
                v44 -= 4;
                sub_66C80(v45, *(double *)v32.m128_u64);
              }
              while ( (_QWORD *)v169.m128_u64[0] != v44 );
              v46 = v42[1];
              *v42 = &unk_4EC808;
              if ( v46 )
              {
                v42[2] = 0;
                qfree(v46);
              }
              j__qfree((__int64)v42);
            }
            else
            {
              v43(*(_QWORD *)(a1 + 784));
            }
          }
          *(_QWORD *)(a1 + 784) = 0;
          if ( (n[0] & 2) != 0 )
            sub_670E0((_QWORD *)a1, a1 + 752, v40, v41);
          v47 = sub_7CD20(v9, *(double *)v32.m128_u64);
          v48 = *(unsigned __int64 **)(a1 + 816);
          v49 = 0;
          *(_DWORD *)(a1 + 792) = v47;
          *(_OWORD *)(a1 + 800) = 0;
          if ( !v48 )
            goto LABEL_184;
          v50 = *v48;
          if ( !*(_QWORD *)(a1 + 824) )
          {
            *v48 = *v48 & 3 | (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFFCLL;
            v51 = *(_QWORD *)(a1 + 816);
            v49 = (__m128)_mm_unpacklo_epi64((__m128i)v51, (__m128i)v51);
            *(__m128 *)(v51 + 8) = v49;
            **(_QWORD **)(a1 + 816) &= ~1uLL;
            **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_64:
            v171 = sub_7D4F0(v9, *(double *)v49.m128_u64);
            if ( v171 < 0 )
              return 0;
            i = *(_QWORD *)(a1 + 816);
            v169.m128_u64[0] = a1 + 816;
            v173 = (__m128i *)&v179;
LABEL_66:
            while ( 2 )
            {
              if ( --v171 != -1 )
              {
                if ( (unsigned __int8)is_cvt64() )
                  v53 = (int)sub_7CD20(v9, *(double *)v49.m128_u64);
                else
                  v53 = sub_7CD40((__int64)v9, *(double *)v49.m128_u64);
                if ( (unsigned __int8)is_cvt64() )
                  v54 = (int)sub_7CD20(v9, *(double *)v49.m128_u64);
                else
                  v54 = sub_7CD40((__int64)v9, *(double *)v49.m128_u64);
                v180.m128i_i64[0] = v54;
                v55 = *(unsigned __int64 **)(a1 + 816);
                v179 = v53;
                v56 = v55;
                v176 = v173;
                if ( v55 )
                {
                  if ( *(_QWORD *)(a1 + 824) )
                  {
                    v178 = v55;
                    LOBYTE(v177) = 1;
                    *(_QWORD *)v189 = 0;
                    if ( i )
                    {
                      v175 = v55;
                      v174 = v55;
                      v57 = sub_885D0(
                              (unsigned __int64 *)v169.m128_u64[0],
                              (unsigned __int64 *)v173,
                              (_QWORD *)i,
                              (unsigned __int64 *)&v178,
                              &v177,
                              (unsigned __int64 *)v189);
                      v56 = v174;
                      v55 = v175;
                      if ( v57 )
                      {
                        i = *(_QWORD *)v189;
                        if ( !*(_QWORD *)v189 )
                        {
                          v58 = sub_8A3E0((__m128i *)v169.m128_u64[0], v178, (char)v177, &v176);
LABEL_77:
                          i = v58;
                        }
                        continue;
                      }
                    }
                    v108 = v170;
                    for ( i = *v55 & 0xFFFFFFFFFFFFFFFCLL; ; i = v164 )
                    {
                      if ( (*(_BYTE *)i & 2) != 0 )
                        goto LABEL_189;
                      v163 = *(_QWORD *)(i + 24);
                      if ( v53 >= v163 )
                      {
                        if ( v163 >= v53 )
                        {
                          if ( !i )
                          {
                            v56 = nullptr;
LABEL_189:
                            v58 = sub_8A3E0((__m128i *)v169.m128_u64[0], v56, v108, &v176);
                            goto LABEL_77;
                          }
                          goto LABEL_66;
                        }
                        v164 = *(_QWORD *)(i + 16);
                        v108 = 0;
                      }
                      else
                      {
                        v164 = *(_QWORD *)(i + 8);
                        v108 = v170;
                      }
                      v56 = (unsigned __int64 *)i;
                    }
                  }
                }
                else
                {
                  v90 = qalloc();
                  v91 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v90, (__m128i)(unsigned __int64)v90);
                  if ( !v90 )
                  {
                    exception = __cxa_allocate_exception(8u);
                    *exception = (char *)&`vtable for'std::bad_alloc + 16;
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'std::bad_alloc,
                      (void (*)(void *))&std::bad_alloc::~bad_alloc);
                  }
                  v92 = 10;
                  v93 = (_DWORD *)v90;
                  while ( v92 )
                  {
                    *v93++ = 0;
                    --v92;
                  }
                  *(__m128i *)(v90 + 8) = v91;
                  *(_QWORD *)v90 = v90 & 0xFFFFFFFFFFFFFFFCLL | 2;
                  *(_QWORD *)(a1 + 816) = v90;
                  *(_QWORD *)v90 = v90 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v90 & 3LL;
                  *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                                (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                                (__m128i)*(unsigned __int64 *)(a1 + 816));
                  **(_QWORD **)(a1 + 816) &= ~1uLL;
                  **(_QWORD **)(a1 + 816) |= 2uLL;
                  v55 = *(unsigned __int64 **)(a1 + 816);
                }
                v174 = v55;
                i = qalloc();
                if ( !i )
                {
                  v5 = __cxa_allocate_exception(8u);
                  *v5 = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    v5,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                v94 = 10;
                v95 = (_DWORD *)i;
                v96 = v174;
                while ( v94 )
                {
                  *v95++ = 0;
                  --v94;
                }
                v97 = _mm_load_si128((const __m128i *)&v179);
                *(_QWORD *)i = (unsigned __int64)v96 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(i + 24) = v97;
                v98 = _mm_loadl_epi64((const __m128i *)(a1 + 816));
                *(_QWORD *)i = (unsigned __int64)v96 & 0xFFFFFFFFFFFFFFFCLL | 1;
                v49 = (__m128)_mm_unpacklo_epi64(v98, v98);
                *(__m128 *)(i + 8) = v49;
                if ( v96 == *(unsigned __int64 **)(a1 + 816) )
                {
                  *v96 = i & 0xFFFFFFFFFFFFFFFCLL | *v96 & 3;
                  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 8LL) = i;
                  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 16LL) = i;
                  v100 = *(_QWORD *)i & 2LL;
                  *(_QWORD *)i &= ~1uLL;
                  *(_QWORD *)i = v100 | *(_QWORD *)(a1 + 816) & 0xFFFFFFFFFFFFFFFCLL;
                }
                else
                {
                  v96[1] = i;
                  v99 = *(_QWORD *)(a1 + 816);
                  if ( v96 == *(unsigned __int64 **)(v99 + 8) )
                    *(_QWORD *)(v99 + 8) = i;
                  sub_8A110(v169.m128_u64[0], (__int64 *)i);
                }
                ++*(_QWORD *)(a1 + 824);
                continue;
              }
              break;
            }
            if ( v9[3].m128i_i32[0] > 2u )
            {
              if ( (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 832), (unsigned __int64 *)v9, v49) )
                goto LABEL_170;
              return 0;
            }
            v162 = *(_QWORD *)(a1 + 848);
            *(_QWORD *)(a1 + 840) = 0;
            if ( v162 )
            {
              *(_QWORD *)(a1 + 856) = 0;
              qfree(v162);
              *(_QWORD *)(a1 + 848) = 0;
              *(_QWORD *)(a1 + 864) = 0;
            }
LABEL_170:
            v169.m128_u64[0] = a1 + 872;
            sub_82C40((unsigned __int64 **)(a1 + 872));
            v101 = sub_7D4F0(v9, *(double *)v49.m128_u64);
            if ( v101 < 0 )
              return 0;
            v102 = *(__int64 **)(a1 + 872);
            while ( 1 )
            {
              v74 = v101-- == 0;
              if ( v74 )
                break;
              sub_7D150((__int64)v189, v9, *(double *)v49.m128_u64);
              v102 = (__int64 *)sub_896E0((__m128i *)v169.m128_u64[0], v102, (__int64)v189);
              if ( *(_QWORD *)v189 )
              {
                *(_QWORD *)&v189[8] = 0;
                qfree(*(__int64 *)v189);
              }
            }
            *(_DWORD *)(a1 + 888) = sub_7CD20(v9, *(double *)v49.m128_u64);
            *(_DWORD *)(a1 + 892) = sub_7CD20(v9, *(double *)v49.m128_u64);
            *(_DWORD *)(a1 + 896) = sub_7CD20(v9, *(double *)v49.m128_u64);
            *(_DWORD *)(a1 + 900) = sub_7CD20(v9, *(double *)v49.m128_u64);
            *(_DWORD *)(a1 + 904) = sub_7CD20(v9, *(double *)v49.m128_u64);
            *(_DWORD *)(a1 + 908) = sub_7CD20(v9, *(double *)v49.m128_u64);
            v109 = sub_7CD20(v9, *(double *)v49.m128_u64);
            v110 = *(_QWORD *)(a1 + 920);
            *(_DWORD *)(a1 + 912) = v109;
            if ( v110 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 8LL))(v110);
            *(_QWORD *)(a1 + 920) = 0;
            if ( (n[0] & 4) != 0 )
            {
              v111 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 336LL))(*(_QWORD *)(a1 + 1504));
              *(_QWORD *)(a1 + 920) = v111;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v111 + 24LL))(v111, v9) )
                return 0;
            }
            v112 = *(_QWORD *)(a1 + 928);
            if ( v112 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 8LL))(v112);
            v113 = *(_QWORD *)(a1 + 936);
            *(_QWORD *)(a1 + 928) = 0;
            if ( v113 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 8LL))(v113);
            *(_QWORD *)(a1 + 936) = 0;
            if ( (n[0] & 8) != 0 )
            {
              v160 = *(_QWORD *)(a1 + 928);
              if ( !v160 )
              {
                v167 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 312LL))(
                         *(_QWORD *)(a1 + 1504),
                         a1);
                *(_QWORD *)(a1 + 928) = v167;
                v160 = v167;
              }
              (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v160 + 88LL))(v160, v9);
              if ( (n[0] & 0x10) != 0 )
              {
                v161 = sub_19FD50(*(_QWORD *)(a1 + 928));
                *(_QWORD *)(a1 + 936) = v161;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v161 + 112LL))(v161, v9) )
                  return 0;
              }
            }
            if ( v9[3].m128i_i32[0] <= 4u )
            {
              if ( v9->m128i_i64[0] >= (unsigned __int64)v9->m128i_i64[1] )
                sub_7A510(*(double *)v49.m128_u64);
              v114 = unpack_dd();
              if ( v9->m128i_i64[1] - v9->m128i_i64[0] < (unsigned __int64)v114 )
                return 0;
              if ( v114 )
                return 0;
              v115 = sub_7CD20(v9, *(double *)v49.m128_u64);
              if ( v9->m128i_i64[1] - v9->m128i_i64[0] < (unsigned __int64)v115
                || v115
                || (unsigned int)sub_7D4F0(v9, *(double *)v49.m128_u64) )
              {
                return 0;
              }
              sub_7CD20(v9, *(double *)v49.m128_u64);
            }
            if ( !(unsigned __int8)sub_7A640(v16, 0, 0x3B8u)
              || (unsigned __int8)sub_7D6B0((__int64)v9, (_QWORD *)(a1 + 952), *(double *)v49.m128_u64) )
            {
              v12 = sub_7D6B0((__int64)v9, (_QWORD *)(a1 + 1000), *(double *)v49.m128_u64);
              if ( (_BYTE)v12
                && (!(unsigned __int8)sub_7A640(v16, 0, 0x418u)
                 || (unsigned __int8)sub_7D6B0((__int64)v9, (_QWORD *)(a1 + 1048), *(double *)v49.m128_u64))
                && (v9[3].m128i_i32[0] > 5u
                 || !(unsigned __int8)sub_7A640(v16, 0, 0x448u)
                 || (unsigned __int8)sub_7D920(v9, *(double *)v49.m128_u64)) )
              {
                LOBYTE(v173) = sub_7A640(v16, 0, 0x478u);
                if ( (_BYTE)v173 )
                {
                  v169.m128_u64[0] = a1 + 1144;
                  sub_83E70((unsigned __int64 **)(a1 + 1144));
                  v171 = sub_7D4F0(v9, *(double *)v49.m128_u64);
                  if ( v171 < 0 )
                    return 0;
                  v116 = *(_QWORD *)(a1 + 1144);
LABEL_216:
                  while ( 2 )
                  {
                    while ( 2 )
                    {
                      if ( --v171 == -1 )
                        goto LABEL_251;
                      v170 = sub_7CFC0((__int64)v9, 0, *(double *)v49.m128_u64);
                      v117 = sub_7CFC0((__int64)v9, 0, *(double *)v49.m128_u64);
                      v118 = *(unsigned __int64 **)(a1 + 1144);
                      v177 = (const __m128i *)v189;
                      *(_QWORD *)&v189[8] = v117;
                      *(_QWORD *)v189 = v170;
                      v119 = v118;
                      if ( v118 )
                      {
                        if ( *(_QWORD *)(a1 + 1152) )
                        {
                          v178 = v118;
                          LOBYTE(v176) = 1;
                          v179 = 0;
                          if ( v116 )
                          {
                            v175 = v118;
                            v174 = v118;
                            v120 = sub_885D0(
                                     (unsigned __int64 *)v169.m128_u64[0],
                                     (unsigned __int64 *)v189,
                                     (_QWORD *)v116,
                                     (unsigned __int64 *)&v178,
                                     &v176,
                                     &v179);
                            v119 = v174;
                            v118 = v175;
                            if ( v120 )
                            {
                              v116 = v179;
                              if ( !v179 )
                              {
                                v121 = sub_8A520((__m128i *)v169.m128_u64[0], v178, (char)v176, &v177);
LABEL_223:
                                v116 = v121;
                              }
                              continue;
                            }
                          }
                          v116 = *v118 & 0xFFFFFFFFFFFFFFFCLL;
                          v122 = (char)v173;
                          while ( 1 )
                          {
                            if ( (*(_BYTE *)v116 & 2) != 0 )
                              goto LABEL_230;
                            v133 = *(_QWORD *)(v116 + 24);
                            if ( v170 >= v133 )
                            {
                              if ( v133 >= v170 )
                              {
                                if ( !v116 )
                                {
                                  v119 = nullptr;
LABEL_230:
                                  v121 = sub_8A520((__m128i *)v169.m128_u64[0], v119, v122, &v177);
                                  goto LABEL_223;
                                }
                                goto LABEL_216;
                              }
                              v134 = *(_QWORD *)(v116 + 16);
                              v122 = 0;
                            }
                            else
                            {
                              v134 = *(_QWORD *)(v116 + 8);
                              v122 = (char)v173;
                            }
                            v119 = (unsigned __int64 *)v116;
                            v116 = v134;
                          }
                        }
                      }
                      else
                      {
                        v123 = qalloc();
                        v124 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v123, (__m128i)(unsigned __int64)v123);
                        if ( !v123 )
                        {
                          v6 = __cxa_allocate_exception(8u);
                          *v6 = (char *)&`vtable for'std::bad_alloc + 16;
                          __cxa_throw(
                            v6,
                            (struct type_info *)&`typeinfo for'std::bad_alloc,
                            (void (*)(void *))&std::bad_alloc::~bad_alloc);
                        }
                        v125 = 10;
                        v126 = (_DWORD *)v123;
                        while ( v125 )
                        {
                          *v126++ = 0;
                          --v125;
                        }
                        *(__m128i *)(v123 + 8) = v124;
                        *(_QWORD *)v123 = v123 & 0xFFFFFFFFFFFFFFFCLL | 2;
                        *(_QWORD *)(a1 + 1144) = v123;
                        *(_QWORD *)v123 = v123 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v123 & 3LL;
                        *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                                       (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                                       (__m128i)*(unsigned __int64 *)(a1 + 1144));
                        **(_QWORD **)(a1 + 1144) &= ~1uLL;
                        **(_QWORD **)(a1 + 1144) |= 2uLL;
                        v118 = *(unsigned __int64 **)(a1 + 1144);
                      }
                      break;
                    }
                    v170 = (unsigned __int64)v118;
                    v116 = qalloc();
                    if ( !v116 )
                    {
                      v7 = __cxa_allocate_exception(8u);
                      *v7 = (char *)&`vtable for'std::bad_alloc + 16;
                      __cxa_throw(
                        v7,
                        (struct type_info *)&`typeinfo for'std::bad_alloc,
                        (void (*)(void *))&std::bad_alloc::~bad_alloc);
                    }
                    v127 = 10;
                    v128 = (_DWORD *)v116;
                    v129 = v170;
                    while ( v127 )
                    {
                      *v128++ = 0;
                      --v127;
                    }
                    v130 = _mm_load_si128((const __m128i *)v189);
                    *(_QWORD *)v116 = v129 & 0xFFFFFFFFFFFFFFFCLL;
                    *(__m128i *)(v116 + 24) = v130;
                    v131 = _mm_loadl_epi64((const __m128i *)(a1 + 1144));
                    *(_QWORD *)v116 = v129 & 0xFFFFFFFFFFFFFFFCLL | 1;
                    v49 = (__m128)_mm_unpacklo_epi64(v131, v131);
                    *(__m128 *)(v116 + 8) = v49;
                    if ( v129 == *(_QWORD *)(a1 + 1144) )
                    {
                      *(_QWORD *)v129 = v116 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v129 & 3LL;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 8LL) = v116;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 16LL) = v116;
                      v135 = *(_QWORD *)v116 & 2LL;
                      *(_QWORD *)v116 &= ~1uLL;
                      *(_QWORD *)v116 = v135 | *(_QWORD *)(a1 + 1144) & 0xFFFFFFFFFFFFFFFCLL;
                    }
                    else
                    {
                      *(_QWORD *)(v129 + 8) = v116;
                      v132 = *(_QWORD *)(a1 + 1144);
                      if ( v129 == *(_QWORD *)(v132 + 8) )
                        *(_QWORD *)(v132 + 8) = v116;
                      sub_8A110(v169.m128_u64[0], (__int64 *)v116);
                    }
                    ++*(_QWORD *)(a1 + 1152);
                    continue;
                  }
                }
LABEL_251:
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x488u)
                  && !(unsigned __int8)sub_7E080((__int64 *)(a1 + 1160), (__int64)v9, v49) )
                {
                  return 0;
                }
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x4A0u) )
                  *(_DWORD *)(a1 + 1184) = sub_7CD20(v9, *(double *)v49.m128_u64) - 1;
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x4A8u) )
                {
                  if ( !(unsigned __int8)sub_7D9D0((__int64)v9, (__int64 *)(a1 + 1192), *(double *)v49.m128_u64) )
                    return 0;
                  if ( v9[2].m128i_i32[3] == 2 )
                  {
                    v154 = *(_QWORD *)(a1 + 1192);
                    if ( v154 )
                    {
                      *(_QWORD *)(a1 + 1200) = 0;
                      qfree(v154);
                      *(_QWORD *)(a1 + 1192) = 0;
                      *(_QWORD *)(a1 + 1208) = 0;
                    }
                  }
                }
                v136 = 0;
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x4C0u) )
                {
                  v136 = a1 + 1216;
                  if ( !(unsigned __int8)sub_82D50(v9, (__int64 *)(a1 + 1216), *(double *)v49.m128_u64) )
                    return 0;
                  v159 = *(__int64 **)(a1 + 1216);
                  v169.m128_u64[0] = (unsigned __int64)&v159[*(_QWORD *)(a1 + 1224)];
                  while ( (__int64 *)v169.m128_u64[0] != v159 )
                  {
                    v136 = 0;
                    *v159++ = sub_7CFC0((__int64)v9, 0, *(double *)v49.m128_u64);
                  }
                }
                if ( v172 )
                {
                  v155 = j__qalloc_or_throw(176, v136, v137, v138);
                  *(_QWORD *)(v155 + 8) = 0;
                  *(_QWORD *)(v155 + 96) = 0;
                  *(_BYTE *)(v155 + 32) = 0;
                  *(_QWORD *)v155 = off_4EBC98;
                  *(_QWORD *)(v155 + 48) = 0;
                  *(_QWORD *)(v155 + 36) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v155 + 72) = 0;
                  *(_QWORD *)(v155 + 120) = 0;
                  *(_DWORD *)(v155 + 144) = 0;
                  *(_QWORD *)(v155 + 152) = 0;
                  *(_OWORD *)(v155 + 16) = 0;
                  *(_OWORD *)(v155 + 56) = 0;
                  *(_OWORD *)(v155 + 80) = 0;
                  *(_OWORD *)(v155 + 104) = 0;
                  *(_OWORD *)(v155 + 128) = 0;
                  *(_OWORD *)(v155 + 160) = 0;
                  *(_QWORD *)(a1 + 1240) = v155;
                  if ( !(unsigned __int8)sub_7E9C0(v155, v9, 0.0) )
                    return 0;
                  v158 = qalloc_or_throw(24, (__int64)v9, v156, v157);
                  v49 = 0;
                  *(_QWORD *)v158 = 0;
                  *(_OWORD *)(v158 + 8) = 0;
                  *(_QWORD *)(a1 + 1248) = v158;
                  if ( !(unsigned __int8)sub_7DB20((__int64)v9, v158, (__m128i)0LL) )
                    return 0;
                }
                else
                {
                  v139 = *(_QWORD *)(a1 + 1240);
                  if ( v139 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v139 + 8LL))(v139);
                  v140 = *(__int64 **)(a1 + 1248);
                  *(_QWORD *)(a1 + 1240) = 0;
                  if ( v140 )
                  {
                    v141 = *v140;
                    if ( *v140 )
                    {
                      v140[1] = 0;
                      qfree(v141);
                    }
                    qfree((__int64)v140);
                  }
                  *(_QWORD *)(a1 + 1248) = 0;
                }
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x4E8u) )
                {
                  sub_2D7F40(a1 + 1256, v9, (__m128i)v49);
                  if ( v9[2].m128i_i32[3] == 2 )
                    sub_83D10(a1 + 1256);
                }
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x520u) )
                {
                  if ( !(unsigned __int8)sub_2D5590((__m128i *)(a1 + 1312), v9, v9->m128i_u64[1]) )
                    return 0;
                  if ( v9[2].m128i_i32[3] == 2 )
                    sub_83F70((unsigned __int64 **)(a1 + 1312));
                }
                v142 = *(_QWORD *)(a1 + 1328);
                if ( v142 )
                {
                  sub_82E00(*(__int64 **)(a1 + 1328));
                  qfree(v142);
                }
                *(_QWORD *)(a1 + 1328) = 0;
                if ( (n[0] & 0x20) != 0 )
                  *(_QWORD *)(a1 + 1328) = sub_2D2D60((__int64)v9);
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x540u) )
                {
                  v143 = *(_QWORD *)(a1 + 1344);
                  if ( v143 )
                  {
                    sub_82FA0(*(__int64 **)(a1 + 1344));
                    qfree(v143);
                  }
                  *(_QWORD *)(a1 + 1344) = 0;
                  if ( (n[0] & 0x40) != 0 )
                  {
                    v150 = sub_2D5B10((unsigned __int8 **)v9, v9->m128i_u64[1], v9[2].m128i_i64[0]);
                    *(_QWORD *)(a1 + 1344) = v150;
                    v151 = (__int64)v150;
                    if ( v9[2].m128i_i32[3] == 2 )
                    {
                      if ( v150 )
                      {
                        sub_82FA0(v150->m128i_i64);
                        qfree(v151);
                      }
                      *(_QWORD *)(a1 + 1344) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x538u) )
                {
                  v144 = *(_QWORD *)(a1 + 1336);
                  if ( v144 )
                  {
                    sub_83120(*(__int64 **)(a1 + 1336));
                    qfree(v144);
                  }
                  *(_QWORD *)(a1 + 1336) = 0;
                  if ( (n[0] & 0x100) != 0 )
                  {
                    v152 = sub_2C3020((unsigned __int64 *)v9, v9->m128i_u64[1], v9[1].m128i_i64[0]);
                    *(_QWORD *)(a1 + 1336) = v152;
                    v153 = (__int64)v152;
                    if ( v9[2].m128i_i32[3] == 2 )
                    {
                      if ( v152 )
                      {
                        sub_83120(v152);
                        qfree(v153);
                      }
                      *(_QWORD *)(a1 + 1336) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x548u) )
                  *(_QWORD *)(a1 + 1352) = sub_7CFC0((__int64)v9, 1u, *(double *)v49.m128_u64);
                sub_84080((unsigned __int64 **)(a1 + 1360));
                if ( (unsigned __int8)sub_7A640(v16, 0, 0x560u) )
                {
                  n[0] = a1 + 1376;
                  sub_84190((unsigned __int64 **)(a1 + 1376));
                  v145 = sub_7D4F0(v9, *(double *)v49.m128_u64);
                  if ( v145 < 0 )
                    return 0;
                  v146 = *(unsigned __int64 **)(a1 + 1376);
                  while ( 1 )
                  {
                    v74 = v145-- == 0;
                    if ( v74 )
                      break;
                    v169.m128_u64[0] = sub_7CFC0((__int64)v9, 0, *(double *)v49.m128_u64);
                    *(_QWORD *)v189 = 0;
                    sub_7D2C0((unsigned __int8 **)v9, v189, *(double *)v49.m128_u64);
                    v146 = sub_8AC30((__m128i *)n[0], v146, v169.m128_i64[0]);
                    clear_tinfo_t();
                  }
                }
                n[0] = a1 + 1392;
                sub_84190((unsigned __int64 **)(a1 + 1392));
                v147 = sub_7D4F0(v9, *(double *)v49.m128_u64);
                if ( v147 >= 0 )
                {
                  v148 = *(unsigned __int64 **)(a1 + 1392);
                  while ( 1 )
                  {
                    v74 = v147-- == 0;
                    if ( v74 )
                      break;
                    v169.m128_u64[0] = sub_7CFC0((__int64)v9, 0, *(double *)v49.m128_u64);
                    *(_QWORD *)v189 = 0;
                    sub_7D2C0((unsigned __int8 **)v9, v189, *(double *)v49.m128_u64);
                    v148 = sub_8AC30((__m128i *)n[0], v148, v169.m128_i64[0]);
                    clear_tinfo_t();
                  }
                  if ( v9[3].m128i_i32[0] <= 1u )
                    goto LABEL_295;
                  if ( !(unsigned __int8)sub_82D50(v9, (__int64 *)(a1 + 1408), *(double *)v49.m128_u64) )
                    return 0;
                  if ( *(_QWORD *)(a1 + 1416) )
                  {
                    *(_QWORD *)(a1 + 1432) = sub_7CFC0((__int64)v9, 0, *(double *)v49.m128_u64);
                    v165 = *(__int64 **)(a1 + 1408);
                    v166 = &v165[*(_QWORD *)(a1 + 1416)];
                    while ( v166 != v165 )
                      *v165++ = sub_7D100((__int64)v9, *(double *)v49.m128_u64);
                  }
                  else
                  {
                    *(_QWORD *)(a1 + 1432) = -1;
                  }
                  if ( v9[3].m128i_i32[0] > 0xBu )
                    sub_7F400(*(_QWORD *)(a1 + 944), (__int64)v9, a1, v49);
                  if ( v9[3].m128i_i32[0] <= 3u )
LABEL_295:
                    v149 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1408LL);
                  else
                    v149 = sub_7CFC0((__int64)v9, 0, *(double *)v49.m128_u64);
                  *(_QWORD *)(a1 + 1440) = v149;
                  if ( (unsigned int)sub_7CD20(v9, *(double *)v49.m128_u64) == -559038737 )
                  {
                    sub_321ED0(a1, 1, *(double *)v49.m128_u64, (__m128)0LL);
                    return (unsigned int)v12;
                  }
                }
              }
            }
            return 0;
          }
          v103 = (__int64 *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
          v104 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v104 & 2) != 0 )
          {
LABEL_183:
            *v48 = (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFFCLL | *v48 & 3;
            v107 = *(_QWORD *)(a1 + 816);
            v49 = (__m128)_mm_unpacklo_epi64((__m128i)v107, (__m128i)v107);
            *(__m128 *)(v107 + 8) = v49;
            **(_QWORD **)(a1 + 816) &= ~1uLL;
            **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_184:
            *(_QWORD *)(a1 + 824) = 0;
            goto LABEL_64;
          }
          v105 = (__int64 *)v103[1];
          if ( (*(_BYTE *)v105 & 2) != 0 )
          {
            v106 = (__int64 *)v103[2];
            if ( (*(_BYTE *)v106 & 2) != 0 )
              goto LABEL_186;
          }
          else
          {
            sub_7ACC0(v105);
            v106 = (__int64 *)v103[2];
            if ( (*(_BYTE *)v106 & 2) != 0 )
              goto LABEL_179;
          }
          sub_7ACC0(v106);
LABEL_179:
          v104 = *v103;
          if ( (*v103 & 2) != 0 )
          {
LABEL_180:
            if ( v50 > 3 )
              qfree(v50 & 0xFFFFFFFFFFFFFFFCLL);
            v48 = *(unsigned __int64 **)(a1 + 816);
            goto LABEL_183;
          }
LABEL_186:
          *v103 = v104 | 2;
          goto LABEL_180;
        }
        v75 = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
        v76 = v75 - 1;
        if ( v75 )
        {
          v77 = (_QWORD *)get_func();
          *(_QWORD *)(a1 + 8) = v77;
          if ( !v77 || *v77 != v76 )
            return 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        if ( !(unsigned __int8)sub_7DB20(a2, a1 + 16, (__m128i)a4) )
          return 0;
        v78 = *(_QWORD **)(a1 + 8);
        if ( v78 )
        {
          if ( *(_QWORD *)(a1 + 24) )
            return 0;
          if ( *(_DWORD *)(a2 + 40) == 4 )
            goto LABEL_123;
        }
        else
        {
          if ( *(_DWORD *)(a2 + 40) == 4 )
          {
LABEL_123:
            v79 = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
            v80 = *(_QWORD **)(a1 + 8);
            v81 = v79 - 1;
            *(_QWORD *)(a1 + 40) = v81;
            if ( v80 && v81 != *v80 )
              return 0;
            *(_QWORD *)(a2 + 32) = v81;
            goto LABEL_16;
          }
          v78 = *(_QWORD **)(a1 + 16);
        }
        if ( a3 != *v78 )
          return 0;
        goto LABEL_123;
      }
LABEL_85:
      if ( v16 != 3 || v17 != 2 )
        return 0;
      *(_DWORD *)(a2 + 40) = 3;
      goto LABEL_8;
    }
LABEL_113:
    *(_DWORD *)(a2 + 40) = 4;
LABEL_114:
    v16 = 4;
    goto LABEL_8;
  }
  if ( v15 <= 5 )
    goto LABEL_111;
LABEL_89:
  if ( v17 != 1 )
  {
    v16 = v17;
    goto LABEL_8;
  }
  *(_QWORD *)(a2 + 32) = -1;
  *(_DWORD *)a1 = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64) & 0xEFFFFFFF;
  sub_7D150((__int64)v189, (_QWORD *)a2, *(double *)a4.m128_u64);
  v59 = *(_QWORD *)(a1 + 408);
  v60 = *(_QWORD *)v189;
  memset(v189, 0, sizeof(v189));
  v61 = (__m128)_mm_loadu_si128((const __m128i *)&v189[8]);
  if ( v59 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    *(__m128 *)n = v61;
    qfree(v59);
    v61 = (__m128)_mm_load_si128((const __m128i *)n);
    v62 = *(_QWORD *)v189;
    *(_QWORD *)(a1 + 408) = v60;
    *(__m128 *)(a1 + 416) = v61;
    if ( v62 )
    {
      *(_QWORD *)&v189[8] = 0;
      qfree(v62);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 408) = v60;
    *(__m128 *)(a1 + 416) = v61;
  }
  v63 = sub_7D4F0((_QWORD *)a2, *(double *)v61.m128_u64);
  if ( v63 < 0 )
    return 0;
  v64 = v63;
  v65 = *(_QWORD *)(a1 + 440);
  if ( v64 != v65 )
  {
    v179 = 0;
    v181 = 1;
    v180 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v61 = 0;
    src = nullptr;
    v184 = nullptr;
    v186 = 0;
    v187 = 0xFFFFFFFF00000000LL;
    v188 = 0;
    v183 = 0;
    v185 = 0;
    if ( v64 < v65 )
    {
      v83 = v64;
      v84 = v65;
      v85 = 104 * v64;
      do
      {
        ++v83;
        v86 = (_QWORD *)(v85 + *(_QWORD *)(a1 + 432));
        v85 += 104;
        sub_83E20(v86);
      }
      while ( v83 < v84 );
      *(_QWORD *)(a1 + 440) = v64;
    }
    else
    {
      v66 = *(_QWORD *)(a1 + 432);
      if ( (unsigned __int64)&v179 < v66 || (unsigned __int64)&v179 >= v66 + 104LL * *(_QWORD *)(a1 + 448) )
      {
        sub_88870((__int64 *)(a1 + 432), v64, (__int64)&v179);
      }
      else
      {
        v67 = &v179;
        *(_DWORD *)v189 = 0;
        copy_argloc();
        v191 = nullptr;
        v192 = 0;
        *(_QWORD *)&v189[16] = v180.m128i_i64[1];
        v190 = v181;
        if ( (_QWORD)v183 )
        {
          n[0] = v183;
          v87 = (void *)qalloc_or_throw(v183, (__int64)&v179, v183, v68);
          v67 = (unsigned __int64 *)src;
          v191 = v87;
          *((_QWORD *)&v192 + 1) = n[0];
          memcpy(v87, src, n[0]);
          *(_QWORD *)&v192 = n[0];
        }
        v61 = 0;
        v193 = nullptr;
        v194 = 0;
        if ( (_QWORD)v185 )
        {
          n[0] = v185;
          v193 = (void *)qalloc_or_throw(v185, (__int64)v67, v185, v68);
          *((_QWORD *)&v194 + 1) = n[0];
          memcpy(v193, v184, n[0]);
          *(_QWORD *)&v194 = n[0];
        }
        v195 = 0;
        copy_tinfo_t();
        v196 = v187;
        v197 = v188;
        sub_88870((__int64 *)(a1 + 432), v64, (__int64)v189);
        sub_83E20(v189);
      }
    }
    sub_83E20(&v179);
  }
  v12 = sub_7D4F0(v9, *(double *)v61.m128_u64);
  if ( v12 < 0 )
    return 0;
  while ( 1 )
  {
    v74 = v12-- == 0;
    if ( v74 )
      break;
    v73 = sub_67FD0(a1, -1, 0, v70, *(double *)v61.m128_u64);
    if ( !(unsigned __int8)sub_8BB70(v73, (__int64)v9, a1, v61) )
      return 0;
  }
  LOBYTE(v12) = (unsigned int)sub_330F20(a1, 1, v69, v70, v71, v72) == -33;
  return (unsigned int)v12;
}

