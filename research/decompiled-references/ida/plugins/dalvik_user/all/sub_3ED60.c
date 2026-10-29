__int64 __fastcall sub_3ED60(__int64 *a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  int **v8; // rdi
  int *v9; // rax
  __int64 v10; // rsi
  int v11; // edx
  unsigned __int64 v12; // rbp
  __int64 v13; // r12
  size_t v14; // r14
  size_t v15; // r15
  __int64 v16; // rsi
  void *v17; // rdi
  unsigned __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rsi
  void *v21; // rdi
  int **v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbx
  int **v25; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  unsigned __int64 v29; // r14
  __int64 v30; // r12
  int **v31; // rdi
  int *v32; // rax
  __int64 v33; // rsi
  int v34; // edx
  unsigned __int64 v35; // rbp
  __int64 v36; // r12
  size_t v37; // r14
  size_t v38; // r15
  __int64 v39; // rsi
  void *v40; // rdi
  unsigned __int64 v41; // r12
  __int64 v42; // rbp
  __int64 v43; // rsi
  unsigned __int64 v44; // rbp
  size_t v45; // r14
  __int64 v46; // r12
  size_t v47; // r15
  __int64 v48; // rsi
  __int64 v49; // rbp
  __int64 v50; // r12
  unsigned __int64 v51; // r14
  __int64 v52; // rsi
  void *v53; // rdi
  __int64 v54; // rbp
  __int64 v55; // rsi
  unsigned __int64 v56; // r14
  __int64 v57; // r12
  __m128i si128; // xmm0
  __int64 v59; // rbp
  unsigned __int64 v60; // rbp
  size_t v61; // r14
  __int64 v62; // r12
  size_t v63; // r15
  __int64 v64; // rsi
  __int64 v65; // rbp
  __int64 v66; // rsi
  unsigned __int64 v67; // r14
  __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rbp
  size_t v77; // r14
  __int64 v78; // r12
  size_t v79; // r15
  __int64 v80; // rsi
  __int64 v81; // rbp
  unsigned __int64 v82; // r12
  __int64 v83; // rsi
  unsigned __int64 v84; // rbp
  size_t v85; // r14
  __int64 v86; // r12
  size_t v87; // r15
  __int64 v88; // rsi
  int v89; // ecx
  int v90; // ebp
  unsigned __int64 v91; // r15
  int **v92; // rdi
  int *v93; // rax
  __int64 v94; // rsi
  int v95; // r14d
  char *v96; // r12
  __int64 v97; // rbx
  char v98; // r14
  int v99; // eax
  __int64 v100; // rbp
  __int64 v101; // r12
  unsigned __int64 v102; // r14
  __int64 v103; // rsi
  _DWORD *v104; // rsi
  _DWORD *v105; // rax
  __int64 v106; // r12
  char *v107; // rsi
  __int64 v108; // rax
  __int64 v109; // rax
  _DWORD *v110; // rsi
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  int v117; // [rsp+Ch] [rbp-1BCh]
  __int64 *v118; // [rsp+28h] [rbp-1A0h]
  void *src; // [rsp+30h] [rbp-198h] BYREF
  __int128 v120; // [rsp+38h] [rbp-190h]
  __int64 v121; // [rsp+50h] [rbp-178h] BYREF
  __int128 v122; // [rsp+58h] [rbp-170h]
  _DWORD *v123; // [rsp+70h] [rbp-158h] BYREF
  __int128 v124; // [rsp+78h] [rbp-150h]
  _QWORD v125[3]; // [rsp+90h] [rbp-138h] BYREF
  __int128 v126; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v127; // [rsp+B8h] [rbp-110h]
  __int64 v128; // [rsp+C0h] [rbp-108h]
  __int128 v129; // [rsp+C8h] [rbp-100h]
  __int64 v130; // [rsp+D8h] [rbp-F0h]
  __int128 v131; // [rsp+E0h] [rbp-E8h]
  __int64 v132; // [rsp+F0h] [rbp-D8h]
  __int128 v133; // [rsp+F8h] [rbp-D0h]
  __int64 v134; // [rsp+108h] [rbp-C0h]
  __int128 v135; // [rsp+110h] [rbp-B8h]
  char v136; // [rsp+120h] [rbp-A8h]
  int **v137; // [rsp+128h] [rbp-A0h]
  __int128 v138; // [rsp+130h] [rbp-98h]
  __int64 v139; // [rsp+140h] [rbp-88h]
  __int128 v140; // [rsp+148h] [rbp-80h]
  __int64 v141; // [rsp+158h] [rbp-70h]
  __int64 v142; // [rsp+160h] [rbp-68h]
  __int128 v143; // [rsp+168h] [rbp-60h]
  __int64 v144; // [rsp+178h] [rbp-50h]
  int v145; // [rsp+180h] [rbp-48h]
  __int16 v146; // [rsp+184h] [rbp-44h]
  unsigned __int64 v147; // [rsp+188h] [rbp-40h]

  v147 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v3 = a1;
  v125[1] = a2;
  v125[0] = -1;
  v141 = -1;
  v144 = -1;
  v146 = 0;
  a1[1] = 0;
  v127 = 0;
  v128 = 0;
  v130 = 0;
  v132 = 0;
  v134 = 0;
  v136 = 0;
  v137 = nullptr;
  v139 = 0;
  v142 = 0;
  v145 = -1;
  v125[2] = a3 + a2;
  v126 = 0;
  v129 = 0;
  v131 = 0;
  v133 = 0;
  v135 = 0;
  v138 = 0;
  v140 = 0;
  v143 = 0;
  while ( 2 )
  {
    v4 = sub_3E3E0((int *)v125);
    if ( !(_BYTE)v4 )
      goto LABEL_30;
    src = nullptr;
    v120 = 0;
    switch ( LODWORD(v125[0]) )
    {
      case 0:
        v54 = v3[1];
        if ( v54 )
        {
          v57 = v54 + 38;
          v56 = v54 + 39;
          v55 = *v3;
          --v54;
          if ( v3[2] >= v56 )
            goto LABEL_85;
        }
        else
        {
          v55 = *v3;
          v56 = 40;
          v57 = 39;
          if ( (unsigned __int64)v3[2] >= 0x28 )
            goto LABEL_85;
        }
        v70 = qvector_reserve();
        *v3 = v70;
        v55 = v70;
LABEL_85:
        si128 = _mm_load_si128((const __m128i *)&xmmword_6A580);
        v3[1] = v56;
        *(_BYTE *)(v55 + v57) = 0;
        v59 = *v3 + v54;
        *(__m128i *)v59 = si128;
        v53 = src;
        *(__m128i *)(v59 + 16) = _mm_load_si128((const __m128i *)&xmmword_6A590);
        *(_QWORD *)(v59 + 31) = 0xA3E3F22382D6674LL;
        goto LABEL_98;
      case 1:
        goto LABEL_30;
      case 2:
        v5 = v3[1];
        v6 = 2;
        if ( v5 )
        {
          v6 = v5 + 1;
          v7 = *v3;
          --v5;
          if ( v3[2] >= v6 )
            goto LABEL_7;
        }
        else
        {
          v7 = *v3;
          if ( (unsigned __int64)v3[2] >= 2 )
            goto LABEL_7;
        }
        v72 = qvector_reserve();
        *v3 = v72;
        v7 = v72;
LABEL_7:
        v3[1] = v6;
        *(_BYTE *)(v7 + v5) = 60;
        *(_BYTE *)(*v3 + v5 + 1) = 0;
        *(_QWORD *)&v120 = 0;
        if ( !(_QWORD)v138 )
          goto LABEL_101;
        v8 = v137;
        if ( !(24LL * (_QWORD)v138) )
          goto LABEL_101;
        while ( 1 )
        {
          v9 = *v8;
          v10 = 2LL * (_QWORD)v8[1];
          if ( v10 * 4 )
            break;
LABEL_100:
          v8 += 3;
          if ( v8 == &v137[3 * (_QWORD)v138] )
          {
LABEL_101:
            v11 = -1;
            goto LABEL_14;
          }
        }
        while ( (_DWORD)v141 != v9[1] )
        {
          v9 += 2;
          if ( v9 == &(*v8)[v10] )
            goto LABEL_100;
        }
        v11 = *v9;
LABEL_14:
        if ( !(unsigned __int8)sub_3DE20((__int64)&v126, (__int64)&src, v11) )
          goto LABEL_27;
        v12 = v120;
        if ( (unsigned __int64)v120 > 1 )
        {
          v13 = v3[1];
          v14 = v120 - 1;
          v15 = v120 - 1;
          if ( v13 )
          {
            --v13;
            v15 = v14 + v13;
            v12 = v120 + v13;
          }
          v16 = *v3;
          if ( v3[2] < v12 )
          {
            v115 = qvector_reserve();
            *v3 = v115;
            v16 = v115;
          }
          v3[1] = v12;
          *(_BYTE *)(v16 + v15) = 0;
          v17 = (void *)(v13 + *v3);
          v18 = 2;
          memcpy(v17, src, v14);
          v19 = v3[1];
          if ( v19 )
            v18 = v19-- + 1;
          v20 = *v3;
          if ( v3[2] < v18 )
          {
            v75 = qvector_reserve();
            *v3 = v75;
            v20 = v75;
          }
          v3[1] = v18;
          *(_BYTE *)(v20 + v19) = 58;
          *(_BYTE *)(*v3 + v19 + 1) = 0;
        }
        *(_QWORD *)&v120 = 0;
        if ( HIDWORD(v141) == -1
          || (unsigned int)(LODWORD(v125[0]) - 2) > 1
          || !(unsigned __int8)sub_3DE20((__int64)&v126, (__int64)&src, SHIDWORD(v141)) )
        {
          goto LABEL_27;
        }
        v76 = v120;
        if ( (_QWORD)v120 )
        {
          v77 = v120 - 1;
          if ( (_QWORD)v120 != 1 )
          {
            v78 = v3[1];
            v79 = v120 - 1;
            if ( v78 )
            {
              --v78;
              v79 = v77 + v78;
              v76 = v120 + v78;
            }
            v80 = *v3;
            if ( v3[2] < v76 )
            {
              v112 = qvector_reserve();
              *v3 = v112;
              v80 = v112;
            }
            v3[1] = v76;
            *(_BYTE *)(v80 + v79) = 0;
            memcpy((void *)(v78 + *v3), src, v77);
          }
        }
        v81 = v3[1];
        v82 = 2;
        if ( v81 )
          v82 = v81-- + 1;
        v83 = *v3;
        if ( v3[2] < v82 )
        {
          v109 = qvector_reserve();
          *v3 = v109;
          v83 = v109;
        }
        v3[1] = v82;
        *(_BYTE *)(v83 + v81) = 10;
        *(_BYTE *)(*v3 + v81 + 1) = 0;
        if ( !(unsigned __int8)sub_3EAE0((__int64)v125, (__int64 *)&src) )
          goto LABEL_27;
        v84 = v120;
        if ( (_QWORD)v120 )
        {
          v85 = v120 - 1;
          if ( (_QWORD)v120 != 1 )
          {
            v86 = v3[1];
            v87 = v120 - 1;
            if ( v86 )
            {
              --v86;
              v87 = v85 + v86;
              v84 = v120 + v86;
            }
            v88 = *v3;
            if ( v3[2] < v84 )
            {
              v111 = qvector_reserve();
              *v3 = v111;
              v88 = v111;
            }
            v3[1] = v84;
            *(_BYTE *)(v88 + v87) = 0;
            memcpy((void *)(v86 + *v3), src, v85);
          }
        }
        v89 = v125[0];
        v121 = 0;
        v123 = nullptr;
        v122 = 0;
        v124 = 0;
        if ( LODWORD(v125[0]) == 2 && (int)((unsigned __int64)v143 / 5) > 0 )
        {
          v90 = 4;
          v117 = 5 * ((unsigned __int64)v143 / 5) + 4;
          while ( 1 )
          {
            *(_QWORD *)&v120 = 0;
            if ( v89 != 2 || (v91 = v90 - 4, v91 >= (unsigned __int64)v143) )
            {
LABEL_151:
              if ( v123 )
              {
                *(_QWORD *)&v124 = 0;
                qfree();
              }
              if ( v121 )
              {
                *(_QWORD *)&v122 = 0;
                qfree();
              }
              goto LABEL_27;
            }
            if ( !(_QWORD)v138 )
              goto LABEL_156;
            v92 = v137;
            if ( !(24LL * (_QWORD)v138) )
              goto LABEL_156;
            while ( 1 )
            {
              v93 = *v92;
              v94 = 2LL * (_QWORD)v92[1];
              if ( v94 * 4 )
                break;
LABEL_155:
              v92 += 3;
              if ( v92 == &v137[3 * (_QWORD)v138] )
                goto LABEL_156;
            }
            while ( *(_DWORD *)(v142 + 4LL * (v90 - 4)) != v93[1] )
            {
              v93 += 2;
              if ( v93 == &(*v92)[v94] )
                goto LABEL_155;
            }
            if ( *v93 != -1 )
            {
              if ( !(unsigned __int8)sub_3DE20((__int64)&v126, (__int64)&src, *v93) )
                goto LABEL_151;
              *(_QWORD *)&v122 = 0;
              if ( LODWORD(v125[0]) != 2 )
                goto LABEL_151;
            }
            else
            {
LABEL_156:
              *(_QWORD *)&v122 = 0;
            }
            if ( v91 >= (unsigned __int64)v143 )
              goto LABEL_151;
            v95 = *(_DWORD *)(v142 + 4LL * (v90 - 3));
            if ( v95 == -1 )
            {
              *(_QWORD *)&v124 = 0;
            }
            else
            {
              if ( !(unsigned __int8)sub_3DE20((__int64)&v126, (__int64)&v121, v95) )
                goto LABEL_151;
              if ( v95 < (unsigned __int64)v140 && *(_DWORD *)(v139 + 4LL * v95) == 16842755 )
              {
                v110 = (_DWORD *)v121;
                if ( *((_QWORD *)&v122 + 1) <= 4u )
                {
                  v121 = qvector_reserve();
                  v110 = (_DWORD *)v121;
                }
                *(_QWORD *)&v122 = 5;
                *v110 = 1701667182;
                *(_BYTE *)(v121 + 4) = 0;
              }
              v96 = (char *)v121;
              if ( (_QWORD)v122 )
              {
                v118 = v3;
                v97 = v121;
                do
                {
                  v98 = *v96;
                  if ( !*v96 )
                    break;
                  if ( (v98 < 0 || !isalnum(v98)) && v98 != 46 && v98 != 95 )
                  {
                    *v96 = 95;
                    v97 = v121;
                  }
                  ++v96;
                }
                while ( v96 != (char *)(v97 + v122) );
                v3 = v118;
              }
              *(_QWORD *)&v124 = 0;
              if ( LODWORD(v125[0]) != 2 )
                goto LABEL_151;
            }
            if ( v91 >= (unsigned __int64)v143 )
              goto LABEL_151;
            v99 = *(_DWORD *)(v142 + 4LL * (v90 - 1));
            if ( v99 == 3 )
            {
              if ( !(unsigned __int8)sub_3DE20((__int64)&v126, (__int64)&v123, *(_DWORD *)(v142 + 4LL * (v90 - 2))) )
                goto LABEL_151;
            }
            else
            {
              if ( v99 != 18 )
                goto LABEL_176;
              v104 = v123;
              if ( *(_DWORD *)(v142 + 4LL * v90) == -1 )
              {
                if ( *((_QWORD *)&v124 + 1) <= 4u )
                {
                  v123 = (_DWORD *)qvector_reserve();
                  v104 = v123;
                }
                *(_QWORD *)&v124 = 5;
                *((_BYTE *)v104 + 4) = 0;
                *v123 = 1702195828;
              }
              else
              {
                if ( *((_QWORD *)&v124 + 1) <= 5u )
                {
                  v123 = (_DWORD *)qvector_reserve();
                  v104 = v123;
                }
                *(_QWORD *)&v124 = 6;
                *((_BYTE *)v104 + 5) = 0;
                v105 = v123;
                *v123 = 1936482662;
                *((_BYTE *)v105 + 4) = 101;
              }
            }
            if ( (unsigned __int64)v124 > 1 )
            {
              v106 = v120;
              if ( (unsigned __int64)v120 > 1 )
              {
                v107 = (char *)src;
                if ( *((_QWORD *)&v120 + 1) < (unsigned __int64)(v120 + 1) )
                {
                  src = (void *)qvector_reserve();
                  v107 = (char *)src;
                }
                *(_QWORD *)&v120 = v106 + 1;
                v107[v106 - 1] = 58;
                *((_BYTE *)src + v106) = 0;
              }
              sub_3CF90((__int64)&v123, "&", "&amp;");
              sub_3CF90((__int64)&v123, "\"", "&quot;");
              sub_3CF90((__int64)&v123, "'", "&apos;");
              sub_3CF90((__int64)&v123, "<", "&lt;");
              sub_3CF90((__int64)&v123, ">", "&gt;");
              sub_1FAD0(v3);
            }
LABEL_176:
            v90 += 5;
            if ( v117 == v90 )
              break;
            v89 = v125[0];
          }
        }
        v100 = v3[1];
        if ( v100 )
        {
          v101 = v100 + 1;
          v102 = v100 + 2;
          v103 = *v3;
          --v100;
          if ( v3[2] >= v102 )
            goto LABEL_181;
        }
        else
        {
          v103 = *v3;
          v102 = 3;
          v101 = 2;
          if ( (unsigned __int64)v3[2] >= 3 )
            goto LABEL_181;
        }
        v108 = qvector_reserve();
        *v3 = v108;
        v103 = v108;
LABEL_181:
        v3[1] = v102;
        *(_BYTE *)(v103 + v101) = 0;
        *(_WORD *)(*v3 + v100) = 2622;
        if ( v123 )
        {
          *(_QWORD *)&v124 = 0;
          qfree();
        }
        if ( v121 )
        {
          *(_QWORD *)&v122 = 0;
          qfree();
        }
LABEL_97:
        v53 = src;
        goto LABEL_98;
      case 3:
        v27 = v3[1];
        if ( v27 )
        {
          v30 = v27 + 1;
          v29 = v27 + 2;
          v28 = *v3;
          --v27;
          if ( v3[2] >= v29 )
            goto LABEL_52;
        }
        else
        {
          v28 = *v3;
          v29 = 3;
          v30 = 2;
          if ( (unsigned __int64)v3[2] >= 3 )
            goto LABEL_52;
        }
        v71 = qvector_reserve();
        *v3 = v71;
        v28 = v71;
LABEL_52:
        v3[1] = v29;
        *(_BYTE *)(v28 + v30) = 0;
        *(_WORD *)(*v3 + v27) = 12092;
        *(_QWORD *)&v120 = 0;
        if ( !(_QWORD)v138 )
          goto LABEL_111;
        v31 = v137;
        if ( !(24LL * (_QWORD)v138) )
          goto LABEL_111;
        while ( 1 )
        {
          v32 = *v31;
          v33 = 2LL * (_QWORD)v31[1];
          if ( v33 * 4 )
            break;
LABEL_110:
          v31 += 3;
          if ( v31 == &v137[3 * (_QWORD)v138] )
          {
LABEL_111:
            v34 = -1;
            goto LABEL_59;
          }
        }
        while ( (_DWORD)v141 != v32[1] )
        {
          v32 += 2;
          if ( &(*v31)[v33] == v32 )
            goto LABEL_110;
        }
        v34 = *v32;
LABEL_59:
        v4 = sub_3DE20((__int64)&v126, (__int64)&src, v34);
        if ( !(_BYTE)v4 )
          goto LABEL_114;
        v35 = v120;
        if ( (unsigned __int64)v120 > 1 )
        {
          v36 = v3[1];
          v37 = v120 - 1;
          v38 = v120 - 1;
          if ( v36 )
          {
            v38 = --v36 + v37;
            v35 = v36 + v120;
          }
          v39 = *v3;
          if ( v3[2] < v35 )
          {
            v116 = qvector_reserve();
            *v3 = v116;
            v39 = v116;
          }
          v3[1] = v35;
          *(_BYTE *)(v39 + v38) = 0;
          v40 = (void *)(v36 + *v3);
          v41 = 2;
          memcpy(v40, src, v37);
          v42 = v3[1];
          if ( v42 )
            v41 = v42-- + 1;
          v43 = *v3;
          if ( v3[2] < v41 )
          {
            v74 = qvector_reserve();
            *v3 = v74;
            v43 = v74;
          }
          v3[1] = v41;
          *(_BYTE *)(v43 + v42) = 58;
          *(_BYTE *)(*v3 + v42 + 1) = 0;
        }
        *(_QWORD *)&v120 = 0;
        if ( HIDWORD(v141) == -1 || (unsigned int)(LODWORD(v125[0]) - 2) > 1 )
        {
LABEL_27:
          v21 = src;
          v4 = 0;
          goto LABEL_28;
        }
        v4 = sub_3DE20((__int64)&v126, (__int64)&src, SHIDWORD(v141));
        if ( (_BYTE)v4 )
        {
          v44 = v120;
          if ( (_QWORD)v120 )
          {
            v45 = v120 - 1;
            if ( (_QWORD)v120 != 1 )
            {
              v46 = v3[1];
              v47 = v120 - 1;
              if ( v46 )
              {
                --v46;
                v47 = v45 + v46;
                v44 = v120 + v46;
              }
              v48 = *v3;
              if ( v3[2] < v44 )
              {
                v114 = qvector_reserve();
                *v3 = v114;
                v48 = v114;
              }
              v3[1] = v44;
              *(_BYTE *)(v48 + v47) = 0;
              memcpy((void *)(v46 + *v3), src, v45);
            }
          }
          v49 = v3[1];
          if ( v49 )
          {
            v50 = v49 + 1;
            v51 = v49 + 2;
            v52 = *v3;
            --v49;
            if ( v3[2] < v51 )
              goto LABEL_116;
          }
          else
          {
            v52 = *v3;
            v51 = 3;
            v50 = 2;
            if ( (unsigned __int64)v3[2] < 3 )
            {
LABEL_116:
              v73 = qvector_reserve();
              *v3 = v73;
              v52 = v73;
            }
          }
          v3[1] = v51;
          *(_BYTE *)(v52 + v50) = 0;
          *(_WORD *)(*v3 + v49) = 2622;
          v53 = src;
LABEL_98:
          if ( v53 )
          {
            *(_QWORD *)&v120 = 0;
            qfree();
          }
          continue;
        }
LABEL_114:
        v21 = src;
LABEL_28:
        if ( v21 )
        {
          *(_QWORD *)&v120 = 0;
          qfree();
        }
LABEL_30:
        if ( v142 )
        {
          *(_QWORD *)&v143 = 0;
          qfree();
        }
        if ( v139 )
        {
          *(_QWORD *)&v140 = 0;
          qfree();
        }
        v22 = v137;
        if ( v137 )
        {
          v23 = v138;
          if ( (_QWORD)v138 )
          {
            v24 = 0;
            do
            {
              v25 = &v22[3 * v24];
              if ( *v25 )
              {
                v25[1] = nullptr;
                qfree();
                v22 = v137;
              }
              ++v24;
            }
            while ( v23 != v24 );
          }
          *(_QWORD *)&v138 = 0;
          qfree();
        }
        if ( v134 )
        {
          *(_QWORD *)&v135 = 0;
          qfree();
        }
        if ( v132 )
        {
          *(_QWORD *)&v133 = 0;
          qfree();
        }
        if ( v130 )
        {
          *(_QWORD *)&v131 = 0;
          qfree();
        }
        if ( v128 )
        {
          *(_QWORD *)&v129 = 0;
          qfree();
        }
        return v4;
      case 4:
        if ( HIDWORD(v141) != -1 )
        {
          sub_3DE20((__int64)&v126, (__int64)&src, SHIDWORD(v141));
          v60 = v120;
          if ( (_QWORD)v120 )
          {
            v61 = v120 - 1;
            if ( (_QWORD)v120 != 1 )
            {
              v62 = v3[1];
              v63 = v120 - 1;
              if ( v62 )
              {
                --v62;
                v63 = v61 + v62;
                v60 = v120 + v62;
              }
              v64 = *v3;
              if ( v3[2] < v60 )
              {
                v113 = qvector_reserve();
                *v3 = v113;
                v64 = v113;
              }
              v3[1] = v60;
              *(_BYTE *)(v64 + v63) = 0;
              memcpy((void *)(v62 + *v3), src, v61);
            }
          }
        }
        v65 = v3[1];
        if ( v65 )
        {
          v67 = v65 + 1;
          v68 = v3[1];
          v66 = *v3;
          --v65;
          if ( v3[2] >= v67 )
            goto LABEL_96;
        }
        else
        {
          v66 = *v3;
          v67 = 2;
          v68 = 1;
          if ( (unsigned __int64)v3[2] >= 2 )
            goto LABEL_96;
        }
        v69 = qvector_reserve();
        *v3 = v69;
        v66 = v69;
LABEL_96:
        v3[1] = v67;
        *(_BYTE *)(v66 + v68) = 0;
        *(_BYTE *)(*v3 + v65) = 10;
        goto LABEL_97;
      default:
        continue;
    }
  }
}

