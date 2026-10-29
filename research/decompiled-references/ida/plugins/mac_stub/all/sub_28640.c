__int64 __fastcall sub_28640(__int64 a1, _DWORD *a2, __int64 a3, int a4, int a5, __int64 *a6)
{
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // ebx
  unsigned int v10; // ebx
  __int64 v12; // rax
  size_t v13; // r14
  size_t v14; // rbp
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  size_t v17; // r14
  size_t v18; // rbp
  unsigned __int64 v19; // r15
  __int64 v20; // r15
  __int64 v21; // rax
  size_t v22; // r9
  size_t v23; // r14
  unsigned __int64 v24; // r10
  __int64 v25; // rsi
  size_t v26; // rax
  __int64 v27; // rax
  size_t v28; // r10
  size_t v29; // r9
  unsigned __int64 v30; // r11
  __int64 v31; // rsi
  size_t v32; // rax
  __int64 v33; // rax
  size_t v34; // r10
  size_t v35; // r9
  unsigned __int64 v36; // r11
  __int64 v37; // rsi
  size_t v38; // rax
  __int64 v39; // rax
  size_t v40; // r10
  size_t v41; // r9
  unsigned __int64 v42; // r11
  __int64 v43; // rsi
  size_t v44; // rax
  __int64 v45; // rax
  size_t v46; // r10
  size_t v47; // r9
  unsigned __int64 v48; // r11
  __int64 v49; // rsi
  size_t v50; // rax
  __int64 v51; // rbp
  unsigned __int64 v52; // r8
  size_t v53; // r9
  const void *v54; // r10
  size_t v55; // r11
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // r9
  size_t v60; // r8
  size_t v61; // r10
  __int64 v62; // rsi
  size_t v63; // rax
  __int64 v64; // rax
  size_t v65; // r9
  size_t v66; // r8
  size_t v67; // r10
  __int64 v68; // rsi
  size_t v69; // rax
  __int64 v70; // rax
  size_t v71; // r9
  size_t v72; // r8
  size_t v73; // r10
  __int64 v74; // rsi
  size_t v75; // rax
  __int64 v76; // rax
  size_t v77; // r8
  size_t v78; // r15
  size_t v79; // r9
  __int64 v80; // rsi
  size_t v81; // rax
  size_t v82; // rax
  __int64 v83; // r8
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 (__fastcall *v86)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v87; // rax
  __int64 v88; // rdx
  int v89; // eax
  unsigned __int64 v90; // rax
  char *v91; // rsi
  char v92; // dl
  char *v93; // rcx
  unsigned __int64 v94; // rdx
  __int64 v95; // rdi
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // rbp
  char *v98; // r8
  char *v99; // rdx
  bool v100; // cl
  _QWORD *v101; // rax
  unsigned __int64 v102; // rcx
  char *v103; // rax
  __int64 v104; // rsi
  char v105; // dl
  char *v106; // rbp
  char *v107; // rax
  __int64 v108; // rsi
  size_t v109; // rax
  __int64 v110; // rsi
  size_t v111; // rax
  size_t v112; // rax
  size_t v113; // r12
  size_t v114; // r13
  void *v115; // rdi
  __int64 *v116; // r14
  __int64 v117; // rax
  __int64 *v118; // r14
  __int64 v119; // rax
  char *v120; // [rsp+8h] [rbp-D0h]
  __int64 v121; // [rsp+10h] [rbp-C8h]
  unsigned __int64 *v122; // [rsp+18h] [rbp-C0h]
  __int64 *v123; // [rsp+20h] [rbp-B8h]
  size_t n; // [rsp+28h] [rbp-B0h]
  _DWORD *v125; // [rsp+30h] [rbp-A8h]
  __int64 *v126; // [rsp+38h] [rbp-A0h]
  __int64 v127; // [rsp+40h] [rbp-98h]
  size_t v128; // [rsp+48h] [rbp-90h]
  size_t v129; // [rsp+50h] [rbp-88h]
  unsigned __int64 v130; // [rsp+58h] [rbp-80h]
  char *s; // [rsp+60h] [rbp-78h]
  unsigned __int64 v132; // [rsp+68h] [rbp-70h]
  __int64 v133; // [rsp+70h] [rbp-68h] BYREF
  size_t v134; // [rsp+78h] [rbp-60h]
  unsigned __int64 v135; // [rsp+80h] [rbp-58h]
  _BYTE src[5]; // [rsp+8Eh] [rbp-4Ah] BYREF
  char v137; // [rsp+93h] [rbp-45h] BYREF
  unsigned __int64 v138; // [rsp+98h] [rbp-40h] BYREF

  v6 = a3;
  v127 = a1;
  v125 = a2;
  LODWORD(v121) = a5;
  v126 = a6;
  v138 = __readfsqword(0x28u);
  v7 = a3 + 56LL * a4;
  if ( a3 == v7 )
  {
    v9 = 0;
  }
  else
  {
    v8 = a3;
    v9 = 0;
    do
    {
      v9 -= (*(_BYTE *)(v8 + 40) == 0) - 1;
      v8 += 56;
    }
    while ( v7 != v8 );
  }
  if ( (_DWORD)v121 == 0 && a4 == v9 )
  {
    if ( v125 )
      *v125 = 0;
    return 1;
  }
  v123 = &v133;
  sub_32790(&v133, 27);
  v120 = &v137;
  v12 = pack_dd() - (_QWORD)src;
  v13 = v12;
  if ( v12 )
  {
    v14 = v134;
    v15 = v134 + v12;
    if ( __CFADD__(v134, v12) )
    {
      if ( v134 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
          v134 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
        memcpy((void *)(v14 + v133), src, v13);
        goto LABEL_15;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v108 = v133;
    v109 = v134;
    if ( v135 < v15 )
    {
      v133 = qvector_reserve();
      v108 = v133;
      v109 = v134;
    }
    memset((void *)(v108 + v109), 0, v15 - v109);
    v134 = v15;
    goto LABEL_14;
  }
LABEL_15:
  v16 = pack_dd() - (_QWORD)src;
  v17 = v16;
  if ( !v16 )
    goto LABEL_21;
  v18 = v134;
  v19 = v134 + v16;
  if ( !__CFADD__(v134, v16) )
    goto LABEL_168;
  if ( v134 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_168:
    v110 = v133;
    v111 = v134;
    if ( v135 < v19 )
    {
      v133 = qvector_reserve();
      v110 = v133;
      v111 = v134;
    }
    memset((void *)(v110 + v111), 0, v19 - v111);
    v134 = v19;
    goto LABEL_20;
  }
  if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
    v134 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_20:
  memcpy((void *)(v18 + v133), src, v17);
LABEL_21:
  v20 = v6;
  if ( v6 != v7 )
  {
    while ( 1 )
    {
      while ( *(_BYTE *)(v20 + 40) )
      {
LABEL_23:
        v20 += 56;
        if ( v7 == v20 )
          goto LABEL_55;
      }
      v21 = pack_dq() - (_QWORD)src;
      v22 = v21;
      if ( v21 )
        break;
LABEL_31:
      v27 = pack_dd() - (_QWORD)src;
      v28 = v27;
      if ( !v27 )
        goto LABEL_37;
      v29 = v134;
      v30 = v134 + v27;
      if ( __CFADD__(v134, v27) )
      {
        if ( v134 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
            v134 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_36;
        }
        v30 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v31 = v133;
      v32 = v134;
      if ( v135 < v30 )
      {
        v128 = v134;
        n = v28;
        v122 = (unsigned __int64 *)v30;
        v133 = qvector_reserve();
        v31 = v133;
        v29 = v128;
        v32 = v134;
        v28 = n;
        v30 = (unsigned __int64)v122;
      }
      v128 = v29;
      n = v28;
      v122 = (unsigned __int64 *)v30;
      memset((void *)(v31 + v32), 0, v30 - v32);
      v28 = n;
      v29 = v128;
      v134 = (size_t)v122;
LABEL_36:
      memcpy((void *)(v29 + v133), src, v28);
LABEL_37:
      v33 = pack_dd() - (_QWORD)src;
      v34 = v33;
      if ( !v33 )
        goto LABEL_43;
      v35 = v134;
      v36 = v134 + v33;
      if ( __CFADD__(v134, v33) )
      {
        if ( v134 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
            v134 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_42;
        }
        v36 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v37 = v133;
      v38 = v134;
      if ( v135 < v36 )
      {
        v128 = v134;
        n = v34;
        v122 = (unsigned __int64 *)v36;
        v133 = qvector_reserve();
        v37 = v133;
        v35 = v128;
        v38 = v134;
        v34 = n;
        v36 = (unsigned __int64)v122;
      }
      v128 = v35;
      n = v34;
      v122 = (unsigned __int64 *)v36;
      memset((void *)(v37 + v38), 0, v36 - v38);
      v34 = n;
      v35 = v128;
      v134 = (size_t)v122;
LABEL_42:
      memcpy((void *)(v35 + v133), src, v34);
LABEL_43:
      v39 = pack_dd() - (_QWORD)src;
      v40 = v39;
      if ( !v39 )
        goto LABEL_49;
      v41 = v134;
      v42 = v134 + v39;
      if ( __CFADD__(v134, v39) )
      {
        if ( v134 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
            v134 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_48;
        }
        v42 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v43 = v133;
      v44 = v134;
      if ( v135 < v42 )
      {
        v128 = v134;
        n = v40;
        v122 = (unsigned __int64 *)v42;
        v133 = qvector_reserve();
        v43 = v133;
        v41 = v128;
        v44 = v134;
        v40 = n;
        v42 = (unsigned __int64)v122;
      }
      v128 = v41;
      n = v40;
      v122 = (unsigned __int64 *)v42;
      memset((void *)(v43 + v44), 0, v42 - v44);
      v40 = n;
      v41 = v128;
      v134 = (size_t)v122;
LABEL_48:
      memcpy((void *)(v41 + v133), src, v40);
LABEL_49:
      v45 = pack_dd() - (_QWORD)src;
      v46 = v45;
      if ( !v45 )
        goto LABEL_23;
      v47 = v134;
      v48 = v134 + v45;
      if ( __CFADD__(v134, v45) )
      {
        if ( v134 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
            v134 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_54;
        }
        v48 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v49 = v133;
      v50 = v134;
      if ( v135 < v48 )
      {
        v128 = v134;
        n = v46;
        v122 = (unsigned __int64 *)v48;
        v133 = qvector_reserve();
        v49 = v133;
        v47 = v128;
        v50 = v134;
        v46 = n;
        v48 = (unsigned __int64)v122;
      }
      v128 = v47;
      n = v46;
      v122 = (unsigned __int64 *)v48;
      memset((void *)(v49 + v50), 0, v48 - v50);
      v46 = n;
      v47 = v128;
      v134 = (size_t)v122;
LABEL_54:
      v20 += 56;
      memcpy((void *)(v47 + v133), src, v46);
      if ( v7 == v20 )
        goto LABEL_55;
    }
    v23 = v134;
    v24 = v134 + v21;
    if ( __CFADD__(v134, v21) )
    {
      if ( v134 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
          v134 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_30;
      }
      v24 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = v133;
    v26 = v134;
    if ( v135 < v24 )
    {
      n = v22;
      v122 = (unsigned __int64 *)v24;
      v133 = qvector_reserve();
      v25 = v133;
      v22 = n;
      v26 = v134;
      v24 = (unsigned __int64)v122;
    }
    n = v22;
    v122 = (unsigned __int64 *)v24;
    memset((void *)(v25 + v26), 0, v24 - v26);
    v22 = n;
    v134 = (size_t)v122;
LABEL_30:
    memcpy((void *)(v23 + v133), src, v22);
    goto LABEL_31;
  }
LABEL_55:
  v51 = v7;
  v122 = &v138;
  v121 = v7 + 56LL * (int)v121;
  if ( v7 != v121 )
  {
    do
    {
      v76 = pack_dq() - (_QWORD)src;
      v77 = v76;
      if ( !v76 )
        goto LABEL_88;
      v78 = v134;
      v79 = v134 + v76;
      if ( __CFADD__(v134, v76) )
      {
        if ( v134 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
            v134 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_87;
        }
        v79 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v80 = v133;
      v81 = v134;
      if ( v135 < v79 )
      {
        v128 = v77;
        n = v79;
        v133 = qvector_reserve();
        v80 = v133;
        v77 = v128;
        v81 = v134;
        v79 = n;
      }
      v128 = v77;
      n = v79;
      memset((void *)(v80 + v81), 0, v79 - v81);
      v77 = v128;
      v134 = n;
LABEL_87:
      memcpy((void *)(v78 + v133), src, v77);
LABEL_88:
      v82 = v134;
      v83 = *(_QWORD *)(v51 + 16);
      v84 = v133;
      if ( v135 < v134 + 1 )
      {
        n = *(_QWORD *)(v51 + 16);
        v133 = qvector_reserve();
        v84 = v133;
        LOBYTE(v83) = n;
        v82 = v134;
      }
      *(_BYTE *)(v84 + v82) = v83;
      v52 = ++v134;
      v53 = *(_QWORD *)(v51 + 16);
      if ( v53 )
      {
        v54 = *(const void **)(v51 + 8);
        v55 = v52 + v53;
        if ( !__CFADD__(v52, v53) )
          goto LABEL_59;
        if ( v52 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v55 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_59:
          v56 = v133;
          v57 = v52;
          if ( v135 < v55 )
          {
            v130 = v52;
            v129 = v53;
            v128 = (size_t)v54;
            n = v55;
            v133 = qvector_reserve();
            v56 = v133;
            v52 = v130;
            v57 = v134;
            v53 = v129;
            v54 = (const void *)v128;
            v55 = n;
          }
          v130 = v52;
          v129 = v53;
          v128 = (size_t)v54;
          n = v55;
          memset((void *)(v56 + v57), 0, v55 - v57);
          v54 = (const void *)v128;
          v53 = v129;
          v52 = v130;
          v134 = n;
        }
        else if ( v52 != 0x7FFFFFFFFFFFFFFFLL )
        {
          v134 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((void *)(v52 + v133), v54, v53);
      }
      v58 = pack_dd() - (_QWORD)src;
      v59 = v58;
      if ( !v58 )
        goto LABEL_69;
      v60 = v134;
      v61 = v134 + v58;
      if ( __CFADD__(v134, v58) )
      {
        if ( v134 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
            v134 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_68;
        }
        v61 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v62 = v133;
      v63 = v134;
      if ( v135 < v61 )
      {
        v129 = v134;
        v128 = v59;
        n = v61;
        v133 = qvector_reserve();
        v62 = v133;
        v60 = v129;
        v63 = v134;
        v59 = v128;
        v61 = n;
      }
      v129 = v60;
      v128 = v59;
      n = v61;
      memset((void *)(v62 + v63), 0, v61 - v63);
      v59 = v128;
      v60 = v129;
      v134 = n;
LABEL_68:
      memcpy((void *)(v60 + v133), src, v59);
LABEL_69:
      v64 = pack_dd() - (_QWORD)src;
      v65 = v64;
      if ( !v64 )
        goto LABEL_75;
      v66 = v134;
      v67 = v134 + v64;
      if ( __CFADD__(v134, v64) )
      {
        if ( v134 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
            v134 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_74;
        }
        v67 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v68 = v133;
      v69 = v134;
      if ( v135 < v67 )
      {
        v129 = v134;
        v128 = v65;
        n = v67;
        v133 = qvector_reserve();
        v68 = v133;
        v66 = v129;
        v69 = v134;
        v65 = v128;
        v67 = n;
      }
      v129 = v66;
      v128 = v65;
      n = v67;
      memset((void *)(v68 + v69), 0, v67 - v69);
      v65 = v128;
      v66 = v129;
      v134 = n;
LABEL_74:
      memcpy((void *)(v66 + v133), src, v65);
LABEL_75:
      v70 = pack_dd() - (_QWORD)src;
      v71 = v70;
      if ( v70 )
      {
        v72 = v134;
        v73 = v134 + v70;
        if ( !__CFADD__(v134, v70) )
          goto LABEL_77;
        if ( v134 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v73 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_77:
          v74 = v133;
          v75 = v134;
          if ( v135 < v73 )
          {
            v129 = v134;
            v128 = v71;
            n = v73;
            v133 = qvector_reserve();
            v74 = v133;
            v72 = v129;
            v75 = v134;
            v71 = v128;
            v73 = n;
          }
          v129 = v72;
          v128 = v71;
          n = v73;
          memset((void *)(v74 + v75), 0, v73 - v75);
          v71 = v128;
          v72 = v129;
          v134 = n;
        }
        else if ( v134 != 0x7FFFFFFFFFFFFFFFLL )
        {
          v134 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((void *)(v72 + v133), src, v71);
      }
      v51 += 56;
    }
    while ( v121 != v51 );
  }
  v85 = v127 + 864;
  v86 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(v127 + 864) + 16LL);
  if ( v86 == sub_D0D0 )
    v87 = (unsigned int *)sub_2F150(v85, 27, v123, 0);
  else
    v87 = (unsigned int *)v86(v85, 27u, (__int64)v123);
  if ( v87 )
  {
    v88 = *v87;
    s = (char *)v87 + 5;
    v132 = (unsigned __int64)v87 + v88 + 5;
    v10 = unpack_dd();
    v89 = unpack_dd();
    if ( v125 )
      *v125 = v89;
    if ( v6 == v7 )
    {
LABEL_130:
      if ( v121 != v6 )
      {
        v102 = v132;
        v103 = s;
        v104 = v121;
        do
        {
          v105 = 0;
          if ( (unsigned __int64)v103 < v102 )
            v105 = *v103++;
          s = v103;
          v6 += 56;
          *(_BYTE *)(v6 - 16) = v105;
        }
        while ( v104 != v6 );
      }
      if ( v126 && v10 )
      {
        v106 = s;
        v107 = s;
        do
        {
          if ( (unsigned __int64)v107 >= v132 )
            goto LABEL_140;
          ++v107;
        }
        while ( *(v107 - 1) );
        s = v107;
        if ( !v106 || (v112 = strlen(v106), (v113 = v112) == 0) )
        {
LABEL_140:
          v126[1] = 0;
          goto LABEL_141;
        }
        v114 = v112 + 1;
        v115 = (void *)*v126;
        if ( v126[2] < v112 + 1 )
        {
          v118 = v126;
          v119 = qvector_reserve();
          *v118 = v119;
          v115 = (void *)v119;
        }
        v116 = v126;
        v126[1] = v114;
        memmove(v115, v106, v113);
        *(_BYTE *)(*v116 + v113) = 0;
      }
      goto LABEL_141;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)(v6 + 40) )
        goto LABEL_113;
      v90 = v132;
      v91 = s;
      if ( (unsigned __int64)s >= v132 )
        break;
      v92 = *s;
      v93 = ++s;
      *(_BYTE *)(v6 + 40) = v92;
      if ( v92 || *(_DWORD *)(v6 + 32) != 4 )
        goto LABEL_113;
      v94 = *(_QWORD *)(v6 + 16);
      v95 = *(_QWORD *)(v6 + 8);
      v96 = v94;
      if ( (unsigned __int64)v93 >= v90 )
      {
        ++v91;
LABEL_159:
        v97 = v94;
        s = v91;
        v100 = 0;
        v99 = v91;
        if ( !v97 )
          goto LABEL_123;
        v97 = 0;
        goto LABEL_161;
      }
      v97 = (unsigned __int8)v91[1];
      v98 = v91 + 2;
      s = v91 + 2;
      if ( v94 < v97 )
      {
        if ( *(_QWORD *)(v6 + 24) < v97 )
        {
          v117 = qvector_reserve();
          *(_QWORD *)(v6 + 8) = v117;
          v96 = *(_QWORD *)(v6 + 16);
          v95 = v117;
        }
        memset((void *)(v96 + v95), 0, v97 - v96);
        *(_QWORD *)(v6 + 16) = v97;
        v91 = s;
        v90 = v132;
        v99 = &s[v97];
        v100 = __CFADD__(v97, s);
LABEL_123:
        if ( v90 >= (unsigned __int64)v99 )
          goto LABEL_124;
        goto LABEL_113;
      }
      if ( v97 == v94 )
      {
        v99 = &v98[v97];
        v91 += 2;
        v100 = __CFADD__(v97, v98);
        goto LABEL_123;
      }
      v99 = &v98[v97];
      v91 += 2;
      v100 = __CFADD__(v97, v98);
LABEL_161:
      *(_QWORD *)(v6 + 16) = v97;
      if ( v90 >= (unsigned __int64)v99 )
      {
LABEL_124:
        if ( !v100 )
        {
          v101 = *(_QWORD **)(v6 + 8);
          s = v99;
          if ( (unsigned int)v97 >= 8 )
          {
            *v101 = *(_QWORD *)v91;
            *(_QWORD *)((char *)v101 + (unsigned int)v97 - 8) = *(_QWORD *)&v91[(unsigned int)v97 - 8];
            qmemcpy(
              (void *)((unsigned __int64)(v101 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              (const void *)(v91 - ((char *)v101 - ((unsigned __int64)(v101 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
              8LL * (((unsigned int)v97 + (_DWORD)v101 - (((_DWORD)v101 + 8) & 0xFFFFFFF8)) >> 3));
          }
          else if ( (v97 & 4) != 0 )
          {
            *(_DWORD *)v101 = *(_DWORD *)v91;
            *(_DWORD *)((char *)v101 + (unsigned int)v97 - 4) = *(_DWORD *)&v91[(unsigned int)v97 - 4];
          }
          else if ( (_DWORD)v97 )
          {
            *(_BYTE *)v101 = *v91;
            if ( (v97 & 2) != 0 )
              *(_WORD *)((char *)v101 + (unsigned int)v97 - 2) = *(_WORD *)&v91[(unsigned int)v97 - 2];
          }
        }
      }
LABEL_113:
      v6 += 56;
      if ( v7 == v6 )
        goto LABEL_130;
    }
    if ( *(_DWORD *)(v6 + 32) != 4 )
      goto LABEL_113;
    v94 = *(_QWORD *)(v6 + 16);
    goto LABEL_159;
  }
  v10 = -2;
LABEL_141:
  if ( v133 )
  {
    v134 = 0;
    qfree();
  }
  return v10;
}

