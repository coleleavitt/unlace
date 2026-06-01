__int64 __fastcall sub_BEC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rbp
  unsigned int v16; // r14d
  int *v18; // rbp
  int *v19; // r13
  _BYTE *v20; // rdx
  __int128 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // r12
  __int128 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebp
  __int64 v32; // rdi
  bool v33; // zf
  unsigned __int8 *v34; // rsi
  __int64 v35; // rdi
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rsi
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r14
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // r13
  int v47; // eax
  int v48; // r15d
  __int64 v49; // r12
  int tinfo_size; // eax
  _QWORD *v51; // rdi
  __int64 v52; // r15
  int v53; // eax
  int v54; // r12d
  __int64 v55; // r15
  char *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 *v60; // rcx
  int v61; // ebp
  __int64 *v62; // r13
  __int64 v63; // rax
  __m128i v64; // xmm1
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // r8d
  int v73; // r9d
  __int64 *v74; // r12
  __m128i v75; // xmm1
  __int64 v76; // rax
  unsigned __int64 v77; // rbp
  unsigned __int64 v78; // r12
  __int64 **v79; // r13
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // r9d
  __int64 v84; // rax
  __m128i v85; // xmm0
  unsigned __int64 v86; // rbp
  unsigned __int64 v87; // r12
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // rbp
  __int64 v95; // r13
  __int64 v96; // r12
  __m128i v97; // xmm3
  int v98; // ebp
  __int64 v99; // rax
  int v100; // r8d
  int v101; // r9d
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  int v105; // r9d
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  int v109; // r9d
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r14
  __int64 v113; // rcx
  int v114; // r12d
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // r12
  __int64 v118; // r12
  int v119; // r8d
  int v120; // r9d
  __int64 v121; // r12
  unsigned __int64 v122; // rdx
  __int64 *v123; // rbp
  __int64 v124; // rdx
  __int64 v125; // rcx
  unsigned __int64 v126; // r12
  void *v127; // r13
  __int64 v128; // rdi
  __m128i v129; // xmm0
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  int v134; // esi
  __int64 v135; // rdi
  __int64 v136; // r14
  __int64 v137; // rbp
  __int64 v138; // r12
  int *v139; // rsi
  int v140; // eax
  __m128i v141; // xmm0
  int v142; // [rsp+0h] [rbp-1A8h]
  __int64 v143; // [rsp+8h] [rbp-1A0h]
  __m128i v144; // [rsp+10h] [rbp-198h] BYREF
  __m128i v145; // [rsp+20h] [rbp-188h] BYREF
  __m128i v146; // [rsp+30h] [rbp-178h] BYREF
  __int64 **v147; // [rsp+40h] [rbp-168h]
  __m128i v148; // [rsp+48h] [rbp-160h] BYREF
  __int64 **v149; // [rsp+58h] [rbp-150h]
  int *v150; // [rsp+60h] [rbp-148h] BYREF
  __int128 v151; // [rsp+68h] [rbp-140h]
  __int64 v152; // [rsp+80h] [rbp-128h] BYREF
  __int128 v153; // [rsp+88h] [rbp-120h]
  __int64 v154; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v155; // [rsp+A8h] [rbp-100h]
  __int64 v156; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v157; // [rsp+C8h] [rbp-E0h]
  __int64 v158; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v159; // [rsp+D8h] [rbp-D0h]
  __m128i v160; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 *v161; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v162; // [rsp+108h] [rbp-A0h]
  __int64 (__fastcall **v163)(); // [rsp+120h] [rbp-88h] BYREF
  __int64 v164; // [rsp+128h] [rbp-80h]
  __int64 *v165; // [rsp+130h] [rbp-78h] BYREF
  __m128i v166; // [rsp+138h] [rbp-70h] BYREF
  char v167; // [rsp+148h] [rbp-60h]
  __int64 *v168; // [rsp+150h] [rbp-58h]
  __int64 v169; // [rsp+158h] [rbp-50h]
  unsigned __int64 v170; // [rsp+168h] [rbp-40h]

  v144.m128i_i64[0] = a2;
  v170 = __readfsqword(0x28u);
  v143 = j__qalloc_or_throw(312, a2, a3, a4);
  sub_BE490(v143, (__int64 *)(*(_QWORD *)(a1 + 320) + 1520LL), v7, *(_QWORD *)(a1 + 320));
  *(_QWORD *)(a1 + 216) = v143;
  v10 = *(unsigned int *)(v143 + 20);
  if ( !(_DWORD)v10 )
    *(_DWORD *)(v143 + 20) = 112;
  v150 = nullptr;
  v151 = 0;
  v11 = *(_QWORD *)(v143 + 32);
  if ( (int)v11 <= 0 )
  {
    v135 = *(_QWORD *)(a1 + 248);
    v156 = 0;
    v157 = 0;
    v158 = 0;
    *(_QWORD *)(a1 + 240) = 0;
    v159 = 0;
    if ( v135 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      v147 = (__int64 **)&v156;
      qfree(v135);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
  }
  else
  {
    v12 = 0;
    v13 = 5LL * (unsigned int)(v11 - 1) + 5;
    v14 = (unsigned int)(v11 - 1);
    v15 = 16 * v13;
    do
    {
      v16 = sub_BDAD0(a1, v12 + *(_QWORD *)(v143 + 24), (__int64)&v150, (__m128i)0LL);
      if ( !(_BYTE)v16 )
        goto LABEL_7;
      v12 += 80;
    }
    while ( v15 != v12 );
    v18 = v150;
    v156 = 0;
    v157 = 0;
    v19 = &v150[v151];
    v159 = 0;
    v158 = 0;
    if ( v150 != v19 )
    {
      do
      {
        while ( 1 )
        {
          v20 = *(_BYTE **)(*(_QWORD *)(a1 + 64) + 8LL * *v18);
          if ( *v20 == 4 )
            break;
          if ( v19 == ++v18 )
            goto LABEL_15;
        }
        *((_QWORD *)&v21 + 1) = &v156;
        v147 = (__int64 **)&v156;
        *(_QWORD *)&v21 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL);
        sub_123EA0(v21, (__int64)v20, 0, 0xFFFF0000);
        ++v18;
      }
      while ( v19 != v18 );
    }
LABEL_15:
    v22 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 240) = 0;
    if ( v22 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      v147 = (__int64 **)&v156;
      qfree(v22);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
    v23 = 0;
    v24 = 16 * (5 * v14 + 5);
    do
    {
      *((_QWORD *)&v25 + 1) = &v163;
      v26 = *(_QWORD *)(a1 + 328);
      v163 = nullptr;
      v164 = 0;
      v165 = nullptr;
      v166 = 0;
      *(_QWORD *)&v25 = *(_QWORD *)(v26 + 520);
      sub_123EA0(v25, v23 + *(_QWORD *)(v143 + 24), 0, 0xFFFF0000);
      sub_64280((__int64 *)(a1 + 232), (__int64 *)&v163, 0.0);
      sub_316CB0((__int64 *)(a1 + 248), &v165, v27, v28);
      v147 = (__int64 **)&v156;
      if ( (get_tinfo_property() & 0x40) != 0 )
      {
        v147 = (__int64 **)&v156;
        sub_64280(&v156, (__int64 *)&v163, 0.0);
        sub_316CB0(&v158, &v165, v29, v30);
      }
      if ( v165 )
      {
        v166.m128i_i64[0] = 0;
        qfree((__int64)v165);
      }
      v23 += 80;
      qfree((__int64)v163);
    }
    while ( v23 != v24 );
  }
  v31 = 0;
  v32 = 0;
  *(_DWORD *)(a1 + 228) = 0;
  v33 = *(_QWORD *)(v143 + 56) == 0;
  v152 = 0;
  v145.m128i_i64[0] = v143 + 96;
  v153 = 0;
  if ( v33 )
  {
LABEL_51:
    v154 = 0;
    v155 = 0;
    v57 = *(_QWORD *)(v144.m128i_i64[0] + 16);
    *(_QWORD *)(v144.m128i_i64[0] + 8) = 0;
    if ( v57 )
    {
      v58 = v144.m128i_i64[0];
      v147 = (__int64 **)&v156;
      *(_QWORD *)(v144.m128i_i64[0] + 24) = 0;
      qfree(v57);
      *(_QWORD *)(v58 + 16) = 0;
      *(_QWORD *)(v58 + 32) = 0;
    }
    v59 = 0;
    v60 = &v156;
    v33 = *(_QWORD *)(a1 + 48) == 0;
    v148.m128i_i32[0] = 0;
    v146.m128i_i64[0] = (__int64)&v156;
    if ( !v33 )
    {
      do
      {
        v10 = 3 * v59;
        v61 = 0;
        v62 = (__int64 *)(*(_QWORD *)(a1 + 40) + 24 * v59);
        v63 = 0;
        if ( v62[1] )
        {
          do
          {
            v10 = *v62;
            v67 = *(_QWORD *)(*v62 + 8 * v63);
            if ( v67 )
            {
              v68 = *(_QWORD *)(*v62 + 8 * v63);
              v69 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL);
              v147 = (__int64 **)v146.m128i_i64[0];
              sub_127A20((__int64)&v160, v69, v68, 0, v8, v9);
              sub_64280((__int64 *)v144.m128i_i64[0], v160.m128i_i64, 0.0);
              v147 = &v161;
              sub_316CB0((__int64 *)(v144.m128i_i64[0] + 16), &v161, v70, v71);
              sub_127A20((__int64)&v163, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v67, 1, v72, v73);
              sub_648D0(v160.m128i_i64, (const void **)&v163, 0.0);
              v74 = v165;
              v165 = nullptr;
              v75 = _mm_loadu_si128(&v166);
              v166 = 0;
              if ( v161 )
              {
                v145 = v75;
                v162.m128i_i64[0] = 0;
                qfree((__int64)v161);
                v64 = _mm_load_si128(&v145);
                v161 = v74;
                v162 = v64;
                if ( v165 )
                {
                  v166.m128i_i64[0] = 0;
                  qfree((__int64)v165);
                }
              }
              else
              {
                v161 = v74;
                v162 = v75;
              }
              qfree((__int64)v163);
              sub_64280((__int64 *)v144.m128i_i64[0], v160.m128i_i64, 0.0);
              sub_316CB0(&v154, v147, v65, v66);
              if ( v161 )
              {
                v162.m128i_i64[0] = 0;
                qfree((__int64)v161);
              }
              qfree(v160.m128i_i64[0]);
            }
            v63 = ++v61;
          }
          while ( v61 < (unsigned __int64)v62[1] );
        }
        v59 = ++v148.m128i_i32[0];
      }
      while ( (unsigned __int64)v148.m128i_i32[0] < *(_QWORD *)(a1 + 48) );
    }
    v76 = *(_QWORD *)(a1 + 328);
    v163 = nullptr;
    v164 = 0;
    v165 = nullptr;
    v166 = 0;
    v77 = *(_QWORD *)(v76 + 536);
    v78 = *(_QWORD *)(v76 + 544);
    if ( v77 + v78 - 1 >= v77 )
    {
      v165 = (__int64 *)qvector_reserve((__int64)&v165, 0, 1, 16);
      v10 = 16 * v166.m128i_i64[0];
      *(__m128i *)&v165[2 * v166.m128i_i64[0]++] = _mm_unpacklo_epi64((__m128i)v77, (__m128i)v78);
    }
    sub_64640((__int64 *)v144.m128i_i64[0], (__int64 *)&v163, v10, (__int64)v60, v8, v9);
    v79 = &v165;
    v145.m128i_i64[0] = v144.m128i_i64[0] + 16;
    sub_317C60((__int64 *)(v144.m128i_i64[0] + 16), (__int64)&v165);
    if ( v165 )
    {
      v166.m128i_i64[0] = 0;
      qfree((__int64)v165);
    }
    qfree((__int64)v163);
    v84 = *(_QWORD *)(a1 + 328);
    v85 = 0;
    v163 = nullptr;
    v164 = 0;
    v165 = nullptr;
    v166 = 0;
    v86 = *(_QWORD *)(v84 + 696);
    v87 = *(_QWORD *)(v84 + 704);
    if ( v86 + v87 - 1 >= v86 )
    {
      v165 = (__int64 *)qvector_reserve((__int64)&v165, 0, 1, 16);
      v85 = _mm_unpacklo_epi64((__m128i)v86, (__m128i)v87);
      v80 = 16 * v166.m128i_i64[0];
      *(__m128i *)&v165[2 * v166.m128i_i64[0]++] = v85;
    }
    sub_64640((__int64 *)v144.m128i_i64[0], (__int64 *)&v163, v80, v81, v82, v83);
    sub_317C60((__int64 *)v145.m128i_i64[0], (__int64)&v165);
    if ( v165 )
    {
      v166.m128i_i64[0] = 0;
      qfree((__int64)v165);
    }
    qfree((__int64)v163);
    v147 = (__int64 **)&v156;
    if ( (unsigned __int8)sub_64780(v144.m128i_i64[0], &v156)
      || (unsigned __int8)sub_318470((unsigned __int64 **)v145.m128i_i64[0], (__int64)&v158) )
    {
      v16 = 0;
LABEL_76:
      if ( v154 )
      {
        *(_QWORD *)&v155 = 0;
        qfree(v154);
      }
      goto LABEL_37;
    }
    v148.m128i_i64[1] = *(_QWORD *)(a1 + 320);
    v89 = *(_QWORD *)(v148.m128i_i64[1] + 1840);
    v148.m128i_i64[0] = v89;
    if ( v89 )
    {
      v91 = qalloc_or_throw(88 * v89, (__int64)&v158, v88, v89);
      v136 = v91 + 8;
      v137 = 0;
      v138 = -8 - v91;
      do
      {
        v149 = (__int64 **)(v136 - 8);
        v146.m128i_i64[0] = v91;
        v139 = (int *)(*(_QWORD *)(v148.m128i_i64[1] + 1832) + v138 + v136);
        v140 = *v139;
        *(_WORD *)(v136 + 32) = 0;
        *(_WORD *)(v136 + 34) = 0;
        *(_DWORD *)(v136 - 8) = v140;
        *(_DWORD *)(v136 + 36) = -1;
        *(_QWORD *)(v136 + 40) = 0;
        *(_WORD *)(v136 + 48) = 0;
        *(_WORD *)(v136 + 50) = 0;
        *(_DWORD *)(v136 + 52) = -1;
        *(_QWORD *)(v136 + 56) = 0;
        *(_WORD *)(v136 + 64) = 0;
        *(_WORD *)(v136 + 66) = 0;
        *(_DWORD *)(v136 + 68) = -1;
        *(_QWORD *)(v136 + 72) = 0;
        *(_OWORD *)(v136 + 8) = 0;
        sub_1253A0(v136, (__int64)(v139 + 2));
        v91 = v146.m128i_i64[0];
        ++v137;
        v136 += 88;
      }
      while ( v148.m128i_i64[0] != v137 );
      v141 = _mm_loadl_epi64(&v148);
      v90 = *(_QWORD *)(a1 + 272);
      v85 = _mm_unpacklo_epi64(v141, v141);
      v146 = v85;
      if ( !v90 )
      {
        *(_QWORD *)(a1 + 272) = v91;
        *(__m128i *)(a1 + 280) = v85;
LABEL_87:
        v98 = 0;
        v99 = 0;
        while ( 1 )
        {
          v112 = 88 * v99;
          v113 = 88 * v99 + v91;
          v114 = *(_DWORD *)v113;
          if ( *(_DWORD *)v113 )
          {
            v134 = -v114;
            if ( v114 > 0 )
              v134 = *(_DWORD *)v113;
            if ( (sub_BDFF0(a1, v134, *(double *)v85.m128i_i64) == 0) != v114 < 0 )
            {
LABEL_98:
              v117 = *(_QWORD *)(a1 + 272);
LABEL_99:
              v121 = v112 + v117;
              sub_11CDA0(v121 + 72);
              sub_11CDA0(v121 + 56);
              sub_11CDA0(v121 + 40);
              memmove(
                (void *)v121,
                (const void *)(v121 + 88),
                *(_QWORD *)(a1 + 272) + 88LL * *(_QWORD *)(a1 + 280) - v121 - 88);
              v122 = *(_QWORD *)(a1 + 280) - 1LL;
              v99 = v98;
              *(_QWORD *)(a1 + 280) = v122;
              if ( v98 >= v122 )
                goto LABEL_100;
              goto LABEL_93;
            }
            v113 = v112 + *(_QWORD *)(a1 + 272);
          }
          if ( (_QWORD)v153 )
          {
            v165 = nullptr;
            v163 = &off_4DC180;
            v168 = &v152;
            v169 = a1 + 64;
            v115 = *(_QWORD *)(a1 + 328);
            v166 = 0u;
            v167 = 0;
            v164 = v115;
            v116 = sub_11E900((_BYTE *)(v113 + 8), (__int64)&v163);
            v117 = *(_QWORD *)(a1 + 272);
            v113 = v117 + v112;
            if ( v116 )
              goto LABEL_99;
          }
          v118 = v113 + 8;
          if ( !(unsigned __int8)sub_BDA00(a1, (unsigned int *)(v113 + 8), v85) )
            goto LABEL_98;
          sub_127A20((__int64)&v160, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v118, 1, v119, v120);
          sub_127A20((__int64)&v163, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v118, 0, v100, v101);
          sub_64640(v160.m128i_i64, (__int64 *)&v163, v102, v103, v104, v105);
          sub_317C60((__int64 *)&v161, (__int64)v79);
          sub_64640((__int64 *)v144.m128i_i64[0], (__int64 *)&v163, v106, v107, v108, v109);
          sub_317C60((__int64 *)v145.m128i_i64[0], (__int64)v79);
          sub_64280((__int64 *)v144.m128i_i64[0], v160.m128i_i64, *(double *)v85.m128i_i64);
          sub_316CB0((__int64 *)v145.m128i_i64[0], &v161, v110, v111);
          if ( v165 )
          {
            v166.m128i_i64[0] = 0;
            qfree((__int64)v165);
          }
          qfree((__int64)v163);
          if ( v161 )
          {
            v162.m128i_i64[0] = 0;
            qfree((__int64)v161);
          }
          ++v98;
          qfree(v160.m128i_i64[0]);
          v99 = v98;
          if ( (unsigned __int64)v98 >= *(_QWORD *)(a1 + 280) )
            goto LABEL_100;
LABEL_93:
          v91 = *(_QWORD *)(a1 + 272);
        }
      }
    }
    else
    {
      v90 = *(_QWORD *)(a1 + 272);
      if ( !v90 )
      {
        v85.m128i_i64[0] = 0;
        *(_OWORD *)(a1 + 280) = 0;
LABEL_100:
        v123 = *(__int64 **)(a1 + 216);
        sub_648D0(v123 + 17, (const void **)v144.m128i_i64[0], *(double *)v85.m128i_i64);
        v126 = *(_QWORD *)(v144.m128i_i64[0] + 24);
        v127 = nullptr;
        if ( v126 )
        {
          v127 = (void *)qalloc_or_throw(16 * v126, v144.m128i_i64[0], v124, v125);
          memcpy(v127, *(const void **)(v144.m128i_i64[0] + 16), 16 * v126);
        }
        v128 = v123[19];
        v129 = _mm_unpacklo_epi64((__m128i)v126, (__m128i)v126);
        if ( v128 )
        {
          v123[20] = 0;
          v144 = v129;
          qfree(v128);
          v129 = _mm_load_si128(&v144);
        }
        v123[19] = (__int64)v127;
        *((__m128i *)v123 + 10) = v129;
        sub_64280((__int64 *)(v143 + 136), (__int64 *)(v143 + 96), *(double *)v129.m128i_i64);
        sub_316CB0((__int64 *)(v143 + 152), (__int64 **)(v143 + 112), v130, v131);
        sub_316CB0((__int64 *)(v143 + 152), (__int64 **)&v154, v132, v133);
        *(_DWORD *)(v143 + 280) |= 4u;
        sub_BE340(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), v143, *(const char **)(*(_QWORD *)(a1 + 320) + 408LL), 0);
        v16 = 1;
        goto LABEL_76;
      }
      v91 = 0;
      v146 = 0;
    }
    v92 = *(_QWORD *)(a1 + 280);
    if ( v92 )
    {
      v148.m128i_i64[1] = v91;
      v93 = 0;
      v94 = v92;
      v149 = &v165;
      v95 = 0;
      do
      {
        v96 = v90 + v93;
        ++v95;
        v93 += 88;
        sub_11CDA0(v96 + 72);
        sub_11CDA0(v96 + 56);
        sub_11CDA0(v96 + 40);
        v90 = *(_QWORD *)(a1 + 272);
      }
      while ( v94 != v95 );
      v91 = v148.m128i_i64[1];
      v79 = v149;
    }
    *(_QWORD *)(a1 + 280) = 0;
    v148.m128i_i64[1] = v91;
    qfree(v90);
    v91 = v148.m128i_i64[1];
    v97 = _mm_load_si128(&v146);
    v33 = v148.m128i_i64[0] == 0;
    *(_QWORD *)(a1 + 272) = v148.m128i_i64[1];
    *(__m128i *)(a1 + 280) = v97;
    if ( !v33 )
      goto LABEL_87;
    goto LABEL_100;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v41 = 16 * v32;
      v42 = v41 + *(_QWORD *)(v143 + 48);
      if ( *(_BYTE *)v42 != 9 )
      {
        if ( !under_debugger )
          sub_383060(0xC387u, 0.0);
LABEL_120:
        BUG();
      }
      v43 = *(int *)(*(_QWORD *)(v42 + 8) + 16LL);
      v44 = *(_QWORD *)(a1 + 64);
      v45 = *(_QWORD *)(v44 + 8 * v43);
      if ( v45 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 320) + 1512LL) & 1) != 0
        || (unsigned __int8)sub_BE200(a1, v43, 0.0)
        || *(_DWORD *)(a1 + 416) )
      {
        v46 = *(int *)(v42 + 4);
        v47 = sub_138140(*(_QWORD **)(a1 + 328), v46, 1);
        v48 = v47;
        if ( v47 == -1 )
          goto LABEL_36;
        *(_QWORD *)&v155 = v46;
        v154 = v47;
        sub_316BB0((__int64 *)(a1 + 192), (__m128i *)&v154, 0.0, a6);
        sub_11CDA0(v42);
        *(_BYTE *)v42 = 1;
        *(_DWORD *)(v42 + 8) = v48;
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v43) = v42;
        goto LABEL_28;
      }
      v55 = *(_QWORD *)(v143 + 48) + v41;
      sub_11CDA0(v55);
      v147 = *(__int64 ***)(v143 + 56);
      memmove((void *)v55, (const void *)(v55 + 16), *(_QWORD *)(v143 + 48) + 16LL * (_QWORD)v147 - v55 - 16);
      v32 = v31;
      v147 = *(__int64 ***)(v143 + 56);
      v56 = (char *)v147 - 1;
      *(_QWORD *)(v143 + 56) = (char *)v147 - 1;
      if ( v31 >= (unsigned __int64)v56 )
        goto LABEL_51;
    }
    v34 = *(unsigned __int8 **)(v44 + 8 * v43);
    v35 = v41 + *(_QWORD *)(v143 + 48);
    LODWORD(v147) = *(_DWORD *)(*(_QWORD *)(v42 + 8) + 16LL);
    sub_125180(v35, v34);
    v37 = v153;
    v38 = v152;
    v39 = (int)v147;
    if ( *((_QWORD *)&v153 + 1) < (unsigned __int64)(v153 + 1) )
    {
      v152 = qvector_reserve((__int64)&v152, v152, v153 + 1, 4);
      v38 = v152;
      v39 = (int)v147;
      v37 = v153;
    }
    *(_DWORD *)(v38 + 4 * v37) = v39;
    v40 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)&v153 = v153 + 1;
    if ( *(int *)(v40 + 64) <= 1 || !(unsigned __int8)sub_120170(v45, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 1504LL)) )
      goto LABEL_28;
    if ( *(_DWORD *)(a1 + 420) != -1 )
    {
      if ( !under_debugger )
        sub_383060(0xC9D8u, 0.0);
      goto LABEL_120;
    }
    v51 = *(_QWORD **)(a1 + 328);
    *(_DWORD *)(a1 + 420) = *(_DWORD *)(v45 + 8);
    v52 = *(int *)(v42 + 4);
    v53 = sub_138140(v51, v52, 1);
    v54 = v53;
    if ( v53 == -1 )
      break;
    v160.m128i_i64[1] = v52;
    v160.m128i_i64[0] = v53;
    sub_316BB0((__int64 *)(a1 + 192), &v160, 0.0, a6);
    *(_DWORD *)(a1 + 424) = v54;
LABEL_28:
    if ( *(_QWORD *)(v143 + 56) == 1 )
    {
      v49 = *(int *)(v42 + 4);
      if ( v49 != get_tinfo_size() )
      {
        tinfo_size = get_tinfo_size();
        sub_12AB50((unsigned __int8 *)v42, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), tinfo_size, 1);
      }
    }
    *(_DWORD *)(a1 + 228) += *(_DWORD *)(v42 + 4);
    sub_127FE0(
      *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL),
      v145.m128i_i64[0],
      v42,
      0,
      v36,
      v39,
      v142,
      v143,
      v144.m128i_i32[0],
      v144.m128i_i32[2],
      v145.m128i_i64[0]);
    v32 = ++v31;
    if ( (unsigned __int64)v31 >= *(_QWORD *)(v143 + 56) )
      goto LABEL_51;
  }
  *(_DWORD *)(a1 + 424) = -1;
LABEL_36:
  v16 = 0;
LABEL_37:
  if ( v152 )
  {
    *(_QWORD *)&v153 = 0;
    qfree(v152);
  }
  if ( v158 )
  {
    *(_QWORD *)&v159 = 0;
    qfree(v158);
  }
  qfree(v156);
LABEL_7:
  if ( v150 )
  {
    *(_QWORD *)&v151 = 0;
    qfree((__int64)v150);
  }
  return v16;
}

