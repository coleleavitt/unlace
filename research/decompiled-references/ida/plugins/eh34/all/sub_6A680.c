__int64 __fastcall sub_6A680(__int64 a1, const char *a2, __int64 *a3, int a4, double a5)
{
  __int64 *v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdx
  const char *v8; // r12
  unsigned int *v9; // r14
  unsigned int *v10; // r15
  const char *v11; // rsi
  char v12; // al
  unsigned int v13; // ebx
  void (__fastcall *v14)(__int64, const char *, _QWORD); // rax
  unsigned int v15; // ebx
  void (__fastcall *v16)(__int64, const char *, _QWORD); // rax
  __int64 v17; // rbx
  bool v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // rsi
  const char *v21; // rax
  const char *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  const char *v25; // rax
  const char *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  bool v31; // r9
  __int64 v32; // r8
  bool v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdi
  __m128i v44; // xmm0
  void (__fastcall *hexdsp)(__int64, const char *, _QWORD); // rax
  __int64 v47; // rax
  const char *v48; // rdx
  unsigned __int64 v49; // rsi
  const char *v50; // rax
  bool v51; // di
  bool v52; // cl
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 i; // rbp
  __int64 v57; // r12
  __int64 v58; // r8
  __int64 v59; // r14
  __int64 j; // r13
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rax
  const char *v64; // rdx
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rax
  const char *v67; // rcx
  bool v68; // di
  __int64 v69; // rax
  const char *v70; // rcx
  __int64 v71; // rax
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  __int64 v74; // [rsp+8h] [rbp-210h]
  const char *v75; // [rsp+10h] [rbp-208h]
  const char *v77; // [rsp+20h] [rbp-1F8h]
  char v79; // [rsp+38h] [rbp-1E0h]
  bool v80; // [rsp+38h] [rbp-1E0h]
  bool v81; // [rsp+38h] [rbp-1E0h]
  __int64 v82; // [rsp+38h] [rbp-1E0h]
  bool v83; // [rsp+38h] [rbp-1E0h]
  bool v84; // [rsp+38h] [rbp-1E0h]
  bool v85; // [rsp+38h] [rbp-1E0h]
  bool v86; // [rsp+38h] [rbp-1E0h]
  bool v87; // [rsp+38h] [rbp-1E0h]
  bool v88; // [rsp+38h] [rbp-1E0h]
  bool v89; // [rsp+38h] [rbp-1E0h]
  bool v90; // [rsp+38h] [rbp-1E0h]
  const char *v91; // [rsp+38h] [rbp-1E0h]
  bool v92; // [rsp+38h] [rbp-1E0h]
  const char *v93; // [rsp+38h] [rbp-1E0h]
  __int64 v94; // [rsp+40h] [rbp-1D8h]
  __int64 v95; // [rsp+40h] [rbp-1D8h]
  bool v96; // [rsp+40h] [rbp-1D8h]
  __int64 v97; // [rsp+40h] [rbp-1D8h]
  __int64 v98; // [rsp+40h] [rbp-1D8h]
  __int64 v99; // [rsp+40h] [rbp-1D8h]
  __int64 v100; // [rsp+40h] [rbp-1D8h]
  __int64 v101; // [rsp+40h] [rbp-1D8h]
  __int64 v102; // [rsp+40h] [rbp-1D8h]
  __int64 v103; // [rsp+40h] [rbp-1D8h]
  __int64 v104; // [rsp+40h] [rbp-1D8h]
  bool v105; // [rsp+40h] [rbp-1D8h]
  __int64 v106; // [rsp+40h] [rbp-1D8h]
  bool v107; // [rsp+40h] [rbp-1D8h]
  bool v108; // [rsp+48h] [rbp-1D0h]
  __int64 v109; // [rsp+48h] [rbp-1D0h]
  bool v110; // [rsp+48h] [rbp-1D0h]
  __int64 v111; // [rsp+48h] [rbp-1D0h]
  __int64 v112; // [rsp+48h] [rbp-1D0h]
  bool v113; // [rsp+48h] [rbp-1D0h]
  __int64 v114; // [rsp+48h] [rbp-1D0h]
  __int64 v115; // [rsp+50h] [rbp-1C8h]
  const char *v116; // [rsp+50h] [rbp-1C8h]
  unsigned int *v117; // [rsp+50h] [rbp-1C8h]
  const char *v118; // [rsp+50h] [rbp-1C8h]
  bool v119; // [rsp+50h] [rbp-1C8h]
  __int64 v120; // [rsp+58h] [rbp-1C0h]
  __int64 v121; // [rsp+58h] [rbp-1C0h]
  bool v122; // [rsp+58h] [rbp-1C0h]
  unsigned __int64 v123; // [rsp+58h] [rbp-1C0h]
  __int64 *v124; // [rsp+60h] [rbp-1B8h]
  __int64 *v125; // [rsp+60h] [rbp-1B8h]
  const char *v126; // [rsp+68h] [rbp-1B0h]
  __int64 v127; // [rsp+70h] [rbp-1A8h] BYREF
  __m128i v128; // [rsp+78h] [rbp-1A0h] BYREF
  char v129; // [rsp+88h] [rbp-190h]
  __int64 v130; // [rsp+90h] [rbp-188h] BYREF
  __m128i v131; // [rsp+98h] [rbp-180h] BYREF
  char v132; // [rsp+A8h] [rbp-170h]
  __int64 v133; // [rsp+B0h] [rbp-168h] BYREF
  __m128i v134; // [rsp+B8h] [rbp-160h] BYREF
  char v135; // [rsp+C8h] [rbp-150h]
  __int64 v136; // [rsp+D8h] [rbp-140h]
  __int64 v137; // [rsp+E0h] [rbp-138h]
  __int64 v138; // [rsp+148h] [rbp-D0h]
  __int64 v139; // [rsp+150h] [rbp-C8h]
  __int64 v140; // [rsp+160h] [rbp-B8h]
  __int64 v141; // [rsp+168h] [rbp-B0h]
  __int64 v142; // [rsp+178h] [rbp-A0h]
  __int64 v143; // [rsp+180h] [rbp-98h]
  bool v144; // [rsp+1D0h] [rbp-48h]
  unsigned __int64 v145; // [rsp+1D8h] [rbp-40h]

  v5 = a3;
  v6 = (__int64)a2;
  v7 = *a3;
  v145 = __readfsqword(0x28u);
  sub_662D0((__int64)&v133, (__int64)a2, v7, a5);
  if ( v135 )
    goto LABEL_54;
  v77 = (const char *)(v5 + 92);
  if ( a4 )
  {
    hexdsp = (void (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(&v133, a2);
    hexdsp(205, v77, 0);
  }
  v8 = a2 + 408;
  v9 = (unsigned int *)v5[23];
  v10 = &v9[10 * v5[24]];
  v74 = (__int64)(v5 + 37);
  v75 = a2 + 360;
  if ( v10 == v9 )
  {
LABEL_56:
    v47 = *(_QWORD *)(v6 + 456);
    if ( v47 )
      *(_QWORD *)(v6 + 456) = v47 - 1;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  while ( 1 )
  {
    v11 = (const char *)*v9;
    v12 = sub_26340(v74, (int)v11);
    if ( v12 )
    {
      v13 = *v9;
      v79 = v12;
      v14 = (void (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(v74, v11);
      v14(205, v77, v13);
      v15 = v9[1] + 1;
      v16 = (void (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(205, v77);
      v16(205, v77, v15);
      v17 = *((_QWORD *)v9 + 2);
      v18 = v79;
      v19 = v17 + 72LL * *((_QWORD *)v9 + 3);
      if ( v19 != v17 )
        break;
    }
LABEL_6:
    v9 += 10;
    if ( v10 == v9 )
      goto LABEL_56;
  }
  v20 = *(_QWORD *)(v17 + 8);
  if ( v20 == -1 )
  {
LABEL_53:
    sub_64B50(
      (__int64)&v133,
      *(unsigned __int8 **)(v6 + 32),
      (__int64)"populate_exception_handlers(%a): handler_ea == BADADDR",
      a5);
LABEL_54:
    *(_QWORD *)a1 = v133;
    v44 = _mm_loadu_si128(&v134);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v44;
    return a1;
  }
  while ( 1 )
  {
    v21 = *(const char **)(v6 + 416);
    if ( v21 )
    {
      v22 = v8;
      do
      {
        while ( 1 )
        {
          v23 = *((_QWORD *)v21 + 2);
          v24 = *((_QWORD *)v21 + 3);
          if ( *((_QWORD *)v21 + 4) >= v20 )
            break;
          v21 = *((const char **)v21 + 3);
          if ( !v24 )
            goto LABEL_15;
        }
        v22 = v21;
        v21 = *((const char **)v21 + 2);
      }
      while ( v23 );
LABEL_15:
      if ( v8 != v22 && v20 >= *((_QWORD *)v22 + 4) )
        goto LABEL_51;
    }
    v25 = *(const char **)(v6 + 368);
    v26 = v75;
    if ( v25 )
    {
      do
      {
        while ( 1 )
        {
          v27 = *((_QWORD *)v25 + 2);
          v28 = *((_QWORD *)v25 + 3);
          if ( *((_QWORD *)v25 + 4) >= v20 )
            break;
          v25 = *((const char **)v25 + 3);
          if ( !v28 )
            goto LABEL_22;
        }
        v26 = v25;
        v25 = *((const char **)v25 + 2);
      }
      while ( v27 );
LABEL_22:
      if ( v75 != v26 && v20 >= *((_QWORD *)v26 + 4) )
        goto LABEL_51;
    }
    v94 = v19;
    v80 = v18;
    sub_30660((__int64)&v133, v20);
    v18 = v80;
    v19 = v94;
    v31 = v144;
    if ( v144 && v139 && v143 )
      break;
    v48 = *(const char **)(v6 + 416);
    v49 = *(_QWORD *)(v17 + 8);
    if ( v48 )
    {
      while ( 1 )
      {
        v29 = *((_QWORD *)v48 + 4);
        v50 = *((const char **)v48 + 2);
        v51 = v80;
        v30 = *((_QWORD *)v48 + 3);
        if ( v49 >= v29 )
        {
          v50 = *((const char **)v48 + 3);
          v51 = 0;
        }
        if ( !v50 )
          break;
        v48 = v50;
      }
      if ( !v51 )
        goto LABEL_66;
    }
    else
    {
      v48 = v8;
    }
    v122 = v144;
    if ( v48 != *(const char **)(v6 + 424) )
    {
      v112 = v94;
      v105 = v80;
      v91 = v48;
      v63 = std::_Rb_tree_decrement(v48, v49, v48, v29, v30);
      v31 = v122;
      v29 = *(_QWORD *)(v63 + 32);
      v19 = v112;
      v18 = v105;
      v48 = v91;
LABEL_66:
      if ( v29 >= v49 )
        goto LABEL_70;
    }
    v52 = v18;
    if ( v8 != v48 )
      v52 = v49 < *((_QWORD *)v48 + 4);
    v116 = v48;
    v110 = v52;
    v100 = v19;
    v86 = v18;
    v53 = operator new(0x28u);
    *(_QWORD *)(v53 + 32) = *(_QWORD *)(v17 + 8);
    std::_Rb_tree_insert_and_rebalance(v110, v53, v116, v8);
    v19 = v100;
    ++*(_QWORD *)(v6 + 440);
    v31 = v144;
    v18 = v86;
LABEL_70:
    if ( !v31 )
      goto LABEL_51;
    v144 = 0;
    if ( v142 )
    {
      v101 = v19;
      v87 = v18;
      v143 = 0;
      qfree(v142);
      v19 = v101;
      v18 = v87;
    }
    v54 = v140;
    if ( v140 )
    {
      if ( v141 )
      {
        v88 = v18;
        v111 = v19;
        v117 = v9;
        v125 = v5;
        v126 = v8;
        v102 = v17;
        v55 = v141;
        v121 = v6;
        for ( i = 0; i != v55; ++i )
        {
          v57 = v54 + 40 * i;
          v58 = *(_QWORD *)(v57 + 16);
          if ( v58 )
          {
            v59 = *(_QWORD *)(v57 + 24);
            if ( v59 )
            {
              for ( j = 0; j != v59; ++j )
              {
                v61 = v58 + 72 * j;
                v62 = *(_QWORD *)(v61 + 32);
                if ( v62 )
                {
                  *(_QWORD *)(v61 + 40) = 0;
                  qfree(v62);
                  v58 = *(_QWORD *)(v57 + 16);
                }
              }
            }
            *(_QWORD *)(v57 + 24) = 0;
            qfree(v58);
            v54 = v140;
          }
        }
        v18 = v88;
        v17 = v102;
        v19 = v111;
        v9 = v117;
        v6 = v121;
        v5 = v125;
        v8 = v126;
      }
      v103 = v19;
      v89 = v18;
      v141 = 0;
      qfree(v54);
      v19 = v103;
      v18 = v89;
    }
    if ( v138 )
    {
      v104 = v19;
      v90 = v18;
      v139 = 0;
      qfree(v138);
      v19 = v104;
      v18 = v90;
    }
    v43 = v136;
    if ( !v136 )
      goto LABEL_51;
LABEL_50:
    v99 = v19;
    v85 = v18;
    v137 = 0;
    qfree(v43);
    v18 = v85;
    v19 = v99;
LABEL_51:
    v17 += 72;
    if ( v17 == v19 )
      goto LABEL_6;
    v20 = *(_QWORD *)(v17 + 8);
    if ( v20 == -1 )
      goto LABEL_53;
  }
  v108 = v144;
  sub_69980((__int64)&v127, v6, *(_QWORD *)(v17 + 8), 1u, (__int64)&v133);
  v18 = v80;
  v19 = v94;
  v33 = v108;
  if ( !v129 )
  {
    if ( v127 )
    {
      sub_6A680(&v130, v6, v127, (unsigned int)(a4 + 1), v32, v108);
      v18 = v80;
      v19 = v94;
      if ( v132 )
      {
        v72 = _mm_loadu_si128(&v131);
        *(_QWORD *)a1 = v130;
        *(_BYTE *)(a1 + 24) = 1;
        *(__m128i *)(a1 + 8) = v72;
        goto LABEL_106;
      }
LABEL_30:
      if ( !v144 )
        goto LABEL_51;
      v144 = 0;
      if ( v142 )
      {
        v95 = v19;
        v81 = v18;
        v143 = 0;
        qfree(v142);
        v19 = v95;
        v18 = v81;
      }
      v34 = v140;
      if ( v140 )
      {
        v82 = v141;
        if ( v141 )
        {
          v96 = v18;
          v115 = v19;
          v109 = v17;
          v35 = 0;
          do
          {
            v36 = v34 + 40 * v35;
            v37 = *(_QWORD *)(v36 + 16);
            if ( v37 )
            {
              if ( *(_QWORD *)(v36 + 24) )
              {
                v120 = v6;
                v38 = *(_QWORD *)(v36 + 24);
                v124 = v5;
                v39 = v35;
                v40 = 0;
                do
                {
                  v41 = v37 + 72 * v40;
                  v42 = *(_QWORD *)(v41 + 32);
                  if ( v42 )
                  {
                    *(_QWORD *)(v41 + 40) = 0;
                    qfree(v42);
                    v37 = *(_QWORD *)(v36 + 16);
                  }
                  ++v40;
                }
                while ( v38 != v40 );
                v35 = v39;
                v6 = v120;
                v5 = v124;
              }
              *(_QWORD *)(v36 + 24) = 0;
              qfree(v37);
              v34 = v140;
            }
            ++v35;
          }
          while ( v82 != v35 );
          v18 = v96;
          v17 = v109;
          v19 = v115;
        }
        v97 = v19;
        v83 = v18;
        v141 = 0;
        qfree(v34);
        v18 = v83;
        v19 = v97;
      }
      if ( v138 )
      {
        v98 = v19;
        v84 = v18;
        v139 = 0;
        qfree(v138);
        v19 = v98;
        v18 = v84;
      }
      v43 = v136;
      if ( !v136 )
        goto LABEL_51;
      goto LABEL_50;
    }
    v64 = *(const char **)(v6 + 416);
    v65 = *(_QWORD *)(v17 + 8);
    if ( !v64 )
    {
      v70 = v8;
      goto LABEL_103;
    }
    while ( 1 )
    {
      v66 = *((_QWORD *)v64 + 4);
      v67 = *((const char **)v64 + 2);
      v68 = v108;
      v32 = *((_QWORD *)v64 + 3);
      if ( v65 >= v66 )
      {
        v67 = *((const char **)v64 + 3);
        v68 = 0;
      }
      if ( !v67 )
        break;
      v64 = v67;
    }
    v70 = v64;
    if ( v68 )
    {
LABEL_103:
      v64 = *(const char **)(v6 + 424);
      if ( v70 != v64 )
      {
        v123 = *(_QWORD *)(v17 + 8);
        v119 = v108;
        v114 = v94;
        v107 = v80;
        v93 = v70;
        v71 = std::_Rb_tree_decrement(v70, v65, v64, v70, v32);
        v64 = v93;
        v65 = v123;
        v66 = *(_QWORD *)(v71 + 32);
        v33 = v119;
        v19 = v114;
        v18 = v107;
        goto LABEL_99;
      }
    }
    else
    {
LABEL_99:
      if ( v66 >= v65 )
        goto LABEL_30;
    }
    if ( v8 != v64 )
      v33 = v65 < *((_QWORD *)v64 + 4);
    v118 = v64;
    v113 = v33;
    v106 = v19;
    v92 = v18;
    v69 = operator new(0x28u);
    *(_QWORD *)(v69 + 32) = *(_QWORD *)(v17 + 8);
    std::_Rb_tree_insert_and_rebalance(v113, v69, v118, v8);
    v18 = v92;
    v19 = v106;
    ++*(_QWORD *)(v6 + 440);
    goto LABEL_30;
  }
  v73 = _mm_loadu_si128(&v128);
  *(_QWORD *)a1 = v127;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v73;
LABEL_106:
  if ( v144 )
  {
    v144 = 0;
    sub_2FD40(&v133);
  }
  return a1;
}

