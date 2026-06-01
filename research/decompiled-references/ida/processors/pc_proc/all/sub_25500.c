unsigned __int64 __fastcall sub_25500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  size_t v4; // r12
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  size_t v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  int i; // r13d
  __int64 v12; // rax
  size_t v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // r14
  size_t v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r14
  size_t v26; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // r14
  size_t v32; // r8
  unsigned __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  size_t v37; // r14
  size_t v38; // r8
  unsigned __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // rbp
  __int64 v44; // r12
  unsigned __int64 v45; // r13
  __int64 v46; // rax
  size_t v47; // rbp
  __int64 v48; // r12
  unsigned __int64 v49; // r13
  __int64 v50; // r12
  __int64 v51; // rax
  size_t v52; // rbp
  __int64 v53; // r13
  unsigned __int64 v54; // r14
  __int64 v55; // r14
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  size_t v60; // rbp
  __int64 v61; // r12
  unsigned __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rax
  size_t v66; // rbp
  __int64 v67; // r14
  unsigned __int64 v68; // r9
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // r14
  __int64 v72; // r13
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  size_t v77; // rbp
  __int64 v78; // r12
  unsigned __int64 v79; // r13
  __int64 v80; // rax
  size_t v81; // rbp
  __int64 v82; // r13
  unsigned __int64 v83; // r14
  __int64 v84; // rax
  size_t v85; // rbp
  __int64 v86; // r13
  unsigned __int64 v87; // r14
  __int64 v88; // rax
  size_t v89; // rbp
  __int64 v90; // r13
  unsigned __int64 v91; // r14
  __int64 v92; // rax
  size_t v93; // rbp
  __int64 v94; // r12
  unsigned __int64 v95; // r13
  __int64 v96; // rax
  size_t v97; // r12
  __int64 v98; // rbp
  unsigned __int64 v99; // r13
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v103; // r10
  size_t v104; // r8
  unsigned __int64 v105; // r11
  unsigned __int64 v106; // r10
  size_t v107; // r8
  unsigned __int64 v108; // r11
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rsi
  __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rax
  unsigned __int64 *v131; // [rsp+0h] [rbp-B8h]
  size_t n; // [rsp+8h] [rbp-B0h]
  char *v133; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v134; // [rsp+18h] [rbp-A0h]
  size_t v135; // [rsp+20h] [rbp-98h]
  __int64 v136; // [rsp+28h] [rbp-90h]
  __int64 v137; // [rsp+30h] [rbp-88h]
  __int64 *v138; // [rsp+38h] [rbp-80h]
  char *v139; // [rsp+40h] [rbp-78h]
  __int64 v140; // [rsp+48h] [rbp-70h]
  __int64 v141; // [rsp+50h] [rbp-68h] BYREF
  __int128 v142; // [rsp+58h] [rbp-60h]
  _BYTE src[3]; // [rsp+6Eh] [rbp-4Ah] BYREF
  char v144; // [rsp+71h] [rbp-47h] BYREF
  char v145; // [rsp+73h] [rbp-45h] BYREF
  unsigned __int64 v146; // [rsp+78h] [rbp-40h] BYREF

  v140 = a2;
  v137 = a3;
  v146 = __readfsqword(0x28u);
  v138 = &v141;
  v141 = 0;
  v142 = 0;
  v141 = qvector_reserve();
  *(_BYTE *)(v141 + v142) = 4;
  *(_QWORD *)&v142 = v142 + 1;
  v139 = &v145;
  v3 = pack_dd() - (_QWORD)src;
  v4 = v3;
  if ( v3 )
  {
    v5 = v142;
    v6 = v142 + v3;
    if ( __CFADD__((_QWORD)v142, v3) )
    {
      if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v5 + v141), src, v4);
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v123 = v141;
    v124 = v142;
    if ( *((_QWORD *)&v142 + 1) < v6 )
    {
      v141 = qvector_reserve();
      v123 = v141;
      v124 = v142;
    }
    memset((void *)(v123 + v124), 0, v6 - v124);
    *(_QWORD *)&v142 = v6;
    goto LABEL_6;
  }
LABEL_7:
  v133 = &v144;
  v7 = pack_dw() - (_QWORD)src;
  v8 = v7;
  if ( !v7 )
    goto LABEL_13;
  v9 = v142;
  v10 = v142 + v7;
  if ( !__CFADD__((_QWORD)v142, v7) )
    goto LABEL_179;
  if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_179:
    v113 = v141;
    v114 = v142;
    if ( *((_QWORD *)&v142 + 1) < v10 )
    {
      v141 = qvector_reserve();
      v113 = v141;
      v114 = v142;
    }
    memset((void *)(v113 + v114), 0, v10 - v114);
    *(_QWORD *)&v142 = v10;
    goto LABEL_12;
  }
  if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v9 + v141), src, v8);
LABEL_13:
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0; (unsigned __int64)i < *(_QWORD *)(a1 + 16); ++i )
    {
      v12 = pack_dq() - (_QWORD)src;
      v13 = v12;
      if ( !v12 )
        goto LABEL_22;
      v14 = v142;
      v15 = v142 + v12;
      if ( __CFADD__((_QWORD)v142, v12) )
      {
        if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_21;
        }
        v15 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v16 = v141;
      v17 = v142;
      if ( *((_QWORD *)&v142 + 1) < v15 )
      {
        v134 = v142;
        n = v13;
        v131 = (unsigned __int64 *)v15;
        v141 = qvector_reserve();
        v16 = v141;
        v14 = v134;
        v17 = v142;
        v13 = n;
        v15 = (unsigned __int64)v131;
      }
      v134 = v14;
      n = v13;
      v131 = (unsigned __int64 *)v15;
      memset((void *)(v16 + v17), 0, v15 - v17);
      v13 = n;
      v14 = v134;
      *(_QWORD *)&v142 = v131;
LABEL_21:
      memcpy((void *)(v14 + v141), src, v13);
LABEL_22:
      v18 = pack_dq() - (_QWORD)src;
      v19 = v18;
      if ( !v18 )
        goto LABEL_28;
      v20 = v142;
      v21 = v142 + v18;
      if ( __CFADD__((_QWORD)v142, v18) )
      {
        if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_27;
        }
        v21 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v22 = v141;
      v23 = v142;
      if ( *((_QWORD *)&v142 + 1) < v21 )
      {
        v131 = (unsigned __int64 *)v21;
        n = v142;
        v141 = qvector_reserve();
        v22 = v141;
        v20 = n;
        v23 = v142;
        v21 = (unsigned __int64)v131;
      }
      n = v20;
      v131 = (unsigned __int64 *)v21;
      memset((void *)(v22 + v23), 0, v21 - v23);
      v20 = n;
      *(_QWORD *)&v142 = v131;
LABEL_27:
      memcpy((void *)(v20 + v141), src, v19);
LABEL_28:
      v24 = pack_dw() - (_QWORD)src;
      v25 = v24;
      if ( !v24 )
        goto LABEL_34;
      v26 = v142;
      v27 = v142 + v24;
      if ( __CFADD__((_QWORD)v142, v24) )
      {
        if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_33;
        }
        v27 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v28 = v141;
      v29 = v142;
      if ( *((_QWORD *)&v142 + 1) < v27 )
      {
        v131 = (unsigned __int64 *)v27;
        n = v142;
        v141 = qvector_reserve();
        v28 = v141;
        v26 = n;
        v29 = v142;
        v27 = (unsigned __int64)v131;
      }
      n = v26;
      v131 = (unsigned __int64 *)v27;
      memset((void *)(v28 + v29), 0, v27 - v29);
      v26 = n;
      *(_QWORD *)&v142 = v131;
LABEL_33:
      memcpy((void *)(v26 + v141), src, v25);
LABEL_34:
      v30 = pack_dq() - (_QWORD)src;
      v31 = v30;
      if ( v30 )
      {
        v32 = v142;
        v33 = v142 + v30;
        if ( !__CFADD__((_QWORD)v142, v30) )
          goto LABEL_36;
        if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_36:
          v34 = v141;
          v35 = v142;
          if ( *((_QWORD *)&v142 + 1) < v33 )
          {
            v131 = (unsigned __int64 *)v33;
            n = v142;
            v141 = qvector_reserve();
            v34 = v141;
            v32 = n;
            v35 = v142;
            v33 = (unsigned __int64)v131;
          }
          n = v32;
          v131 = (unsigned __int64 *)v33;
          memset((void *)(v34 + v35), 0, v33 - v35);
          v32 = n;
          *(_QWORD *)&v142 = v131;
        }
        else if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((void *)(v32 + v141), src, v31);
      }
      if ( *(char *)a1 >= 0 )
        continue;
      v36 = pack_dw() - (_QWORD)src;
      v37 = v36;
      if ( !v36 )
        continue;
      v38 = v142;
      v39 = v142 + v36;
      if ( __CFADD__((_QWORD)v142, v36) )
      {
        if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_160;
        }
        v39 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v40 = v141;
      v41 = v142;
      if ( *((_QWORD *)&v142 + 1) < v39 )
      {
        v131 = (unsigned __int64 *)v39;
        n = v142;
        v141 = qvector_reserve();
        v40 = v141;
        v38 = n;
        v41 = v142;
        v39 = (unsigned __int64)v131;
      }
      n = v38;
      v131 = (unsigned __int64 *)v39;
      memset((void *)(v40 + v41), 0, v39 - v41);
      v38 = n;
      *(_QWORD *)&v142 = v131;
LABEL_160:
      memcpy((void *)(v38 + v141), src, v37);
    }
  }
  v42 = pack_dw() - (_QWORD)src;
  v43 = v42;
  if ( v42 )
  {
    v44 = v142;
    v45 = v142 + v42;
    if ( __CFADD__((_QWORD)v142, v42) )
    {
      if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_63:
        memcpy((void *)(v44 + v141), src, v43);
        goto LABEL_64;
      }
      v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v115 = v141;
    v116 = v142;
    if ( *((_QWORD *)&v142 + 1) < v45 )
    {
      v141 = qvector_reserve();
      v115 = v141;
      v116 = v142;
    }
    memset((void *)(v115 + v116), 0, v45 - v116);
    *(_QWORD *)&v142 = v45;
    goto LABEL_63;
  }
LABEL_64:
  v46 = pack_dd() - (_QWORD)src;
  v47 = v46;
  if ( !v46 )
    goto LABEL_70;
  v48 = v142;
  v49 = v142 + v46;
  if ( !__CFADD__((_QWORD)v142, v46) )
    goto LABEL_203;
  if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_203:
    v125 = v141;
    v126 = v142;
    if ( *((_QWORD *)&v142 + 1) < v49 )
    {
      v141 = qvector_reserve();
      v125 = v141;
      v126 = v142;
    }
    memset((void *)(v125 + v126), 0, v49 - v126);
    *(_QWORD *)&v142 = v49;
    goto LABEL_69;
  }
  if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_69:
  memcpy((void *)(v48 + v141), src, v47);
LABEL_70:
  v50 = *(_QWORD *)(a1 + 56);
  v51 = pack_dw() - (_QWORD)src;
  v52 = v51;
  if ( !v51 )
    goto LABEL_76;
  v53 = v142;
  v54 = v142 + v51;
  if ( !__CFADD__((_QWORD)v142, v51) )
    goto LABEL_187;
  if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v54 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_187:
    v117 = v141;
    v118 = v142;
    if ( *((_QWORD *)&v142 + 1) < v54 )
    {
      v141 = qvector_reserve();
      v117 = v141;
      v118 = v142;
    }
    memset((void *)(v117 + v118), 0, v54 - v118);
    *(_QWORD *)&v142 = v54;
    goto LABEL_75;
  }
  if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_75:
  memcpy((void *)(v53 + v141), src, v52);
LABEL_76:
  if ( (int)v50 > 0 )
  {
    v55 = 0;
    while ( 1 )
    {
      v58 = pack_dq() - (_QWORD)src;
      v107 = v58;
      if ( !v58 )
        goto LABEL_82;
      v106 = v142;
      v108 = v142 + v58;
      if ( !__CFADD__((_QWORD)v142, v58) )
        goto LABEL_78;
      if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
        break;
      if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_81:
      memcpy((void *)(v106 + v141), src, v107);
LABEL_82:
      v55 += 8;
      if ( 8LL * (unsigned int)(v50 - 1) + 8 == v55 )
        goto LABEL_88;
    }
    v108 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_78:
    v56 = v141;
    v57 = v142;
    if ( *((_QWORD *)&v142 + 1) < v108 )
    {
      v134 = v142;
      n = v107;
      v131 = (unsigned __int64 *)v108;
      v141 = qvector_reserve();
      v56 = v141;
      v106 = v134;
      v57 = v142;
      v107 = n;
      v108 = (unsigned __int64)v131;
    }
    v134 = v106;
    n = v107;
    v131 = (unsigned __int64 *)v108;
    memset((void *)(v56 + v57), 0, v108 - v57);
    v107 = n;
    v106 = v134;
    *(_QWORD *)&v142 = v131;
    goto LABEL_81;
  }
LABEL_88:
  v59 = pack_dw() - (_QWORD)src;
  v60 = v59;
  if ( v59 )
  {
    v61 = v142;
    v62 = v142 + v59;
    if ( __CFADD__((_QWORD)v142, v59) )
    {
      if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_93:
        memcpy((void *)(v61 + v141), src, v60);
        goto LABEL_94;
      }
      v62 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v111 = v141;
    v112 = v142;
    if ( *((_QWORD *)&v142 + 1) < v62 )
    {
      v141 = qvector_reserve();
      v111 = v141;
      v112 = v142;
    }
    memset((void *)(v111 + v112), 0, v62 - v112);
    *(_QWORD *)&v142 = v62;
    goto LABEL_93;
  }
LABEL_94:
  v63 = 0;
  LODWORD(n) = 0;
  v131 = &v146;
  if ( *(_QWORD *)(a1 + 80) )
  {
    do
    {
      v64 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24 * v63 + 8);
      v65 = pack_dw() - (_QWORD)src;
      v66 = v65;
      if ( !v65 )
        goto LABEL_101;
      v67 = v142;
      v68 = v142 + v65;
      if ( __CFADD__((_QWORD)v142, v65) )
      {
        if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_100;
        }
        v68 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v69 = v141;
      v70 = v142;
      if ( *((_QWORD *)&v142 + 1) < v68 )
      {
        v134 = v68;
        v141 = qvector_reserve();
        v69 = v141;
        v68 = v134;
        v70 = v142;
      }
      v134 = v68;
      memset((void *)(v69 + v70), 0, v68 - v70);
      *(_QWORD *)&v142 = v134;
LABEL_100:
      memcpy((void *)(v67 + v141), src, v66);
LABEL_101:
      if ( (int)v64 > 0 )
      {
        v71 = 0;
        v72 = 8LL * (unsigned int)(v64 - 1) + 8;
        while ( 2 )
        {
          v75 = pack_dq() - (_QWORD)src;
          v104 = v75;
          if ( !v75 )
            goto LABEL_107;
          v103 = v142;
          v105 = v142 + v75;
          if ( __CFADD__((_QWORD)v142, v75) )
          {
            if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_106;
            }
            v105 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v73 = v141;
          v74 = v142;
          if ( *((_QWORD *)&v142 + 1) < v105 )
          {
            v136 = v142;
            v135 = v104;
            v134 = v105;
            v141 = qvector_reserve();
            v73 = v141;
            v103 = v136;
            v74 = v142;
            v104 = v135;
            v105 = v134;
          }
          v136 = v103;
          v135 = v104;
          v134 = v105;
          memset((void *)(v73 + v74), 0, v105 - v74);
          v104 = v135;
          v103 = v136;
          *(_QWORD *)&v142 = v134;
LABEL_106:
          memcpy((void *)(v103 + v141), src, v104);
LABEL_107:
          v71 += 8;
          if ( v71 == v72 )
            break;
          continue;
        }
      }
      LODWORD(n) = n + 1;
      v63 = (int)n;
    }
    while ( (unsigned __int64)(int)n < *(_QWORD *)(a1 + 80) );
  }
  v76 = pack_dd() - (_QWORD)src;
  v77 = v76;
  if ( v76 )
  {
    v78 = v142;
    v79 = v142 + v76;
    if ( __CFADD__((_QWORD)v142, v76) )
    {
      if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_119:
        memcpy((void *)(v78 + v141), src, v77);
        goto LABEL_120;
      }
      v79 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v109 = v141;
    v110 = v142;
    if ( *((_QWORD *)&v142 + 1) < v79 )
    {
      v141 = qvector_reserve();
      v109 = v141;
      v110 = v142;
    }
    memset((void *)(v109 + v110), 0, v79 - v110);
    *(_QWORD *)&v142 = v79;
    goto LABEL_119;
  }
LABEL_120:
  v80 = pack_dq() - (_QWORD)src;
  v81 = v80;
  if ( !v80 )
    goto LABEL_126;
  v82 = v142;
  v83 = v142 + v80;
  if ( !__CFADD__((_QWORD)v142, v80) )
    goto LABEL_207;
  if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v83 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_207:
    v127 = v141;
    v128 = v142;
    if ( *((_QWORD *)&v142 + 1) < v83 )
    {
      v141 = qvector_reserve();
      v127 = v141;
      v128 = v142;
    }
    memset((void *)(v127 + v128), 0, v83 - v128);
    *(_QWORD *)&v142 = v83;
    goto LABEL_125;
  }
  if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_125:
  memcpy((void *)(v82 + v141), src, v81);
LABEL_126:
  v84 = pack_dq() - (_QWORD)src;
  v85 = v84;
  if ( !v84 )
    goto LABEL_132;
  v86 = v142;
  v87 = v142 + v84;
  if ( !__CFADD__((_QWORD)v142, v84) )
    goto LABEL_195;
  if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v87 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_195:
    v121 = v141;
    v122 = v142;
    if ( *((_QWORD *)&v142 + 1) < v87 )
    {
      v141 = qvector_reserve();
      v121 = v141;
      v122 = v142;
    }
    memset((void *)(v121 + v122), 0, v87 - v122);
    *(_QWORD *)&v142 = v87;
    goto LABEL_131;
  }
  if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_131:
  memcpy((void *)(v86 + v141), src, v85);
LABEL_132:
  v88 = pack_dd() - (_QWORD)src;
  v89 = v88;
  if ( !v88 )
    goto LABEL_138;
  v90 = v142;
  v91 = v142 + v88;
  if ( !__CFADD__((_QWORD)v142, v88) )
    goto LABEL_211;
  if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v91 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_211:
    v129 = v141;
    v130 = v142;
    if ( *((_QWORD *)&v142 + 1) < v91 )
    {
      v141 = qvector_reserve();
      v129 = v141;
      v130 = v142;
    }
    memset((void *)(v129 + v130), 0, v91 - v130);
    *(_QWORD *)&v142 = v91;
    goto LABEL_137;
  }
  if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_137:
  memcpy((void *)(v90 + v141), src, v89);
LABEL_138:
  v92 = pack_dq() - (_QWORD)src;
  v93 = v92;
  if ( !v92 )
    goto LABEL_144;
  v94 = v142;
  v95 = v142 + v92;
  if ( !__CFADD__((_QWORD)v142, v92) )
    goto LABEL_191;
  if ( (unsigned __int64)v142 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v95 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_191:
    v119 = v141;
    v120 = v142;
    if ( *((_QWORD *)&v142 + 1) < v95 )
    {
      v141 = qvector_reserve();
      v119 = v141;
      v120 = v142;
    }
    memset((void *)(v119 + v120), 0, v95 - v120);
    *(_QWORD *)&v142 = v95;
    goto LABEL_143;
  }
  if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_143:
  memcpy((void *)(v94 + v141), src, v93);
LABEL_144:
  v96 = pack_dd() - (_QWORD)src;
  v97 = v96;
  if ( !v96 )
    goto LABEL_150;
  v98 = v142;
  v99 = v96 + v142;
  if ( __CFADD__(v96, (_QWORD)v142) )
  {
    if ( (unsigned __int64)v142 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v142 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v142 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_149;
    }
    v99 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v100 = v141;
  v101 = v142;
  if ( *((_QWORD *)&v142 + 1) < v99 )
  {
    v141 = qvector_reserve();
    v100 = v141;
    v101 = v142;
  }
  memset((void *)(v100 + v101), 0, v99 - v101);
  *(_QWORD *)&v142 = v99;
LABEL_149:
  memcpy((void *)(v98 + v141), src, v97);
LABEL_150:
  netnode_setblob();
  if ( v141 )
  {
    *(_QWORD *)&v142 = 0;
    qfree();
  }
  return v146 - __readfsqword(0x28u);
}

