__int64 *__fastcall sub_29140(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, int); // rax
  int v10; // r15d
  void (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD, __int64); // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, int, int); // rax
  __int32 v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int *v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rbp
  __int32 v24; // eax
  void (__fastcall *v25)(__int64, __int64); // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  _QWORD *v28; // rsi
  unsigned int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // r15
  void (__fastcall *v32)(__int64, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v33)(__int64, __int64, _QWORD *); // rax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  unsigned __int8 (__fastcall *v38)(__int64, __int64, __int64 *); // rax
  __int32 v39; // eax
  __int64 (__fastcall *v40)(__int64, int); // rax
  int v41; // eax
  __int64 v42; // rbp
  int v43; // eax
  __int64 v44; // rax
  unsigned __int64 v45; // r12
  void (__fastcall *v46)(__int64, unsigned __int64, _QWORD); // rax
  _QWORD *v47; // rsi
  __int64 *v48; // rdi
  unsigned __int8 (__fastcall *v49)(__int64, unsigned __int64, _QWORD *); // rax
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  _QWORD *v54; // rsi
  __int64 v55; // r13
  void (__fastcall *v56)(__int64, __int64); // rax
  __m128i v57; // xmm0
  __int64 (__fastcall *v58)(__int64, int, int); // rax
  unsigned int v59; // r12d
  __int64 (__fastcall *v60)(__int64, int); // rax
  unsigned __int8 (__fastcall *v61)(__int64, unsigned __int64, __int64 *); // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // r8
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // r10
  int v67; // r9d
  __m128i v68; // xmm1
  __int32 v69; // esi
  __int64 v70; // rax
  __m128i v71; // xmm0
  __m128i *v72; // rax
  __int64 v73; // rdx
  __m128i v74; // xmm0
  __int64 v75; // r12
  unsigned __int64 v76; // r13
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __int64 v79; // r9
  __int64 (__fastcall *v80)(__int64, int, int); // r8
  __int64 v81; // rax
  __m128i *v82; // rax
  __int64 v83; // rdx
  __m128i v84; // xmm0
  __int64 *v85; // r13
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // r12
  const __m128i *v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rax
  __m128i v92; // xmm0
  bool v93; // cf
  __int64 *v94; // rax
  __int64 *v95; // r15
  __int64 (__fastcall *v96)(__int64, int, int); // rax
  __int64 v97; // rbp
  const __m128i *v98; // rdi
  char *v99; // rdx
  __int64 v100; // rax
  __m128i v101; // xmm0
  __int64 *v102; // rax
  __int64 v103; // rcx
  __int64 *v104; // rax
  __m128i v105; // xmm1
  __int64 v106; // r10
  __int64 v107; // rsi
  const __m128i *v108; // rdi
  int v109; // r9d
  __int64 v110; // rdx
  __int64 v111; // rax
  __m128i v112; // xmm0
  __int64 *v113; // rax
  __int64 v114; // rsi
  __int64 *v115; // rax
  __int64 (__fastcall *v116)(__int64, int, int); // r8
  __int64 v117; // rcx
  const __m128i *v118; // rdi
  __int64 v119; // rdx
  __int64 v120; // rax
  __m128i v121; // xmm0
  __int64 *v122; // rax
  int v123; // [rsp-8h] [rbp-188h]
  _QWORD *v124; // [rsp+0h] [rbp-180h]
  __int64 (__fastcall *v125)(__int64, int, int); // [rsp+8h] [rbp-178h]
  __int64 v126; // [rsp+10h] [rbp-170h]
  __int64 (__fastcall *v127)(__int64, int, int); // [rsp+10h] [rbp-170h]
  unsigned int *v128; // [rsp+18h] [rbp-168h]
  __int64 v129; // [rsp+20h] [rbp-160h]
  __int64 v130; // [rsp+20h] [rbp-160h]
  __m128i v131; // [rsp+28h] [rbp-158h] BYREF
  unsigned int v132; // [rsp+3Ch] [rbp-144h]
  __int64 *v133; // [rsp+40h] [rbp-140h]
  unsigned int v134; // [rsp+48h] [rbp-138h]
  __int32 v135; // [rsp+4Ch] [rbp-134h]
  unsigned int *v136; // [rsp+50h] [rbp-130h]
  _QWORD *v137; // [rsp+58h] [rbp-128h]
  __int64 v138; // [rsp+60h] [rbp-120h]
  unsigned int v139; // [rsp+68h] [rbp-118h]
  int v140; // [rsp+6Ch] [rbp-114h]
  __int64 v141; // [rsp+70h] [rbp-110h]
  __int64 v142; // [rsp+78h] [rbp-108h] BYREF
  __int128 v143; // [rsp+80h] [rbp-100h]
  _QWORD v144[4]; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v145; // [rsp+B8h] [rbp-C8h] BYREF
  __int64 v146; // [rsp+C0h] [rbp-C0h]
  _QWORD v147[2]; // [rsp+D8h] [rbp-A8h] BYREF
  __int64 v148; // [rsp+E8h] [rbp-98h] BYREF
  __int128 v149; // [rsp+F0h] [rbp-90h]
  __m128i v150; // [rsp+108h] [rbp-78h] BYREF
  __m128i v151; // [rsp+118h] [rbp-68h] BYREF
  _BYTE v152[24]; // [rsp+128h] [rbp-58h] BYREF
  unsigned __int64 v153; // [rsp+140h] [rbp-40h]

  v133 = a1;
  v153 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v7 = *a2;
  v8 = *((int *)a2 + 50);
  v142 = 0;
  v9 = *(__int64 (__fastcall **)(__int64, int))(v7 + 104);
  v143 = 0;
  if ( v9 == sub_BA60 )
  {
    if ( !a2[10] )
      return v133;
    v10 = *(_QWORD *)(a2[9] + 24 * v8 + 8);
    if ( !v10 )
      return v133;
    goto LABEL_4;
  }
  a1 = a2;
  v10 = v9((__int64)a2, v8);
  if ( v10 )
  {
LABEL_4:
    v147[0] = 0;
    v147[1] = 0;
    hexdsp = (void (__fastcall *)(__int64, _QWORD *, _QWORD, __int64))get_hexdsp(a1, v8);
    v124 = v147;
    hexdsp(206, v147, a4, 8);
    v12 = v10;
    v13 = 0;
    v148 = 0;
    v125 = sub_BAA0;
    v149 = 0;
    if ( v10 > 0 )
    {
      do
      {
        v15 = *((int *)a2 + 50);
        v16 = *(__int64 (__fastcall **)(__int64, int, int))(*a2 + 120LL);
        if ( v16 == sub_BAA0 )
          v17 = *(_DWORD *)(*(_QWORD *)(a2[9] + 24 * v15) + 4 * v13);
        else
          v17 = v16((__int64)a2, v15, v13);
        v18 = v143;
        v150.m128i_i32[0] = v17;
        v19 = v142;
        if ( *((_QWORD *)&v143 + 1) < (unsigned __int64)(v143 + 1) )
        {
          v142 = qvector_reserve(&v142, v142, v143 + 1, 4);
          v19 = v142;
          v18 = v143;
        }
        *(_DWORD *)(v19 + 4 * v18) = v17;
        ++v13;
        v14 = v143 + 1;
        *(_QWORD *)&v143 = v143 + 1;
      }
      while ( v12 != v13 );
      v21 = (unsigned int *)v142;
      v136 = (unsigned int *)(v142 + 4 * v14);
      if ( v136 == (unsigned int *)v142 )
      {
LABEL_11:
        if ( v148 )
        {
          *(_QWORD *)&v149 = 0;
          qfree(v148);
        }
        goto LABEL_13;
      }
    }
    else
    {
      v21 = (unsigned int *)v142;
      v136 = (unsigned int *)(v142 + 4 * v143);
      if ( v136 == (unsigned int *)v142 )
      {
LABEL_13:
        qfree(v147[0]);
        goto LABEL_14;
      }
    }
    v128 = v21;
    v137 = v144;
    while ( 1 )
    {
      v27 = (__int64)v137;
      v28 = a2;
      v132 = *v128;
      v29 = v132;
      sub_28EA0((__int64)v137, (__int64)a2, v132);
      v30 = v29 + *((_DWORD *)a2 + 52) - 1;
      if ( (unsigned int)v30 >= *(_DWORD *)(a3 + 64) )
      {
LABEL_100:
        if ( !under_debugger )
          interr(52719);
        goto LABEL_102;
      }
      v31 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v30);
      if ( (*(_DWORD *)(v31 + 24) & 0x600) != 0x200 )
      {
        v32 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v27, a2);
        v28 = (_QWORD *)v31;
        v27 = 371;
        v32(371, v31, 0);
      }
      v33 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(v27, v28);
      if ( !v33(223, v31 + 200, v124) )
      {
        v38 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64 *))get_hexdsp(223, v31 + 200);
        if ( !v38(235, v31 + 216, &v148) )
          break;
      }
      v22 = v124;
      v23 = sub_6E0D0(v31, (_DWORD)v124, v34, v35, v36, v37, v123, (__int64)v124, (__int64)v125, v126, (__int64)v128);
      v151 = 0u;
      *(_QWORD *)v152 = 2;
      v24 = *((_DWORD *)a2 + 50);
      *(_QWORD *)&v152[8] = -1;
      *(_DWORD *)&v152[16] = -2;
      v135 = v24;
      v150.m128i_i32[0] = v24;
      v150.m128i_i64[1] = v31;
      if ( !v23 )
        goto LABEL_31;
      v25 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v31, v22);
      v25(338, v23);
      v151.m128i_i64[1] = v23;
      *(_DWORD *)v152 = 0;
      if ( (unsigned __int8)sub_28E00((__int64)&v150) )
      {
        v75 = *v133;
        v76 = v133[2];
        v77 = v133[1];
        v78 = v77 + 1;
        if ( (unsigned __int64)&v150 < *v133 || (unsigned __int64)&v150 >= v75 + 56 * v76 )
        {
          if ( v76 < v78 )
          {
            v95 = v133;
            v75 = qvector_reserve(v133, 0, v78, 56);
            v96 = (__int64 (__fastcall *)(__int64, int, int))v95[1];
            v97 = v95[2];
            v95[2] = v76;
            v98 = (const __m128i *)*v95;
            v125 = v96;
            v99 = (char *)v96 - 1;
            if ( (__int64)v96 - 1 >= 0 )
            {
              v100 = v75;
              do
              {
                v101 = _mm_loadu_si128(v98);
                v100 += 56;
                v98 = (const __m128i *)((char *)v98 + 56);
                *(__m128i *)(v100 - 56) = v101;
                *(__m128i *)(v100 - 40) = _mm_loadu_si128((const __m128i *)((char *)v98 - 40));
                *(__m128i *)(v100 - 24) = _mm_loadu_si128((const __m128i *)((char *)v98 - 24));
                *(_QWORD *)(v100 - 8) = v98[-1].m128i_i64[1];
                v93 = v99-- == nullptr;
              }
              while ( !v93 );
              v98 = (const __m128i *)*v133;
            }
            qfree(v98);
            v102 = v133;
            *v133 = v75;
            v102[2] = v97;
            v77 = v102[1];
          }
          v82 = (__m128i *)(v75 + 56 * v77);
          v83 = *(_QWORD *)&v152[16];
          *v82 = _mm_load_si128(&v150);
          v84 = _mm_load_si128(&v151);
          v82[3].m128i_i64[0] = v83;
          v82[1] = v84;
          v82[2] = _mm_load_si128((const __m128i *)v152);
        }
        else
        {
          v79 = *(_QWORD *)&v152[4];
          v80 = *(__int64 (__fastcall **)(__int64, int, int))&v152[12];
          if ( v76 < v78 )
          {
            v130 = *(_QWORD *)&v152[4];
            v127 = *(__int64 (__fastcall **)(__int64, int, int))&v152[12];
            v75 = qvector_reserve(v133, 0, v78, 56);
            v115 = v133;
            v116 = v127;
            v117 = v133[2];
            v118 = (const __m128i *)*v133;
            v133[2] = v76;
            v119 = v115[1] - 1;
            if ( v119 >= 0 )
            {
              v120 = v75;
              do
              {
                v121 = _mm_loadu_si128(v118);
                v120 += 56;
                v118 = (const __m128i *)((char *)v118 + 56);
                *(__m128i *)(v120 - 56) = v121;
                *(__m128i *)(v120 - 40) = _mm_loadu_si128((const __m128i *)((char *)v118 - 40));
                *(__m128i *)(v120 - 24) = _mm_loadu_si128((const __m128i *)((char *)v118 - 24));
                *(_QWORD *)(v120 - 8) = v118[-1].m128i_i64[1];
                v93 = v119-- == 0;
              }
              while ( !v93 );
              v118 = (const __m128i *)*v133;
            }
            v126 = v117;
            v125 = v116;
            qfree(v118);
            v122 = v133;
            v79 = v130;
            v80 = v125;
            *v133 = v75;
            v122[2] = v126;
            v77 = v122[1];
          }
          v81 = v75 + 56 * v77;
          *(_DWORD *)v81 = v135;
          *(_QWORD *)(v81 + 8) = v31;
          *(_QWORD *)(v81 + 16) = 0;
          *(_QWORD *)(v81 + 24) = v23;
          *(_DWORD *)(v81 + 32) = 0;
          *(_QWORD *)(v81 + 36) = v79;
          *(_QWORD *)(v81 + 44) = v80;
        }
        ++v133[1];
      }
      v26 = v144[0];
      if ( !v144[0] )
        goto LABEL_24;
LABEL_23:
      v144[1] = 0;
      qfree(v26);
LABEL_24:
      if ( v136 == ++v128 )
        goto LABEL_11;
    }
    v151 = 0u;
    *(_QWORD *)v152 = 2;
    v39 = *((_DWORD *)a2 + 50);
    *(_QWORD *)&v152[8] = -1;
    *(_DWORD *)&v152[16] = -2;
    v135 = v39;
    v150.m128i_i32[0] = v39;
    v150.m128i_i64[1] = v31;
LABEL_31:
    v40 = *(__int64 (__fastcall **)(__int64, int))(*a2 + 104LL);
    if ( v40 == sub_BA60 )
    {
      if ( !a2[10] )
        goto LABEL_53;
      v41 = *(_DWORD *)(a2[9] + 24LL * (int)v132 + 8);
    }
    else
    {
      v41 = v40((__int64)a2, v132);
    }
    if ( v41 > 0 )
    {
      v126 = v41;
      v42 = 0;
      v125 = sub_BAA0;
      v134 = (v41 != 1) + 1;
      v129 = 24LL * (int)v132;
      do
      {
        while ( 1 )
        {
          v58 = *(__int64 (__fastcall **)(__int64, int, int))(*a2 + 120LL);
          v59 = v58 == v125 ? *(_DWORD *)(*(_QWORD *)(a2[9] + v129) + 4 * v42) : v58((__int64)a2, v132, v42);
          v48 = &v145;
          v47 = a2;
          sub_28EA0((__int64)&v145, (__int64)a2, v59);
          v60 = *(__int64 (__fastcall **)(__int64, int))(*a2 + 96LL);
          if ( v60 == sub_BA40 )
            break;
          v47 = (_QWORD *)v59;
          v48 = a2;
          v43 = v60((__int64)a2, v59);
LABEL_37:
          if ( v43 != 1 )
            goto LABEL_51;
          v44 = v59 + *((_DWORD *)a2 + 52) - 1;
          if ( (unsigned int)v44 >= *(_DWORD *)(a3 + 64) )
          {
            if ( !under_debugger )
            {
              interr(52719);
              goto LABEL_100;
            }
LABEL_102:
            BUG();
          }
          v45 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v44);
          if ( (*(_DWORD *)(v45 + 24) & 0x600) != 0x200 )
          {
            v46 = (void (__fastcall *)(__int64, unsigned __int64, _QWORD))get_hexdsp(v48, v47);
            v47 = (_QWORD *)v45;
            v48 = &qword_170 + 3;
            v46(371, v45, 0);
          }
          v49 = (unsigned __int8 (__fastcall *)(__int64, unsigned __int64, _QWORD *))get_hexdsp(v48, v47);
          if ( v49(223, v45 + 200, v124)
            || (v61 = (unsigned __int8 (__fastcall *)(__int64, unsigned __int64, __int64 *))get_hexdsp(223, v45 + 200),
                v61(235, v45 + 216, &v148)) )
          {
            v54 = v124;
            v55 = sub_6E0D0(
                    v45,
                    (_DWORD)v124,
                    v50,
                    v51,
                    v52,
                    v53,
                    v123,
                    (__int64)v124,
                    (__int64)v125,
                    v126,
                    (__int64)v128);
            if ( v55 )
            {
              v56 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v45, v54);
              v131 = _mm_unpacklo_epi64((__m128i)v45, (__m128i)(unsigned __int64)v55);
              v56(338, v55);
              v57 = _mm_load_si128(&v131);
              *(_DWORD *)v152 = v134;
              v151 = v57;
              if ( (unsigned __int8)sub_28E00((__int64)&v150) )
              {
                v62 = *v133;
                v63 = v133[2];
                v64 = v133[1];
                v65 = v64 + 1;
                if ( (unsigned __int64)&v150 < *v133 || (unsigned __int64)&v150 >= v62 + 56 * v63 )
                {
                  if ( v63 < v65 )
                  {
                    v85 = v133;
                    v131.m128i_i64[0] = v133[2];
                    v86 = qvector_reserve(v133, 0, v65, 56);
                    v87 = v85[1];
                    v88 = v85[2];
                    v89 = (const __m128i *)*v85;
                    v85[2] = v131.m128i_i64[0];
                    v131.m128i_i64[0] = v87;
                    v90 = v87 - 1;
                    if ( v87 - 1 >= 0 )
                    {
                      v91 = v86;
                      do
                      {
                        v92 = _mm_loadu_si128(v89);
                        v91 += 56;
                        v89 = (const __m128i *)((char *)v89 + 56);
                        *(__m128i *)(v91 - 56) = v92;
                        *(__m128i *)(v91 - 40) = _mm_loadu_si128((const __m128i *)((char *)v89 - 40));
                        *(__m128i *)(v91 - 24) = _mm_loadu_si128((const __m128i *)((char *)v89 - 24));
                        *(_QWORD *)(v91 - 8) = v89[-1].m128i_i64[1];
                        v93 = v90-- == 0;
                      }
                      while ( !v93 );
                      v89 = (const __m128i *)*v133;
                    }
                    v131.m128i_i64[0] = v86;
                    qfree(v89);
                    v94 = v133;
                    v62 = v131.m128i_i64[0];
                    v133[2] = v88;
                    *v94 = v62;
                    v64 = v94[1];
                  }
                  v72 = (__m128i *)(v62 + 56 * v64);
                  v73 = *(_QWORD *)&v152[16];
                  *v72 = _mm_load_si128(&v150);
                  v74 = _mm_load_si128(&v151);
                  v72[3].m128i_i64[0] = v73;
                  v72[1] = v74;
                  v72[2] = _mm_load_si128((const __m128i *)v152);
                }
                else
                {
                  v66 = *(_QWORD *)&v152[8];
                  v67 = *(_DWORD *)&v152[16];
                  v68 = _mm_cvtsi32_si128(*(unsigned int *)&v152[4]);
                  if ( v63 < v65 )
                  {
                    v140 = *(_DWORD *)&v152[16];
                    v138 = *(_QWORD *)&v152[8];
                    v131.m128i_i64[0] = v63;
                    v139 = _mm_cvtsi128_si32(v68);
                    v103 = qvector_reserve(v133, 0, v65, 56);
                    v104 = v133;
                    v105 = _mm_cvtsi32_si128(v139);
                    v106 = v138;
                    v107 = v133[2];
                    v108 = (const __m128i *)*v133;
                    v133[2] = v131.m128i_i64[0];
                    v109 = v140;
                    v131.m128i_i64[0] = v104[1];
                    v110 = v131.m128i_i64[0] - 1;
                    if ( v131.m128i_i64[0] - 1 >= 0 )
                    {
                      v111 = v103;
                      do
                      {
                        v112 = _mm_loadu_si128(v108);
                        v111 += 56;
                        v108 = (const __m128i *)((char *)v108 + 56);
                        *(__m128i *)(v111 - 56) = v112;
                        *(__m128i *)(v111 - 40) = _mm_loadu_si128((const __m128i *)((char *)v108 - 40));
                        *(__m128i *)(v111 - 24) = _mm_loadu_si128((const __m128i *)((char *)v108 - 24));
                        *(_QWORD *)(v111 - 8) = v108[-1].m128i_i64[1];
                        v93 = v110-- == 0;
                      }
                      while ( !v93 );
                      v108 = (const __m128i *)*v133;
                    }
                    v141 = v107;
                    v140 = v109;
                    v138 = v106;
                    v131.m128i_i64[0] = v103;
                    v139 = _mm_cvtsi128_si32(v105);
                    qfree(v108);
                    v113 = v133;
                    v62 = v131.m128i_i64[0];
                    v114 = v141;
                    v67 = v140;
                    v66 = v138;
                    v68 = _mm_cvtsi32_si128(v139);
                    *v133 = v131.m128i_i64[0];
                    v113[2] = v114;
                    v64 = v113[1];
                  }
                  v69 = v135;
                  v70 = v62 + 56 * v64;
                  *(__m128i *)(v70 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)v45);
                  v71 = _mm_cvtsi32_si128(v134);
                  *(_DWORD *)v70 = v69;
                  *(_QWORD *)(v70 + 24) = v55;
                  *(_QWORD *)(v70 + 40) = v66;
                  *(_DWORD *)(v70 + 48) = v67;
                  *(_QWORD *)(v70 + 32) = _mm_unpacklo_epi32(v71, v68).m128i_u64[0];
                }
                ++v133[1];
              }
            }
          }
          if ( v145 )
          {
            v146 = 0;
            qfree(v145);
          }
LABEL_46:
          if ( ++v42 == v126 )
            goto LABEL_53;
        }
        if ( a2[7] )
        {
          v43 = *(_DWORD *)(a2[6] + 24LL * (int)v59 + 8);
          goto LABEL_37;
        }
LABEL_51:
        if ( !v145 )
          goto LABEL_46;
        v146 = 0;
        ++v42;
        qfree(v145);
      }
      while ( v42 != v126 );
    }
LABEL_53:
    v26 = v144[0];
    if ( !v144[0] )
      goto LABEL_24;
    goto LABEL_23;
  }
LABEL_14:
  if ( v142 )
  {
    *(_QWORD *)&v143 = 0;
    qfree(v142);
  }
  return v133;
}
