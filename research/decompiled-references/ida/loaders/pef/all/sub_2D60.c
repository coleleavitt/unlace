__int64 __fastcall sub_2D60(int a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 free_chunk; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  char *v17; // r14
  unsigned int v18; // eax
  char *v19; // r8
  unsigned __int64 v20; // rdx
  char *v21; // rbx
  unsigned __int8 v22; // al
  size_t v23; // r13
  unsigned __int64 v24; // rcx
  char *v26; // r14
  char v27; // al
  signed int v28; // eax
  int v29; // r9d
  char v30; // al
  char v31; // al
  size_t v32; // r9
  unsigned __int64 v33; // r10
  bool v34; // cf
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  char *v45; // r10
  char *v46; // rsi
  unsigned __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // r13
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r13
  unsigned __int64 v54; // r9
  unsigned int v55; // r10d
  size_t v56; // r9
  char *v57; // r11
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r13
  __int64 v60; // r13
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // rsi
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  size_t v65; // r9
  __int64 v66; // rax
  unsigned __int64 v67; // r13
  __int64 v68; // rax
  unsigned int v72; // [rsp+14h] [rbp-C4h]
  char *v73; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v74; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v75; // [rsp+18h] [rbp-C0h]
  char *v76; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v77; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v78; // [rsp+18h] [rbp-C0h]
  int v79; // [rsp+18h] [rbp-C0h]
  size_t v80; // [rsp+18h] [rbp-C0h]
  char *v81; // [rsp+18h] [rbp-C0h]
  char *v82; // [rsp+18h] [rbp-C0h]
  char *v83; // [rsp+18h] [rbp-C0h]
  char *v84; // [rsp+18h] [rbp-C0h]
  char *v85; // [rsp+18h] [rbp-C0h]
  char *v86; // [rsp+18h] [rbp-C0h]
  char *v87; // [rsp+18h] [rbp-C0h]
  size_t v88; // [rsp+20h] [rbp-B8h]
  size_t v89; // [rsp+20h] [rbp-B8h]
  int v90; // [rsp+20h] [rbp-B8h]
  size_t v91; // [rsp+20h] [rbp-B8h]
  size_t v92; // [rsp+20h] [rbp-B8h]
  size_t v93; // [rsp+20h] [rbp-B8h]
  size_t v94; // [rsp+20h] [rbp-B8h]
  size_t v95; // [rsp+20h] [rbp-B8h]
  size_t v96; // [rsp+20h] [rbp-B8h]
  size_t nb; // [rsp+28h] [rbp-B0h]
  int nd; // [rsp+28h] [rbp-B0h]
  int nc; // [rsp+28h] [rbp-B0h]
  size_t na; // [rsp+28h] [rbp-B0h]
  size_t n; // [rsp+28h] [rbp-B0h]
  size_t nf; // [rsp+28h] [rbp-B0h]
  size_t ng; // [rsp+28h] [rbp-B0h]
  size_t nh; // [rsp+28h] [rbp-B0h]
  size_t ne; // [rsp+28h] [rbp-B0h]
  size_t ni; // [rsp+28h] [rbp-B0h]
  char *srcb; // [rsp+30h] [rbp-A8h]
  char *srca; // [rsp+30h] [rbp-A8h]
  char *src; // [rsp+30h] [rbp-A8h]
  unsigned int srcd; // [rsp+30h] [rbp-A8h]
  char *srce; // [rsp+30h] [rbp-A8h]
  unsigned int srcf; // [rsp+30h] [rbp-A8h]
  unsigned int srcc; // [rsp+30h] [rbp-A8h]
  unsigned int srcg; // [rsp+30h] [rbp-A8h]
  void *v115; // [rsp+38h] [rbp-A0h]
  char *v116; // [rsp+38h] [rbp-A0h]
  void *v117; // [rsp+38h] [rbp-A0h]
  char *v118; // [rsp+38h] [rbp-A0h]
  void *v119; // [rsp+38h] [rbp-A0h]
  void *v120; // [rsp+38h] [rbp-A0h]
  char *v121; // [rsp+38h] [rbp-A0h]
  unsigned int v122; // [rsp+38h] [rbp-A0h]
  char *v123; // [rsp+38h] [rbp-A0h]
  char *v124; // [rsp+38h] [rbp-A0h]
  char *v125; // [rsp+38h] [rbp-A0h]
  size_t v126; // [rsp+40h] [rbp-98h]
  size_t v127; // [rsp+40h] [rbp-98h]
  size_t v128; // [rsp+40h] [rbp-98h]
  size_t v129; // [rsp+40h] [rbp-98h]
  size_t v130; // [rsp+40h] [rbp-98h]
  size_t v131; // [rsp+40h] [rbp-98h]
  size_t v132; // [rsp+40h] [rbp-98h]
  size_t v133; // [rsp+40h] [rbp-98h]
  char v134; // [rsp+5Ch] [rbp-7Ch] BYREF
  unsigned __int8 v135; // [rsp+5Dh] [rbp-7Bh] BYREF
  unsigned __int8 v136; // [rsp+5Eh] [rbp-7Ah] BYREF
  char v137; // [rsp+5Fh] [rbp-79h] BYREF
  unsigned __int64 v138; // [rsp+60h] [rbp-78h] BYREF
  __int128 v139; // [rsp+68h] [rbp-70h]
  unsigned __int64 v140; // [rsp+80h] [rbp-58h] BYREF
  __int128 v141; // [rsp+88h] [rbp-50h]
  unsigned __int64 v142; // [rsp+98h] [rbp-40h]

  v8 = *(_DWORD *)(a3 + 4);
  v9 = *(unsigned int *)(a3 + 8);
  v10 = v8;
  v142 = __readfsqword(0x28u);
  if ( !v8 )
    v10 = 16 * getinf(12);
  free_chunk = find_free_chunk(v10, v9, (1 << *(_BYTE *)(a3 + 26)) - 1);
  v13 = free_chunk;
  if ( !a6 )
  {
    file2base(a2, *(unsigned int *)(a3 + 20), free_chunk, free_chunk + *(unsigned int *)(a3 + 12), 1);
    goto LABEL_11;
  }
  v14 = *(unsigned int *)(a3 + 16);
  v138 = 0;
  v139 = 0;
  if ( v14 )
  {
    v138 = qvector_reserve(&v138, 0, v14, 1);
    memset((void *)(v138 + v139), 0, v14 - v139);
    *(_QWORD *)&v139 = v14;
  }
  qlseek(a2, *(unsigned int *)(a3 + 20), 0);
  v15 = v138;
  v16 = (unsigned __int64)a2;
  lread(a2, v138, v139);
  v17 = (char *)v138;
  v140 = 0;
  v18 = *(_DWORD *)(a3 + 12);
  v141 = 0;
  v19 = (char *)(v138 + v139);
  v72 = v18;
  if ( v138 >= v138 + (unsigned __int64)v139 )
  {
    v36 = v18;
    v37 = 0;
    if ( !v18 )
      goto LABEL_55;
    goto LABEL_70;
  }
  while ( 2 )
  {
    v20 = (unsigned __int8)*v17;
    v21 = v17 + 1;
    v22 = *v17 & 0x1F;
    if ( v22 )
    {
      v24 = (unsigned __int8)*v17;
      v23 = v22;
      LOBYTE(v24) = (unsigned __int8)v20 >> 5;
      if ( (unsigned __int8)v20 <= 0x9Fu )
      {
        v20 = (unsigned __int8)v24;
        switch ( (char)v24 )
        {
          case 0:
            v134 = 0;
            v23 = v22;
            goto LABEL_47;
          case 1:
            v23 = v22;
            v17 = &v21[v22];
            if ( !__CFADD__(v22, v21) && v19 >= v17 )
              goto LABEL_41;
            goto LABEL_233;
          case 2:
            goto LABEL_27;
          case 3:
            goto LABEL_21;
          case 4:
            goto LABEL_33;
        }
      }
LABEL_228:
      sub_2D10(v16, v15, v20, v24);
    }
    if ( v21 >= v19 )
LABEL_219:
      ((void (__noreturn *)(void))sub_2D10)();
    v26 = v17 + 7;
    LODWORD(v23) = 0;
    while ( 1 )
    {
      v27 = *v21++;
      v24 = v27 & 0x7F;
      v23 = (unsigned int)v24 | ((_DWORD)v23 << 7);
      if ( v27 >= 0 )
        break;
      if ( v21 == v26 )
        ((void (__noreturn *)(void))sub_2D10)();
      if ( v19 == v21 )
        goto LABEL_219;
    }
    if ( (unsigned __int8)v20 > 0x9Fu )
      goto LABEL_228;
    switch ( (unsigned __int8)v20 >> 5 )
    {
      case 0:
        v134 = 0;
        if ( !v23 )
          goto LABEL_50;
LABEL_47:
        v20 = v141;
        v34 = __CFADD__((_QWORD)v141, v23);
        v35 = v141 + v23;
        if ( v34 )
        {
          if ( (__int64)v141 < 0 )
            goto LABEL_85;
          v35 = 0x7FFFFFFFFFFFFFFFLL;
          if ( (_QWORD)v141 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_50;
          v16 = v140;
          v24 = *((_QWORD *)&v141 + 1);
          if ( (unsigned __int64)&v134 < v140 )
          {
            if ( *((_QWORD *)&v141 + 1) <= 0x7FFFFFFFFFFFFFFEuLL )
            {
LABEL_201:
              v15 = v16;
              v83 = v19;
              v140 = qvector_reserve(&v140, v16, v35, 1);
              v20 = v141;
              v19 = v83;
LABEL_197:
              v16 = v140;
              if ( v20 >= v35 )
                goto LABEL_68;
            }
LABEL_67:
            while ( 1 )
            {
              *(_BYTE *)(v16 + v20++) = v134;
              if ( v20 == v35 )
                break;
              v16 = v140;
            }
            goto LABEL_68;
          }
        }
        else
        {
          v16 = v140;
          v24 = *((_QWORD *)&v141 + 1);
          if ( (unsigned __int64)&v134 < v140 )
          {
            if ( *((_QWORD *)&v141 + 1) < v35 )
              goto LABEL_201;
            goto LABEL_67;
          }
        }
        v15 = v16 + v24;
        if ( (unsigned __int64)&v134 >= v16 + v24 )
        {
          if ( v24 >= v35 )
            goto LABEL_197;
          goto LABEL_201;
        }
        if ( v24 < v35 )
        {
          v15 = v16;
          v84 = v19;
          v16 = (unsigned __int64)&v140;
          v140 = qvector_reserve(&v140, v15, v35, 1);
          v20 = v141;
          v19 = v84;
        }
        if ( v20 < v35 )
        {
          do
            *(_BYTE *)(v140 + v20++) = 0;
          while ( v20 != v35 );
        }
        goto LABEL_68;
      case 1:
        v17 = &v21[v23];
        if ( __CFADD__(v23, v21) || v19 < v17 )
LABEL_233:
          sub_2D10(v16, v15, v20, v24);
        if ( !v23 )
          goto LABEL_51;
LABEL_41:
        v32 = v141;
        v33 = v23 + v141;
        if ( !__CFADD__(v23, (_QWORD)v141) )
          goto LABEL_60;
        if ( (unsigned __int64)v141 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_60:
          v38 = v140;
          v39 = v141;
          if ( *((_QWORD *)&v141 + 1) < v33 )
          {
            na = v141;
            v92 = (size_t)v19;
            v78 = v33;
            v140 = qvector_reserve(&v140, v140, v33, 1);
            v38 = v140;
            v32 = na;
            v39 = v141;
            v19 = (char *)v92;
            v33 = v78;
          }
          nb = v32;
          v88 = (size_t)v19;
          v74 = v33;
          memset((void *)(v38 + v39), 0, v33 - v39);
          v19 = (char *)v88;
          v32 = nb;
          *(_QWORD *)&v141 = v74;
        }
        else if ( (_QWORD)v141 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v141 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v15 = (unsigned __int64)v21;
        v73 = v19;
        v16 = v32 + v140;
        memcpy((void *)(v32 + v140), v21, v23);
        v19 = v73;
        goto LABEL_51;
      case 2:
LABEL_27:
        if ( v21 >= v19 )
          goto LABEL_225;
        v24 = (unsigned __int64)(v21 + 6);
        v29 = 0;
        while ( 1 )
        {
          v30 = *v21++;
          v20 = v30 & 0x7F;
          v29 = v20 | (v29 << 7);
          if ( v30 >= 0 )
            break;
          if ( (char *)v24 == v21 )
            sub_2D10(v16, v15, v20, v24);
          if ( v19 == v21 )
LABEL_225:
            sub_2D10(v16, v15, v20, v24);
        }
        v17 = &v21[v23];
        if ( __CFADD__(v23, v21) || v19 < v17 )
          sub_2D10(v16, v15, v20, v24);
        if ( v29 < 0 )
          goto LABEL_51;
        if ( !v23 )
        {
          do
            v34 = v29-- == 0;
          while ( !v34 );
          goto LABEL_51;
        }
        while ( 1 )
        {
          v45 = (char *)v141;
          v42 = v141 + v23;
          if ( !__CFADD__((_QWORD)v141, v23) )
            goto LABEL_99;
          if ( (unsigned __int64)v141 <= 0x7FFFFFFFFFFFFFFELL )
            break;
          if ( (_QWORD)v141 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v141 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_102:
          v15 = (unsigned __int64)v21;
          v90 = v29;
          v76 = v19;
          v16 = (unsigned __int64)&v45[v140];
          memcpy(&v45[v140], v21, v23);
          v19 = v76;
          v29 = v90 - 1;
          if ( !v90 )
            goto LABEL_51;
        }
        v42 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_99:
        v43 = v140;
        v44 = v141;
        if ( *((_QWORD *)&v141 + 1) < v42 )
        {
          srca = (char *)v141;
          nc = v29;
          v91 = (size_t)v19;
          v77 = v42;
          v140 = qvector_reserve(&v140, v140, v42, 1);
          v43 = v140;
          v45 = srca;
          v44 = v141;
          v29 = nc;
          v19 = (char *)v91;
          v42 = v77;
        }
        srcb = v45;
        nd = v29;
        v89 = (size_t)v19;
        v75 = v42;
        memset((void *)(v43 + v44), 0, v42 - v44);
        v19 = (char *)v89;
        v29 = nd;
        v45 = srcb;
        *(_QWORD *)&v141 = v75;
        goto LABEL_102;
      case 3:
LABEL_21:
        if ( v21 >= v19 )
          goto LABEL_227;
        v16 = (unsigned __int64)(v21 + 6);
        v28 = 0;
        while ( 1 )
        {
          v15 = (unsigned __int64)v21;
          v20 = (unsigned __int8)*v21++;
          v24 = v20 & 0x7F;
          v28 = v24 | (v28 << 7);
          if ( (v20 & 0x80u) == 0LL )
            break;
          if ( v21 == (char *)v16 )
            sub_2D10(v16, v15, v20, v24);
          if ( v19 == v21 )
LABEL_227:
            sub_2D10(v16, v15, v20, v24);
        }
        if ( v21 >= v19 )
          goto LABEL_239;
        v15 += 7LL;
        LODWORD(v20) = 0;
        while ( 1 )
        {
          v24 = (unsigned __int8)*v21++;
          v16 = v24 & 0x7F;
          v20 = (unsigned int)v16 | ((_DWORD)v20 << 7);
          if ( (v24 & 0x80u) == 0LL )
            break;
          if ( v21 == (char *)v15 )
            sub_2D10(v16, v15, v20, v24);
          if ( v19 == v21 )
LABEL_239:
            sub_2D10(v16, v15, v20, v24);
        }
        v46 = (char *)(int)v23;
        n = (int)v23;
        v17 = &v21[(int)v23];
        if ( __CFADD__(v21, (int)v23) || v19 < v17 )
          sub_2D10(v16, (int)v23, v20, v24);
        v20 = (unsigned int)(v20 - 1);
        v93 = v28;
        v79 = v20;
        if ( (v20 & 0x80000000) != 0LL )
          goto LABEL_190;
        do
        {
          src = v17;
          v34 = __CFADD__(v93, v17);
          v17 += v93;
          if ( v34 || v19 < v17 )
            sub_2D10(v16, v46, v20, v24);
          if ( n )
          {
            v53 = v141;
            v54 = v141 + n;
            if ( __CFADD__((_QWORD)v141, n) )
            {
              if ( (unsigned __int64)v141 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( (_QWORD)v141 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v141 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_126:
                v46 = v21;
                v116 = v19;
                v16 = v53 + v140;
                memcpy((void *)(v53 + v140), v21, n);
                v19 = v116;
                goto LABEL_127;
              }
              v54 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v47 = v140;
            v48 = v141;
            if ( *((_QWORD *)&v141 + 1) < v54 )
            {
              v128 = (size_t)v19;
              v119 = (void *)v54;
              v140 = qvector_reserve(&v140, v140, v54, 1);
              v47 = v140;
              v19 = (char *)v128;
              v48 = v141;
              v54 = (unsigned __int64)v119;
            }
            v126 = (size_t)v19;
            v115 = (void *)v54;
            memset((void *)(v47 + v48), 0, v54 - v48);
            v19 = (char *)v126;
            *(_QWORD *)&v141 = v115;
            goto LABEL_126;
          }
LABEL_127:
          if ( !v93 )
            goto LABEL_133;
          v49 = v141;
          v50 = v141 + v93;
          if ( __CFADD__((_QWORD)v141, v93) )
          {
            if ( (unsigned __int64)v141 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v141 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v141 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_132;
            }
            v50 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v51 = v140;
          v52 = v141;
          if ( *((_QWORD *)&v141 + 1) < v50 )
          {
            v129 = (size_t)v19;
            v120 = (void *)v50;
            v140 = qvector_reserve(&v140, v140, v50, 1);
            v51 = v140;
            v19 = (char *)v129;
            v52 = v141;
            v50 = (unsigned __int64)v120;
          }
          v127 = (size_t)v19;
          v117 = (void *)v50;
          memset((void *)(v51 + v52), 0, v50 - v52);
          v19 = (char *)v127;
          *(_QWORD *)&v141 = v117;
LABEL_132:
          v46 = src;
          v118 = v19;
          v16 = v49 + v140;
          memcpy((void *)(v49 + v140), src, v93);
          v19 = v118;
LABEL_133:
          --v79;
        }
        while ( v79 != -1 );
LABEL_190:
        v15 = n;
        if ( n )
        {
          v65 = v141;
          v66 = v141;
          v67 = v141 + n;
          if ( !__CFADD__((_QWORD)v141, n) )
            goto LABEL_192;
          if ( (unsigned __int64)v141 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v67 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_192:
            if ( *((_QWORD *)&v141 + 1) < v67 )
            {
              v96 = v141;
              v85 = v19;
              v140 = qvector_reserve(&v140, v140, v67, 1);
              v65 = v96;
              v66 = v141;
              v19 = v85;
            }
            v95 = v65;
            v81 = v19;
            memset((void *)(v140 + v66), 0, v67 - v66);
            v19 = v81;
            v65 = v95;
            *(_QWORD *)&v141 = v67;
          }
          else if ( (_QWORD)v141 != 0x7FFFFFFFFFFFFFFFLL )
          {
            *(_QWORD *)&v141 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v15 = (unsigned __int64)v21;
          v82 = v19;
          v16 = v65 + v140;
          memcpy((void *)(v65 + v140), v21, n);
          v19 = v82;
        }
LABEL_51:
        if ( v17 < v19 )
          continue;
        v36 = v141;
        if ( (unsigned __int64)v141 >= v72 )
        {
          if ( v72 != (_QWORD)v141 )
            sub_2D10(v16, v15, v20, v24);
          v37 = v140;
          goto LABEL_55;
        }
        v36 = v72;
LABEL_70:
        v37 = v140;
        v137 = 0;
        if ( (unsigned __int64)&v137 < v140 || (unsigned __int64)&v137 >= v140 + *((_QWORD *)&v141 + 1) )
        {
          if ( *((_QWORD *)&v141 + 1) < v36 )
          {
            v140 = qvector_reserve(&v140, v140, v36, 1);
            v37 = v140;
          }
          v68 = v141;
          if ( (unsigned __int64)v141 < v36 )
          {
            do
            {
              *(_BYTE *)(v37 + v68++) = v137;
              v37 = v140;
            }
            while ( v68 != v36 );
          }
        }
        else
        {
          if ( *((_QWORD *)&v141 + 1) < v36 )
          {
            v140 = qvector_reserve(&v140, v140, v36, 1);
            v37 = v140;
          }
          v40 = v141;
          if ( (unsigned __int64)v141 < v36 )
          {
            do
            {
              *(_BYTE *)(v37 + v40++) = 0;
              v37 = v140;
            }
            while ( v40 != v36 );
          }
        }
        *(_QWORD *)&v141 = v36;
LABEL_55:
        mem2base(v37, v13, v13 + v36, 0);
        if ( v140 )
        {
          *(_QWORD *)&v141 = 0;
          qfree();
        }
        if ( v138 )
        {
          *(_QWORD *)&v139 = 0;
          qfree();
        }
LABEL_11:
        set_selector(a1 + 1, 0);
        if ( !(unsigned __int8)add_segm(a1 + 1, v13, v9 + v13, a4, a5, 32) )
          sub_2C60(0);
        *(_DWORD *)(a3 + 4) = v13;
        if ( v13 < getinf(23) )
          return setinf(23, v13);
        else
          return v142 - __readfsqword(0x28u);
      case 4:
LABEL_33:
        if ( v21 >= v19 )
          goto LABEL_226;
        v16 = (unsigned __int64)(v21 + 6);
        LODWORD(v20) = 0;
        while ( 1 )
        {
          v15 = (unsigned __int64)v21;
          v31 = *v21++;
          v24 = v31 & 0x7F;
          v20 = (unsigned int)v24 | ((_DWORD)v20 << 7);
          if ( v31 >= 0 )
            break;
          if ( v21 == (char *)v16 )
            sub_2D10(v16, v15, v20, v24);
          if ( v19 == v21 )
LABEL_226:
            sub_2D10(v16, v15, v20, v24);
        }
        if ( v21 >= v19 )
          goto LABEL_235;
        v15 += 7LL;
        v41 = 0;
        while ( 1 )
        {
          v24 = (unsigned __int8)*v21++;
          v16 = v24 & 0x7F;
          v41 = v16 | (v41 << 7);
          if ( (v24 & 0x80u) == 0LL )
            break;
          if ( v21 == (char *)v15 )
            sub_2D10(v16, v15, v20, v24);
          if ( v19 == v21 )
LABEL_235:
            sub_2D10(v16, v15, v20, v24);
        }
        v55 = v41 - 1;
        if ( (int)(v41 - 1) >= 0 )
        {
          v56 = (int)v20;
          v94 = (int)v23;
          while ( 1 )
          {
            v57 = v21;
            v34 = __CFADD__(v56, v21);
            v21 += v56;
            if ( v34 || v19 < v21 )
              sub_2D10(v16, v15, v20, v24);
            v15 = v94;
            v135 = 0;
            v80 = v94;
            if ( v94 )
            {
              v58 = v141;
              v15 = v141 + v94;
              v59 = v141 + v94;
              if ( !__CFADD__((_QWORD)v141, v94) )
              {
                v24 = (unsigned __int64)&v135;
                v16 = v140;
                v15 = *((_QWORD *)&v141 + 1);
                v20 = (unsigned __int64)&v135;
                if ( (unsigned __int64)&v135 >= v140 )
                  goto LABEL_184;
                if ( *((_QWORD *)&v141 + 1) >= v59 )
                  goto LABEL_154;
                goto LABEL_179;
              }
              if ( (__int64)v141 < 0 )
              {
                *(_QWORD *)&v141 = 0x7FFFFFFFFFFFFFFFLL;
              }
              else
              {
                v15 = 0x7FFFFFFFFFFFFFFFLL;
                if ( (_QWORD)v141 != 0x7FFFFFFFFFFFFFFFLL )
                {
                  v16 = v140;
                  v20 = (unsigned __int64)&v135;
                  v15 = *((_QWORD *)&v141 + 1);
                  if ( (unsigned __int64)&v135 < v140 )
                  {
                    v59 = 0x7FFFFFFFFFFFFFFFLL;
                    if ( *((_QWORD *)&v141 + 1) <= 0x7FFFFFFFFFFFFFFEuLL )
                      goto LABEL_179;
LABEL_154:
                    while ( 1 )
                    {
                      v20 = v135;
                      *(_BYTE *)(v16 + v58++) = v135;
                      if ( v58 == v59 )
                        break;
                      v16 = v140;
                    }
LABEL_155:
                    *(_QWORD *)&v141 = v59;
                    goto LABEL_156;
                  }
                  v59 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_184:
                  v24 = v16 + v15;
                  if ( (unsigned __int64)&v135 < v16 + v15 )
                  {
                    if ( v15 < v59 )
                    {
                      v15 = v16;
                      v133 = v56;
                      v125 = v57;
                      v16 = (unsigned __int64)&v140;
                      srcg = v55;
                      ni = (size_t)v19;
                      v140 = qvector_reserve(&v140, v15, v59, 1);
                      v56 = v133;
                      v58 = v141;
                      v57 = v125;
                      v55 = srcg;
                      v19 = (char *)ni;
                    }
                    if ( v58 < v59 )
                    {
                      do
                      {
                        v20 = v140;
                        *(_BYTE *)(v140 + v58++) = 0;
                      }
                      while ( v58 != v59 );
                    }
                    goto LABEL_155;
                  }
                  if ( v15 < v59 )
                  {
LABEL_179:
                    v15 = v16;
                    v131 = v56;
                    v123 = v57;
                    srcf = v55;
                    nh = (size_t)v19;
                    v140 = qvector_reserve(&v140, v16, v59, 1);
                    v56 = v131;
                    v58 = v141;
                    v57 = v123;
                    v55 = srcf;
                    v19 = (char *)nh;
                  }
                  v16 = v140;
                  if ( v58 < v59 )
                    goto LABEL_154;
                  goto LABEL_155;
                }
              }
            }
LABEL_156:
            if ( v56 )
            {
              v60 = v141;
              v61 = v56 + v141;
              if ( !__CFADD__(v56, (_QWORD)v141) )
                goto LABEL_158;
              if ( (unsigned __int64)v141 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v61 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_158:
                v62 = v140;
                v63 = v141;
                if ( *((_QWORD *)&v141 + 1) < v61 )
                {
                  v132 = v56;
                  v124 = v57;
                  srcc = v55;
                  ne = (size_t)v19;
                  v140 = qvector_reserve(&v140, v140, v61, 1);
                  v62 = v140;
                  v56 = v132;
                  v63 = v141;
                  v57 = v124;
                  v55 = srcc;
                  v19 = (char *)ne;
                }
                v130 = v56;
                v121 = v57;
                srcd = v55;
                nf = (size_t)v19;
                memset((void *)(v62 + v63), 0, v61 - v63);
                v19 = (char *)nf;
                v55 = srcd;
                *(_QWORD *)&v141 = v61;
                v57 = v121;
                v56 = v130;
              }
              else if ( (_QWORD)v141 != 0x7FFFFFFFFFFFFFFFLL )
              {
                *(_QWORD *)&v141 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v15 = (unsigned __int64)v57;
              v122 = v55;
              srce = v19;
              v16 = v60 + v140;
              ng = v56;
              memcpy((void *)(v60 + v140), v57, v56);
              v55 = v122;
              v19 = srce;
              v56 = ng;
            }
            v34 = v55-- == 0;
            if ( v34 )
              goto LABEL_163;
          }
        }
        v80 = (int)v23;
LABEL_163:
        v15 = v80;
        v136 = 0;
        if ( !v80 )
          goto LABEL_50;
        v64 = v141;
        v15 = v141 + v80;
        v35 = v141 + v80;
        if ( !__CFADD__((_QWORD)v141, v80) )
          goto LABEL_165;
        if ( (__int64)v141 < 0 )
        {
LABEL_85:
          *(_QWORD *)&v141 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v35 = 0x7FFFFFFFFFFFFFFFLL;
          if ( (_QWORD)v141 != 0x7FFFFFFFFFFFFFFFLL )
          {
LABEL_165:
            v16 = v140;
            v24 = (unsigned __int64)&v136;
            v20 = *((_QWORD *)&v141 + 1);
            if ( (unsigned __int64)&v136 < v140
              || (v15 = v140 + *((_QWORD *)&v141 + 1), (unsigned __int64)&v136 >= v140 + *((_QWORD *)&v141 + 1)) )
            {
              if ( *((_QWORD *)&v141 + 1) < v35 )
              {
                v15 = v140;
                v86 = v19;
                v16 = (unsigned __int64)&v140;
                v140 = qvector_reserve(&v140, v140, v35, 1);
                v19 = v86;
                v64 = v141;
              }
              if ( v64 < v35 )
              {
                do
                {
                  v24 = v136;
                  v20 = v140;
                  *(_BYTE *)(v140 + v64++) = v136;
                }
                while ( v64 != v35 );
              }
            }
            else
            {
              if ( *((_QWORD *)&v141 + 1) < v35 )
              {
                v15 = v140;
                v87 = v19;
                v16 = (unsigned __int64)&v140;
                v140 = qvector_reserve(&v140, v140, v35, 1);
                v19 = v87;
                v64 = v141;
              }
              if ( v64 < v35 )
              {
                do
                {
                  v20 = v140;
                  *(_BYTE *)(v140 + v64++) = 0;
                }
                while ( v64 != v35 );
              }
            }
LABEL_68:
            *(_QWORD *)&v141 = v35;
          }
        }
LABEL_50:
        v17 = v21;
        goto LABEL_51;
    }
  }
}

