__int64 __fastcall sub_148C60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *exception; // rdi
  __int64 *v8; // rdi
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  bool v13; // zf
  __int64 *v14; // rsi
  __int64 v15; // r8
  int v16; // r9d
  __int64 (__fastcall *v17)(__int64); // rcx
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r12
  unsigned __int64 v22; // rcx
  __int64 **v23; // r13
  unsigned __int64 *v24; // r13
  unsigned __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 (__fastcall *v27)(__int64); // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 *v31; // r13
  __int64 v32; // rax
  __int64 (__fastcall *v33)(__int64); // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdi
  __int64 *v41; // rax
  __int64 *v42; // r13
  int v43; // edx
  int v44; // r13d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 *v49; // rax
  int v50; // eax
  unsigned int v51; // r13d
  __int64 v52; // rax
  char v53; // bl
  int v55; // eax
  __int64 (__fastcall *v56)(__int64, int); // rax
  int v57; // eax
  __int64 (__fastcall *v58)(__int64, int, int); // rax
  int v59; // eax
  unsigned __int64 v60; // r13
  void *v61; // rbx
  __m128i si128; // xmm0
  __int64 v63; // r13
  _QWORD *v64; // r13
  __int64 v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // r8
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  int v72; // r8d
  int v73; // r9d
  const char *v74; // rcx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  int v79; // r9d
  __int64 *v80; // rsi
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdi
  void (*v84)(); // rax
  __int64 *v85; // rax
  unsigned __int64 *v86; // r12
  __int64 *v87; // rdi
  __int64 v88; // rsi
  __int64 *v89; // rdx
  __int64 *i; // rax
  __int64 *v91; // rcx
  __int64 *v92; // rax
  __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  int v97; // edx
  char v98; // cl
  _DWORD *v99; // rsi
  bool v100; // cc
  _BYTE *v101; // rsi
  char v102; // dl
  __int64 v103; // rax
  __m128i v104; // xmm1
  unsigned __int64 v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rax
  int v108; // eax
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // r15
  unsigned __int64 v111; // rax
  _QWORD *v112; // rbx
  _QWORD *v113; // rdi
  _QWORD *v114; // rdi
  __int64 *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  unsigned __int64 *v118; // rax
  __int64 v119; // [rsp-8h] [rbp-1A8h]
  __int64 **v120; // [rsp+0h] [rbp-1A0h]
  __int64 *v121; // [rsp+18h] [rbp-188h]
  __int64 v122; // [rsp+20h] [rbp-180h]
  _DWORD *v123; // [rsp+20h] [rbp-180h]
  __int64 v124; // [rsp+20h] [rbp-180h]
  __int64 v125; // [rsp+28h] [rbp-178h]
  unsigned __int64 v126; // [rsp+28h] [rbp-178h]
  __int64 v127; // [rsp+28h] [rbp-178h]
  size_t n[2]; // [rsp+30h] [rbp-170h] BYREF
  __int64 v129; // [rsp+40h] [rbp-160h]
  _QWORD *v130; // [rsp+48h] [rbp-158h]
  __int64 *v131; // [rsp+50h] [rbp-150h]
  __int64 *v132; // [rsp+58h] [rbp-148h]
  unsigned int v133; // [rsp+60h] [rbp-140h] BYREF
  int v134; // [rsp+64h] [rbp-13Ch] BYREF
  int *v135; // [rsp+68h] [rbp-138h] BYREF
  unsigned __int64 *v136; // [rsp+70h] [rbp-130h] BYREF
  __int128 v137; // [rsp+78h] [rbp-128h]
  __int64 v138; // [rsp+90h] [rbp-110h] BYREF
  __int128 v139; // [rsp+98h] [rbp-108h]
  int v140; // [rsp+A8h] [rbp-F8h]
  __int64 v141[2]; // [rsp+B0h] [rbp-F0h] BYREF
  __int64 v142; // [rsp+C0h] [rbp-E0h] BYREF
  __int128 v143; // [rsp+C8h] [rbp-D8h]
  __int64 v144[2]; // [rsp+E0h] [rbp-C0h] BYREF
  void *v145; // [rsp+F0h] [rbp-B0h] BYREF
  __m128i v146; // [rsp+F8h] [rbp-A8h]
  __int64 v147; // [rsp+110h] [rbp-90h] BYREF
  __int64 v148; // [rsp+118h] [rbp-88h]
  __int64 v149; // [rsp+120h] [rbp-80h] BYREF
  __m128i v150; // [rsp+128h] [rbp-78h] BYREF
  __int64 v151; // [rsp+140h] [rbp-60h] BYREF
  __int128 v152; // [rsp+148h] [rbp-58h] BYREF
  __int128 v153; // [rsp+158h] [rbp-48h]
  unsigned __int64 v154; // [rsp+168h] [rbp-38h]

  v154 = __readfsqword(0x28u);
  v8 = (__int64 *)a1[5];
  v133 = 0;
  sub_143B70(v8, nullptr, (unsigned __int64)&v133, a4, a5, a6);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1[5] + 936) + 24LL))(*(_QWORD *)(a1[5] + 936));
  v9 = a1[5];
  v141[0] = 0;
  v141[1] = 0;
  v10 = *(_QWORD *)(v9 + 128);
  v11 = *(_QWORD *)(v9 + 1440);
  v142 = 0;
  v143 = 0;
  v12 = v10;
  if ( v10 + v11 - 1 >= v11 )
  {
    v142 = qvector_reserve();
    *(__m128i *)(v142 + 16 * v143) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v12);
    v9 = a1[5];
    *(_QWORD *)&v143 = v143 + 1;
  }
  v13 = *(_BYTE *)(v9 + 320) == 0;
  v144[0] = 0;
  v144[1] = 0;
  v145 = nullptr;
  v146 = 0;
  if ( !v13 )
    sub_138B00(v9, (__int64)v144, nullptr, v9 + 328, -1, 0);
  v138 = 0;
  v140 = 0;
  v139 = 0;
  v129 = sub_110320((__int64)a1, 0);
  if ( !v129 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
    BUG();
  }
  v14 = &v151;
  ++*(_DWORD *)(v129 + 24);
  LODWORD(v153) = 0;
  v151 = 0;
  v152 = 0;
  nullsub_40();
  sub_66680(&v151);
  for ( LODWORD(v130) = 1; ; LODWORD(v130) = (_DWORD)v130 + 1 )
  {
    v17 = sub_1014E0;
    v18 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v18 != sub_1014E0 )
      break;
    v19 = a1[5];
    v20 = v19;
    if ( (int)v130 >= *(_DWORD *)(v19 + 64) )
      goto LABEL_78;
LABEL_9:
    v21 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8LL * (int)v130);
    v122 = (int)v130;
    v22 = v129;
    v125 = 24LL * (int)v130;
    v23 = *(__int64 ***)v129;
    v149 = 0;
    v147 = 0;
    v24 = (unsigned __int64 *)&v23[(unsigned __int64)v125 / 8];
    v150 = 0;
    v148 = 0;
    v25 = *v24;
    if ( *v24 && v24[1] )
    {
      v26 = *(_QWORD **)(v25 + 8);
      v131 = &v147;
      if ( (_QWORD *)v25 != v26 )
      {
LABEL_12:
        while ( 1 )
        {
          v100 = v26[4] <= 1u;
          v132 = v26 + 3;
          if ( v100 )
            break;
LABEL_13:
          if ( (*v26 & 2) != 0 )
          {
LABEL_16:
            if ( (_QWORD *)*v24 == v26 )
              goto LABEL_17;
          }
          else
          {
            v20 = v26[2];
            if ( (*(_BYTE *)v20 & 2) == 0 )
            {
              do
              {
                v26 = (_QWORD *)v20;
                v20 = *(_QWORD *)(v20 + 8);
              }
              while ( (*(_BYTE *)v20 & 2) == 0 );
              goto LABEL_16;
            }
            v41 = (__int64 *)(*v26 & 0xFFFFFFFFFFFFFFFCLL);
            v20 = *v41;
            if ( (*v41 & 2) == 0 )
            {
              while ( (_QWORD *)v41[2] == v26 )
              {
                v26 = v41;
                v22 = v20 & 0xFFFFFFFFFFFFFFFCLL;
                v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v20 & 2) != 0 )
                {
                  v26 = (_QWORD *)v22;
                  if ( *v24 != v22 )
                    goto LABEL_12;
                  goto LABEL_17;
                }
                v41 = (__int64 *)v22;
              }
            }
            v26 = v41;
            if ( (__int64 *)*v24 == v41 )
              goto LABEL_17;
          }
        }
        v151 = 0;
        v152 = 0u;
        v153 = 0;
        sub_1037A0((__int64)(v26 + 3), v19, (__int64)&v151);
        sub_64100(&v151, (__int64 *)(v21 + 240));
        n[0] = (size_t)&v152 + 8;
        sub_318480((char *)&v152 + 8, v21 + 256);
        if ( (unsigned __int8)sub_64280(&v151) && !(_QWORD)v153 )
          goto LABEL_40;
        if ( v132[1] != 1 )
        {
LABEL_52:
          sub_63C80(v131, &v151);
          sub_317070(&v149, n[0]);
          if ( *((_QWORD *)&v152 + 1) )
          {
            *(_QWORD *)&v153 = 0;
            qfree();
          }
          goto LABEL_42;
        }
        if ( *(_DWORD *)*v132 == (_DWORD)v130 )
        {
          if ( (unsigned __int8)sub_138DD0(v21, v24, (__int64)v132) )
            goto LABEL_52;
        }
        else
        {
          v32 = *a1;
          LODWORD(v132) = *(_DWORD *)*v132;
          v33 = *(__int64 (__fastcall **)(__int64))(v32 + 88);
          if ( v33 == sub_133C50 )
          {
            v34 = (*(__int64 (__fastcall **)(__int64 *))(v32 + 56))(a1);
            v38 = (unsigned int)v132;
            v39 = v34 - 1;
          }
          else
          {
            v39 = v33((__int64)a1);
            v38 = (unsigned int)v132;
          }
          if ( (_DWORD)v38 == v39 )
          {
            v40 = a1[5];
            if ( (*(_BYTE *)(v40 + 1) & 0x40) != 0 )
            {
LABEL_49:
              if ( *(_BYTE *)(v40 + 320) )
                v132 = v144;
              else
                v132 = (__int64 *)(sub_1D4BB0(v40) + 160);
              sub_64040(&v151, v132, v38, v35, v36, v37);
              sub_318020(n[0], v132 + 2);
              goto LABEL_52;
            }
            v132 = *(__int64 **)(v40 + 1504);
            sub_64100(&v151, v132 + 23);
            sub_318480(n[0], v132 + 25);
            if ( !(unsigned __int8)sub_64280(&v151) || (_QWORD)v153 )
            {
              v40 = a1[5];
              goto LABEL_49;
            }
          }
        }
LABEL_40:
        if ( *((_QWORD *)&v152 + 1) )
        {
          *(_QWORD *)&v153 = 0;
          qfree();
        }
LABEL_42:
        qfree();
        v19 = a1[5];
        goto LABEL_13;
      }
LABEL_17:
      if ( (*(_BYTE *)(v19 + 1) & 0x10) == 0 )
      {
LABEL_63:
        sub_64040(v131, v141, v20, v22, v15, v16);
        sub_318020(&v149, &v142);
        goto LABEL_64;
      }
    }
    else
    {
      v131 = &v147;
      if ( (*(_BYTE *)(v19 + 1) & 0x10) == 0 )
        goto LABEL_63;
    }
    v27 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v27 == sub_1014E0 )
      v28 = *(_DWORD *)(v19 + 64);
    else
      v28 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v27)(a1, v19, v20);
    v29 = (unsigned int)v130;
    if ( v28 - 2 != (_DWORD)v130
      || ((v20 = (__int64)sub_133D30, v56 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96), v56 != sub_133D30)
        ? (v57 = v56((__int64)a1, (int)v130))
        : (v29 = v122, v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8 * v122) + 376LL)),
          v57 != 1
       || ((v20 = (__int64)sub_133D70, v58 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112), v58 != sub_133D70)
         ? (v59 = v58((__int64)a1, (int)v130, 0))
         : (v59 = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8 * v122) + 368LL)),
           v29 = (unsigned int)((_DWORD)v130 + 1),
           LODWORD(v132) = v29,
           (_DWORD)v29 != v59)) )
    {
      if ( !(_QWORD)v139 )
        sub_1103B0((__int64)a1, (__int64)&v138, 32);
      v132 = (__int64 *)(v138 + v125);
      v30 = *(__int64 **)(v138 + v125);
      if ( v30 )
      {
        v29 = (__int64)v132;
        if ( v132[1] )
        {
          v31 = (__int64 *)v30[1];
          if ( v30 != v31 )
          {
            n[0] = (size_t)v141;
            do
            {
              v20 = (__int64)(v31 + 3);
              if ( !v31[4] )
              {
                sub_104D40((__int64)&v151, a1[5], v20);
                sub_63C80(v131, &v151);
                sub_317070(&v149, (char *)&v152 + 8);
                if ( *((_QWORD *)&v152 + 1) )
                {
                  *(_QWORD *)&v153 = 0;
                  qfree();
                }
                qfree();
              }
              if ( (*v31 & 2) == 0 )
              {
                v20 = v31[2];
                if ( (*(_BYTE *)v20 & 2) != 0 )
                {
                  v49 = (__int64 *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
                  v20 = *v49;
                  if ( (*v49 & 2) == 0 )
                  {
                    while ( (__int64 *)v49[2] == v31 )
                    {
                      v31 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                      v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v20 & 2) != 0 )
                        goto LABEL_34;
                      v29 = (__int64)v49;
                      v49 = v31;
                      v31 = (__int64 *)v29;
                    }
                  }
                  v31 = v49;
                }
                else
                {
                  do
                  {
                    v31 = (__int64 *)v20;
                    v20 = *(_QWORD *)(v20 + 8);
                  }
                  while ( (*(_BYTE *)v20 & 2) == 0 );
                }
              }
LABEL_34:
              ;
            }
            while ( (__int64 *)*v132 != v31 );
          }
        }
      }
      goto LABEL_64;
    }
    if ( (*(_BYTE *)(a1[5] + 5) & 0x10) != 0 )
    {
      if ( !v146.m128i_i64[0] )
      {
        v60 = *(_QWORD *)(v21 + 224);
        v61 = nullptr;
        if ( v60 )
        {
          n[0] = 16 * v60;
          v61 = (void *)qalloc_or_throw();
          memcpy(v61, *(const void **)(v21 + 216), n[0]);
        }
        si128 = _mm_unpacklo_epi64((__m128i)v60, (__m128i)v60);
        if ( v145 )
        {
          *(__m128i *)n = si128;
          v146.m128i_i64[0] = 0;
          qfree();
          si128 = _mm_load_si128((const __m128i *)n);
        }
        v145 = v61;
        v146 = si128;
      }
      sub_64040(v141, v144, v20, v29, v15, v16);
      sub_318020(&v142, &v145);
    }
    sub_63C80(v131, v141);
    n[0] = (size_t)&v149;
    sub_317070(&v149, &v142);
    v42 = (__int64 *)a1[5];
    if ( *(_QWORD *)(v21 + 56) )
    {
      v63 = *(_QWORD *)(v42[66] + 8LL * (int)v132);
      v132 = (__int64 *)(v63 + 160);
      if ( !(unsigned __int8)sub_64280((_QWORD *)(v63 + 160)) || *(_QWORD *)(v63 + 184) )
      {
        v64 = (_QWORD *)sub_128B90(v21, v132, *(_QWORD *)(v21 + 56), 0, nullptr, 0, 0x101u);
        v20 = v119;
        if ( v64 )
        {
          if ( *((_BYTE *)v64 + 32) == 10 && (v65 = v64[5], *(_BYTE *)v65 == 5) )
          {
            v132 = v64 + 4;
LABEL_122:
            v66 = *(_QWORD **)(v21 + 64);
            v67 = *(_QWORD *)(*(_QWORD *)(v65 + 8) + 8LL);
            v68 = v66[16];
            if ( v67 < v68 )
            {
              v69 = v68 - v67;
              v70 = *(_QWORD *)(*(_QWORD *)(v66[187] + 24LL) + 16LL) & (v66[180] + v67);
              v153 = 0;
              v71 = v70;
              v126 = v70;
              v151 = 0;
              v152 = 0u;
              if ( v69 + v70 - 1 >= v70 )
              {
                v124 = v69;
                v117 = qvector_reserve();
                v71 = v126;
                *((_QWORD *)&v152 + 1) = v117;
                v69 = v124;
                v66 = (_QWORD *)(16 * v153);
                v118 = (unsigned __int64 *)(16 * v153 + v117);
                *v118 = v126;
                v118[1] = v124;
                *(_QWORD *)&v153 = v153 + 1;
              }
              sub_64040(v131, &v151, (__int64)v66, v71, v69, v16);
              sub_318020(n[0], (char *)&v152 + 8);
              sub_93580((__int64)&v151);
            }
            v136 = nullptr;
            v137 = 0;
            sub_1B20A0(v132[1], &v136, 4);
            v151 = 0;
            v152 = 0;
            tag_remove();
            v74 = s1;
            if ( (_QWORD)v152 )
              LODWORD(v74) = v151;
            sub_331510(*(_QWORD *)(v21 + 64), v64[3], 47, (_DWORD)v74, v72, v73);
            if ( v151 )
            {
              *(_QWORD *)&v152 = 0;
              qfree();
            }
            if ( v136 )
            {
              *(_QWORD *)&v137 = 0;
              qfree();
            }
          }
          else if ( *((_BYTE *)v64 + 48) == 10 )
          {
            v65 = v64[7];
            if ( *(_BYTE *)v65 == 5 )
            {
              v132 = v64 + 6;
              goto LABEL_122;
            }
          }
        }
      }
LABEL_64:
      v42 = (__int64 *)a1[5];
    }
    sub_64040(v131, v42 + 32, v20, v29, v15, v16);
    v14 = v42 + 34;
    sub_318020(&v149, v42 + 34);
    if ( (unsigned __int8)sub_64280(v131) && !v150.m128i_i64[0] )
    {
      v47 = v149;
    }
    else
    {
      v14 = *(__int64 **)(a1[5] + 1504);
      v43 = sub_A4E10(v21, (__int64)v14, *(unsigned int **)(v21 + 56), v131);
      v44 = v43;
      if ( v43 )
      {
        v55 = *(_DWORD *)(v21 + 24);
        v14 = (__int64 *)"global dead elimination result, total dead: %d";
        BYTE1(v55) &= ~2u;
        LOBYTE(v55) = v55 | 0x80;
        *(_DWORD *)(v21 + 24) = v55;
        sub_A1F60(v21, (__int64)"global dead elimination result, total dead: %d", v43);
      }
      v45 = *(_QWORD *)(v21 + 80);
      v133 += v44;
      *(_QWORD *)(v21 + 80) = v147;
      v147 = v45;
      v46 = *(_QWORD *)(v21 + 88);
      *(_QWORD *)(v21 + 88) = v148;
      v148 = v46;
      v47 = *(_QWORD *)(v21 + 96);
      v48 = *(_QWORD *)(v21 + 112);
      *(_QWORD *)(v21 + 96) = v149;
      *(__m128i *)(v21 + 104) = _mm_loadu_si128(&v150);
      v149 = v47;
      v150.m128i_i64[1] = v48;
    }
    if ( v47 )
    {
      v150.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
  }
  v50 = ((__int64 (__fastcall *)(__int64 *, __int64 *))v18)(a1, v14);
  v19 = a1[5];
  v20 = v19;
  if ( (int)v130 < v50 )
    goto LABEL_9;
LABEL_78:
  v51 = v133;
  if ( v133 )
  {
    if ( (*(_BYTE *)(v19 + 1) & 0x10) != 0 )
    {
      sub_18FD40(v19, v19, v20, (_DWORD)v17, v15, v16);
      v20 = a1[5];
    }
    v52 = *(_QWORD *)(v20 + 784);
    if ( v52 )
    {
      *(_DWORD *)(v52 + 48) = 63;
      v20 = a1[5];
    }
  }
  v53 = *(_BYTE *)(v20 + 320);
  if ( v53 )
  {
    if ( (*(_BYTE *)(v20 + 1) & 0x40) != 0 )
    {
      v75 = get_tinfo_property() & 0xFFFFFFF0;
      if ( v75 != 64 && v75 != 208 )
      {
        v80 = (__int64 *)a1[5];
        v147 = 0;
        v149 = 0;
        v148 = 0;
        v131 = &v147;
        v150 = 0;
        sub_1347E0(&v147, (__int64)v80, v76, v77, v78, v79);
        v83 = *(_QWORD *)(a1[5] + 1504);
        v84 = *(void (**)())(*(_QWORD *)v83 + 120LL);
        if ( v84 != nullsub_74 )
        {
          v80 = v131;
          ((void (__fastcall *)(__int64, __int64 *))v84)(v83, v131);
        }
        v120 = *(__int64 ***)v129;
        v85 = **(__int64 ***)v129;
        if ( !v85 )
          goto LABEL_139;
        if ( !v120[1] )
          goto LABEL_139;
        v121 = (__int64 *)v85[1];
        if ( v85 == v121 )
          goto LABEL_139;
        v127 = 0;
        v86 = nullptr;
        while ( 1 )
        {
          v87 = v121 + 3;
          v13 = v121[4] == 0;
          v130 = v121 + 3;
          if ( !v13 )
            break;
LABEL_146:
          if ( (*v121 & 2) == 0 )
          {
            v89 = (__int64 *)v121[2];
            if ( (*(_BYTE *)v89 & 2) != 0 )
            {
              v92 = (__int64 *)(*v121 & 0xFFFFFFFFFFFFFFFCLL);
              v93 = *v92;
              if ( (*v92 & 2) == 0 )
              {
                v80 = v121;
                while ( (__int64 *)v92[2] == v80 )
                {
                  v80 = v92;
                  v94 = v93 & 0xFFFFFFFFFFFFFFFCLL;
                  v93 = *(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v93 & 2) != 0 )
                  {
                    v121 = (__int64 *)v94;
                    goto LABEL_151;
                  }
                  v92 = (__int64 *)v94;
                }
              }
              v121 = v92;
            }
            else
            {
              for ( i = (__int64 *)v89[1]; (*(_BYTE *)i & 2) == 0; i = (__int64 *)i[1] )
                v89 = i;
              v121 = v89;
            }
          }
LABEL_151:
          v91 = v121;
          if ( v121 == *v120 )
          {
            if ( v86 )
            {
              if ( !v127 )
              {
                sub_93580((__int64)v131);
LABEL_155:
                qfree();
                goto LABEL_85;
              }
              v105 = v86[1];
              while ( v86 != (unsigned __int64 *)v105 )
              {
                v106 = a1[5];
                v107 = *(unsigned int *)(v105 + 24);
                if ( (unsigned int)v107 >= *(_DWORD *)(v106 + 64) )
                  sub_1340F0(v87, v80, v106, v91, v81, v82);
                v87 = *(__int64 **)(*(_QWORD *)(v106 + 528) + 8 * v107);
                v80 = (__int64 *)v87[6];
                v108 = sub_A4790((__int64)v87, (int *)v80, (__int64 *)(v105 + 32));
                v133 += v108;
                v51 = v133;
                if ( (*(_QWORD *)v105 & 2) == 0 )
                {
                  v109 = *(_QWORD *)(v105 + 16);
                  if ( (*(_BYTE *)v109 & 2) != 0 )
                  {
                    v115 = (__int64 *)(*(_QWORD *)v105 & 0xFFFFFFFFFFFFFFFCLL);
                    v116 = *v115;
                    if ( (*v115 & 2) != 0 || v115[2] != v105 )
                    {
LABEL_200:
                      v105 = (unsigned __int64)v115;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v105 = v116 & 0xFFFFFFFFFFFFFFFCLL;
                        v116 = *(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v116 & 2) != 0 )
                          break;
                        v91 = v115;
                        v115 = (__int64 *)v105;
                        if ( *(__int64 **)(v105 + 16) != v91 )
                          goto LABEL_200;
                      }
                    }
                  }
                  else
                  {
                    do
                    {
                      v105 = v109;
                      v109 = *(_QWORD *)(v109 + 8);
                    }
                    while ( (*(_BYTE *)v109 & 2) == 0 );
                  }
                }
              }
              sub_93580((__int64)v131);
              v110 = *v86;
              v111 = *v86 & 0xFFFFFFFFFFFFFFFCLL;
              v112 = (_QWORD *)v111;
              if ( (*(_BYTE *)v111 & 2) != 0 )
                goto LABEL_155;
              v113 = *(_QWORD **)(v111 + 8);
              if ( (*(_BYTE *)v113 & 2) != 0 )
              {
                v114 = *(_QWORD **)(v111 + 16);
                if ( (*(_BYTE *)v114 & 2) != 0 )
                {
LABEL_210:
                  sub_93580((__int64)(v112 + 4));
                  *v112 |= 2uLL;
LABEL_197:
                  if ( v110 > 3 )
                    qfree();
                  goto LABEL_155;
                }
              }
              else
              {
                sub_136B60(v113);
                v114 = (_QWORD *)v112[2];
                if ( (*(_BYTE *)v114 & 2) != 0 )
                  goto LABEL_196;
              }
              sub_136B60(v114);
LABEL_196:
              if ( (*(_BYTE *)v112 & 2) != 0 )
                goto LABEL_197;
              goto LABEL_210;
            }
LABEL_139:
            sub_93580((__int64)v131);
            goto LABEL_85;
          }
        }
        v88 = a1[5];
        v151 = 0;
        v152 = 0u;
        v153 = 0;
        sub_1037A0((__int64)v87, v88, (__int64)&v151);
        v80 = &v151;
        if ( (unsigned __int8)sub_64180(v131, &v151)
          || (v80 = (__int64 *)&v152 + 1, n[0] = (size_t)&v152 + 8,
                                          (unsigned __int8)sub_318830(&v149, (char *)&v152 + 8))
          || (v95 = 0, LODWORD(v132) = 0, !v130[1]) )
        {
LABEL_145:
          v87 = &v151;
          sub_93580((__int64)&v151);
          goto LABEL_146;
        }
        while ( 1 )
        {
          v97 = *(_DWORD *)(*v130 + 4 * v95);
          v134 = v97;
          v135 = &v134;
          if ( v86 )
          {
            if ( v127 )
            {
              v96 = *v86 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (*(_BYTE *)v96 & 2) != 0 )
              {
                v96 = (unsigned __int64)v86;
                v102 = 1;
              }
              else
              {
                v98 = v53;
                v99 = (_DWORD *)(v96 + 24);
                v100 = v97 <= *(_DWORD *)(v96 + 24);
                if ( v97 < *(_DWORD *)(v96 + 24) )
                {
LABEL_172:
                  v101 = *(_BYTE **)(v96 + 8);
                  v98 = v53;
                  goto LABEL_173;
                }
                while ( !v100 )
                {
                  v101 = *(_BYTE **)(v96 + 16);
                  v98 = 0;
LABEL_173:
                  if ( (*v101 & 2) != 0 )
                    goto LABEL_180;
                  v96 = (unsigned __int64)v101;
                  v99 = v101 + 24;
                  v100 = v97 <= *v99;
                  if ( v97 < *v99 )
                    goto LABEL_172;
                }
                v123 = v99;
                if ( v96 )
                  goto LABEL_167;
LABEL_180:
                v102 = v98;
              }
              v136 = v86;
              *(_QWORD *)&v137 = v127;
              v96 = sub_148A30((__m128i *)&v136, (unsigned __int64 *)v96, v102, &v135);
              goto LABEL_166;
            }
          }
          else
          {
            v103 = qalloc();
            v86 = (unsigned __int64 *)v103;
            v104 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v103, (__m128i)(unsigned __int64)v103);
            if ( !v103 )
            {
              exception = __cxa_allocate_exception(8u);
              *exception = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            *(_QWORD *)(v103 + 64) = 0;
            *(_OWORD *)(v103 + 16) = 0;
            *(_OWORD *)(v103 + 32) = 0;
            *(_OWORD *)(v103 + 48) = 0;
            *(__m128i *)(v103 + 8) = v104;
            *(_QWORD *)v103 = v103 & 0xFFFFFFFFFFFFFFFCLL | 2;
          }
          v136 = v86;
          *(_QWORD *)&v137 = v127;
          v96 = sub_148A30((__m128i *)&v136, v86, 1, &v135);
LABEL_166:
          v86 = v136;
          v127 = v137;
          v123 = (_DWORD *)(v96 + 24);
LABEL_167:
          sub_63C80((__int64 *)(v96 + 32), &v151);
          v80 = (__int64 *)n[0];
          sub_317070(v123 + 6, n[0]);
          LODWORD(v132) = (_DWORD)v132 + 1;
          v95 = (int)v132;
          if ( (unsigned __int64)(int)v132 >= v130[1] )
            goto LABEL_145;
        }
      }
    }
  }
LABEL_85:
  sub_104850(v129);
  sub_66680(&v138);
  if ( v145 )
  {
    v146.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v142 )
  {
    *(_QWORD *)&v143 = 0;
    qfree();
  }
  qfree();
  return v51;
}

