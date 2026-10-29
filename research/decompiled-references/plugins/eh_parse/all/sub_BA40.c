unsigned __int64 __fastcall sub_BA40(__int64 a1, char a2)
{
  int v3; // eax
  _QWORD *segm_by_name; // rax
  __int64 *v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12
  unsigned int dword; // eax
  unsigned __int64 v20; // r14
  char *v21; // r14
  __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // rdi
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  bool v28; // dl
  char *v29; // r8
  char *v30; // rcx
  char v31; // r9
  __int64 v32; // rax
  int v33; // r12d
  _QWORD *v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // rbp
  unsigned __int64 v37; // r15
  unsigned int v38; // r14d
  unsigned int v39; // ecx
  bool v40; // cf
  unsigned __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  char v45; // cl
  unsigned __int64 v46; // rsi
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  size_t v51; // r15
  __int64 v52; // rax
  __int16 v53; // dx
  __int64 v54; // rsi
  __int64 v55; // rdi
  __m128 v56; // xmm2
  unsigned __int8 v57; // r15
  __m128 v58; // xmm1
  __m128 v59; // xmm0
  char v60; // r14
  int v61; // ecx
  unsigned __int8 v62; // al
  char *v63; // rcx
  _QWORD *v64; // rdi
  int v65; // esi
  unsigned __int8 v66; // r12
  unsigned __int16 word; // ax
  char *v68; // rax
  _QWORD *v69; // rdi
  int v70; // r8d
  __int64 qword; // rax
  char *v72; // r14
  __int64 bytes; // rax
  __int64 v74; // r14
  unsigned __int8 v75; // r15
  unsigned __int64 v76; // rdx
  char *v77; // rsi
  char v78; // r10
  unsigned int v79; // r11d
  char *v80; // rax
  bool v81; // zf
  unsigned int v82; // ecx
  char v83; // al
  char *v84; // rdx
  unsigned int v85; // ecx
  unsigned __int64 v86; // rsi
  unsigned int v87; // r14d
  char *v88; // r15
  char v89; // al
  char v90; // cl
  __int64 v91; // r15
  __int64 *v92; // rax
  unsigned __int64 v93; // r9
  char v94; // al
  int v95; // edx
  char *v96; // rdi
  __m128 v97; // xmm0
  int v98; // eax
  __m128 v99; // xmm0
  unsigned int v100; // eax
  __int64 v101; // rdi
  void *v102; // rax
  __int64 v103; // r9
  _QWORD *v104; // rdi
  _QWORD *v105; // rcx
  unsigned int v106; // ecx
  signed __int64 v107; // rsi
  char *v108; // r14
  char v109; // al
  __int64 v110; // rax
  char *v111; // rcx
  int v112; // eax
  __int64 v113; // rax
  char *v114; // rdx
  __int64 *v115; // rdi
  __int64 v116; // rcx
  int v117; // edx
  unsigned int v118; // eax
  __int64 v119; // rax
  char *v120; // rdi
  unsigned int v121; // r15d
  char *v122; // rax
  char v123; // al
  char v124; // cl
  char *v125; // r14
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // rcx
  char v128; // al
  __int64 v129; // rax
  unsigned __int8 v130; // r15
  __int64 v131; // rax
  char v132; // al
  unsigned __int8 byte; // al
  __int64 v134; // rax
  void *v135; // rax
  char *v136; // r9
  size_t v137; // rdx
  void *v138; // rsi
  __int64 v139; // [rsp+0h] [rbp-188h]
  __int64 v141; // [rsp+10h] [rbp-178h] BYREF
  void *v142; // [rsp+18h] [rbp-170h]
  _BOOL8 v143; // [rsp+20h] [rbp-168h]
  unsigned __int64 v144; // [rsp+28h] [rbp-160h]
  __int64 v145; // [rsp+30h] [rbp-158h]
  char **v146; // [rsp+38h] [rbp-150h]
  char v147; // [rsp+43h] [rbp-145h]
  unsigned int v148; // [rsp+44h] [rbp-144h]
  __int64 v149; // [rsp+48h] [rbp-140h]
  __int64 v150; // [rsp+50h] [rbp-138h]
  void *src; // [rsp+58h] [rbp-130h]
  char *v152; // [rsp+60h] [rbp-128h]
  size_t n; // [rsp+68h] [rbp-120h]
  unsigned __int8 v154; // [rsp+72h] [rbp-116h] BYREF
  unsigned __int8 v155; // [rsp+73h] [rbp-115h] BYREF
  unsigned __int8 v156; // [rsp+74h] [rbp-114h] BYREF
  char v157; // [rsp+75h] [rbp-113h] BYREF
  unsigned __int8 v158; // [rsp+76h] [rbp-112h] BYREF
  char v159; // [rsp+77h] [rbp-111h] BYREF
  __int64 v160; // [rsp+78h] [rbp-110h] BYREF
  char *v161; // [rsp+80h] [rbp-108h] BYREF
  __int128 v162; // [rsp+88h] [rbp-100h]
  __int64 v163; // [rsp+A0h] [rbp-E8h] BYREF
  char *v164; // [rsp+A8h] [rbp-E0h]
  char *v165; // [rsp+B0h] [rbp-D8h] BYREF
  char *v166; // [rsp+B8h] [rbp-D0h]
  __int64 v167; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v168; // [rsp+C8h] [rbp-C0h]
  __int128 v169; // [rsp+D0h] [rbp-B8h]
  __int64 v170; // [rsp+E0h] [rbp-A8h]
  __m128i v171; // [rsp+E8h] [rbp-A0h]
  __m128 v172; // [rsp+F8h] [rbp-90h]
  __m128 v173; // [rsp+108h] [rbp-80h]
  __m128 v174; // [rsp+118h] [rbp-70h]
  __int64 v175; // [rsp+128h] [rbp-60h]
  __int64 v176; // [rsp+130h] [rbp-58h]
  __int64 v177; // [rsp+138h] [rbp-50h]
  int v178; // [rsp+140h] [rbp-48h]
  char v179; // [rsp+144h] [rbp-44h]
  unsigned __int64 v180; // [rsp+148h] [rbp-40h]

  v180 = __readfsqword(0x28u);
  sub_8610(a1);
  v3 = sub_FCD0(0xFFFFFFFFLL, "eh_frame");
  *(_DWORD *)(a1 + 128) = v3;
  if ( v3 >= 0 )
  {
    v146 = &v161;
    do
    {
      v16 = (unsigned __int64 *)getnseg((unsigned int)v3);
      if ( !v16 )
        break;
      v17 = v16[1];
      v18 = *v16;
      if ( *v16 >= v17 )
        goto LABEL_29;
      v142 = nullptr;
      while ( 1 )
      {
        if ( (unsigned int)(v17 - v18) <= 3 )
          goto LABEL_27;
        dword = get_dword(v18);
        v20 = v18 + 4;
        v147 = __CFADD__(v18, 4) || v17 < v18 + 4;
        if ( v147 || v17 == v20 )
          goto LABEL_27;
        v36 = dword;
        if ( dword == 0xFFFFFFFFLL )
        {
          if ( (unsigned int)(v17 - v20) <= 7 )
            goto LABEL_27;
          v37 = v18 + 12;
          qword = get_qword(v20);
          v36 = qword;
          if ( v17 < v18 + 12 || v37 < v20 )
            goto LABEL_27;
          if ( !qword )
          {
            if ( v37 >= v17 )
              goto LABEL_27;
LABEL_96:
            while ( !(unsigned __int8)get_byte(v37) )
            {
              if ( v17 == ++v37 )
                goto LABEL_27;
            }
            goto LABEL_97;
          }
          v38 = 12;
          v39 = 8;
        }
        else
        {
          v37 = v18 + 4;
          if ( !dword )
            goto LABEL_96;
          v38 = 4;
          v39 = 4;
        }
        if ( (int)v17 - (int)v37 < v39 )
          goto LABEL_27;
        v40 = __CFADD__(v37, v36);
        v41 = v37 + v36;
        v148 = v39;
        v144 = v39;
        v143 = v40;
        v42 = *(_QWORD *)(a1 + 24);
        v163 = a1;
        v43 = *(_QWORD *)(v42 + 16);
        v164 = (char *)(v43 & (v39 + v37));
        v165 = (char *)(v43 & v41);
        v166 = v164;
        v141 = v43 & v41;
        if ( v39 == 4 )
        {
          v100 = get_dword(v37);
          v47 = v141;
          v46 = v144;
          v45 = v148;
          v145 = v100;
        }
        else
        {
          v44 = get_qword(v37);
          v45 = v148;
          v46 = v144;
          v145 = v44;
          v47 = v141;
        }
        if ( !v145 )
          break;
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)
            & ((1LL << (8 * v45 - 1)) + v38 + v46 + v18 - 4 - (v145 ^ (1LL << (8 * v45 - 1))));
        if ( v18 < v48 || !v142 )
          goto LABEL_27;
        v49 = (__int64)v142;
        while ( v48 != *(_QWORD *)(v49 + 40) )
        {
          v49 = *(_QWORD *)(v49 + 32);
          if ( !v49 )
            goto LABEL_27;
        }
        v50 = *(_QWORD *)v49;
        v168 = 0;
        v169 = 0;
        v167 = v50;
        v51 = *(_QWORD *)(v49 + 16);
        if ( v51 )
        {
          v101 = *(_QWORD *)(v49 + 16);
          v144 = v47;
          v141 = v49;
          v102 = (void *)qalloc_or_throw(v101);
          *((_QWORD *)&v169 + 1) = v51;
          v168 = (__int64)v102;
          memcpy(v102, *(const void **)(v141 + 8), v51);
          v47 = v144;
          v49 = v141;
          *(_QWORD *)&v169 = v51;
        }
        v52 = *(_QWORD *)(v49 + 32);
        v53 = *(_WORD *)(v49 + 130);
        v176 = *(_QWORD *)(v49 + 112);
        v54 = *(_QWORD *)(v49 + 120);
        v55 = *(_QWORD *)(v49 + 104);
        v56 = _mm_loadh_ps((const double *)(v49 + 64));
        v170 = v52;
        v57 = *(_BYTE *)(v49 + 129);
        v58 = _mm_loadh_ps((const double *)(v49 + 80));
        v59 = _mm_loadh_ps((const double *)(v49 + 96));
        v60 = HIBYTE(v53);
        LOBYTE(v52) = *(_BYTE *)(v49 + 132);
        v177 = v54;
        v61 = *(_DWORD *)(v49 + 128);
        v175 = v55;
        v179 = v52;
        v178 = v61;
        v171 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)(unsigned __int64)v47);
        v172 = v56;
        v173 = v58;
        v174 = v59;
        if ( (_BYTE)v53 )
        {
          v62 = 4;
          v63 = v165;
          v64 = v166;
          if ( (unsigned __int8)v53 <= 4u )
            v62 = v53;
          v65 = 0;
          BYTE2(v178) = v62;
          v66 = v62;
          if ( (int)v165 - (int)v166 >= (unsigned int)v62 )
          {
            if ( (unsigned __int8)v53 > 3u )
            {
              v112 = get_dword(v166);
              v64 = v166;
              v63 = v165;
              v65 = v112;
            }
            else if ( (_BYTE)v53 == 1 )
            {
              byte = get_byte(v166);
              v64 = v166;
              v63 = v165;
              v65 = byte;
            }
            else if ( (_BYTE)v53 == 2 )
            {
              word = get_word(v166);
              v64 = v166;
              v63 = v165;
              v65 = word;
            }
            v166 = (char *)v64 + v66;
            if ( v63 < v166 || __CFADD__(v64, v66) )
              v166 = v63;
            v60 = HIBYTE(v178);
            v57 = BYTE1(v178);
          }
          LODWORD(v177) = v65;
        }
        if ( v60 )
        {
          v173.m128_u64[1] = sub_A050(&v163, v60, v57);
          v22 = sub_A050(&v163, v60 & 0xF, v57);
          v23 = BYTE1(v178);
          v24 = v22;
          if ( v60 == -1 )
          {
            if ( BYTE1(v178) )
              goto LABEL_91;
            v25 = v173.m128_u64[1];
          }
          else
          {
            v25 = v173.m128_u64[1];
            v26 = v173.m128_u64[1];
            if ( (unsigned __int8)((v60 & 7) - 2) > 2u )
            {
              v28 = v24 != 0;
              goto LABEL_193;
            }
            v27 = dword_275A8[(unsigned __int8)((v60 & 7) - 2)];
            if ( v27 < BYTE1(v178) && (v173.m128_u64[1] & ~(-1LL << (8 * (unsigned __int8)v27))) == 0 )
              goto LABEL_91;
          }
          v28 = v24 != 0;
LABEL_36:
          if ( v25 && v28 )
          {
            v29 = v166;
            v30 = v166;
            v174.m128_u64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v25 + v24);
            if ( BYTE4(v177) )
            {
              v106 = 0;
              v107 = 0;
              while ( v29 < v165 )
              {
                v144 = v107;
                v108 = v29 + 1;
                LODWORD(v141) = v106;
                v109 = get_byte(v29);
                v106 = v141 + 7;
                v107 = ((unsigned __int64)(v109 & 0x7F) << v141) | v144;
                if ( v109 >= 0 || v106 > 0x3F )
                  goto LABEL_178;
                v29 = v108;
              }
              v108 = v29;
LABEL_178:
              v110 = *(_QWORD *)(a1 + 24);
              v111 = &v108[v107];
              v29 = v108;
              v31 = BYTE6(v177);
              v166 = v108;
              if ( v107 < 0 )
                v111 = v108;
              v30 = (char *)(*(_QWORD *)(v110 + 16) & (unsigned __int64)v111);
              if ( BYTE6(v177) != 0xFF )
              {
LABEL_41:
                v145 = (__int64)v29;
                v144 = (unsigned __int64)v30;
                LOBYTE(v141) = v31;
                v32 = sub_A050(&v163, v31, v23);
                v174.m128_u64[1] = v32;
                v30 = (char *)v144;
                if ( (v141 & 0x70) == 0x10 && v32 == v145 )
                  v174.m128_u64[1] = 0;
              }
              if ( !v30 )
                v30 = v166;
            }
            else
            {
              v31 = BYTE6(v177);
              if ( BYTE6(v177) != 0xFF )
              {
                v30 = nullptr;
                goto LABEL_41;
              }
            }
            if ( v165 < v30
              || ((src = &v167, v33 = sub_A450(&v167), (a2 & 1) == 0) || !(unsigned __int8)sub_114F0(v25))
              && (unsigned __int8)sub_EFD0(v167, v173.m128_u64[1], v174.m128_u64[0], v173.m128_u64[0])
              && (v33 & 0xFE00) == 0
              && !(unsigned __int8)sub_A890(src, v33, -1) )
            {
              v170 = 0;
              if ( v168 )
              {
                *(_QWORD *)&v169 = 0;
                qfree(v168);
                v21 = (char *)v142;
                do
                {
LABEL_54:
                  v34 = v21;
                  v21 = *((char **)v21 + 4);
                  v35 = v34[1];
                  v34[4] = 0;
                  if ( v35 )
                  {
                    v34[2] = 0;
                    qfree(v35);
                  }
                  operator delete(v34, 0x88u);
                }
                while ( v21 );
                goto LABEL_29;
              }
              goto LABEL_27;
            }
            goto LABEL_91;
          }
          goto LABEL_91;
        }
        if ( !v57 || (v68 = v165, v69 = v166, v70 = (int)v165, (int)v165 - (int)v166 < (unsigned int)v57) )
        {
          v173.m128_u64[1] = 0;
          goto LABEL_91;
        }
        if ( v57 == 4 )
        {
          v103 = (unsigned int)get_dword(v166);
          v68 = v165;
          v69 = v166;
          v70 = (int)v165;
          goto LABEL_171;
        }
        if ( v57 > 4u )
        {
          if ( v57 == 8 )
          {
            v103 = get_qword(v166);
            v68 = v165;
            v69 = v166;
            v70 = (int)v165;
            goto LABEL_171;
          }
          goto LABEL_257;
        }
        if ( v57 != 1 )
        {
          if ( v57 == 2 )
          {
            v103 = (unsigned __int16)get_word(v166);
            v68 = v165;
            v69 = v166;
            v70 = (int)v165;
            goto LABEL_171;
          }
LABEL_257:
          v103 = 0;
          goto LABEL_171;
        }
        v103 = (unsigned __int8)get_byte(v166);
        v68 = v165;
        v69 = v166;
        v70 = (int)v165;
LABEL_171:
        v40 = __CFADD__(v57, v69);
        v104 = (_QWORD *)((char *)v69 + v57);
        v105 = v104;
        v28 = v68 < (char *)v104 || v40;
        if ( v28 )
        {
          v166 = v68;
          v173.m128_u64[1] = v103;
          goto LABEL_91;
        }
        v166 = (char *)v104;
        v173.m128_u64[1] = v103;
        if ( v70 - (int)v104 >= (unsigned int)v57 )
        {
          if ( v57 == 4 )
          {
            v24 = (unsigned int)get_dword(v104);
            v105 = v166;
            v68 = v165;
            v28 = v24 != 0;
            goto LABEL_189;
          }
          if ( v57 > 4u )
          {
            if ( v57 == 8 )
            {
              v24 = get_qword(v104);
              v105 = v166;
              v68 = v165;
              v28 = v24 != 0;
              goto LABEL_189;
            }
          }
          else
          {
            if ( v57 == 1 )
            {
              v24 = (unsigned __int8)get_byte(v104);
              v105 = v166;
              v68 = v165;
              v28 = v24 != 0;
              goto LABEL_189;
            }
            if ( v57 == 2 )
            {
              v24 = (unsigned __int16)get_word(v104);
              v105 = v166;
              v68 = v165;
              v28 = v24 != 0;
LABEL_189:
              v23 = BYTE1(v178);
              v166 = (char *)v105 + v57;
              if ( v68 < v166 || __CFADD__(v57, v105) )
                v166 = v68;
              v26 = v173.m128_u64[1];
LABEL_193:
              v25 = v26;
              goto LABEL_36;
            }
          }
          v24 = 0;
          goto LABEL_189;
        }
LABEL_91:
        v170 = 0;
        if ( v143 || v17 < v41 )
        {
          if ( v168 )
          {
            *(_QWORD *)&v169 = 0;
            qfree(v168);
          }
          goto LABEL_27;
        }
        if ( v168 )
        {
          *(_QWORD *)&v169 = 0;
          qfree(v168);
        }
        v18 = v41;
LABEL_98:
        if ( v18 >= v17 )
          goto LABEL_27;
      }
      v154 = 0;
      if ( v166 >= v165 || (_DWORD)v165 == (_DWORD)v166 || (src = &v167, get_bytes(&v167, 1, v166, 0, 0) != 1) )
      {
LABEL_27:
        v21 = (char *)v142;
        goto LABEL_28;
      }
      v155 = -1;
      v161 = nullptr;
      v72 = v166 + 1;
      v162 = 0;
      ++v166;
      LOBYTE(v148) = v167;
      v141 = (__int64)&v155;
      do
      {
        if ( (_DWORD)v165 == (_DWORD)v72 )
          goto LABEL_110;
        bytes = get_bytes(v141, 1, v72, 0, 0);
        ++v166;
        if ( bytes != 1 )
          goto LABEL_111;
        v74 = v162;
        v75 = v155;
        v76 = 2;
        if ( (_QWORD)v162 )
        {
          v76 = v162 + 1;
          v74 = v162 - 1;
        }
        v77 = v161;
        if ( *((_QWORD *)&v162 + 1) < v76 )
        {
          v144 = v76;
          v161 = (char *)qvector_reserve(v146, v161, v76, 1);
          v76 = v144;
          v77 = v161;
        }
        *(_QWORD *)&v162 = v76;
        v77[v74] = v75;
        v161[v74 + 1] = 0;
        v78 = v155;
        v72 = v166;
      }
      while ( v155 );
      v79 = *(_DWORD *)(a1 + 132);
      if ( !(_QWORD)v162 )
      {
        v160 = 0;
        v152 = (char *)s1;
        v80 = v165;
        goto LABEL_127;
      }
      v80 = v165;
      v160 = 0;
      v81 = *v161 == 101;
      v152 = v161;
      if ( v81 && v161[1] == 104 && !v161[2] )
      {
        LODWORD(v144) = (_DWORD)v165 - (_DWORD)v166;
        if ( (int)v165 - (int)v166 >= v79 )
        {
          if ( v79 )
          {
            v115 = &v160;
            goto LABEL_201;
          }
          v117 = 0;
          goto LABEL_211;
        }
        LOBYTE(v149) = v155;
        if ( v166 >= v165 )
        {
          __memset_chk(&v160, 255, v79, 8);
          v166 = v72;
          goto LABEL_111;
        }
        v115 = (__int64 *)__memset_chk(&v160, 255, v79, 8);
        if ( (_DWORD)v144 )
        {
          v78 = v149;
          v79 = v144;
LABEL_201:
          LOBYTE(v150) = v78;
          LODWORD(v149) = v79;
          v144 = v79;
          v116 = get_bytes(v115, v79, v72, 0, 0);
          v117 = 0;
          v118 = *(_DWORD *)(a1 + 132);
          v78 = v150;
          v72 = &v166[v144];
          if ( v144 != v116 )
          {
LABEL_202:
            v166 = v72;
            if ( v118 != v117 )
              goto LABEL_111;
            LOBYTE(v79) = v118;
            v152 += 2;
            v80 = v165;
            goto LABEL_127;
          }
          v117 = v149;
          v79 = *(_DWORD *)(a1 + 132);
LABEL_211:
          v118 = v79;
          goto LABEL_202;
        }
        v166 = v72;
        goto LABEL_111;
      }
LABEL_127:
      v156 = v79;
      LODWORD(n) = (unsigned __int8)v148;
      if ( (unsigned __int8)v148 > 3u )
      {
        if ( (_DWORD)v80 == (_DWORD)v72 )
        {
          v156 = -1;
          goto LABEL_111;
        }
        LOBYTE(v144) = v78;
        v113 = get_bytes(&v156, 1, v72, 0, 0);
        v114 = ++v166;
        if ( v113 != 1 || !v156 || v156 > 8u )
          goto LABEL_111;
        if ( (_DWORD)v165 == (_DWORD)v114 )
        {
          v154 = -1;
          goto LABEL_111;
        }
        v134 = get_bytes(&v154, 1, v114, 0, 0);
        v78 = v144;
        v72 = ++v166;
        if ( v134 != 1 || v154 > 8u || v156 + v154 > 8 )
        {
LABEL_111:
          if ( v161 )
          {
            *(_QWORD *)&v162 = 0;
            qfree(v161);
          }
          goto LABEL_27;
        }
        v80 = v165;
      }
      v150 = 0;
      v82 = 0;
      while ( v72 < v80 )
      {
        LOBYTE(v149) = v78;
        v148 = v82;
        v144 = (unsigned __int64)(v72 + 1);
        v83 = get_byte(v72);
        v84 = (char *)v144;
        v78 = v149;
        v82 = v148 + 7;
        v150 |= (unsigned __int64)(v83 & 0x7F) << v148;
        if ( v83 >= 0 || v82 > 0x3F )
        {
          v80 = v165;
          goto LABEL_134;
        }
        v80 = v165;
        v72 = (char *)v144;
      }
      v84 = v72;
LABEL_134:
      v166 = v84;
      v85 = 0;
      v149 = 0;
      while ( 1 )
      {
        if ( v84 >= v80 )
        {
          v166 = v84;
          v86 = (unsigned __int64)v84;
          goto LABEL_205;
        }
        v148 = v85;
        v144 = (unsigned __int64)(v84 + 1);
        v78 = get_byte(v84);
        v86 = v144;
        v85 = v148 + 7;
        v149 |= (unsigned __int64)(v78 & 0x7F) << v148;
        v80 = v165;
        if ( v78 >= 0 || v85 > 0x3F )
          break;
        v84 = (char *)v144;
      }
      v166 = (char *)v144;
      if ( v85 > 0x3F )
        goto LABEL_140;
LABEL_205:
      if ( (v78 & 0x40) != 0 )
        v149 |= -1LL << v85;
LABEL_140:
      v144 = 0;
      v87 = 0;
      if ( (_DWORD)n == 1 )
      {
        if ( (_DWORD)v80 == (_DWORD)v86 )
        {
LABEL_110:
          v155 = -1;
          goto LABEL_111;
        }
        v119 = get_bytes(v141, 1, v86, 0, 0);
        ++v166;
        if ( v119 != 1 )
          goto LABEL_111;
        v144 = v155;
      }
      else
      {
        while ( v86 < (unsigned __int64)v80 )
        {
          v88 = (char *)(v86 + 1);
          v89 = get_byte(v86);
          v90 = v87;
          v87 += 7;
          v144 |= (unsigned __int64)(v89 & 0x7F) << v90;
          if ( v89 >= 0 || v87 > 0x3F )
            goto LABEL_146;
          v80 = v165;
          ++v86;
        }
        v88 = (char *)v86;
LABEL_146:
        v166 = v88;
      }
      if ( *v152 != 122 )
      {
        v157 = 0;
        v91 = -1;
        v158 = -1;
        LOBYTE(v148) = 0;
        v141 = -1;
        goto LABEL_149;
      }
      v145 = 0;
      v120 = v166;
      v121 = 0;
      while ( 1 )
      {
        v122 = v165;
        if ( v120 >= v165 )
          break;
        v141 = (__int64)(v120 + 1);
        v123 = get_byte(v120);
        v124 = v121;
        v121 += 7;
        v145 |= (unsigned __int64)(v123 & 0x7F) << v124;
        if ( v123 >= 0 || v121 > 0x3F )
        {
          v122 = v165;
          goto LABEL_225;
        }
        v120 = (char *)v141;
      }
      v141 = (__int64)v120;
LABEL_225:
      if ( (unsigned __int64)v122 >= v145 + v141 && !__CFADD__(v145, v141) )
        v122 = (char *)(v145 + v141);
      v157 = 0;
      v158 = -1;
      v166 = v122;
      v125 = v152 + 1;
      LOBYTE(v148) = v141 != -1 && v145 != 0;
      if ( (_BYTE)v148 )
      {
        v126 = v141;
        v91 = -1;
        v127 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v145 + v141);
        v168 = v141;
        *((_QWORD *)&v169 + 1) = v141;
        v167 = a1;
        *(_QWORD *)&v169 = v127;
        v128 = v152[1];
        v152 = &v159;
        if ( v128 )
        {
          while ( 1 )
          {
            if ( v126 >= v127 )
              goto LABEL_253;
            if ( v128 == 82 )
              break;
            if ( v128 > 82 )
            {
              v81 = v128 == 83;
              v132 = v147;
              if ( v81 )
                v132 = v148;
              v147 = v132;
            }
            else
            {
              if ( v128 == 76 )
              {
                if ( (_DWORD)v127 == (_DWORD)v126 )
                {
                  v158 = -1;
LABEL_247:
                  *((_QWORD *)&v169 + 1) = v126;
                  goto LABEL_238;
                }
                get_bytes(&v158, 1, v126, 0, 0);
                goto LABEL_251;
              }
              if ( v128 == 80 )
              {
                if ( (_DWORD)v127 == (_DWORD)v126
                  || (v130 = v156, v131 = get_bytes(v152, 1, v126, 0, 0), ++*((_QWORD *)&v169 + 1), v131 != 1) )
                {
                  v129 = 0;
                }
                else
                {
                  v129 = sub_A050(src, v159, v130);
                }
                v91 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & v129;
              }
            }
LABEL_238:
            v128 = *++v125;
            if ( !v128 )
              goto LABEL_253;
            v126 = *((_QWORD *)&v169 + 1);
            v127 = v169;
          }
          if ( (_DWORD)v127 == (_DWORD)v126 )
          {
            v157 = -1;
            goto LABEL_247;
          }
          get_bytes(&v157, 1, v126, 0, 0);
LABEL_251:
          v126 = *((_QWORD *)&v169 + 1) + 1LL;
          goto LABEL_247;
        }
LABEL_253:
        v152 = v125;
      }
      else
      {
        v147 = 0;
        v91 = -1;
        ++v152;
        LOBYTE(v148) = 1;
      }
LABEL_149:
      v147 |= *v152 == 83;
      v92 = (__int64 *)operator new(0x88u);
      *v92 = a1;
      v21 = (char *)v92;
      *((_OWORD *)v92 + 1) = 0;
      v93 = v162;
      v92[1] = 0;
      v92[4] = 0;
      v92[13] = 0;
      *((_DWORD *)v92 + 29) = 0;
      *(_OWORD *)(v92 + 5) = -1;
      *(_OWORD *)(v92 + 7) = -1;
      *(_OWORD *)(v92 + 9) = -1;
      *(_OWORD *)(v92 + 11) = -1;
      v92[15] = 0xFF000000000000LL;
      LODWORD(v92) = *(_DWORD *)(a1 + 132);
      v21[128] = 0;
      v21[129] = (char)v92;
      LODWORD(v92) = n;
      *((_WORD *)v21 + 65) = 0;
      v21[132] = 0;
      *((_DWORD *)v21 + 28) = (_DWORD)v92;
      if ( v93 > 1 )
      {
        n = v93 - 1;
        v152 = (char *)v93;
        src = v161;
        v135 = (void *)qvector_reserve(v21 + 8, 0, v93, 1);
        v136 = v152;
        *((_QWORD *)v21 + 1) = v135;
        v137 = n;
        v138 = src;
        *((_QWORD *)v21 + 2) = v136;
        memmove(v135, v138, v137);
        v152[*((_QWORD *)v21 + 1) - 1] = 0;
      }
      v94 = v148;
      v95 = (unsigned __int8)v149;
      *((_QWORD *)v21 + 12) = -1;
      v96 = v161;
      *((_QWORD *)v21 + 9) = v91;
      v21[124] = v94;
      v97 = _mm_loadh_ps((const double *)&v141);
      v21[130] = v154;
      v98 = v144;
      *(__m128 *)(v21 + 56) = v97;
      *((_DWORD *)v21 + 26) = v98;
      *((_DWORD *)v21 + 27) = v145;
      v21[131] = v157;
      *(_DWORD *)(v21 + 126) = v158 | (((unsigned __int8)v150 | ((v95 | (v156 << 8)) << 8)) << 8);
      v21[125] = v147;
      if ( v96 )
      {
        *(_QWORD *)&v162 = 0;
        qfree(v96);
      }
      v99 = _mm_loadh_ps((const double *)&v165);
      *((_QWORD *)v21 + 4) = v142;
      *(__m128 *)(v21 + 40) = v99;
      if ( v17 >= v41 && !v143 )
      {
        v142 = v21;
        v37 = v41;
LABEL_97:
        v18 = v37;
        goto LABEL_98;
      }
LABEL_28:
      if ( v21 )
        goto LABEL_54;
LABEL_29:
      v3 = sub_FCD0(*(unsigned int *)(a1 + 128), "eh_frame");
      *(_DWORD *)(a1 + 128) = v3;
    }
    while ( v3 >= 0 );
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 13 )
  {
    segm_by_name = (_QWORD *)get_segm_by_name(".ARM.exidx");
    if ( segm_by_name )
    {
      if ( segm_by_name[1] - *segm_by_name > 6u )
      {
        v6 = (__int64 *)get_segm_by_name(".ARM.exidx");
        if ( v6 )
        {
          v7 = *v6;
          v8 = (v6[1] - *v6) & 0xFFFFFFFFFFFFFFF8LL;
          v9 = v8 + v7;
          if ( !__CFADD__(v8, v7) )
          {
            v141 = (__int64)&v167;
            if ( v8 > 7 )
            {
              do
              {
                v11 = get_dword(v7);
                v12 = get_dword(v7 + 4);
                v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v7 + (v11 & 0x7FFFFFFF ^ 0x40000000LL) - 0x40000000);
                if ( v11 < 0 )
                  break;
                v177 = 0xFF000000000000LL;
                v14 = *(_DWORD *)(a1 + 132);
                v167 = a1;
                BYTE1(v178) = v14;
                v168 = 0;
                v170 = 0;
                v173.m128_u64[0] = -1;
                v174.m128_u64[0] = -1;
                v174.m128_u64[1] = -1;
                v175 = 0;
                v176 = 0;
                LOBYTE(v178) = 0;
                HIWORD(v178) = 0;
                v179 = 0;
                v173.m128_u64[1] = v13;
                v169 = 0;
                v171 = (__m128i)-1LL;
                v172 = (__m128)-1LL;
                if ( (unsigned __int64)(v9 - v7) > 0xB )
                {
                  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)
                      & (v7 + (get_dword(v7 + 8) & 0x7FFFFFFF ^ 0x40000000) - 1073741816);
                }
                else
                {
                  v139 = v13;
                  v15 = getseg(v13);
                  v10 = v139 + 4;
                  if ( v15 )
                    v10 = *(_QWORD *)(v15 + 8);
                }
                v174.m128_u64[0] = v10;
                if ( (v12 & 0x7FFFFFFF) != 1 )
                {
                  if ( v12 < 0 )
                    sub_B6D0(a1, (_QWORD *)v141, v7 + 4, 0, a2);
                  else
                    sub_B6D0(
                      a1,
                      (_QWORD *)v141,
                      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v7 + (v12 & 0x7FFFFFFF ^ 0x40000000u) - 1073741820),
                      1,
                      a2);
                }
                v7 += 8;
                v170 = 0;
                if ( v168 )
                {
                  *(_QWORD *)&v169 = 0;
                  qfree(v168);
                }
              }
              while ( (unsigned __int64)(v9 - v7) > 7 );
            }
          }
        }
      }
    }
  }
  return sub_9AB0(a1, 0);
}
