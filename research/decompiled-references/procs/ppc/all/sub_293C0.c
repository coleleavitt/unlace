__int64 __fastcall sub_293C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *v5; // r12
  _DWORD *v6; // rdx
  char v8; // al
  unsigned __int8 v9; // cl
  bool v10; // zf
  __int64 result; // rax
  unsigned int next_dword; // r14d
  int v13; // eax
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // cf
  __int64 v16; // rax
  void *v17; // rdi
  void *v18; // r8
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  char v21; // dl
  _DWORD *v22; // rcx
  unsigned __int8 v23; // al
  char *v24; // rdx
  int v25; // eax
  unsigned int v26; // r15d
  char v27; // al
  unsigned __int8 v28; // dl
  char v29; // al
  unsigned __int8 v30; // dl
  _DWORD *v31; // rax
  unsigned __int8 v32; // cl
  __int64 v33; // rax
  unsigned __int8 v34; // dl
  __int64 v35; // rax
  void *v36; // r8
  __int64 v37; // rcx
  _DWORD *v38; // rsi
  char v39; // al
  _DWORD *v40; // rdx
  unsigned __int8 v41; // cl
  char v42; // al
  unsigned __int8 v43; // dl
  int *v44; // rdx
  unsigned __int8 v45; // al
  unsigned __int8 v46; // cl
  char *v47; // rdx
  int v48; // eax
  unsigned int v49; // r10d
  char *v50; // rsi
  unsigned __int16 v51; // dx
  __int64 v52; // rax
  unsigned int v53; // ebx
  unsigned __int64 v54; // rax
  _DWORD *v55; // rdx
  unsigned __int8 v56; // al
  unsigned __int8 v57; // cl
  int *v58; // rdx
  unsigned __int8 v59; // al
  unsigned __int8 v60; // cl
  char *v61; // rdx
  int v62; // eax
  unsigned int v63; // r11d
  char *v64; // r8
  unsigned __int16 v65; // dx
  __int64 v66; // rax
  unsigned int v67; // r11d
  unsigned __int64 v68; // rax
  _DWORD *v69; // rdx
  unsigned __int8 v70; // al
  unsigned __int8 v71; // cl
  char v72; // al
  unsigned __int8 v73; // dl
  _DWORD *v74; // rcx
  char v75; // dl
  unsigned __int8 v76; // si
  _DWORD *v77; // rdx
  char v78; // al
  unsigned __int8 v79; // cl
  char v80; // al
  unsigned __int8 v81; // dl
  char v82; // al
  _DWORD *v83; // rdx
  unsigned __int8 v84; // al
  unsigned __int8 v85; // cl
  _DWORD *v86; // rdx
  unsigned __int8 v87; // al
  unsigned __int8 v88; // cl
  _DWORD *v89; // rdx
  unsigned __int8 v90; // al
  unsigned __int8 v91; // cl
  _DWORD *v92; // rdx
  unsigned __int8 v93; // al
  unsigned __int8 v94; // cl
  _DWORD *v95; // rdx
  unsigned __int8 v96; // al
  unsigned __int8 v97; // cl
  int v98; // edx
  __int16 v99; // ax
  _DWORD *v100; // rcx
  char v101; // dl
  unsigned __int8 v102; // si
  _DWORD *v103; // rsi
  char v104; // dl
  _DWORD *v105; // rcx
  unsigned __int8 v106; // di
  unsigned __int8 v107; // dl
  char *v108; // rsi
  int v109; // eax
  char *v110; // rdx
  unsigned int v111; // r11d
  int v112; // edx
  unsigned __int16 v113; // ax
  int v114; // edx
  unsigned int v115; // r11d
  __int64 v116; // rax
  _DWORD *v117; // rdx
  unsigned __int8 v118; // al
  unsigned __int8 v119; // cl
  int v120; // edx
  __int64 v121; // rax
  void *v122; // r8
  __int64 v123; // rcx
  _DWORD *v124; // rdx
  unsigned __int8 v125; // al
  unsigned __int8 v126; // cl
  _DWORD *v127; // rdx
  unsigned __int8 v128; // al
  unsigned __int8 v129; // cl
  _DWORD *v130; // rdx
  unsigned __int8 v131; // al
  unsigned __int8 v132; // cl
  _DWORD *v133; // rdx
  unsigned __int8 v134; // al
  unsigned __int8 v135; // cl
  _DWORD *v136; // rdx
  unsigned __int8 v137; // al
  unsigned __int8 v138; // cl
  char *v139; // rdi
  int v140; // edx
  char *v141; // rsi
  unsigned int v142; // r10d
  int v143; // esi
  unsigned __int16 v144; // dx
  int v145; // esi
  unsigned int v146; // r10d
  _DWORD *v147; // rcx
  unsigned __int8 v148; // dl
  unsigned __int8 v149; // si
  char *v150; // r9
  int v151; // edx
  char *v152; // rdi
  unsigned int v153; // r15d
  int v154; // edi
  unsigned __int16 v155; // dx
  int v156; // edi
  unsigned int v157; // r15d
  _DWORD *v158; // rcx
  __int64 v159; // rdi
  unsigned __int8 v160; // dl
  unsigned __int8 v161; // di
  char v162; // [rsp+6h] [rbp-42h] BYREF
  char v163; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v164; // [rsp+8h] [rbp-40h]

  v5 = &unk_602A0;
  v6 = &unk_602A0;
  v164 = __readfsqword(0x28u);
  v8 = 0;
  do
  {
    v9 = _bittest((const int *)&a4, 31 - *v6);
    v6 += 2;
    v8 = v9 | (2 * v8) & 0x3F;
  }
  while ( &unk_602D0 != (_UNKNOWN *)v6 );
  v10 = v8 == 1;
  result = 0;
  if ( v10 && (*(_BYTE *)(a2 + 8) & 7) == 0 )
  {
    next_dword = insn_get_next_dword(a2, 31);
    v13 = HIBYTE(a4) & 1 | (2 * (a4 >> 25)) & 2;
    if ( (HIBYTE(a4) & 1 | (2 * (a4 >> 25)) & 2) == 2 )
    {
      if ( (a4 & 0x800000) != 0 )
        return *(unsigned __int16 *)(a2 + 26);
      if ( !(_BYTE)byte_959B0 && __cxa_guard_acquire(&byte_959B0) )
      {
        sub_292A0((__int64)&unk_959C0, (const __m128i *)&unk_845E0, 12, (__int64)&v162, (__int64)&v163);
        __cxa_atexit((void (*)(void *))func, &unk_959C0, &off_842E0);
        __cxa_guard_release(&byte_959B0);
      }
      v14 = 0;
      do
      {
        v15 = _bittest((const int *)&next_dword, 31 - *v5);
        v5 += 2;
        v14 = (2 * v14) & 0x3F | v15;
      }
      while ( v5 != (_DWORD *)&unk_602D0 );
      v16 = qword_959D0;
      v17 = &unk_959C8;
      v18 = &unk_959C8;
      if ( !qword_959D0 )
        return *(unsigned __int16 *)(a2 + 26);
      do
      {
        v19 = *(_QWORD *)(v16 + 24);
        if ( *(_BYTE *)(v16 + 32) >= v14 )
        {
          v18 = (void *)v16;
          v16 = *(_QWORD *)(v16 + 16);
        }
        else
        {
          v16 = *(_QWORD *)(v16 + 24);
        }
      }
      while ( v16 );
    }
    else
    {
      if ( !(_BYTE)v13 )
      {
        if ( (a4 & 0x800000) == 0 )
        {
          if ( !(_BYTE)byte_95970 && __cxa_guard_acquire(&byte_95970) )
          {
            sub_292A0((__int64)&unk_95980, (const __m128i *)&unk_84520, 11, (__int64)&v162, (__int64)&v163);
            __cxa_atexit((void (*)(void *))func, &unk_95980, &off_842E0);
            __cxa_guard_release(&byte_95970);
          }
          v34 = 0;
          do
          {
            v15 = _bittest((const int *)&next_dword, 31 - *v5);
            v5 += 2;
            v34 = (2 * v34) & 0x3F | v15;
          }
          while ( &unk_602D0 != (_UNKNOWN *)v5 );
          v35 = qword_95990;
          if ( qword_95990 )
          {
            v36 = &unk_95988;
            do
            {
              v37 = *(_QWORD *)(v35 + 24);
              if ( *(_BYTE *)(v35 + 32) >= v34 )
              {
                v36 = (void *)v35;
                v35 = *(_QWORD *)(v35 + 16);
              }
              else
              {
                v35 = *(_QWORD *)(v35 + 24);
              }
            }
            while ( v35 );
            if ( v36 != &unk_95988 && v34 >= *((_BYTE *)v36 + 32) )
              (*((void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v36 + 5))(a2, a4, next_dword, v37);
          }
          v38 = &unk_604E0;
          v39 = 0;
          v40 = &unk_604E0;
          do
          {
            v41 = _bittest((const int *)&next_dword, 31 - *v40);
            v40 += 2;
            v39 = v41 | (2 * v39) & 0x1F;
          }
          while ( &unk_60508 != (_UNKNOWN *)v40 );
          if ( v39 == 25 )
          {
            *(_BYTE *)(a2 + 121) = 5;
            v58 = (int *)&unk_60560;
            *(_BYTE *)(a2 + 125) = 0;
            *(_BYTE *)(a2 + 114) = 1;
            *(_BYTE *)(a2 + 81) = 4;
            *(_QWORD *)(a2 + 128) = (a4 >> 20) & 1;
            v59 = 0;
            do
            {
              v60 = _bittest((const int *)&next_dword, 31 - *v58);
              v58 += 2;
              v59 = v60 | (2 * v59) & 0x1F;
            }
            while ( &dword_60588 != v58 );
            v61 = (char *)&unk_60440;
            *(_WORD *)(a2 + 86) = v59;
            v62 = 0;
            do
            {
              v63 = a4 >> (31 - *v61);
              v61 += 8;
              v62 = (int)((v63 & 1 | (2 * v62)) << 14) >> 14;
            }
            while ( &unk_604D0 != (_UNKNOWN *)v61 );
            v64 = (char *)&unk_60340;
            v65 = 0;
            v66 = (__int64)v62 << 16;
            do
            {
              v67 = next_dword >> (31 - *v64);
              v64 += 8;
              v65 = v67 & 1 | (2 * v65);
            }
            while ( &unk_603C0 != (_UNKNOWN *)v64 );
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 8;
            v68 = v65 | (unsigned __int64)v66;
            v69 = &unk_60520;
            *(_QWORD *)(a2 + 96) = v68;
            v70 = 0;
            do
            {
              v71 = _bittest((const int *)&next_dword, 31 - *v69);
              v69 += 2;
              v70 = v71 | (2 * v70) & 0x3F;
            }
            while ( &unk_60550 != (_UNKNOWN *)v69 );
            *(_DWORD *)(a2 + 24) = (_DWORD)&unk_80C85;
            *(_BYTE *)(a2 + 85) = 8;
            *(_WORD *)(a2 + 46) = v70 + 216;
          }
          v42 = 0;
          do
          {
            v43 = _bittest((const int *)&next_dword, 31 - *v38);
            v38 += 2;
            v42 = v43 | (2 * v42) & 0x1F;
          }
          while ( v38 != (_DWORD *)&unk_60508 );
          if ( v42 == 27 )
          {
            *(_BYTE *)(a2 + 121) = 5;
            v44 = (int *)&unk_60560;
            *(_BYTE *)(a2 + 125) = 0;
            *(_BYTE *)(a2 + 114) = 1;
            *(_BYTE *)(a2 + 81) = 4;
            *(_QWORD *)(a2 + 128) = (a4 >> 20) & 1;
            v45 = 0;
            do
            {
              v46 = _bittest((const int *)&next_dword, 31 - *v44);
              v44 += 2;
              v45 = v46 | (2 * v45) & 0x1F;
            }
            while ( &dword_60588 != v44 );
            v47 = (char *)&unk_60440;
            *(_WORD *)(a2 + 86) = v45;
            v48 = 0;
            do
            {
              v49 = a4 >> (31 - *v47);
              v47 += 8;
              v48 = (int)((v49 & 1 | (2 * v48)) << 14) >> 14;
            }
            while ( v47 != (char *)&unk_604D0 );
            v50 = (char *)&unk_60340;
            v51 = 0;
            v52 = (__int64)v48 << 16;
            do
            {
              v53 = next_dword >> (31 - *v50);
              v50 += 8;
              v51 = v53 & 1 | (2 * v51);
            }
            while ( &unk_603C0 != (_UNKNOWN *)v50 );
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 8;
            v54 = v51 | (unsigned __int64)v52;
            v55 = &unk_60520;
            *(_QWORD *)(a2 + 96) = v54;
            v56 = 0;
            do
            {
              v57 = _bittest((const int *)&next_dword, 31 - *v55);
              v55 += 2;
              v56 = v57 | (2 * v56) & 0x3F;
            }
            while ( &unk_60550 != (_UNKNOWN *)v55 );
            *(_DWORD *)(a2 + 24) = (_DWORD)&unk_80CAE;
            *(_BYTE *)(a2 + 85) = 8;
            *(_WORD *)(a2 + 46) = v56 + 216;
            return 8;
          }
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      v20 = &unk_603E0;
      v21 = 0;
      v22 = &unk_603E0;
      if ( (_BYTE)v13 != 3 )
      {
        v72 = 0;
        do
        {
          v73 = _bittest((const int *)&a4, 31 - *v20);
          v20 += 2;
          v72 = v73 | (2 * v72) & 0xF;
        }
        while ( &unk_60400 != (_UNKNOWN *)v20 );
        if ( v72 )
          return *(unsigned __int16 *)(a2 + 26);
        v74 = &unk_602A0;
        v75 = 0;
        do
        {
          v76 = _bittest((const int *)&next_dword, 31 - *v74);
          v74 += 2;
          v75 = v76 | (2 * v75) & 0x3F;
        }
        while ( &unk_602D0 != (_UNKNOWN *)v74 );
        if ( v75 == 32 )
        {
          v100 = &unk_603C0;
          v101 = 0;
          do
          {
            v102 = _bittest((const int *)&next_dword, 31 - *v100);
            v100 += 2;
            v101 = v102 | (2 * v101) & 7;
          }
          while ( &unk_603D8 != (_UNKNOWN *)v100 );
          if ( !v101 )
          {
            *(_BYTE *)(a2 + 121) = 5;
            v139 = (char *)&unk_60340;
            v140 = 0;
            *(_BYTE *)(a2 + 125) = 7;
            v141 = (char *)&unk_60340;
            do
            {
              v142 = a4 >> (31 - *v141);
              v141 += 8;
              v140 = v142 & 1 | (2 * v140);
            }
            while ( &unk_603C0 != (_UNKNOWN *)v141 );
            v143 = v140;
            v144 = 0;
            v145 = v143 << 16;
            do
            {
              v146 = next_dword >> (31 - *v139);
              v139 += 8;
              v144 = v146 & 1 | (2 * v144);
            }
            while ( &unk_603C0 != (_UNKNOWN *)v139 );
            *(_BYTE *)(a2 + 81) = 5;
            v147 = &unk_60300;
            *(_BYTE *)(a2 + 85) = 0;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 8;
            *(_QWORD *)(a2 + 128) = v145 | (unsigned int)v144;
            *(_QWORD *)(a2 + 88) = (next_dword >> 17) & 1;
            v148 = 0;
            do
            {
              v149 = _bittest((const int *)&next_dword, 31 - *v147);
              v147 += 2;
              v148 = v149 | (2 * v148) & 0x3F;
            }
            while ( &unk_60330 != (_UNKNOWN *)v147 );
            *(_DWORD *)(a2 + 24) = (_DWORD)&unk_80D63;
            *(_WORD *)(a2 + 46) = v148 + 216;
          }
          v103 = &unk_602E0;
          v104 = 0;
          v105 = &unk_602E0;
          do
          {
            v106 = _bittest((const int *)&next_dword, 31 - *v105);
            v105 += 2;
            v104 = v106 | (2 * v104) & 0xF;
          }
          while ( &unk_60300 != (_UNKNOWN *)v105 );
          if ( v104 == 2 )
          {
            *(_BYTE *)(a2 + 81) = 5;
            v150 = (char *)&unk_60340;
            v151 = 0;
            *(_BYTE *)(a2 + 85) = 7;
            v152 = (char *)&unk_60340;
            do
            {
              v153 = a4 >> (31 - *v152);
              v152 += 8;
              v151 = v153 & 1 | (2 * v151);
            }
            while ( &unk_603C0 != (_UNKNOWN *)v152 );
            v154 = v151;
            v155 = 0;
            v156 = v154 << 16;
            do
            {
              v157 = next_dword >> (31 - *v150);
              v150 += 8;
              v155 = v157 & 1 | (2 * v155);
            }
            while ( &unk_603C0 != (_UNKNOWN *)v150 );
            *(_BYTE *)(a2 + 41) = 1;
            v158 = &unk_60300;
            *(_BYTE *)(a2 + 45) = 8;
            v159 = v156 | (unsigned int)v155;
            v160 = 0;
            *(_QWORD *)(a2 + 88) = v159;
            do
            {
              v161 = _bittest((const int *)&next_dword, 31 - *v158);
              v158 += 2;
              v160 = v161 | (2 * v160) & 0x3F;
            }
            while ( &unk_60330 != (_UNKNOWN *)v158 );
            *(_DWORD *)(a2 + 24) = (_DWORD)&unk_80D64;
            *(_WORD *)(a2 + 46) = v160 + 216;
          }
          do
          {
            v107 = _bittest((const int *)&next_dword, 31 - *v103);
            v103 += 2;
            v72 = v107 | (2 * v72) & 0xF;
          }
          while ( &unk_60300 != (_UNKNOWN *)v103 );
          if ( v72 == 3 )
          {
            *(_BYTE *)(a2 + 81) = 5;
            v108 = (char *)&unk_60340;
            v109 = 0;
            *(_BYTE *)(a2 + 85) = 7;
            v110 = (char *)&unk_60340;
            do
            {
              v111 = a4 >> (31 - *v110);
              v110 += 8;
              v109 = v111 & 1 | (2 * v109);
            }
            while ( &unk_603C0 != (_UNKNOWN *)v110 );
            v112 = v109;
            v113 = 0;
            v114 = v112 << 16;
            do
            {
              v115 = next_dword >> (31 - *v108);
              v108 += 8;
              v113 = v115 & 1 | (2 * v113);
            }
            while ( &unk_603C0 != (_UNKNOWN *)v108 );
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 8;
            v116 = v114 | (unsigned int)v113;
            v117 = &unk_60300;
            *(_QWORD *)(a2 + 88) = v116;
            v118 = 0;
            do
            {
              v119 = _bittest((const int *)&next_dword, 31 - *v117);
              v117 += 2;
              v118 = v119 | (2 * v118) & 0x3F;
            }
            while ( &unk_60330 != (_UNKNOWN *)v117 );
            *(_DWORD *)(a2 + 24) = (_DWORD)&unk_80D65;
            *(_WORD *)(a2 + 46) = v118 + 216;
          }
        }
        v77 = &unk_602A0;
        v78 = 0;
        do
        {
          v79 = _bittest((const int *)&next_dword, 31 - *v77);
          v77 += 2;
          v78 = v79 | (2 * v78) & 0x3F;
        }
        while ( &unk_602D0 != (_UNKNOWN *)v77 );
        if ( v78 == 33 )
        {
          if ( !(_BYTE)byte_958E8 && __cxa_guard_acquire(&byte_958E8) )
          {
            sub_292A0((__int64)&unk_95900, (const __m128i *)&unk_84300, 4, (__int64)&v162, (__int64)&v163);
            __cxa_atexit((void (*)(void *))func, &unk_95900, &off_842E0);
            __cxa_guard_release(&byte_958E8);
          }
          v120 = (next_dword >> 4) & 1 | (2 * (unsigned __int8)(next_dword >> 5)) & 2;
          v121 = qword_95910;
          if ( qword_95910 )
          {
            v122 = &unk_95908;
            do
            {
              v123 = *(_QWORD *)(v121 + 24);
              if ( *(_BYTE *)(v121 + 32) >= (unsigned __int8)v120 )
              {
                v122 = (void *)v121;
                v121 = *(_QWORD *)(v121 + 16);
              }
              else
              {
                v121 = *(_QWORD *)(v121 + 24);
              }
            }
            while ( v121 );
            if ( v122 != &unk_95908 && (unsigned __int8)v120 >= *((_BYTE *)v122 + 32) )
              (*((void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v122 + 5))(a2, a4, next_dword, v123);
          }
        }
        v80 = 0;
        do
        {
          v81 = _bittest((const int *)&next_dword, 31 - *v5);
          v5 += 2;
          v80 = v81 | (2 * v80) & 0x3F;
        }
        while ( &unk_602D0 != (_UNKNOWN *)v5 );
        if ( v80 != 34 )
          return *(unsigned __int16 *)(a2 + 26);
        v82 = ((next_dword & 0x10) != 0) | (2 * (next_dword >> 5)) & 2;
        if ( v82 )
        {
          if ( v82 != 1 )
            return *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 201) = 5;
          v83 = &unk_60140;
          v84 = 0;
          *(_BYTE *)(a2 + 205) = 0;
          do
          {
            v85 = _bittest((const int *)&a4, 31 - *v83);
            v83 += 2;
            v84 = v85 | (2 * v84);
          }
          while ( &unk_60180 != (_UNKNOWN *)v83 );
          *(_BYTE *)(a2 + 161) = 1;
          v86 = &unk_60240;
          *(_BYTE *)(a2 + 165) = 8;
          *(_QWORD *)(a2 + 208) = v84;
          v87 = 0;
          do
          {
            v88 = _bittest((const int *)&next_dword, 31 - *v86);
            v86 += 2;
            v87 = v88 | (2 * v87) & 0x3F;
          }
          while ( &unk_60270 != (_UNKNOWN *)v86 );
          *(_BYTE *)(a2 + 121) = 1;
          v89 = &unk_60200;
          *(_BYTE *)(a2 + 125) = 8;
          *(_WORD *)(a2 + 166) = v87 + 216;
          v90 = 0;
          do
          {
            v91 = _bittest((const int *)&next_dword, 31 - *v89);
            v89 += 2;
            v90 = v91 | (2 * v90) & 0x3F;
          }
          while ( &unk_60230 != (_UNKNOWN *)v89 );
          *(_BYTE *)(a2 + 81) = 1;
          v92 = &unk_601C0;
          *(_BYTE *)(a2 + 85) = 8;
          *(_WORD *)(a2 + 126) = v90 + 216;
          v93 = 0;
          do
          {
            v94 = _bittest((const int *)&next_dword, 31 - *v92);
            v92 += 2;
            v93 = v94 | (2 * v93) & 0x3F;
          }
          while ( &unk_601F0 != (_UNKNOWN *)v92 );
          *(_BYTE *)(a2 + 41) = 1;
          v95 = &unk_60180;
          *(_BYTE *)(a2 + 45) = 8;
          *(_WORD *)(a2 + 86) = v93 + 216;
          v96 = 0;
          do
          {
            v97 = _bittest((const int *)&next_dword, 31 - *v95);
            v95 += 2;
            v96 = v97 | (2 * v96) & 0x3F;
          }
          while ( &unk_601B0 != (_UNKNOWN *)v95 );
          v98 = 527706;
          v99 = v96 + 216;
        }
        else
        {
          *(_BYTE *)(a2 + 201) = 5;
          v124 = &unk_60270;
          v125 = 0;
          *(_BYTE *)(a2 + 205) = 0;
          do
          {
            v126 = _bittest((const int *)&a4, 31 - *v124);
            v124 += 2;
            v125 = v126 | (2 * v125) & 7;
          }
          while ( &unk_60288 != (_UNKNOWN *)v124 );
          *(_BYTE *)(a2 + 161) = 1;
          v127 = &unk_60240;
          *(_BYTE *)(a2 + 165) = 8;
          *(_QWORD *)(a2 + 208) = v125;
          v128 = 0;
          do
          {
            v129 = _bittest((const int *)&next_dword, 31 - *v127);
            v127 += 2;
            v128 = v129 | (2 * v128) & 0x3F;
          }
          while ( &unk_60270 != (_UNKNOWN *)v127 );
          *(_BYTE *)(a2 + 121) = 1;
          v130 = &unk_60200;
          *(_BYTE *)(a2 + 125) = 8;
          *(_WORD *)(a2 + 166) = v128 + 216;
          v131 = 0;
          do
          {
            v132 = _bittest((const int *)&next_dword, 31 - *v130);
            v130 += 2;
            v131 = v132 | (2 * v131) & 0x3F;
          }
          while ( &unk_60230 != (_UNKNOWN *)v130 );
          *(_BYTE *)(a2 + 81) = 1;
          v133 = &unk_601C0;
          *(_BYTE *)(a2 + 85) = 8;
          *(_WORD *)(a2 + 126) = v131 + 216;
          v134 = 0;
          do
          {
            v135 = _bittest((const int *)&next_dword, 31 - *v133);
            v133 += 2;
            v134 = v135 | (2 * v134) & 0x3F;
          }
          while ( &unk_601F0 != (_UNKNOWN *)v133 );
          *(_BYTE *)(a2 + 41) = 1;
          v136 = &unk_60180;
          *(_BYTE *)(a2 + 45) = 8;
          *(_WORD *)(a2 + 86) = v134 + 216;
          v137 = 0;
          do
          {
            v138 = _bittest((const int *)&next_dword, 31 - *v136);
            v136 += 2;
            v137 = v138 | (2 * v137) & 0x3F;
          }
          while ( &unk_601B0 != (_UNKNOWN *)v136 );
          v98 = 527713;
          v99 = v137 + 216;
        }
        *(_WORD *)(a2 + 46) = v99;
        *(_DWORD *)(a2 + 24) = v98;
        return 8;
      }
      do
      {
        v23 = _bittest((const int *)&a4, 31 - *v22);
        v22 += 2;
        v21 = v23 | (2 * v21) & 0xF;
      }
      while ( &unk_60400 != (_UNKNOWN *)v22 );
      if ( !v21 )
      {
        v24 = (char *)&unk_60440;
        v25 = 0;
        do
        {
          v26 = a4 >> (31 - *v24);
          v24 += 8;
          v25 = v26 & 1 | (2 * v25) & 0x3FFFF;
        }
        while ( &unk_604D0 != (_UNKNOWN *)v24 );
        if ( !v25 )
          *(_DWORD *)(a2 + 24) = (_DWORD)&unk_80CA4;
      }
      v27 = 0;
      do
      {
        v28 = _bittest((const int *)&a4, 31 - *v20);
        v20 += 2;
        v27 = v28 | (2 * v27) & 0xF;
      }
      while ( &unk_60400 != (_UNKNOWN *)v20 );
      if ( v27 != 9 )
        return *(unsigned __int16 *)(a2 + 26);
      v29 = 0;
      do
      {
        v30 = _bittest((const int *)&next_dword, 31 - *v5);
        v5 += 2;
        v29 = v30 | (2 * v29) & 0x3F;
      }
      while ( &unk_602D0 != (_UNKNOWN *)v5 );
      if ( v29 != 59 )
        return *(unsigned __int16 *)(a2 + 26);
      if ( !(_BYTE)byte_95930 && __cxa_guard_acquire(&byte_95930) )
      {
        sub_292A0((__int64)&unk_95940, (const __m128i *)&unk_84340, 29, (__int64)&v162, (__int64)&v163);
        __cxa_atexit((void (*)(void *))func, &unk_95940, &off_842E0);
        __cxa_guard_release(&byte_95930);
      }
      v31 = &unk_60400;
      v14 = 0;
      do
      {
        v32 = _bittest((const int *)&next_dword, 31 - *v31);
        v31 += 2;
        v14 = v32 | (2 * v14);
      }
      while ( &unk_60440 != (_UNKNOWN *)v31 );
      v33 = qword_95950;
      v17 = &unk_95948;
      v18 = &unk_95948;
      if ( !qword_95950 )
        return *(unsigned __int16 *)(a2 + 26);
      do
      {
        v19 = *(_QWORD *)(v33 + 24);
        if ( *(_BYTE *)(v33 + 32) >= v14 )
        {
          v18 = (void *)v33;
          v33 = *(_QWORD *)(v33 + 16);
        }
        else
        {
          v33 = *(_QWORD *)(v33 + 24);
        }
      }
      while ( v33 );
    }
    if ( v18 != v17 && v14 >= *((_BYTE *)v18 + 32) )
      (*((void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v18 + 5))(a2, a4, next_dword, v19);
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}
