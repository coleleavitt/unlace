__int64 __fastcall sub_1E6A00(__int64 a1, unsigned __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 i; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v22; // rbp
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rdx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  __m128i v41; // xmm1
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  __m128i v44; // xmm2
  int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __m128i v53; // xmm1
  __m128i v54; // xmm0
  __m128i v55; // xmm2
  __int64 v56; // rcx
  __m128i v57; // kr00_16
  __m128i v58; // rax
  __int128 v59; // kr10_16
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  __int64 v63; // rax
  __m128i si128; // xmm1
  __m128i v65; // xmm0
  __m128i v66; // xmm2
  __int64 v67; // rdx
  __int64 v68; // r13
  __int64 v69; // r12
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  __m128i v74; // xmm1
  __m128i v75; // xmm0
  __m128i v76; // xmm2
  unsigned __int8 v77; // al
  __int64 v78; // rdx
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // rsi
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  __m128i v84; // rax
  unsigned __int128 v85; // kr20_16
  __m128i v86; // kr90_16
  int v87; // ecx
  int v88; // r8d
  int v89; // r9d
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  unsigned __int64 v92; // rsi
  int v93; // edx
  int v94; // ecx
  int v95; // r8d
  int v96; // r9d
  __m128i v97; // xmm1
  __m128i v98; // xmm0
  __m128i v99; // xmm2
  __m128i v100; // xmm1
  __m128i v101; // xmm0
  __m128i v102; // xmm2
  int v103; // edx
  int v104; // ecx
  int v105; // r8d
  int v106; // r9d
  __m128i v107; // xmm1
  __m128i v108; // xmm0
  __m128i v109; // xmm2
  unsigned __int64 v110; // rsi
  __int64 v111; // rdx
  unsigned __int64 v112; // rcx
  __m128i v113; // xmm1
  __m128i v114; // xmm0
  __m128i v115; // xmm2
  __m128i v116; // xmm1
  __m128i v117; // xmm0
  __m128i v118; // xmm2
  int v119; // ecx
  int v120; // r8d
  int v121; // r9d
  __int64 v122; // rax
  __int64 v123; // rsi
  __m128i v124; // krB0_16
  __m128i v125; // rax
  __int128 v126; // krC0_16
  __int128 v127; // krD0_16
  unsigned __int8 v128; // bp
  __int64 v129; // rdx
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rax
  __m128i *v132; // [rsp+0h] [rbp-218h]
  __int64 v133; // [rsp+0h] [rbp-218h]
  __m256i *v134; // [rsp+0h] [rbp-218h]
  unsigned __int8 v135; // [rsp+0h] [rbp-218h]
  __int64 v136; // [rsp+8h] [rbp-210h]
  __int64 v137; // [rsp+8h] [rbp-210h]
  int v138; // [rsp+10h] [rbp-208h]
  unsigned __int64 **v139; // [rsp+10h] [rbp-208h]
  int v140; // [rsp+10h] [rbp-208h]
  unsigned __int64 **v141; // [rsp+10h] [rbp-208h]
  __int64 v142; // [rsp+18h] [rbp-200h]
  int v143; // [rsp+18h] [rbp-200h]
  unsigned __int64 v144; // [rsp+18h] [rbp-200h]
  __int64 v145; // [rsp+20h] [rbp-1F8h]
  __int64 v146; // [rsp+20h] [rbp-1F8h]
  __m256i *v147; // [rsp+20h] [rbp-1F8h]
  __int64 v148; // [rsp+20h] [rbp-1F8h]
  __int64 v149; // [rsp+20h] [rbp-1F8h]
  __int64 v150; // [rsp+20h] [rbp-1F8h]
  __int64 v151; // [rsp+28h] [rbp-1F0h]
  __int64 *v152; // [rsp+30h] [rbp-1E8h]
  const __m128i *v153; // [rsp+30h] [rbp-1E8h]
  int v154; // [rsp+38h] [rbp-1E0h]
  unsigned __int8 v155; // [rsp+4Eh] [rbp-1CAh]
  unsigned __int8 v156; // [rsp+4Fh] [rbp-1C9h]
  __m256i v157; // [rsp+50h] [rbp-1C8h] BYREF
  __m128i v158; // [rsp+70h] [rbp-1A8h] BYREF
  __m128i v159; // [rsp+80h] [rbp-198h] BYREF
  __m128i v160; // [rsp+90h] [rbp-188h] BYREF
  __m128i v161; // [rsp+A0h] [rbp-178h] BYREF
  __m256i v162; // [rsp+B0h] [rbp-168h] BYREF
  __m128i v163; // [rsp+D0h] [rbp-148h] BYREF
  __m128i v164; // [rsp+E0h] [rbp-138h] BYREF
  __m256i v165; // [rsp+F0h] [rbp-128h] BYREF
  __m256i v166; // [rsp+110h] [rbp-108h] BYREF
  __m256i v167; // [rsp+130h] [rbp-E8h] BYREF
  __m256i v168; // [rsp+150h] [rbp-C8h] BYREF
  __m256i v169; // [rsp+170h] [rbp-A8h] BYREF
  __m256i v170; // [rsp+190h] [rbp-88h] BYREF
  __m128i v171; // [rsp+1B0h] [rbp-68h]
  __m128i v172; // [rsp+1C0h] [rbp-58h]
  unsigned __int64 v173; // [rsp+1D8h] [rbp-40h]

  v142 = a1;
  v6 = *(_QWORD *)(a2 + 24) + *(int *)(a2 + 44);
  v136 = a4;
  v7 = *(int *)(a4 + 4);
  v173 = __readfsqword(0x28u);
  v8 = a3->m128i_i64[0];
  v152 = (__int64 *)a2;
  LOBYTE(v138) = 0;
  v9 = v7 + a3->m128i_i64[0];
  if ( a3->m128i_i8[8] == 5 )
    LOBYTE(v138) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1504LL) + 96LL) + 145LL);
  if ( *(_DWORD *)(a2 + 40) != 8 )
  {
    v155 = v9 <= v6 && v8 >= *(_QWORD *)(a2 + 24);
    if ( v155 )
    {
      if ( (_BYTE)v138 )
      {
        if ( v8 <= *(_QWORD *)(a2 + 24) || v9 != v6 )
        {
          v153 = (const __m128i *)(a2 + 40);
          goto LABEL_67;
        }
      }
      else
      {
        v153 = (const __m128i *)(a2 + 40);
        if ( *(_QWORD *)(a2 + 24) != v8 || v9 >= v6 )
          goto LABEL_67;
      }
      v153 = (const __m128i *)(a2 + 40);
      v77 = sub_314CB0(a2 + 40, a4);
      if ( v77 )
      {
        if ( !*(_DWORD *)(a2 + 40) )
        {
          v135 = v77;
          sub_13F6F0((unsigned __int64 **)(a1 + 8));
          *(_BYTE *)(a1 + 24) = 1;
          return v135;
        }
        return v77;
      }
LABEL_67:
      v134 = &v167;
      sub_313000(&v167, v153);
      v48 = a3->m128i_i64[0];
      v148 = 0x800000000LL;
      v168.m256i_i64[0] = 0x800000000LL;
      memset(&v168.m256i_u64[1], 0, 24);
      if ( *(_QWORD *)(a2 + 24) >= v48 )
        goto LABEL_68;
      v56 = *(_QWORD *)(a2 + 24);
      if ( (_BYTE)v138 )
      {
        if ( (unsigned __int8)sub_3150C0(
                                (unsigned int)&v167,
                                (unsigned int)&v168,
                                v167.m256i_i32[1] - (int)v48 + (int)v56,
                                v56,
                                v46,
                                v47,
                                (__int64)&v167,
                                v136,
                                v138,
                                a1,
                                0) )
        {
          v58 = *(__m128i *)&v168.m256i_u64[2];
          v47 = v167.m256i_i64[3];
          v46 = v167.m256i_i64[2];
          v57 = *(__m128i *)v168.m256i_i8;
          v59 = *(_OWORD *)v167.m256i_i8;
          goto LABEL_89;
        }
      }
      else if ( (unsigned __int8)sub_3150C0(
                                   (unsigned int)&v167,
                                   (unsigned int)&v168,
                                   (int)v48 - (int)v56,
                                   v56,
                                   v46,
                                   v47,
                                   (__int64)&v167,
                                   v136,
                                   v138,
                                   a1,
                                   0) )
      {
        v57 = *(__m128i *)v167.m256i_i8;
        v58 = *(__m128i *)&v167.m256i_u64[2];
        v59 = *(_OWORD *)v168.m256i_i8;
        v47 = v168.m256i_i64[3];
        v46 = v168.m256i_i64[2];
LABEL_89:
        v171 = v57;
        v172 = v58;
        *(_OWORD *)v167.m256i_i8 = v59;
        v167.m256i_i64[2] = v46;
        v167.m256i_i64[3] = v47;
        *(__m128i *)v168.m256i_i8 = v57;
        *(__m128i *)&v168.m256i_u64[2] = v58;
LABEL_68:
        memset(&v169.m256i_u64[1], 0, 24);
        v169.m256i_i64[0] = v148;
        if ( v9 < v6 )
        {
          if ( (_BYTE)v138 )
          {
            if ( !(unsigned __int8)sub_3150C0(
                                     (_DWORD)v134,
                                     (unsigned int)&v169,
                                     v167.m256i_i32[1] - (int)v7,
                                     v45,
                                     v46,
                                     v47,
                                     (__int64)v134,
                                     v136,
                                     v138,
                                     v142,
                                     v148) )
              goto LABEL_85;
            si128 = _mm_load_si128((const __m128i *)&v167);
            v65 = _mm_load_si128((const __m128i *)&v167.m256i_u64[2]);
            *(__m128i *)v167.m256i_i8 = _mm_load_si128((const __m128i *)&v169);
            v66 = _mm_load_si128((const __m128i *)&v169.m256i_u64[2]);
            v171 = si128;
            v172 = v65;
            *(__m128i *)&v167.m256i_u64[2] = v66;
            *(__m128i *)v169.m256i_i8 = si128;
            *(__m128i *)&v169.m256i_u64[2] = v65;
          }
          else if ( !(unsigned __int8)sub_3150C0(
                                        (_DWORD)v134,
                                        (unsigned int)&v169,
                                        v7,
                                        v45,
                                        v46,
                                        v47,
                                        (__int64)v134,
                                        v136,
                                        v138,
                                        v142,
                                        v148) )
          {
            goto LABEL_85;
          }
        }
        if ( !(unsigned __int8)sub_314B70(v134, v136) )
        {
LABEL_76:
          sub_312F40(&v169);
LABEL_77:
          sub_312F40(&v168);
          sub_312F40(v134);
          return v155;
        }
        if ( !v167.m256i_i32[0] )
        {
          sub_13F6F0((unsigned __int64 **)(v142 + 8));
          *(_BYTE *)(v142 + 24) = 1;
          goto LABEL_76;
        }
        if ( *(_QWORD *)(a2 + 24) < a3->m128i_i64[0] )
        {
          if ( (_BYTE)v138 )
          {
            sub_313000(&v170, v134);
            if ( !(unsigned __int8)sub_314000(
                                     (unsigned int)&v170,
                                     (unsigned int)&v168,
                                     v103,
                                     v104,
                                     v105,
                                     v106,
                                     (_DWORD)v134,
                                     v136,
                                     v138,
                                     v142,
                                     (unsigned int)&v170) )
              goto LABEL_166;
            v107 = _mm_load_si128((const __m128i *)&v168);
            v108 = _mm_load_si128((const __m128i *)&v168.m256i_u64[2]);
            *(__m128i *)v168.m256i_i8 = _mm_load_si128((const __m128i *)&v170);
            v109 = _mm_load_si128((const __m128i *)&v170.m256i_u64[2]);
            v171 = v107;
            v172 = v108;
            *(__m128i *)&v168.m256i_u64[2] = v109;
            *(__m128i *)v170.m256i_i8 = v107;
            *(__m128i *)&v170.m256i_u64[2] = v108;
            sub_312F40(&v170);
          }
          else if ( !(unsigned __int8)sub_314000(
                                        (unsigned int)&v168,
                                        (_DWORD)v134,
                                        v49,
                                        v50,
                                        v51,
                                        v52,
                                        (_DWORD)v134,
                                        v136,
                                        v138,
                                        v142,
                                        v148) )
          {
            goto LABEL_85;
          }
          v74 = _mm_load_si128((const __m128i *)&v167);
          v75 = _mm_load_si128((const __m128i *)&v167.m256i_u64[2]);
          *(__m128i *)v167.m256i_i8 = _mm_load_si128((const __m128i *)&v168);
          v76 = _mm_load_si128((const __m128i *)&v168.m256i_u64[2]);
          v171 = v74;
          v172 = v75;
          *(__m128i *)&v167.m256i_u64[2] = v76;
          *(__m128i *)v168.m256i_i8 = v74;
          *(__m128i *)&v168.m256i_u64[2] = v75;
        }
        if ( v9 >= v6 )
        {
LABEL_75:
          sub_314B70(v134, v153);
          v53 = _mm_loadu_si128((const __m128i *)(a2 + 40));
          v54 = _mm_loadu_si128(v153 + 1);
          *(__m128i *)(a2 + 40) = _mm_load_si128((const __m128i *)&v167);
          v55 = _mm_load_si128((const __m128i *)&v167.m256i_u64[2]);
          v171 = v53;
          v172 = v54;
          v153[1] = v55;
          *(__m128i *)v167.m256i_i8 = v53;
          *(__m128i *)&v167.m256i_u64[2] = v54;
          goto LABEL_76;
        }
        if ( !(_BYTE)v138 )
        {
          if ( (unsigned __int8)sub_314000(
                                  (_DWORD)v134,
                                  (unsigned int)&v169,
                                  v49,
                                  v50,
                                  v51,
                                  v52,
                                  (_DWORD)v134,
                                  v136,
                                  v138,
                                  v142,
                                  v148) )
            goto LABEL_75;
LABEL_85:
          v155 = 0;
          goto LABEL_76;
        }
        sub_313000(&v170, &v169);
        if ( (unsigned __int8)sub_314000(
                                (unsigned int)&v170,
                                (_DWORD)v134,
                                v93,
                                v94,
                                v95,
                                v96,
                                (_DWORD)v134,
                                v136,
                                v138,
                                v142,
                                (unsigned int)&v170) )
        {
          v97 = _mm_load_si128((const __m128i *)&v167);
          v98 = _mm_load_si128((const __m128i *)&v167.m256i_u64[2]);
          *(__m128i *)v167.m256i_i8 = _mm_load_si128((const __m128i *)&v170);
          v99 = _mm_load_si128((const __m128i *)&v170.m256i_u64[2]);
          v171 = v97;
          v172 = v98;
          *(__m128i *)&v167.m256i_u64[2] = v99;
          *(__m128i *)v170.m256i_i8 = v97;
          *(__m128i *)&v170.m256i_u64[2] = v98;
          sub_312F40(&v170);
          goto LABEL_75;
        }
LABEL_166:
        sub_312F40(v148);
        goto LABEL_85;
      }
      v155 = 0;
      goto LABEL_77;
    }
  }
  v155 = sub_312EB0(a4, 0);
  if ( !v155 )
    return v155;
  memset(&v157.m256i_u64[1], 0, 24);
  v145 = 0x800000000LL;
  v157.m256i_i64[0] = 0x800000000LL;
  if ( *(_QWORD *)(a2 + 24) > a3->m128i_i64[0] )
  {
    v13 = *(__int64 **)(a1 + 8);
    if ( (__int64 *)a2 != v13 )
    {
      v156 = 0;
      v11 = a2;
      goto LABEL_35;
    }
    memset(&v167.m256i_u64[1], 0, 24);
    v11 = a2;
    v167.m256i_i64[0] = 0x800000000LL;
    v132 = (__m128i *)&v167;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(a2 + 40) != 8 )
  {
    v132 = &v158;
    sub_313000(&v158, a2 + 40);
    v20 = a3->m128i_i64[0];
    if ( *(_QWORD *)(a2 + 24) >= a3->m128i_i64[0] )
      goto LABEL_24;
    v81 = *(_QWORD *)(a2 + 24);
    if ( (_BYTE)v138 )
    {
      if ( (unsigned __int8)sub_3150C0(
                              (unsigned int)&v158,
                              (unsigned int)&v157,
                              v158.m128i_i32[1] - (int)v20 + (int)v81,
                              v81,
                              v18,
                              v19,
                              (__int64)&v158,
                              v136,
                              v138,
                              a1,
                              0) )
      {
        v83 = v157.m256i_i64[0];
        v84 = *(__m128i *)&v157.m256i_u64[2];
        v82 = v157.m256i_i64[1];
        v86 = v158;
        v19 = v159.m128i_i64[1];
        v18 = v159.m128i_i64[0];
        goto LABEL_131;
      }
    }
    else if ( (unsigned __int8)sub_3150C0(
                                 (unsigned int)&v158,
                                 (unsigned int)&v157,
                                 (int)v20 - (int)v81,
                                 v81,
                                 v18,
                                 v19,
                                 (__int64)&v158,
                                 v136,
                                 v138,
                                 a1,
                                 0) )
    {
      v82 = v158.m128i_i64[1];
      v83 = v158.m128i_i64[0];
      v84 = v159;
      v85 = *(_OWORD *)&v157.m256i_u64[2];
      v19 = v85 >> 64;
      v18 = v85;
      v86 = *(__m128i *)v157.m256i_i8;
LABEL_131:
      v171.m128i_i64[0] = v83;
      v171.m128i_i64[1] = v82;
      v172 = v84;
      v158 = v86;
      v159.m128i_i64[0] = v18;
      v159.m128i_i64[1] = v19;
      v157.m256i_i64[0] = v83;
      v157.m256i_i64[1] = v82;
      *(__m128i *)&v157.m256i_u64[2] = v84;
LABEL_24:
      if ( v9 <= v6 )
      {
        memset(&v170.m256i_u64[1], 0, 24);
        v170.m256i_i64[0] = v145;
        if ( v9 >= v6 )
        {
          v147 = &v170;
        }
        else if ( (_BYTE)v138 )
        {
          if ( !(unsigned __int8)sub_3150C0(
                                   (_DWORD)v132,
                                   (unsigned int)&v170,
                                   v158.m128i_i32[1] - (int)v7,
                                   v17,
                                   v18,
                                   v19,
                                   (__int64)v132,
                                   v136,
                                   v138,
                                   v142,
                                   (unsigned int)&v170) )
            goto LABEL_28;
          v100 = _mm_load_si128(&v158);
          v101 = _mm_load_si128(&v159);
          v158 = _mm_load_si128((const __m128i *)&v170);
          v102 = _mm_load_si128((const __m128i *)&v170.m256i_u64[2]);
          v171 = v100;
          v172 = v101;
          v159 = v102;
          *(__m128i *)v170.m256i_i8 = v100;
          *(__m128i *)&v170.m256i_u64[2] = v101;
        }
        else if ( !(unsigned __int8)sub_3150C0(
                                      (_DWORD)v132,
                                      (unsigned int)&v170,
                                      v7,
                                      v17,
                                      v18,
                                      v19,
                                      (__int64)v132,
                                      v136,
                                      v138,
                                      v142,
                                      (unsigned int)&v170) )
        {
LABEL_28:
          v155 = 0;
LABEL_29:
          sub_312F40(v147);
LABEL_30:
          sub_312F40(v132);
          goto LABEL_31;
        }
        if ( (unsigned __int8)sub_314B70(v132, v136) && !v158.m128i_i32[0] )
        {
          sub_13F6F0((unsigned __int64 **)(v142 + 8));
          *(_BYTE *)(v142 + 24) = 1;
        }
        else
        {
          v67 = *(_QWORD *)a2;
          v68 = a3->m128i_i64[1];
          v69 = *(_QWORD *)(a2 + 24);
          v141 = (unsigned __int64 **)(v142 + 8);
          v70 = a2;
          if ( (*(_QWORD *)a2 & 2) == 0 )
          {
            v71 = *(_QWORD *)(a2 + 16);
            if ( (*(_BYTE *)v71 & 2) != 0 )
            {
              v110 = a2;
              v70 = v67 & 0xFFFFFFFFFFFFFFFCLL;
              v111 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v111 & 2) == 0 )
              {
                while ( 1 )
                {
                  if ( *(_QWORD *)(v70 + 16) != v110 )
                    goto LABEL_108;
                  v112 = v111 & 0xFFFFFFFFFFFFFFFCLL;
                  v111 = *(_QWORD *)(v111 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v111 & 2) != 0 )
                    break;
                  v110 = v70;
                  v70 = v112;
                }
                v70 = v112;
              }
            }
            else
            {
              do
              {
                v70 = v71;
                v71 = *(_QWORD *)(v71 + 8);
              }
              while ( (*(_BYTE *)v71 & 2) == 0 );
            }
          }
LABEL_108:
          v144 = v70;
          sub_1E4150(v141, (__int64 *)a2);
          v72 = v144;
          if ( v157.m256i_i32[0] > 1u )
            v72 = sub_1E4960((__m128i *)v141, v144, v69, v68, (__int64)&v157);
          v73 = sub_1E67B0((__m128i *)v141, v72, a3->m128i_i64[0], a3->m128i_i64[1], v136);
          if ( v170.m256i_i32[0] > 1u )
            sub_1E4960((__m128i *)v141, v73, v9, v68, (__int64)v147);
        }
        goto LABEL_29;
      }
      sub_313000(&v160, v136);
      memset(&v162.m256i_u64[1], 0, 24);
      v162.m256i_i64[0] = v145;
      if ( (_BYTE)v138 )
      {
        if ( (unsigned __int8)sub_3150C0(
                                (unsigned int)&v160,
                                (unsigned int)&v162,
                                v160.m128i_i32[1] - v158.m128i_i32[1],
                                v87,
                                v88,
                                v89,
                                (__int64)v132,
                                v136,
                                v138,
                                v142,
                                v145) )
        {
          v113 = _mm_load_si128(&v160);
          v114 = _mm_load_si128(&v161);
          v160 = _mm_load_si128((const __m128i *)&v162);
          v115 = _mm_load_si128((const __m128i *)&v162.m256i_u64[2]);
          v171 = v113;
          v172 = v114;
          v161 = v115;
          *(__m128i *)v162.m256i_i8 = v113;
          *(__m128i *)&v162.m256i_u64[2] = v114;
          goto LABEL_135;
        }
      }
      else if ( (unsigned __int8)sub_3150C0(
                                   (unsigned int)&v160,
                                   (unsigned int)&v162,
                                   v158.m128i_i32[1],
                                   v87,
                                   v88,
                                   v89,
                                   (__int64)v132,
                                   v136,
                                   v138,
                                   v142,
                                   v145) )
      {
LABEL_135:
        v156 = sub_314B70(&v160, v132);
        if ( v156 )
        {
          if ( !v160.m128i_i32[0] )
          {
            sub_13F6F0((unsigned __int64 **)(v142 + 8));
            *(_BYTE *)(v142 + 24) = 1;
            sub_312F40(&v162);
            sub_312F40(&v160);
            v155 = v156;
            goto LABEL_30;
          }
          if ( !under_debugger )
            sub_3835A0(52623);
          goto LABEL_198;
        }
        sub_312F40(&v162);
        sub_312F40(&v160);
        sub_312F40(v132);
        goto LABEL_10;
      }
      if ( !under_debugger )
        sub_3835A0(52622);
      goto LABEL_198;
    }
    v155 = 0;
    goto LABEL_30;
  }
  if ( v9 <= v6 )
  {
    v155 = 0;
    goto LABEL_31;
  }
  v156 = v155;
LABEL_10:
  v10 = *(_QWORD *)a2;
  v11 = a2;
  if ( (*(_QWORD *)a2 & 2) == 0 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
      v90 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v90 & 2) == 0 && *(_QWORD *)(v11 + 16) == a2 )
      {
        while ( 1 )
        {
          v91 = v90 & 0xFFFFFFFFFFFFFFFCLL;
          v90 = *(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v90 & 2) != 0 )
            break;
          v92 = v11;
          v11 = v91;
          if ( *(_QWORD *)(v91 + 16) != v92 )
            goto LABEL_14;
        }
        v11 = v91;
      }
    }
    else
    {
      for ( i = *(_QWORD *)(v11 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
        v11 = i;
    }
  }
LABEL_14:
  v13 = *(__int64 **)(v142 + 8);
  if ( v13 == (__int64 *)v11 )
  {
LABEL_15:
    memset(&v167.m256i_u64[1], 0, 24);
    v167.m256i_i64[0] = v145;
    v132 = (__m128i *)&v167;
    goto LABEL_16;
  }
  while ( 1 )
  {
LABEL_35:
    if ( *(_BYTE *)(v11 + 32) != a3->m128i_i8[8]
      || (v154 = *(_DWORD *)(v11 + 44), v22 = *(_QWORD *)(v11 + 24) + v154, v9 < v22) )
    {
      memset(&v167.m256i_u64[1], 0, 24);
      v167.m256i_i64[0] = v145;
      v132 = (__m128i *)&v167;
      if ( (__int64 *)v11 == v13 || *(_BYTE *)(v11 + 32) != a3->m128i_i8[8] || *(_QWORD *)(v11 + 24) >= v9 )
        goto LABEL_16;
      if ( *(_DWORD *)(v11 + 40) == 8 )
      {
LABEL_112:
        v155 = 0;
        goto LABEL_30;
      }
      sub_313000(&v168, v11 + 40);
      v63 = *(_QWORD *)(v11 + 24);
      if ( (_BYTE)v138 )
      {
        if ( !(unsigned __int8)sub_3150C0(
                                 (unsigned int)&v168,
                                 (unsigned int)&v167,
                                 (int)v63 + v168.m256i_i32[1] - (int)v9,
                                 v60,
                                 v61,
                                 v62,
                                 (__int64)&v167,
                                 v136,
                                 v138,
                                 v142,
                                 v145) )
          goto LABEL_96;
        v116 = _mm_load_si128((const __m128i *)&v168);
        v117 = _mm_load_si128((const __m128i *)&v168.m256i_u64[2]);
        *(__m128i *)v168.m256i_i8 = _mm_load_si128((const __m128i *)&v167);
        v118 = _mm_load_si128((const __m128i *)&v167.m256i_u64[2]);
        v171 = v116;
        v172 = v117;
        *(__m128i *)&v168.m256i_u64[2] = v118;
        *(__m128i *)v167.m256i_i8 = v116;
        *(__m128i *)&v167.m256i_u64[2] = v117;
      }
      else if ( !(unsigned __int8)sub_3150C0(
                                    (unsigned int)&v168,
                                    (unsigned int)&v167,
                                    (int)v9 - (int)v63,
                                    v60,
                                    v61,
                                    v62,
                                    (__int64)&v167,
                                    v136,
                                    v138,
                                    v142,
                                    v145) )
      {
LABEL_96:
        v155 = 0;
LABEL_97:
        sub_312F40(&v168);
        goto LABEL_30;
      }
      sub_313000(&v169, v137);
      memset(&v170.m256i_u64[1], 0, 24);
      v170.m256i_i64[0] = v149;
      v122 = a3->m128i_i64[0];
      v123 = *(_QWORD *)(v11 + 24);
      if ( (_BYTE)v140 )
      {
        if ( (unsigned __int8)sub_3150C0(
                                (unsigned int)&v169,
                                (unsigned int)&v170,
                                v169.m256i_i32[1] + (int)v122 - (int)v123,
                                v119,
                                v120,
                                v121,
                                (__int64)v132,
                                v137,
                                v140,
                                v143,
                                (unsigned int)&v170) )
        {
          v125 = *(__m128i *)&v170.m256i_u64[2];
          v124 = *(__m128i *)v170.m256i_i8;
          v126 = *(_OWORD *)v169.m256i_i8;
          v127 = *(_OWORD *)&v169.m256i_u64[2];
          goto LABEL_178;
        }
      }
      else if ( (unsigned __int8)sub_3150C0(
                                   (unsigned int)&v169,
                                   (unsigned int)&v170,
                                   (int)v123 - (int)v122,
                                   v119,
                                   v120,
                                   v121,
                                   (__int64)v132,
                                   v137,
                                   v140,
                                   v143,
                                   (unsigned int)&v170) )
      {
        v124 = *(__m128i *)v169.m256i_i8;
        v125 = *(__m128i *)&v169.m256i_u64[2];
        v126 = *(_OWORD *)v170.m256i_i8;
        v127 = *(_OWORD *)&v170.m256i_u64[2];
LABEL_178:
        v171 = v124;
        *(__m128i *)v170.m256i_i8 = v124;
        v172 = v125;
        *(_OWORD *)v169.m256i_i8 = v126;
        *(_OWORD *)&v169.m256i_u64[2] = v127;
        *(__m128i *)&v170.m256i_u64[2] = v125;
        v128 = sub_314B70(&v169, &v168);
        if ( v128 )
        {
          if ( !v169.m256i_i32[0] )
          {
            sub_13F6F0((unsigned __int64 **)(v142 + 8));
            *(_BYTE *)(v142 + 24) = 1;
            sub_312F40(v150);
            sub_312F40(&v169);
            v155 = v128;
            goto LABEL_97;
          }
          if ( !under_debugger )
            sub_3835A0(52625);
LABEL_198:
          BUG();
        }
        v129 = *(_QWORD *)v11;
        if ( (*(_QWORD *)v11 & 2) == 0 )
        {
          v130 = *(_QWORD *)(v11 + 16);
          if ( (*(_BYTE *)v130 & 2) != 0 )
          {
            do
            {
              v131 = v11;
              v11 = v129 & 0xFFFFFFFFFFFFFFFCLL;
              v129 = *(_QWORD *)(v129 & 0xFFFFFFFFFFFFFFFCLL);
            }
            while ( (v129 & 2) == 0 && *(_QWORD *)(v11 + 16) == v131 );
          }
          else
          {
            do
            {
              v11 = v130;
              v130 = *(_QWORD *)(v130 + 8);
            }
            while ( (*(_BYTE *)v130 & 2) == 0 );
          }
        }
        sub_312F40(v150);
        sub_312F40(&v169);
        sub_312F40(&v168);
LABEL_16:
        if ( !v156 )
        {
LABEL_17:
          v146 = *(_QWORD *)(a2 + 24);
          v151 = _mm_loadu_si128(a3).m128i_i64[1];
          v139 = (unsigned __int64 **)(v142 + 8);
          while ( v152 != (__int64 *)v11 )
          {
            v14 = *v152;
            v15 = (unsigned __int64)v152;
            if ( (*v152 & 2) == 0 )
            {
              v16 = v152[2];
              if ( (*(_BYTE *)v16 & 2) != 0 )
              {
                v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
                v78 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v78 & 2) == 0 )
                {
                  v79 = (unsigned __int64)v152;
                  do
                  {
                    if ( *(_QWORD *)(v15 + 16) != v79 )
                      break;
                    v79 = v15;
                    v80 = v78 & 0xFFFFFFFFFFFFFFFCLL;
                    v78 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
                    v15 = v80;
                  }
                  while ( (v78 & 2) == 0 );
                }
              }
              else
              {
                do
                {
                  v15 = v16;
                  v16 = *(_QWORD *)(v16 + 8);
                }
                while ( (*(_BYTE *)v16 & 2) == 0 );
              }
            }
            sub_1E4150(v139, v152);
            v152 = (__int64 *)v15;
          }
          if ( v157.m256i_i32[0] > 1u )
            v152 = (__int64 *)sub_1E4960((__m128i *)v139, (unsigned __int64)v152, v146, v151, (__int64)&v157);
          sub_1E67B0((__m128i *)v139, (unsigned __int64)v152, a3->m128i_i64[0], a3->m128i_i64[1], v136);
          if ( v167.m256i_i32[0] > 1u )
            sub_1E4960((__m128i *)v139, (unsigned __int64)v152, v9, v151, (__int64)v132);
          goto LABEL_30;
        }
        goto LABEL_112;
      }
      if ( !under_debugger )
        sub_3835A0(52624);
      goto LABEL_198;
    }
    if ( *(_DWORD *)(v11 + 40) == 8 )
    {
      v156 = v155;
      goto LABEL_44;
    }
    sub_313000(&v163, v136);
    memset(&v165.m256i_u64[1], 0, 24);
    v25 = a3->m128i_i64[0];
    v165.m256i_i64[0] = v145;
    v26 = *(_QWORD *)(v11 + 24);
    if ( (_BYTE)v138 )
    {
      if ( !(unsigned __int8)sub_3150C0(
                               (unsigned int)&v163,
                               (unsigned int)&v165,
                               v163.m128i_i32[1] + (int)v25 - (int)v26,
                               v145,
                               v23,
                               v24,
                               (__int64)&v163,
                               v136,
                               v138,
                               v142,
                               v145) )
      {
LABEL_51:
        if ( !under_debugger )
          sub_3835A0(52617);
        goto LABEL_198;
      }
      v41 = _mm_load_si128((const __m128i *)&v165);
      v172 = _mm_load_si128((const __m128i *)&v165.m256i_u64[2]);
      v166.m256i_i64[0] = v145;
      v171 = v41;
      memset(&v166.m256i_u64[1], 0, 24);
      if ( v9 > v22 )
      {
        if ( !(unsigned __int8)sub_3150C0(
                                 v133,
                                 (unsigned int)&v166,
                                 v163.m128i_i32[1] - v154,
                                 v35,
                                 v36,
                                 v37,
                                 v133,
                                 v136,
                                 v138,
                                 v142,
                                 v145) )
          goto LABEL_78;
        v42 = _mm_load_si128(&v163);
        v43 = _mm_load_si128(&v164);
        v163 = _mm_load_si128((const __m128i *)&v166);
        v44 = _mm_load_si128((const __m128i *)&v166.m256i_u64[2]);
        v171 = v42;
        v172 = v43;
        v164 = v44;
        *(__m128i *)v166.m256i_i8 = v42;
        *(__m128i *)&v166.m256i_u64[2] = v43;
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_3150C0(
                               (unsigned int)&v163,
                               (unsigned int)&v165,
                               (int)v26 - (int)v25,
                               (unsigned int)&v165,
                               v23,
                               v24,
                               (__int64)&v163,
                               v136,
                               v138,
                               v142,
                               v145) )
        goto LABEL_51;
      v30 = _mm_load_si128(&v164);
      v31 = _mm_load_si128(&v163);
      v163 = _mm_load_si128((const __m128i *)&v165);
      v32 = _mm_load_si128((const __m128i *)&v165.m256i_u64[2]);
      v172 = v30;
      *(__m128i *)&v165.m256i_u64[2] = v30;
      v166.m256i_i64[0] = v145;
      v171 = v31;
      v164 = v32;
      *(__m128i *)v165.m256i_i8 = v31;
      memset(&v166.m256i_u64[1], 0, 24);
      if ( v9 > v22
        && !(unsigned __int8)sub_3150C0(v133, (unsigned int)&v166, v154, v27, v28, v29, v133, v136, v138, v142, v145) )
      {
LABEL_78:
        if ( !under_debugger )
          sub_3835A0(52618);
        goto LABEL_198;
      }
    }
    v33 = sub_314B70(v133, v11 + 40);
    if ( v33 )
      break;
    sub_312F40(&v166);
    sub_312F40(&v165);
    sub_312F40(v133);
    v13 = *(__int64 **)(v142 + 8);
LABEL_44:
    if ( (*(_QWORD *)v11 & 2) != 0 )
    {
LABEL_47:
      if ( v13 == (__int64 *)v11 )
        goto LABEL_15;
    }
    else
    {
      v34 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)v34 & 2) == 0 )
      {
        do
        {
          v11 = v34;
          v34 = *(_QWORD *)(v34 + 8);
        }
        while ( (*(_BYTE *)v34 & 2) == 0 );
        goto LABEL_47;
      }
      v38 = (__int64 *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL);
      v39 = *v38;
      if ( (*v38 & 2) != 0 )
      {
LABEL_54:
        v11 = (unsigned __int64)v38;
        if ( v13 == v38 )
          goto LABEL_15;
      }
      else
      {
        while ( 1 )
        {
          if ( v38[2] != v11 )
            goto LABEL_54;
          v11 = (unsigned __int64)v38;
          v40 = v39 & 0xFFFFFFFFFFFFFFFCLL;
          v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v39 & 2) != 0 )
            break;
          v38 = (__int64 *)v40;
        }
        v11 = v40;
        if ( v13 == (__int64 *)v40 )
          goto LABEL_15;
      }
    }
  }
  if ( v163.m128i_i32[0] )
  {
    if ( !under_debugger )
      sub_3835A0(52619);
    goto LABEL_198;
  }
  v155 = v33;
  sub_13F6F0((unsigned __int64 **)(v142 + 8));
  *(_BYTE *)(v142 + 24) = 1;
  sub_312F40(&v166);
  sub_312F40(&v165);
  sub_312F40(v133);
LABEL_31:
  sub_312F40(&v157);
  return v155;
}

