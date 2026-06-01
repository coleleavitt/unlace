__int64 __fastcall sub_41BE0(__int64 a1, const double *a2, double a3, __m128i a4, __m128i a5, double a6)
{
  __m128 v6; // xmm0
  __int64 v8; // r15
  _QWORD **v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // eax
  int v13; // r12d
  __int64 v14; // rsi
  __int64 (*v15)(void); // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  _QWORD **v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rdi
  __m128i v23; // rax
  __int64 v24; // rsi
  __int64 (*v25)(void); // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD **v28; // rdi
  unsigned int v29; // eax
  __int64 v30; // rdi
  __m128i v31; // rax
  __int64 v32; // rsi
  __int64 (*v33)(void); // rax
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD **v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rdi
  __m128i v39; // rax
  __int64 v40; // rsi
  __int64 (*v41)(void); // rax
  _QWORD *v42; // rdi
  _QWORD *v43; // rdi
  _QWORD **v44; // rdi
  int v45; // eax
  __m128i v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbp
  double v49; // r14
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // rcx
  __int128 v53; // kr00_16
  __int64 v54; // r15
  __int64 v55; // r14
  __int64 v56; // r13
  __int64 v57; // rbp
  __int64 v58; // r12
  __int64 v59; // rdi
  __m128i v60; // xmm0
  __int64 v61; // rax
  __int64 v62; // rdx
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  int v66; // ecx
  __m128i v67; // xmm0
  __int64 v68; // rcx
  __m128i v69; // xmm0
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __int64 v73; // r15
  __int64 v74; // rsi
  __int64 v75; // rbp
  bool v76; // cf
  __int64 v77; // rbp
  __int64 v78; // rsi
  __int128 v79; // kr10_16
  __int64 v80; // r15
  double v81; // rsi
  __int64 v82; // rbp
  __int64 v83; // rbp
  __int64 v84; // rsi
  __int128 v85; // kr20_16
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  unsigned __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // r15
  __int64 v92; // rax
  __int64 (*v93)(void); // rax
  _QWORD *v94; // rdi
  _QWORD *v95; // rdi
  _QWORD **v96; // rdi
  int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // r15
  const __m128i *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rdx
  __m128i v103; // xmm0
  __int64 v104; // rcx
  __int64 v105; // rsi
  const __m128i *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rdx
  __m128i v109; // xmm0
  unsigned int v110; // [rsp+0h] [rbp-1D4h]
  unsigned int v111; // [rsp+4h] [rbp-1D0h]
  int v112; // [rsp+8h] [rbp-1CCh]
  __int64 v113; // [rsp+Ch] [rbp-1C8h]
  __int64 v114; // [rsp+1Ch] [rbp-1B8h]
  __int64 v115; // [rsp+1Ch] [rbp-1B8h]
  unsigned __int32 v116; // [rsp+1Ch] [rbp-1B8h]
  __int64 v117; // [rsp+2Ch] [rbp-1A8h]
  __int64 v118; // [rsp+2Ch] [rbp-1A8h]
  _BYTE v119[24]; // [rsp+7Ch] [rbp-158h] BYREF
  __m128i v120; // [rsp+9Ch] [rbp-138h] BYREF
  char v121; // [rsp+ACh] [rbp-128h]
  _BYTE v122[24]; // [rsp+BCh] [rbp-118h] BYREF
  char v123; // [rsp+D4h] [rbp-100h]
  __int64 v124; // [rsp+DCh] [rbp-F8h]
  __m128i v125; // [rsp+E4h] [rbp-F0h] BYREF
  unsigned int v126; // [rsp+F4h] [rbp-E0h]
  __m128i v127; // [rsp+FCh] [rbp-D8h] BYREF
  unsigned int v128; // [rsp+10Ch] [rbp-C8h]
  __m128i v129; // [rsp+114h] [rbp-C0h] BYREF
  int v130; // [rsp+124h] [rbp-B0h]
  __m128i v131; // [rsp+12Ch] [rbp-A8h] BYREF
  int v132; // [rsp+13Ch] [rbp-98h]
  __int64 v133; // [rsp+144h] [rbp-90h]
  __m128i v134; // [rsp+14Ch] [rbp-88h] BYREF
  __int64 v135; // [rsp+15Ch] [rbp-78h]
  __m128i v136; // [rsp+164h] [rbp-70h] BYREF
  __int64 v137; // [rsp+174h] [rbp-60h]
  __int128 v138; // [rsp+17Ch] [rbp-58h]
  unsigned __int64 v139; // [rsp+194h] [rbp-40h]

  v6.m128_u64[0] = 0;
  v8 = *((_QWORD *)a2 + 1);
  v139 = __readfsqword(0x28u);
  v125.m128i_i8[8] = 0;
  v124 = 0;
  v126 = 0;
  v127.m128i_i8[8] = 0;
  v128 = 0;
  v129.m128i_i8[8] = 0;
  v130 = 0;
  v131.m128i_i8[8] = 0;
  v132 = 0;
  v133 = 0;
  v135 = 0;
  v137 = 0;
  v134 = 0;
  v136 = 0;
  v138 = 0;
  v10 = *(_QWORD ***)a2;
  v11 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)a2 + 16LL);
  if ( v11 == sub_15A20
    && (v10 = (_QWORD **)v10[1], v11 = (__int64 (__fastcall *)(__int64))(*v10)[2], v11 == sub_15A20)
    && (v10 = (_QWORD **)v10[1], v11 = (__int64 (__fastcall *)(__int64))(*v10)[2], v11 == sub_15A20)
    && (v10 = (_QWORD **)v10[1], v11 = (__int64 (__fastcall *)(__int64))(*v10)[2], v11 == sub_15A20) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v10[1] + 16LL))(v10[1], v8);
  }
  else
  {
    v12 = ((__int64 (__fastcall *)(_QWORD **, __int64))v11)(v10, v8);
  }
  v13 = v12 & 0x1FFFFFFF;
  v14 = *((_QWORD *)a2 + 1) + 4LL;
  LODWORD(v124) = v12 & 0x1FFFFFFF;
  *((_QWORD *)a2 + 1) = v14;
  if ( (v12 & 0x1FFFFFFFu) - 429065504 > 2 )
  {
    sub_19A90((__int64)v122, (__int64)"EH3[%a]: bad magic number %08X", 0.0, v8);
    goto LABEL_54;
  }
  v15 = *(__int64 (**)(void))(**(_QWORD **)a2 + 16LL);
  if ( (char *)v15 == (char *)sub_15A20
    && (v16 = *(_QWORD **)(*(_QWORD *)a2 + 8LL),
        v15 = *(__int64 (**)(void))(*v16 + 16LL),
        (char *)v15 == (char *)sub_15A20)
    && (v17 = (_QWORD *)v16[1], v15 = *(__int64 (**)(void))(*v17 + 16LL), (char *)v15 == (char *)sub_15A20)
    && (v18 = (_QWORD **)v17[1], v15 = (__int64 (*)(void))(*v18)[2], (char *)v15 == (char *)sub_15A20) )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v18[1] + 16LL))(v18[1]);
  }
  else
  {
    v19 = v15();
  }
  v20 = v19;
  v21 = *((_QWORD *)a2 + 1);
  v22 = *(_QWORD *)a2;
  HIDWORD(v124) = v20;
  *((_QWORD *)a2 + 1) = v21 + 4;
  v23.m128i_i64[0] = sub_73650(v22);
  v24 = *((_QWORD *)a2 + 1) + 4LL;
  *(_QWORD *)v122 = v23.m128i_i64[0];
  v125 = v23;
  *((_QWORD *)a2 + 1) = v24;
  *(_QWORD *)&v122[8] = v23.m128i_i64[1];
  if ( v20 )
  {
    if ( !v23.m128i_i8[8] )
    {
      sub_19A90((__int64)v122, (__int64)"EH3[%a]: incongruous max_state / ea [2]", 0.0);
      goto LABEL_54;
    }
  }
  else if ( v23.m128i_i8[8] )
  {
    v125.m128i_i8[8] = 0;
  }
  v25 = *(__int64 (**)(void))(**(_QWORD **)a2 + 16LL);
  if ( (char *)v25 == (char *)sub_15A20
    && (v26 = *(_QWORD **)(*(_QWORD *)a2 + 8LL),
        v25 = *(__int64 (**)(void))(*v26 + 16LL),
        (char *)v25 == (char *)sub_15A20)
    && (v27 = (_QWORD *)v26[1], v25 = *(__int64 (**)(void))(*v27 + 16LL), (char *)v25 == (char *)sub_15A20)
    && (v28 = (_QWORD **)v27[1], v25 = (__int64 (*)(void))(*v28)[2], (char *)v25 == (char *)sub_15A20) )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v28[1] + 16LL))(v28[1]);
  }
  else
  {
    v29 = v25();
  }
  v110 = v29;
  v30 = *(_QWORD *)a2;
  *((_QWORD *)a2 + 1) += 4LL;
  v126 = v29;
  v31.m128i_i64[0] = sub_73650(v30);
  v32 = *((_QWORD *)a2 + 1) + 4LL;
  *(_QWORD *)v122 = v31.m128i_i64[0];
  v127 = v31;
  *((_QWORD *)a2 + 1) = v32;
  *(_QWORD *)&v122[8] = v31.m128i_i64[1];
  if ( v110 )
  {
    if ( !v31.m128i_i8[8] )
    {
      sub_19A90((__int64)v122, (__int64)"EH3[%a]: incongruous num_try_blocks / ea [2]", 0.0);
      goto LABEL_54;
    }
  }
  else if ( v31.m128i_i8[8] )
  {
    v127.m128i_i8[8] = 0;
  }
  v33 = *(__int64 (**)(void))(**(_QWORD **)a2 + 16LL);
  if ( (char *)v33 == (char *)sub_15A20
    && (v34 = *(_QWORD **)(*(_QWORD *)a2 + 8LL),
        v33 = *(__int64 (**)(void))(*v34 + 16LL),
        (char *)v33 == (char *)sub_15A20)
    && (v35 = (_QWORD *)v34[1], v33 = *(__int64 (**)(void))(*v35 + 16LL), (char *)v33 == (char *)sub_15A20)
    && (v36 = (_QWORD **)v35[1], v33 = (__int64 (*)(void))(*v36)[2], (char *)v33 == (char *)sub_15A20) )
  {
    v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v36[1] + 16LL))(v36[1]);
  }
  else
  {
    v37 = v33();
  }
  v111 = v37;
  v38 = *(_QWORD *)a2;
  *((_QWORD *)a2 + 1) += 4LL;
  v128 = v37;
  v39.m128i_i64[0] = sub_73650(v38);
  v40 = *((_QWORD *)a2 + 1);
  *(__m128i *)v119 = v39;
  *(_QWORD *)v122 = v39.m128i_i64[0];
  v129 = v39;
  *((_QWORD *)a2 + 1) = v40 + 4;
  *(_QWORD *)&v122[8] = v39.m128i_i64[1];
  if ( v111 )
  {
    if ( v39.m128i_i8[8] )
      goto LABEL_31;
    sub_19A90((__int64)v122, (__int64)"EH3[%a]: incongruous num_ip_to_state_entries / ea [2]", 0.0);
LABEL_54:
    *(_QWORD *)a1 = *(_QWORD *)v122;
    v60 = _mm_loadu_si128((const __m128i *)&v122[8]);
    *(_BYTE *)(a1 + 176) = 1;
    *(__m128i *)(a1 + 8) = v60;
    return a1;
  }
  if ( v39.m128i_i8[8] )
    v129.m128i_i8[8] = 0;
LABEL_31:
  v41 = *(__int64 (**)(void))(**(_QWORD **)a2 + 16LL);
  if ( (char *)v41 == (char *)sub_15A20
    && (v42 = *(_QWORD **)(*(_QWORD *)a2 + 8LL),
        v41 = *(__int64 (**)(void))(*v42 + 16LL),
        (char *)v41 == (char *)sub_15A20)
    && (v43 = (_QWORD *)v42[1], v41 = *(__int64 (**)(void))(*v43 + 16LL), (char *)v41 == (char *)sub_15A20)
    && (v44 = (_QWORD **)v43[1], v41 = (__int64 (*)(void))(*v44)[2], (char *)v41 == (char *)sub_15A20) )
  {
    v45 = (*(__int64 (__fastcall **)(_QWORD *))(*v44[1] + 16LL))(v44[1]);
  }
  else
  {
    v45 = v41();
  }
  v112 = v45;
  *((_QWORD *)a2 + 1) += 4LL;
  v130 = v45;
  if ( v13 != 429065504 )
  {
    v46.m128i_i64[0] = sub_73650(*(_QWORD *)a2);
    v47 = *((_QWORD *)a2 + 1);
    v120 = v46;
    *((_QWORD *)a2 + 1) = v47 + 4;
    *(__m128i *)v122 = v46;
    v131 = v46;
    if ( v13 == 429065506 )
    {
      v93 = *(__int64 (**)(void))(**(_QWORD **)a2 + 16LL);
      if ( (char *)v93 == (char *)sub_15A20
        && (v94 = *(_QWORD **)(*(_QWORD *)a2 + 8LL),
            v93 = *(__int64 (**)(void))(*v94 + 16LL),
            (char *)v93 == (char *)sub_15A20)
        && (v95 = (_QWORD *)v94[1], v93 = *(__int64 (**)(void))(*v95 + 16LL), (char *)v93 == (char *)sub_15A20)
        && (v96 = (_QWORD **)v95[1], v93 = (__int64 (*)(void))(*v96)[2], (char *)v93 == (char *)sub_15A20) )
      {
        v97 = (*(__int64 (__fastcall **)(_QWORD *))(*v96[1] + 16LL))(v96[1]);
      }
      else
      {
        v97 = v93();
      }
      *((_QWORD *)a2 + 1) += 4LL;
      v132 = v97;
    }
  }
  if ( !v125.m128i_i8[8] )
  {
    if ( !v127.m128i_i8[8] )
      goto LABEL_40;
    goto LABEL_71;
  }
  v73 = v125.m128i_i64[0];
  v74 = *(_QWORD *)a2;
  v75 = 8LL * v20;
  *(double *)v119 = *a2;
  v6 = _mm_loadh_ps(a2 + 2);
  *(__m128 *)&v119[8] = v6;
  v76 = __CFADD__(v125.m128i_i64[0], v75);
  v77 = v125.m128i_i64[0] + v75;
  if ( v76 )
  {
    sub_19A90((__int64)v122, (__int64)"[%a,%a): bad range", v125.m128i_i64[0], v77);
    goto LABEL_101;
  }
  sub_74B30(&v120, v74 + 16, v125.m128i_i64[0]);
  if ( !v121 )
  {
    sub_19A90((__int64)v122, (__int64)"[%a,%a): no associated segment", v73, v77);
LABEL_101:
    v78 = *(_QWORD *)v122;
    v79 = *(_OWORD *)&v122[8];
    goto LABEL_92;
  }
  if ( (unsigned __int64)(v77 - 1) < v120.m128i_i64[0] || (unsigned __int64)(v77 - 1) >= v120.m128i_i64[1] )
  {
    sub_19A90(
      (__int64)v122,
      (__int64)"[%a,%a): does not fit in segment [%a,%a)",
      *(double *)v6.m128_u64,
      *(double *)a4.m128i_i64,
      *(double *)a5.m128i_i64,
      a6);
    v78 = *(_QWORD *)v122;
    v79 = *(_OWORD *)&v122[8];
    goto LABEL_92;
  }
  sub_3ED40((__int64)v122, (__int64 *)v119, v20);
  v78 = *(_QWORD *)v122;
  v79 = *(_OWORD *)&v122[8];
  if ( v123 )
  {
LABEL_92:
    *(_QWORD *)a1 = v78;
    *(_OWORD *)(a1 + 8) = v79;
    *(_BYTE *)(a1 + 176) = 1;
    return a1;
  }
  v133 = *(_QWORD *)v122;
  v134 = *(__m128i *)&v122[8];
  if ( !v127.m128i_i8[8] )
    goto LABEL_40;
LABEL_71:
  v80 = v127.m128i_i64[0];
  v81 = *a2;
  v6 = _mm_loadh_ps(a2 + 2);
  v82 = 20LL * v110;
  *(double *)v119 = *a2;
  *(__m128 *)&v119[8] = v6;
  v76 = __CFADD__(v127.m128i_i64[0], v82);
  v83 = v127.m128i_i64[0] + v82;
  if ( v76 )
  {
    sub_19A90((__int64)v122, (__int64)"[%a,%a): bad range", v127.m128i_i64[0], v83);
    goto LABEL_118;
  }
  sub_74B30(&v120, *(_QWORD *)&v81 + 16LL, v127.m128i_i64[0]);
  if ( !v121 )
  {
    sub_19A90((__int64)v122, (__int64)"[%a,%a): no associated segment", v80, v83);
LABEL_118:
    v84 = *(_QWORD *)v122;
    v85 = *(_OWORD *)&v122[8];
    goto LABEL_76;
  }
  if ( (unsigned __int64)(v83 - 1) >= v120.m128i_i64[0] && (unsigned __int64)(v83 - 1) < v120.m128i_i64[1] )
  {
    sub_416C0((const __m128i **)v122, (const double *)v119, v110, *(double *)v6.m128_u64, a4, a5, a6);
    v84 = *(_QWORD *)v122;
    v85 = *(_OWORD *)&v122[8];
    if ( v123 )
      goto LABEL_76;
    v135 = *(_QWORD *)v122;
    v136 = *(__m128i *)&v122[8];
LABEL_40:
    if ( v129.m128i_i8[8] )
    {
      v48 = v129.m128i_i64[0];
      v49 = *a2;
      v50 = 8LL * v111;
      v113 = v129.m128i_i64[0] + v50;
      v51 = __CFADD__(v129.m128i_i64[0], v50);
      if ( __CFADD__(v129.m128i_i64[0], v50) )
      {
        sub_19A90((__int64)v122, (__int64)"[%a,%a): bad range", v129.m128i_i64[0], v129.m128i_i64[0] + v50);
LABEL_43:
        v52 = *(_QWORD *)v122;
        v53 = *(_OWORD *)&v122[8];
        goto LABEL_44;
      }
      sub_74B30(&v120, *(_QWORD *)&v49 + 16LL, v129.m128i_i64[0]);
      if ( !v121 )
      {
        sub_19A90((__int64)v122, (__int64)"[%a,%a): no associated segment", v48, v113);
        goto LABEL_43;
      }
      v88 = v120.m128i_i64[1];
      v87 = v120.m128i_i64[0];
      if ( (unsigned __int64)(v113 - 1) < v120.m128i_i64[0] || (unsigned __int64)(v113 - 1) >= v120.m128i_i64[1] )
      {
        sub_19A90(
          (__int64)v122,
          (__int64)"[%a,%a): does not fit in segment [%a,%a)",
          *(double *)v6.m128_u64,
          *(double *)a4.m128i_i64,
          *(double *)a5.m128i_i64,
          a6);
        v52 = *(_QWORD *)v122;
        v53 = *(_OWORD *)&v122[8];
LABEL_44:
        v54 = v135;
        *(_QWORD *)a1 = v52;
        *(_QWORD *)(a1 + 8) = v53;
        v55 = v133;
        *(_QWORD *)(a1 + 16) = *((_QWORD *)&v53 + 1);
        *(_BYTE *)(a1 + 176) = 1;
        if ( v54 )
        {
          v56 = v136.m128i_i64[0];
          v57 = v54;
          v58 = 0;
          if ( v136.m128i_i64[0] )
          {
            do
            {
              v59 = *(_QWORD *)(v57 + 32);
              if ( v59 )
              {
                *(_QWORD *)(v57 + 40) = 0;
                qfree(v59);
              }
              ++v58;
              v57 += 56;
            }
            while ( v56 != v58 );
          }
          qfree(v54);
        }
        goto LABEL_50;
      }
      v89 = v111;
      memset(v122, 0, sizeof(v122));
      if ( v111 )
      {
        do
        {
          v91 = sub_735D0(*(_QWORD *)&v49, v48, v89, v86, v87, v88);
          v120.m128i_i32[2] = sub_736F0(*(_QWORD *)&v49, v48 + 4);
          v87 = v120.m128i_u32[2];
          v86 = *(_QWORD *)v122;
          v92 = *(_QWORD *)&v122[8];
          v120.m128i_i64[0] = v91;
          v88 = *(_QWORD *)&v122[16];
          v89 = *(_QWORD *)&v122[8] + 1LL;
          if ( (unsigned __int64)&v120 < *(_QWORD *)v122
            || (unsigned __int64)&v120 >= *(_QWORD *)v122 + 16LL * *(_QWORD *)&v122[16] )
          {
            if ( *(_QWORD *)&v122[16] < v89 )
            {
              v114 = *(_QWORD *)&v122[16];
              v98 = qvector_reserve(v122, 0, v89, 16);
              v99 = *(_QWORD *)&v122[16];
              v100 = *(const __m128i **)v122;
              *(_QWORD *)&v122[16] = v114;
              v101 = *(_QWORD *)&v122[8] - 1LL;
              if ( *(_QWORD *)&v122[8] - 1LL >= 0 )
              {
                v102 = v98;
                do
                {
                  v103 = _mm_loadu_si128(v100);
                  v102 += 16;
                  ++v100;
                  *(__m128i *)(v102 - 16) = v103;
                  v76 = v101-- == 0;
                }
                while ( !v76 );
                v100 = *(const __m128i **)v122;
              }
              v115 = v98;
              qfree(v100);
              v86 = v115;
              *(_QWORD *)&v122[16] = v99;
              v92 = *(_QWORD *)&v122[8];
              *(_QWORD *)v122 = v115;
            }
            *(__m128i *)(v86 + 16 * v92) = _mm_load_si128(&v120);
          }
          else
          {
            if ( *(_QWORD *)&v122[16] < v89 )
            {
              v117 = *(_QWORD *)&v122[16];
              v116 = v120.m128i_u32[2];
              v104 = qvector_reserve(v122, 0, v89, 16);
              v105 = *(_QWORD *)&v122[16];
              v106 = *(const __m128i **)v122;
              v107 = *(_QWORD *)&v122[8] - 1LL;
              *(_QWORD *)&v122[16] = v117;
              if ( *(_QWORD *)&v122[8] - 1LL >= 0 )
              {
                v108 = v104;
                do
                {
                  v109 = _mm_loadu_si128(v106);
                  v108 += 16;
                  ++v106;
                  *(__m128i *)(v108 - 16) = v109;
                  v76 = v107-- == 0;
                }
                while ( !v76 );
                v106 = *(const __m128i **)v122;
              }
              v118 = v104;
              qfree(v106);
              v86 = v118;
              v92 = *(_QWORD *)&v122[8];
              v87 = v116;
              *(_QWORD *)v122 = v118;
              *(_QWORD *)&v122[16] = v105;
            }
            v90 = v86 + 16 * v92;
            *(_QWORD *)v90 = v91;
            *(_DWORD *)(v90 + 8) = v87;
          }
          v48 += 8;
          v51 = ++*(_QWORD *)&v122[8];
        }
        while ( v113 != v48 );
        v62 = *(_QWORD *)v122;
        v61 = *(_QWORD *)&v122[16];
      }
      else
      {
        v61 = 0;
        v62 = 0;
      }
    }
    else
    {
      v61 = 0;
      v51 = 0;
      v62 = 0;
    }
    v63 = _mm_loadu_si128(&v125);
    *(_DWORD *)a1 = v13;
    *(_DWORD *)(a1 + 4) = v20;
    *(_DWORD *)(a1 + 24) = v110;
    *(__m128i *)(a1 + 8) = v63;
    v64 = _mm_load_si128(&v127);
    *(_DWORD *)(a1 + 48) = v111;
    *(__m128i *)(a1 + 32) = v64;
    v65 = _mm_loadu_si128(&v129);
    *(_DWORD *)(a1 + 72) = v112;
    v66 = v132;
    *(__m128i *)(a1 + 56) = v65;
    v67 = _mm_load_si128(&v131);
    *(_DWORD *)(a1 + 96) = v66;
    v68 = v133;
    *(__m128i *)(a1 + 80) = v67;
    v69 = _mm_load_si128(&v134);
    *(_QWORD *)(a1 + 104) = v68;
    v70 = v135;
    *(__m128i *)(a1 + 112) = v69;
    v71 = _mm_loadu_si128(&v136);
    *(_QWORD *)(a1 + 128) = v70;
    *(_QWORD *)(a1 + 152) = v62;
    *(_QWORD *)(a1 + 160) = v51;
    *(_QWORD *)(a1 + 168) = v61;
    *(_BYTE *)(a1 + 176) = 0;
    *(__m128i *)(a1 + 136) = v71;
    return a1;
  }
  sub_19A90(
    (__int64)v122,
    (__int64)"[%a,%a): does not fit in segment [%a,%a)",
    *(double *)v6.m128_u64,
    *(double *)a4.m128i_i64,
    *(double *)a5.m128i_i64,
    a6);
  v84 = *(_QWORD *)v122;
  v85 = *(_OWORD *)&v122[8];
LABEL_76:
  *(_QWORD *)a1 = v84;
  v55 = v133;
  *(_OWORD *)(a1 + 8) = v85;
  *(_BYTE *)(a1 + 176) = 1;
LABEL_50:
  if ( v55 )
    qfree(v55);
  return a1;
}
