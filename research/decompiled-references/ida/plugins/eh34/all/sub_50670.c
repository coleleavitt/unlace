unsigned __int64 __fastcall sub_50670(__int64 a1, char *a2)
{
  char v2; // bl
  __int64 v5; // rdx
  __int64 v6; // rax
  size_t v7; // r13
  size_t v8; // r15
  __int64 v9; // rax
  size_t v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // r11
  size_t v13; // r15
  __int64 v14; // rax
  size_t v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  size_t v18; // r15
  _BYTE *v19; // rsi
  _BYTE *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t v25; // r9
  __int64 v26; // r10
  unsigned __int64 v27; // r11
  char v28; // al
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 v32; // r15
  unsigned __int64 v33; // r9
  size_t v34; // r9
  unsigned __int64 v35; // r10
  size_t v36; // r9
  unsigned __int64 v37; // r10
  __int64 v38; // rax
  size_t v39; // r8
  size_t v40; // r9
  unsigned __int64 v41; // r10
  __int64 v42; // rax
  size_t v43; // r13
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r9
  __int64 v46; // rax
  size_t v47; // r13
  __int64 v48; // rbp
  unsigned __int64 v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rax
  size_t v52; // r9
  unsigned __int64 v53; // r10
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  char v69; // r15
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rax
  size_t v73; // r15
  _QWORD *v74; // r8
  unsigned __int64 v75; // r9
  __int64 v76; // rax
  size_t v77; // rbp
  __int64 v78; // r15
  unsigned __int64 v79; // r13
  __int64 v80; // rax
  size_t v81; // rbp
  __int64 v82; // r13
  unsigned __int64 v83; // r15
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rax
  struct _Unwind_Exception *v94; // rbx
  void *v95; // [rsp+8h] [rbp-100h]
  _QWORD *v96; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v97; // [rsp+18h] [rbp-F0h]
  size_t v98; // [rsp+20h] [rbp-E8h]
  __int64 v99; // [rsp+28h] [rbp-E0h]
  __int64 v100; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v101; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v102; // [rsp+48h] [rbp-C0h]
  void *v103; // [rsp+60h] [rbp-A8h] BYREF
  size_t n; // [rsp+68h] [rbp-A0h]
  void *v105; // [rsp+80h] [rbp-88h] BYREF
  size_t v106; // [rsp+88h] [rbp-80h]
  void *v107; // [rsp+A0h] [rbp-68h] BYREF
  size_t v108; // [rsp+A8h] [rbp-60h]
  _BYTE src[5]; // [rsp+BEh] [rbp-4Ah] BYREF
  _BYTE v110[5]; // [rsp+C3h] [rbp-45h] BYREF
  _QWORD v111[8]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = *a2;
  v111[0] = __readfsqword(0x28u);
  if ( v2 == -1 )
    return v111[0] - __readfsqword(0x28u);
  v101 = 0;
  v102 = 0;
  v101 = qvector_reserve(&v101, 0, 1, 1);
  *(_BYTE *)(v101 + v102) = v2;
  v5 = a1 + 1 - *((_QWORD *)a2 + 1);
  *(_QWORD *)&v102 = v102 + 1;
  v96 = v111;
  v6 = pack_dq(src, v111, v5) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v32 = v102;
    v33 = v102 + v6;
    if ( __CFADD__((_QWORD)v102, v6) )
    {
      if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_42:
        memcpy((void *)(v32 + v101), src, v7);
        goto LABEL_3;
      }
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v54 = v101;
    v55 = v102;
    if ( *((_QWORD *)&v102 + 1) < v33 )
    {
      v95 = (void *)v33;
      v101 = qvector_reserve(&v101, v101, v33, 1);
      v54 = v101;
      v33 = (unsigned __int64)v95;
      v55 = v102;
    }
    v95 = (void *)v33;
    memset((void *)(v54 + v55), 0, v33 - v55);
    *(_QWORD *)&v102 = v95;
    goto LABEL_42;
  }
LABEL_3:
  sub_4FE20((__int64)&v103, *((_QWORD *)a2 + 1), (__int64 **)a2 + 8);
  v8 = n;
  v95 = v103;
  if ( HIDWORD(n) )
    goto LABEL_151;
  v9 = pack_dd(src, v110, (unsigned int)n) - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v11 = v102;
    v12 = v102 + v9;
    if ( __CFADD__((_QWORD)v102, v9) )
    {
      if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((void *)(v11 + v101), src, v10);
        goto LABEL_10;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v60 = v101;
    v61 = v102;
    if ( *((_QWORD *)&v102 + 1) < v12 )
    {
      v99 = v102;
      v98 = v10;
      v97 = v12;
      v101 = qvector_reserve(&v101, v101, v12, 1);
      v60 = v101;
      v11 = v99;
      v61 = v102;
      v10 = v98;
      v12 = v97;
    }
    v99 = v11;
    v98 = v10;
    v97 = v12;
    memset((void *)(v60 + v61), 0, v12 - v61);
    v10 = v98;
    v11 = v99;
    *(_QWORD *)&v102 = v97;
    goto LABEL_9;
  }
LABEL_10:
  if ( !v8 )
    goto LABEL_11;
  v34 = v102;
  v35 = v102 + v8;
  if ( !__CFADD__((_QWORD)v102, v8) )
    goto LABEL_94;
  if ( (unsigned __int64)v102 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v35 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_94:
    v62 = v101;
    v63 = v102;
    if ( *((_QWORD *)&v102 + 1) < v35 )
    {
      v98 = v102;
      v97 = v35;
      v101 = qvector_reserve(&v101, v101, v35, 1);
      v62 = v101;
      v34 = v98;
      v63 = v102;
      v35 = v97;
    }
    v98 = v34;
    v97 = v35;
    memset((void *)(v62 + v63), 0, v35 - v63);
    v34 = v98;
    *(_QWORD *)&v102 = v97;
    goto LABEL_47;
  }
  if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_47:
  memcpy((void *)(v34 + v101), v95, v8);
LABEL_11:
  sub_4FF50((__int64)&v105, *((_QWORD *)a2 + 1), (char **)a2 + 2);
  v13 = v106;
  v95 = v105;
  if ( HIDWORD(v106) )
  {
    sub_4E620();
    goto LABEL_150;
  }
  v14 = pack_dd(src, v110, (unsigned int)v106) - (_QWORD)src;
  v15 = v14;
  if ( v14 )
  {
    v16 = v102;
    v17 = v102 + v14;
    if ( __CFADD__((_QWORD)v102, v14) )
    {
      if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_17:
        memcpy((void *)(v16 + v101), src, v15);
        goto LABEL_18;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v66 = v101;
    v67 = v102;
    if ( *((_QWORD *)&v102 + 1) < v17 )
    {
      v99 = v102;
      v98 = v15;
      v97 = v17;
      v101 = qvector_reserve(&v101, v101, v17, 1);
      v66 = v101;
      v16 = v99;
      v67 = v102;
      v15 = v98;
      v17 = v97;
    }
    v99 = v16;
    v98 = v15;
    v97 = v17;
    memset((void *)(v66 + v67), 0, v17 - v67);
    v15 = v98;
    v16 = v99;
    *(_QWORD *)&v102 = v97;
    goto LABEL_17;
  }
LABEL_18:
  if ( !v13 )
    goto LABEL_19;
  v52 = v102;
  v53 = v102 + v13;
  if ( !__CFADD__((_QWORD)v102, v13) )
    goto LABEL_98;
  if ( (unsigned __int64)v102 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v53 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_98:
    v64 = v101;
    v65 = v102;
    if ( *((_QWORD *)&v102 + 1) < v53 )
    {
      v98 = v102;
      v97 = v53;
      v101 = qvector_reserve(&v101, v101, v53, 1);
      v64 = v101;
      v52 = v98;
      v65 = v102;
      v53 = v97;
    }
    v98 = v52;
    v97 = v53;
    memset((void *)(v64 + v65), 0, v53 - v65);
    v52 = v98;
    *(_QWORD *)&v102 = v97;
    goto LABEL_76;
  }
  if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_76:
  memcpy((void *)(v52 + v101), v95, v13);
LABEL_19:
  sub_50480((__int64)&v107, *((_QWORD *)a2 + 1), (char ***)a2 + 5);
  v18 = v108;
  v95 = v107;
  if ( HIDWORD(v108) )
  {
LABEL_150:
    sub_4E620();
LABEL_151:
    v94 = (struct _Unwind_Exception *)sub_4E620();
    if ( v107 )
    {
      v108 = 0;
      qfree(v107);
    }
    if ( v105 )
    {
      v106 = 0;
      qfree(v105);
    }
    if ( v103 )
    {
      n = 0;
      qfree(v103);
    }
    if ( v101 )
    {
      *(_QWORD *)&v102 = 0;
      qfree(v101);
    }
    _Unwind_Resume(v94);
  }
  v19 = v110;
  v20 = src;
  v21 = pack_dd(src, v110, (unsigned int)v108) - (_QWORD)src;
  v25 = v21;
  if ( !v21 )
    goto LABEL_26;
  v26 = v102;
  v27 = v102 + v21;
  if ( !__CFADD__((_QWORD)v102, v21) )
    goto LABEL_82;
  if ( (unsigned __int64)v102 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_82:
    v56 = v101;
    v57 = v102;
    if ( *((_QWORD *)&v102 + 1) < v27 )
    {
      v99 = v102;
      v98 = v25;
      v97 = v27;
      v101 = qvector_reserve(&v101, v101, v27, 1);
      v56 = v101;
      v26 = v99;
      v57 = v102;
      v25 = v98;
      v27 = v97;
    }
    v99 = v26;
    v98 = v25;
    v97 = v27;
    memset((void *)(v56 + v57), 0, v27 - v57);
    v25 = v98;
    v26 = v99;
    *(_QWORD *)&v102 = v97;
    goto LABEL_25;
  }
  if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_25:
  v19 = src;
  v20 = (_BYTE *)(v26 + v101);
  memcpy((void *)(v26 + v101), src, v25);
LABEL_26:
  if ( !v18 )
  {
    v28 = *a2;
    if ( *a2 != 3 )
      goto LABEL_28;
LABEL_53:
    v38 = pack_dd(src, v110, *((unsigned int *)a2 + 24)) - (_QWORD)src;
    v39 = v38;
    if ( !v38 )
      goto LABEL_59;
    v40 = v102;
    v41 = v102 + v38;
    if ( __CFADD__((_QWORD)v102, v38) )
    {
      if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_58:
        memcpy((void *)(v40 + v101), src, v39);
LABEL_59:
        v42 = pack_dd(src, v110, *((unsigned int *)a2 + 30)) - (_QWORD)src;
        v43 = v42;
        if ( !v42 )
          goto LABEL_65;
        v44 = v102;
        v45 = v102 + v42;
        if ( __CFADD__((_QWORD)v102, v42) )
        {
          if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_64:
            memcpy((void *)(v44 + v101), src, v43);
LABEL_65:
            if ( a2[112] )
            {
              v19 = v96;
              v20 = src;
              v46 = pack_dq(src, v96, *((_QWORD *)a2 + 13) + 1 - a1) - (_QWORD)src;
              v47 = v46;
              if ( !v46 )
                goto LABEL_29;
              v48 = v102;
              v49 = v102 + v46;
              if ( __CFADD__((_QWORD)v102, v46) )
              {
                if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
                {
                  if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
                    *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
                  goto LABEL_71;
                }
                v49 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v50 = v101;
              v51 = v102;
              if ( *((_QWORD *)&v102 + 1) < v49 )
              {
                v101 = qvector_reserve(&v101, v101, v49, 1);
                v50 = v101;
                v51 = v102;
              }
              memset((void *)(v50 + v51), 0, v49 - v51);
              *(_QWORD *)&v102 = v49;
LABEL_71:
              v19 = src;
              v20 = (_BYTE *)(v48 + v101);
              memcpy((void *)(v48 + v101), src, v47);
              goto LABEL_29;
            }
            v19 = v96;
            v20 = src;
            v80 = pack_dq(src, v96, 0) - (_QWORD)src;
            v81 = v80;
            if ( !v80 )
              goto LABEL_29;
            v82 = v102;
            v83 = v102 + v80;
            if ( __CFADD__((_QWORD)v102, v80) )
            {
              if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_124;
              }
              v83 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v84 = v101;
            v85 = v102;
            if ( *((_QWORD *)&v102 + 1) < v83 )
            {
              v101 = qvector_reserve(&v101, v101, v83, 1);
              v84 = v101;
              v85 = v102;
            }
            memset((void *)(v84 + v85), 0, v83 - v85);
            *(_QWORD *)&v102 = v83;
LABEL_124:
            v19 = src;
            v20 = (_BYTE *)(v82 + v101);
            memcpy((void *)(v82 + v101), src, v81);
            goto LABEL_29;
          }
          v45 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v86 = v101;
        v87 = v102;
        if ( *((_QWORD *)&v102 + 1) < v45 )
        {
          v97 = v102;
          v95 = (void *)v45;
          v101 = qvector_reserve(&v101, v101, v45, 1);
          v86 = v101;
          v44 = v97;
          v87 = v102;
          v45 = (unsigned __int64)v95;
        }
        v97 = v44;
        v95 = (void *)v45;
        memset((void *)(v86 + v87), 0, v45 - v87);
        v44 = v97;
        *(_QWORD *)&v102 = v95;
        goto LABEL_64;
      }
      v41 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v88 = v101;
    v89 = v102;
    if ( *((_QWORD *)&v102 + 1) < v41 )
    {
      v98 = v102;
      v97 = v39;
      v95 = (void *)v41;
      v101 = qvector_reserve(&v101, v101, v41, 1);
      v88 = v101;
      v40 = v98;
      v89 = v102;
      v39 = v97;
      v41 = (unsigned __int64)v95;
    }
    v98 = v40;
    v97 = v39;
    v95 = (void *)v41;
    memset((void *)(v88 + v89), 0, v41 - v89);
    v39 = v97;
    v40 = v98;
    *(_QWORD *)&v102 = v95;
    goto LABEL_58;
  }
  v36 = v102;
  v37 = v102 + v18;
  if ( __CFADD__((_QWORD)v102, v18) )
  {
    if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_52;
    }
    v37 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v58 = v101;
  v59 = v102;
  if ( *((_QWORD *)&v102 + 1) < v37 )
  {
    v98 = v102;
    v97 = v37;
    v101 = qvector_reserve(&v101, v101, v37, 1);
    v58 = v101;
    v36 = v98;
    v59 = v102;
    v37 = v97;
  }
  v98 = v36;
  v97 = v37;
  memset((void *)(v58 + v59), 0, v37 - v59);
  v36 = v98;
  *(_QWORD *)&v102 = v97;
LABEL_52:
  v19 = v95;
  v20 = (_BYTE *)(v36 + v101);
  memcpy((void *)(v36 + v101), v95, v18);
  v28 = *a2;
  if ( *a2 == 3 )
    goto LABEL_53;
LABEL_28:
  if ( v28 == 4 )
  {
    v68 = v102;
    v69 = a2[128];
    v70 = v101;
    if ( *((_QWORD *)&v102 + 1) < (unsigned __int64)(v102 + 1) )
    {
      v101 = qvector_reserve(&v101, v101, v102 + 1, 1);
      v70 = v101;
      v68 = v102;
    }
    *(_BYTE *)(v70 + v68) = v69;
    v71 = *((unsigned int *)a2 + 33);
    *(_QWORD *)&v102 = v102 + 1;
    v72 = pack_dd(src, v110, v71) - (_QWORD)src;
    v73 = v72;
    if ( !v72 )
    {
LABEL_113:
      v19 = v110;
      v20 = src;
      v76 = pack_dd(src, v110, *((unsigned int *)a2 + 34)) - (_QWORD)src;
      v77 = v76;
      if ( !v76 )
        goto LABEL_29;
      v78 = v102;
      v79 = v102 + v76;
      if ( __CFADD__((_QWORD)v102, v76) )
      {
        if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_118:
          v19 = src;
          v20 = (_BYTE *)(v78 + v101);
          memcpy((void *)(v78 + v101), src, v77);
          goto LABEL_29;
        }
        v79 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v92 = v101;
      v93 = v102;
      if ( *((_QWORD *)&v102 + 1) < v79 )
      {
        v101 = qvector_reserve(&v101, v101, v79, 1);
        v92 = v101;
        v93 = v102;
      }
      memset((void *)(v92 + v93), 0, v79 - v93);
      *(_QWORD *)&v102 = v79;
      goto LABEL_118;
    }
    v74 = (_QWORD *)v102;
    v75 = v102 + v72;
    if ( __CFADD__((_QWORD)v102, v72) )
    {
      if ( (unsigned __int64)v102 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v102 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v102 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_112:
        memcpy((char *)v74 + v101, src, v73);
        goto LABEL_113;
      }
      v75 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v90 = v101;
    v91 = v102;
    if ( *((_QWORD *)&v102 + 1) < v75 )
    {
      v96 = (_QWORD *)v102;
      v95 = (void *)v75;
      v101 = qvector_reserve(&v101, v101, v75, 1);
      v90 = v101;
      v74 = v96;
      v91 = v102;
      v75 = (unsigned __int64)v95;
    }
    v96 = v74;
    v95 = (void *)v75;
    memset((void *)(v90 + v91), 0, v75 - v91);
    v74 = v96;
    *(_QWORD *)&v102 = v95;
    goto LABEL_112;
  }
LABEL_29:
  v29 = sub_1DD10(v20, v19, v22, v23, v24, v25);
  v30 = netnode_suplast(v29, 3);
  netnode_setblob(v29, v101, v102, v30 + 2, 3);
  v100 = v30 + 3;
  netnode_supset(v29, a1, &v100, 8, 360);
  if ( v107 )
  {
    v108 = 0;
    qfree(v107);
  }
  if ( v105 )
  {
    v106 = 0;
    qfree(v105);
  }
  if ( v103 )
  {
    n = 0;
    qfree(v103);
  }
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree(v101);
  }
  return v111[0] - __readfsqword(0x28u);
}

