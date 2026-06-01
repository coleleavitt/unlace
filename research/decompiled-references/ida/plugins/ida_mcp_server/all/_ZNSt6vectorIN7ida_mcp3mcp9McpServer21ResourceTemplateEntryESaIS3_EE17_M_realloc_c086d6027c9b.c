void __fastcall std::vector<ida_mcp::mcp::McpServer::ResourceTemplateEntry>::_M_realloc_append<ida_mcp::mcp::McpServer::ResourceTemplateEntry>(
        const __m128i **a1,
        __m128i *a2)
{
  const __m128i *v2; // r15
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __m128i *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rax
  __m128i *v14; // rcx
  __int64 *v15; // r9
  __int64 v16; // rdi
  bool v17; // zf
  __m128i *v18; // rsi
  __int64 v19; // rdi
  __m128i *v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rdx
  __m128i v24; // xmm0
  char *v25; // r13
  const __m128i *v26; // r12
  __int64 v27; // rbx
  const __m128i *v28; // rbp
  const __m128i *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rsi
  __m128i v32; // xmm0
  __m128i *v33; // rdi
  __m128i *v34; // rdi
  _QWORD *v35; // rdi
  const __m128i *v36; // rsi
  __int64 v37; // rsi
  _QWORD *v38; // rdi
  const __m128i *v39; // rsi
  __int64 v40; // rsi
  _QWORD *v41; // rdi
  const __m128i *v42; // rsi
  __int64 v43; // rsi
  _QWORD *v44; // rdi
  char *v45; // rsi
  __int64 v46; // rsi
  __m128i *v47; // rdi
  char *v48; // rdi
  unsigned int v49; // r8d
  unsigned int v50; // r8d
  __int64 v51; // rbp
  __int64 v52; // rbp
  unsigned __int64 v53; // rsi
  char *v54; // rdi
  char *v55; // r9
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  unsigned int v58; // edi
  __int64 v59; // rax
  unsigned __int64 v60; // rsi
  char *v61; // rdi
  char *v62; // r9
  unsigned int v63; // r8d
  unsigned int v64; // r8d
  unsigned int v65; // edi
  __int64 v66; // rax
  unsigned int v67; // r8d
  unsigned int v68; // r8d
  __m128i *v69; // rsi
  __int64 v70; // rdi
  __int8 *v71; // rdx
  __int64 v72; // r10
  __m128i *v73; // rsi
  __int64 v74; // rdi
  __m128i *v75; // rdx
  __int64 v76; // r10
  unsigned __int64 v77; // rsi
  char *v78; // rdi
  char *v79; // r9
  unsigned int v80; // r8d
  unsigned int v81; // r8d
  unsigned int v82; // edi
  __int64 v83; // rax
  unsigned __int64 v84; // rsi
  char *v85; // rdi
  char *v86; // r9
  unsigned int v87; // r8d
  unsigned int v88; // r8d
  unsigned int v89; // edi
  __int64 v90; // rax
  unsigned int v91; // esi
  unsigned int v92; // esi
  unsigned __int64 v93; // r11
  unsigned __int64 v94; // rdi
  __int8 *v95; // rbp
  unsigned int v96; // esi
  unsigned int v97; // esi
  unsigned int v98; // edi
  __int64 v99; // r12
  unsigned __int64 v100; // r11
  unsigned __int64 v101; // rdi
  __int8 *v102; // rbp
  unsigned int v103; // esi
  unsigned int v104; // esi
  unsigned int v105; // edi
  __int64 v106; // r12
  unsigned int v107; // esi
  unsigned int v108; // esi
  unsigned __int64 v109; // r11
  unsigned __int64 v110; // rdi
  char *v111; // rbp
  unsigned int v112; // esi
  unsigned int v113; // esi
  unsigned int v114; // edi
  __int64 v115; // r12
  unsigned __int64 v116; // r11
  unsigned __int64 v117; // rdi
  __int8 *v118; // rbp
  unsigned int v119; // esi
  unsigned int v120; // esi
  unsigned int v121; // edi
  __int64 v122; // r12
  __int64 v123; // [rsp+0h] [rbp-58h]
  const __m128i *v124; // [rsp+8h] [rbp-50h]
  __int64 *v125; // [rsp+8h] [rbp-50h]
  __int64 v127; // [rsp+10h] [rbp-48h]
  __int64 v128; // [rsp+18h] [rbp-40h]

  v2 = a1[1];
  v3 = (char *)v2 - (char *)*a1;
  v4 = 0x2E8BA2E8BA2E8BA3LL * (v3 >> 4);
  if ( v4 == 0xBA2E8BA2E8BA2ELL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = 0x2E8BA2E8BA2E8BA3LL * (a1[1] - *a1);
  v124 = *a1;
  v7 = v4 + v5;
  if ( v7 > 0xBA2E8BA2E8BA2ELL )
    v7 = 0xBA2E8BA2E8BA2ELL;
  v123 = 176 * v7;
  v8 = operator new(176 * v7);
  v9 = a2->m128i_i64[0];
  v10 = a2 + 1;
  v11 = a2->m128i_i64[1];
  v12 = v8;
  v13 = v8 + v3;
  v14 = (__m128i *)v124;
  v15 = (__int64 *)a1;
  v16 = v13 + 16;
  v17 = a2->m128i_i64[0] == (_QWORD)(a2 + 1);
  *(_QWORD *)v13 = v13 + 16;
  if ( v17 )
  {
    v92 = v11 + 1;
    if ( (unsigned int)(v11 + 1) >= 8 )
    {
      *(_QWORD *)(v13 + 16) = a2[1].m128i_i64[0];
      *(_QWORD *)(v16 + v92 - 8) = *(__int64 *)((char *)&v10->m128i_i64[-1] + v92);
      v100 = (v13 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v101 = v16 - v100;
      v102 = &v10->m128i_i8[-v101];
      v103 = (v101 + v92) & 0xFFFFFFF8;
      if ( v103 >= 8 )
      {
        v104 = v103 & 0xFFFFFFF8;
        v105 = 0;
        do
        {
          v106 = v105;
          v105 += 8;
          *(_QWORD *)(v100 + v106) = *(_QWORD *)&v102[v106];
        }
        while ( v105 < v104 );
      }
    }
    else if ( (v92 & 4) != 0 )
    {
      *(_DWORD *)(v13 + 16) = a2[1].m128i_i32[0];
      *(_DWORD *)(v16 + v92 - 4) = *(__int32 *)((char *)&v10->m128i_i32[-1] + v92);
    }
    else if ( (_DWORD)v11 != -1 )
    {
      *(_BYTE *)(v13 + 16) = a2[1].m128i_i8[0];
      if ( (v92 & 2) != 0 )
        *(_WORD *)(v16 + v92 - 2) = *(__int16 *)((char *)&v10->m128i_i16[-1] + v92);
    }
  }
  else
  {
    *(_QWORD *)v13 = v9;
    *(_QWORD *)(v13 + 16) = a2[1].m128i_i64[0];
  }
  v18 = (__m128i *)a2[2].m128i_i64[0];
  a2->m128i_i64[0] = (__int64)v10;
  v19 = v13 + 48;
  v20 = a2 + 3;
  *(_QWORD *)(v13 + 8) = v11;
  v21 = a2[2].m128i_i64[1];
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  *(_QWORD *)(v13 + 32) = v13 + 48;
  if ( v18 == &a2[3] )
  {
    v91 = v21 + 1;
    if ( (unsigned int)(v21 + 1) >= 8 )
    {
      *(_QWORD *)(v13 + 48) = a2[3].m128i_i64[0];
      *(_QWORD *)(v19 + v91 - 8) = *(__int64 *)((char *)&v20->m128i_i64[-1] + v91);
      v93 = (v13 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      v94 = v19 - v93;
      v95 = &v20->m128i_i8[-v94];
      v96 = (v94 + v91) & 0xFFFFFFF8;
      if ( v96 >= 8 )
      {
        v97 = v96 & 0xFFFFFFF8;
        v98 = 0;
        do
        {
          v99 = v98;
          v98 += 8;
          *(_QWORD *)(v93 + v99) = *(_QWORD *)&v95[v99];
        }
        while ( v98 < v97 );
      }
    }
    else if ( (v91 & 4) != 0 )
    {
      *(_DWORD *)(v13 + 48) = a2[3].m128i_i32[0];
      *(_DWORD *)(v19 + v91 - 4) = *(__int32 *)((char *)&v20->m128i_i32[-1] + v91);
    }
    else if ( (_DWORD)v21 != -1 )
    {
      *(_BYTE *)(v13 + 48) = a2[3].m128i_i8[0];
      if ( (v91 & 2) != 0 )
        *(_WORD *)(v19 + v91 - 2) = *(__int16 *)((char *)&v20->m128i_i16[-1] + v91);
    }
  }
  else
  {
    *(_QWORD *)(v13 + 32) = v18;
    *(_QWORD *)(v13 + 48) = a2[3].m128i_i64[0];
  }
  *(_QWORD *)(v13 + 40) = v21;
  a2[2].m128i_i64[0] = (__int64)v20;
  a2[2].m128i_i64[1] = 0;
  a2[3].m128i_i8[0] = 0;
  *(_BYTE *)(v13 + 96) = 0;
  if ( a2[6].m128i_i8[0] )
  {
    v73 = (__m128i *)a2[4].m128i_i64[0];
    v74 = v13 + 80;
    v75 = a2 + 5;
    v76 = a2[4].m128i_i64[1];
    *(_QWORD *)(v13 + 64) = v13 + 80;
    if ( v73 == &a2[5] )
    {
      v107 = v76 + 1;
      if ( (unsigned int)(v76 + 1) >= 8 )
      {
        *(_QWORD *)(v13 + 80) = a2[5].m128i_i64[0];
        *(_QWORD *)(v74 + v107 - 8) = *(__int64 *)((char *)&v75->m128i_i64[-1] + v107);
        v116 = (v13 + 88) & 0xFFFFFFFFFFFFFFF8LL;
        v117 = v74 - v116;
        v118 = &v75->m128i_i8[-v117];
        v119 = (v117 + v107) & 0xFFFFFFF8;
        if ( v119 >= 8 )
        {
          v120 = v119 & 0xFFFFFFF8;
          v121 = 0;
          do
          {
            v122 = v121;
            v121 += 8;
            *(_QWORD *)(v116 + v122) = *(_QWORD *)&v118[v122];
          }
          while ( v121 < v120 );
        }
      }
      else if ( (v107 & 4) != 0 )
      {
        *(_DWORD *)(v13 + 80) = a2[5].m128i_i32[0];
        *(_DWORD *)(v74 + v107 - 4) = *(__int32 *)((char *)&v75->m128i_i32[-1] + v107);
      }
      else if ( (_DWORD)v76 != -1 )
      {
        *(_BYTE *)(v13 + 80) = a2[5].m128i_i8[0];
        if ( (v107 & 2) != 0 )
          *(_WORD *)(v74 + v107 - 2) = *(__int16 *)((char *)&v75->m128i_i16[-1] + v107);
      }
    }
    else
    {
      *(_QWORD *)(v13 + 64) = v73;
      *(_QWORD *)(v13 + 80) = a2[5].m128i_i64[0];
    }
    *(_QWORD *)(v13 + 72) = v76;
    a2[4].m128i_i64[0] = (__int64)v75;
    a2[4].m128i_i64[1] = 0;
    a2[5].m128i_i8[0] = 0;
    *(_BYTE *)(v13 + 96) = 1;
  }
  *(_BYTE *)(v13 + 136) = 0;
  if ( a2[8].m128i_i8[8] )
  {
    v69 = (__m128i *)a2[6].m128i_i64[1];
    v70 = v13 + 120;
    v71 = &a2[7].m128i_i8[8];
    v72 = a2[7].m128i_i64[0];
    *(_QWORD *)(v13 + 104) = v13 + 120;
    if ( v69 == (__m128i *)&a2[7].m128i_u64[1] )
    {
      v108 = v72 + 1;
      if ( (unsigned int)(v72 + 1) >= 8 )
      {
        *(_QWORD *)(v13 + 120) = a2[7].m128i_i64[1];
        *(_QWORD *)(v70 + v108 - 8) = *(_QWORD *)&v71[v108 - 8];
        v109 = (v13 + 128) & 0xFFFFFFFFFFFFFFF8LL;
        v110 = v70 - v109;
        v111 = &v71[-v110];
        v112 = (v110 + v108) & 0xFFFFFFF8;
        if ( v112 >= 8 )
        {
          v113 = v112 & 0xFFFFFFF8;
          v114 = 0;
          do
          {
            v115 = v114;
            v114 += 8;
            *(_QWORD *)(v109 + v115) = *(_QWORD *)&v111[v115];
          }
          while ( v114 < v113 );
        }
      }
      else if ( (v108 & 4) != 0 )
      {
        *(_DWORD *)(v13 + 120) = a2[7].m128i_i32[2];
        *(_DWORD *)(v70 + v108 - 4) = *(_DWORD *)&v71[v108 - 4];
      }
      else if ( (_DWORD)v72 != -1 )
      {
        *(_BYTE *)(v13 + 120) = a2[7].m128i_i8[8];
        if ( (v108 & 2) != 0 )
          *(_WORD *)(v70 + v108 - 2) = *(_WORD *)&v71[v108 - 2];
      }
    }
    else
    {
      *(_QWORD *)(v13 + 104) = v69;
      *(_QWORD *)(v13 + 120) = a2[7].m128i_i64[1];
    }
    *(_QWORD *)(v13 + 112) = v72;
    a2[6].m128i_i64[1] = (__int64)v71;
    a2[7].m128i_i64[0] = 0;
    a2[7].m128i_i8[8] = 0;
    *(_BYTE *)(v13 + 136) = 1;
  }
  v22 = a2[10].m128i_i64[1];
  *(_QWORD *)(v13 + 160) = 0;
  *(_OWORD *)(v13 + 144) = 0;
  *(_QWORD *)(v13 + 168) = v22;
  v23 = a2[10].m128i_i64[0];
  if ( v23 )
  {
    v24 = _mm_loadu_si128(a2 + 9);
    *(_QWORD *)(v13 + 160) = v23;
    *(__m128i *)(v13 + 144) = v24;
    a2[10] = 0;
  }
  if ( v2 != v124 )
  {
    v25 = &v124[7].m128i_i8[8];
    v26 = v124 + 5;
    v27 = v12;
    v28 = v124 + 3;
    v29 = v124 + 1;
    v128 = v12;
    while ( 1 )
    {
      v35 = (_QWORD *)(v27 + 16);
      *(_QWORD *)v27 = v27 + 16;
      v36 = (const __m128i *)v29[-1].m128i_i64[0];
      if ( v29 != v36 )
        break;
      v37 = v29[-1].m128i_i64[1];
      v50 = v37 + 1;
      if ( (unsigned int)(v37 + 1) >= 8 )
      {
        *v35 = v29->m128i_i64[0];
        *(_QWORD *)((char *)v35 + v50 - 8) = *(__int64 *)((char *)&v29->m128i_i64[-1] + v50);
        v60 = (v27 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v61 = (char *)v35 - v60;
        v62 = (char *)((char *)v29 - v61);
        v63 = ((_DWORD)v61 + v50) & 0xFFFFFFF8;
        if ( v63 >= 8 )
        {
          v64 = v63 & 0xFFFFFFF8;
          v65 = 0;
          do
          {
            v66 = v65;
            v65 += 8;
            *(_QWORD *)(v60 + v66) = *(_QWORD *)&v62[v66];
          }
          while ( v65 < v64 );
        }
        goto LABEL_29;
      }
      if ( (v50 & 4) != 0 )
      {
        *(_DWORD *)v35 = v29->m128i_i32[0];
        *(_DWORD *)((char *)v35 + v50 - 4) = *(__int32 *)((char *)&v29->m128i_i32[-1] + v50);
        v37 = v29[-1].m128i_i64[1];
      }
      else if ( (_DWORD)v37 != -1 )
      {
        *(_BYTE *)v35 = v29->m128i_i8[0];
        if ( (v50 & 2) == 0 )
          goto LABEL_29;
        *(_WORD *)((char *)v35 + v50 - 2) = *(__int16 *)((char *)&v29->m128i_i16[-1] + v50);
        v37 = v29[-1].m128i_i64[1];
      }
LABEL_30:
      v38 = (_QWORD *)(v27 + 48);
      *(_QWORD *)(v27 + 8) = v37;
      v29[-1].m128i_i64[0] = (__int64)v29;
      v29[-1].m128i_i64[1] = 0;
      v29->m128i_i8[0] = 0;
      *(_QWORD *)(v27 + 32) = v27 + 48;
      v39 = (const __m128i *)v29[1].m128i_i64[0];
      if ( v39 != v28 )
      {
        *(_QWORD *)(v27 + 32) = v39;
        *(_QWORD *)(v27 + 48) = v29[2].m128i_i64[0];
LABEL_32:
        v40 = v29[1].m128i_i64[1];
        goto LABEL_33;
      }
      v40 = v29[1].m128i_i64[1];
      v49 = v40 + 1;
      if ( (unsigned int)(v40 + 1) >= 8 )
      {
        *v38 = v28->m128i_i64[0];
        *(_QWORD *)((char *)v38 + v49 - 8) = *(__int64 *)((char *)&v28->m128i_i64[-1] + v49);
        v53 = (v27 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        v54 = (char *)v38 - v53;
        v55 = (char *)((char *)v28 - v54);
        v56 = ((_DWORD)v54 + v49) & 0xFFFFFFF8;
        if ( v56 >= 8 )
        {
          v57 = v56 & 0xFFFFFFF8;
          v58 = 0;
          do
          {
            v59 = v58;
            v58 += 8;
            *(_QWORD *)(v53 + v59) = *(_QWORD *)&v55[v59];
          }
          while ( v58 < v57 );
        }
        goto LABEL_32;
      }
      if ( (v49 & 4) != 0 )
      {
        *(_DWORD *)v38 = v28->m128i_i32[0];
        *(_DWORD *)((char *)v38 + v49 - 4) = *(__int32 *)((char *)&v28->m128i_i32[-1] + v49);
        v40 = v29[1].m128i_i64[1];
      }
      else if ( (_DWORD)v40 != -1 )
      {
        *(_BYTE *)v38 = v28->m128i_i8[0];
        if ( (v49 & 2) == 0 )
          goto LABEL_32;
        *(_WORD *)((char *)v38 + v49 - 2) = *(__int16 *)((char *)&v28->m128i_i16[-1] + v49);
        v40 = v29[1].m128i_i64[1];
      }
LABEL_33:
      *(_QWORD *)(v27 + 40) = v40;
      v29[1].m128i_i64[0] = (__int64)v28;
      v29[1].m128i_i64[1] = 0;
      v29[2].m128i_i8[0] = 0;
      *(_BYTE *)(v27 + 96) = 0;
      if ( !v29[5].m128i_i8[0] )
      {
        *(_BYTE *)(v27 + 136) = 0;
        if ( !v29[7].m128i_i8[8] )
          goto LABEL_17;
        goto LABEL_38;
      }
      v41 = (_QWORD *)(v27 + 80);
      *(_QWORD *)(v27 + 64) = v27 + 80;
      v42 = (const __m128i *)v29[3].m128i_i64[0];
      if ( v42 != v26 )
      {
        *(_QWORD *)(v27 + 64) = v42;
        *(_QWORD *)(v27 + 80) = v29[4].m128i_i64[0];
LABEL_36:
        v43 = v29[3].m128i_i64[1];
        goto LABEL_37;
      }
      v43 = v29[3].m128i_i64[1];
      v68 = v43 + 1;
      if ( (unsigned int)(v43 + 1) >= 8 )
      {
        *v41 = v26->m128i_i64[0];
        *(_QWORD *)((char *)v41 + v68 - 8) = *(__int64 *)((char *)&v26->m128i_i64[-1] + v68);
        v84 = (v27 + 88) & 0xFFFFFFFFFFFFFFF8LL;
        v85 = (char *)v41 - v84;
        v86 = (char *)((char *)v26 - v85);
        v87 = ((_DWORD)v85 + v68) & 0xFFFFFFF8;
        if ( v87 >= 8 )
        {
          v88 = v87 & 0xFFFFFFF8;
          v89 = 0;
          do
          {
            v90 = v89;
            v89 += 8;
            *(_QWORD *)(v84 + v90) = *(_QWORD *)&v86[v90];
          }
          while ( v89 < v88 );
        }
        goto LABEL_36;
      }
      if ( (v68 & 4) != 0 )
      {
        *(_DWORD *)v41 = v26->m128i_i32[0];
        *(_DWORD *)((char *)v41 + v68 - 4) = *(__int32 *)((char *)&v26->m128i_i32[-1] + v68);
        v43 = v29[3].m128i_i64[1];
      }
      else if ( (_DWORD)v43 != -1 )
      {
        *(_BYTE *)v41 = v26->m128i_i8[0];
        if ( (v68 & 2) == 0 )
          goto LABEL_36;
        *(_WORD *)((char *)v41 + v68 - 2) = *(__int16 *)((char *)&v26->m128i_i16[-1] + v68);
        v43 = v29[3].m128i_i64[1];
      }
LABEL_37:
      v29[3].m128i_i64[0] = (__int64)v26;
      v29[3].m128i_i64[1] = 0;
      *(_QWORD *)(v27 + 72) = v43;
      v29[4].m128i_i8[0] = 0;
      *(_BYTE *)(v27 + 96) = 1;
      *(_BYTE *)(v27 + 136) = 0;
      if ( !v29[7].m128i_i8[8] )
        goto LABEL_17;
LABEL_38:
      v44 = (_QWORD *)(v27 + 120);
      *(_QWORD *)(v27 + 104) = v27 + 120;
      v45 = (char *)v29[5].m128i_i64[1];
      if ( v45 != v25 )
      {
        *(_QWORD *)(v27 + 104) = v45;
        *(_QWORD *)(v27 + 120) = v29[6].m128i_i64[1];
LABEL_40:
        v46 = v29[6].m128i_i64[0];
        goto LABEL_41;
      }
      v46 = v29[6].m128i_i64[0];
      v67 = v46 + 1;
      if ( (unsigned int)(v46 + 1) >= 8 )
      {
        *v44 = *(_QWORD *)v25;
        *(_QWORD *)((char *)v44 + v67 - 8) = *(_QWORD *)&v25[v67 - 8];
        v77 = (v27 + 128) & 0xFFFFFFFFFFFFFFF8LL;
        v78 = (char *)v44 - v77;
        v79 = (char *)(v25 - v78);
        v80 = ((_DWORD)v78 + v67) & 0xFFFFFFF8;
        if ( v80 >= 8 )
        {
          v81 = v80 & 0xFFFFFFF8;
          v82 = 0;
          do
          {
            v83 = v82;
            v82 += 8;
            *(_QWORD *)(v77 + v83) = *(_QWORD *)&v79[v83];
          }
          while ( v82 < v81 );
        }
        goto LABEL_40;
      }
      if ( (v67 & 4) != 0 )
      {
        *(_DWORD *)v44 = *(_DWORD *)v25;
        *(_DWORD *)((char *)v44 + v67 - 4) = *(_DWORD *)&v25[v67 - 4];
        v46 = v29[6].m128i_i64[0];
        goto LABEL_41;
      }
      if ( (_DWORD)v46 != -1 )
      {
        *(_BYTE *)v44 = *v25;
        if ( (v67 & 2) != 0 )
        {
          *(_WORD *)((char *)v44 + v67 - 2) = *(_WORD *)&v25[v67 - 2];
          v46 = v29[6].m128i_i64[0];
          goto LABEL_41;
        }
        goto LABEL_40;
      }
LABEL_41:
      *(_QWORD *)(v27 + 112) = v46;
      v29[5].m128i_i64[1] = (__int64)v25;
      v29[6].m128i_i64[0] = 0;
      v29[6].m128i_i8[8] = 0;
      *(_BYTE *)(v27 + 136) = 1;
LABEL_17:
      v30 = v29[9].m128i_i64[1];
      *(_QWORD *)(v27 + 160) = 0;
      *(_OWORD *)(v27 + 144) = 0;
      *(_QWORD *)(v27 + 168) = v30;
      v31 = v29[9].m128i_i64[0];
      if ( v31 )
      {
        v32 = _mm_loadu_si128(v29 + 8);
        *(_QWORD *)(v27 + 160) = v31;
        *(__m128i *)(v27 + 144) = v32;
      }
      if ( v29[7].m128i_i8[8] )
      {
        v48 = (char *)v29[5].m128i_i64[1];
        if ( v48 != v25 )
          operator delete(v48, v29[6].m128i_i64[1] + 1);
      }
      if ( v29[5].m128i_i8[0] )
      {
        v47 = (__m128i *)v29[3].m128i_i64[0];
        if ( v47 != v26 )
          operator delete(v47, v29[4].m128i_i64[0] + 1);
      }
      v33 = (__m128i *)v29[1].m128i_i64[0];
      if ( v28 != v33 )
        operator delete(v33, v29[2].m128i_i64[0] + 1);
      v34 = (__m128i *)v29[-1].m128i_i64[0];
      if ( v29 != v34 )
        operator delete(v34, v29->m128i_i64[0] + 1);
      v27 += 176;
      v28 += 11;
      v25 += 176;
      v26 += 11;
      if ( v2 == &v29[10] )
      {
        v14 = (__m128i *)v124;
        v15 = (__int64 *)a1;
        v51 = v27;
        v12 = v128;
        goto LABEL_57;
      }
      v29 += 11;
    }
    *(_QWORD *)v27 = v36;
    *(_QWORD *)(v27 + 16) = v29->m128i_i64[0];
LABEL_29:
    v37 = v29[-1].m128i_i64[1];
    goto LABEL_30;
  }
  v51 = v12;
LABEL_57:
  v52 = v51 + 176;
  if ( v14 )
  {
    v127 = v12;
    v125 = v15;
    operator delete(v14, v15[2] - (_QWORD)v14);
    v12 = v127;
    v15 = v125;
  }
  *v15 = v12;
  v15[1] = v52;
  v15[2] = v123 + v12;
}

