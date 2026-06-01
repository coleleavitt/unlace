__int64 __fastcall sub_26B20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 *a5, int a6, __int64 a7)
{
  __int64 v7; // rax
  size_t v8; // r14
  size_t v9; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  size_t v12; // rbp
  size_t v13; // r12
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  size_t v16; // rbp
  size_t v17; // r12
  unsigned __int64 v18; // r14
  __int64 v19; // r12
  const void *v20; // r15
  size_t v21; // rbp
  __int64 v22; // rax
  size_t v23; // r8
  size_t v24; // r9
  unsigned __int64 v25; // r10
  __int64 v26; // rsi
  size_t v27; // rax
  size_t v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // rsi
  size_t v31; // rax
  const void *v32; // r15
  size_t v33; // rbp
  __int64 v34; // rax
  size_t v35; // r8
  size_t v36; // r9
  unsigned __int64 v37; // r10
  __int64 v38; // rsi
  size_t v39; // rax
  size_t v40; // r8
  unsigned __int64 v41; // r9
  __int64 v42; // rsi
  size_t v43; // rax
  __int64 v44; // rax
  size_t v45; // r8
  size_t v46; // rbp
  size_t v47; // r15
  unsigned __int64 v48; // r9
  __int64 v49; // rsi
  size_t v50; // rax
  __int64 v51; // rbp
  __int64 v52; // r15
  __int64 v53; // rsi
  size_t v54; // rax
  __int64 v55; // rax
  size_t v56; // r8
  size_t v57; // r9
  unsigned __int64 v58; // r10
  __int64 v59; // rsi
  size_t v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  size_t v63; // rbp
  size_t v64; // r15
  unsigned __int64 v65; // r8
  __int64 v66; // rsi
  size_t v67; // rax
  __int64 v68; // rax
  size_t v69; // rbp
  size_t v70; // r12
  unsigned __int64 v71; // r13
  __int64 v72; // rsi
  size_t v73; // rax
  __int64 v74; // rdi
  __int64 (__fastcall *v75)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v76; // rax
  unsigned int *v77; // rbx
  __int64 v78; // rax
  unsigned int v79; // eax
  unsigned int v80; // ebp
  char *v81; // r12
  char *v82; // rax
  size_t v84; // r9
  size_t v85; // r8
  unsigned __int64 v86; // r10
  _QWORD *v87; // r14
  size_t v88; // rax
  size_t v89; // r13
  size_t v90; // r14
  void *v91; // rdi
  _QWORD *v92; // r15
  __int64 v93; // rsi
  size_t v94; // rax
  __int64 v95; // rsi
  size_t v96; // rax
  __int64 v97; // rsi
  size_t v98; // rax
  _QWORD *v99; // r15
  __int64 v100; // rax
  char *v101; // [rsp+0h] [rbp-C8h]
  size_t v102; // [rsp+8h] [rbp-C0h]
  size_t n; // [rsp+10h] [rbp-B8h]
  size_t v104; // [rsp+18h] [rbp-B0h]
  __int64 *v105; // [rsp+20h] [rbp-A8h]
  __int64 *v106; // [rsp+28h] [rbp-A0h]
  __int64 v107; // [rsp+30h] [rbp-98h]
  int v108; // [rsp+3Ch] [rbp-8Ch]
  __int64 v109; // [rsp+40h] [rbp-88h]
  _QWORD *v110; // [rsp+48h] [rbp-80h]
  char *s; // [rsp+50h] [rbp-78h]
  unsigned __int64 v112; // [rsp+58h] [rbp-70h]
  __int64 v113; // [rsp+60h] [rbp-68h] BYREF
  size_t v114; // [rsp+68h] [rbp-60h]
  unsigned __int64 v115; // [rsp+70h] [rbp-58h]
  _BYTE src[5]; // [rsp+7Eh] [rbp-4Ah] BYREF
  char v117; // [rsp+83h] [rbp-45h] BYREF
  unsigned __int64 v118; // [rsp+88h] [rbp-40h]

  v107 = a1;
  v110 = a2;
  v106 = a5;
  v108 = a6;
  v109 = a7;
  v118 = __readfsqword(0x28u);
  v105 = &v113;
  sub_31A90(&v113, 47);
  v7 = pack_dq() - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v114;
    v10 = v114 + v7;
    if ( __CFADD__(v114, v7) )
    {
      if ( v114 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
          v114 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v9 + v113), src, v8);
        goto LABEL_7;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v93 = v113;
    v94 = v114;
    if ( v115 < v10 )
    {
      v113 = qvector_reserve();
      v93 = v113;
      v94 = v114;
    }
    memset((void *)(v93 + v94), 0, v10 - v94);
    v114 = v10;
    goto LABEL_6;
  }
LABEL_7:
  v11 = pack_dq() - (_QWORD)src;
  v12 = v11;
  if ( !v11 )
    goto LABEL_13;
  v13 = v114;
  v14 = v114 + v11;
  if ( !__CFADD__(v114, v11) )
    goto LABEL_142;
  if ( v114 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v14 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_142:
    v95 = v113;
    v96 = v114;
    if ( v115 < v14 )
    {
      v113 = qvector_reserve();
      v95 = v113;
      v96 = v114;
    }
    memset((void *)(v95 + v96), 0, v14 - v96);
    v114 = v14;
    goto LABEL_12;
  }
  if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
    v114 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v13 + v113), src, v12);
LABEL_13:
  v101 = &v117;
  v15 = pack_dd() - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_19;
  v17 = v114;
  v18 = v114 + v15;
  if ( !__CFADD__(v114, v15) )
    goto LABEL_146;
  if ( v114 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_146:
    v97 = v113;
    v98 = v114;
    if ( v115 < v18 )
    {
      v113 = qvector_reserve();
      v97 = v113;
      v98 = v114;
    }
    memset((void *)(v97 + v98), 0, v18 - v98);
    v114 = v18;
    goto LABEL_18;
  }
  if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
    v114 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  memcpy((void *)(v17 + v113), src, v16);
LABEL_19:
  v19 = *v106;
  if ( !(80 * v106[1]) )
    goto LABEL_80;
  do
  {
    v20 = *(const void **)v19;
    v21 = (int)*(_QWORD *)(v19 + 8);
    if ( v21 > 0xFFFFFFFF )
      goto LABEL_153;
    v22 = pack_dd() - (_QWORD)src;
    v23 = v22;
    if ( v22 )
    {
      v24 = v114;
      v25 = v114 + v22;
      if ( __CFADD__(v114, v22) )
      {
        if ( v114 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
            v114 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_26;
        }
        v25 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v26 = v113;
      v27 = v114;
      if ( v115 < v25 )
      {
        v104 = v114;
        n = v23;
        v102 = v25;
        v113 = qvector_reserve();
        v26 = v113;
        v24 = v104;
        v27 = v114;
        v23 = n;
        v25 = v102;
      }
      v104 = v24;
      n = v23;
      v102 = v25;
      memset((void *)(v26 + v27), 0, v25 - v27);
      v23 = n;
      v24 = v104;
      v114 = v102;
LABEL_26:
      memcpy((void *)(v24 + v113), src, v23);
    }
    if ( !v21 )
      goto LABEL_33;
    v28 = v114;
    v29 = v114 + v21;
    if ( __CFADD__(v114, v21) )
    {
      if ( v114 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
          v114 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_32;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = v113;
    v31 = v114;
    if ( v115 < v29 )
    {
      n = v114;
      v102 = v29;
      v113 = qvector_reserve();
      v30 = v113;
      v28 = n;
      v31 = v114;
      v29 = v102;
    }
    n = v28;
    v102 = v29;
    memset((void *)(v30 + v31), 0, v29 - v31);
    v28 = n;
    v114 = v102;
LABEL_32:
    memcpy((void *)(v28 + v113), v20, v21);
LABEL_33:
    v32 = *(const void **)(v19 + 24);
    v33 = (int)*(_QWORD *)(v19 + 32);
    if ( v33 > 0xFFFFFFFF )
    {
      if ( !under_debugger )
      {
        interr();
LABEL_153:
        if ( !under_debugger )
          interr();
      }
      BUG();
    }
    v34 = pack_dd() - (_QWORD)src;
    v35 = v34;
    if ( v34 )
    {
      v36 = v114;
      v37 = v114 + v34;
      if ( __CFADD__(v114, v34) )
      {
        if ( v114 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
            v114 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_39;
        }
        v37 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v38 = v113;
      v39 = v114;
      if ( v115 < v37 )
      {
        v104 = v114;
        n = v35;
        v102 = v37;
        v113 = qvector_reserve();
        v38 = v113;
        v36 = v104;
        v39 = v114;
        v35 = n;
        v37 = v102;
      }
      v104 = v36;
      n = v35;
      v102 = v37;
      memset((void *)(v38 + v39), 0, v37 - v39);
      v35 = n;
      v36 = v104;
      v114 = v102;
LABEL_39:
      memcpy((void *)(v36 + v113), src, v35);
    }
    if ( !v33 )
      goto LABEL_46;
    v40 = v114;
    v41 = v114 + v33;
    if ( __CFADD__(v114, v33) )
    {
      if ( v114 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
          v114 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_45;
      }
      v41 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v42 = v113;
    v43 = v114;
    if ( v115 < v41 )
    {
      n = v114;
      v102 = v41;
      v113 = qvector_reserve();
      v42 = v113;
      v40 = n;
      v43 = v114;
      v41 = v102;
    }
    n = v40;
    v102 = v41;
    memset((void *)(v42 + v43), 0, v41 - v43);
    v40 = n;
    v114 = v102;
LABEL_45:
    memcpy((void *)(v40 + v113), v32, v33);
LABEL_46:
    v102 = *(_QWORD *)(v19 + 56);
    v44 = pack_dd() - (_QWORD)src;
    v45 = v102;
    v46 = v44;
    if ( !v44 )
      goto LABEL_52;
    v47 = v114;
    v48 = v114 + v44;
    if ( __CFADD__(v114, v44) )
    {
      if ( v114 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
          v114 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_51;
      }
      v48 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v49 = v113;
    v50 = v114;
    if ( v115 < v48 )
    {
      n = v102;
      v102 = v48;
      v113 = qvector_reserve();
      v49 = v113;
      v45 = n;
      v50 = v114;
      v48 = v102;
    }
    n = v45;
    v102 = v48;
    memset((void *)(v49 + v50), 0, v48 - v50);
    v45 = n;
    v114 = v102;
LABEL_51:
    v102 = v45;
    memcpy((void *)(v47 + v113), src, v46);
    LODWORD(v45) = v102;
LABEL_52:
    v51 = 0;
    v52 = 16LL * (unsigned int)v45;
    if ( (int)v45 > 0 )
    {
      while ( 1 )
      {
        v61 = pack_dq() - (_QWORD)src;
        v85 = v61;
        if ( v61 )
          break;
LABEL_58:
        v55 = pack_dq() - (_QWORD)src;
        v56 = v55;
        if ( v55 )
        {
          v57 = v114;
          v58 = v114 + v55;
          if ( !__CFADD__(v114, v55) )
            goto LABEL_60;
          if ( v114 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v58 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_60:
            v59 = v113;
            v60 = v114;
            if ( v115 < v58 )
            {
              v104 = v114;
              n = v56;
              v102 = v58;
              v113 = qvector_reserve();
              v59 = v113;
              v57 = v104;
              v60 = v114;
              v56 = n;
              v58 = v102;
            }
            v104 = v57;
            n = v56;
            v102 = v58;
            memset((void *)(v59 + v60), 0, v58 - v60);
            v56 = n;
            v57 = v104;
            v114 = v102;
          }
          else if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
          {
            v114 = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((void *)(v57 + v113), src, v56);
        }
        v51 += 16;
        if ( v52 == v51 )
          goto LABEL_73;
      }
      v84 = v114;
      v86 = v114 + v61;
      if ( __CFADD__(v114, v61) )
      {
        if ( v114 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
            v114 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_57:
          memcpy((void *)(v84 + v113), src, v85);
          goto LABEL_58;
        }
        v86 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v53 = v113;
      v54 = v114;
      if ( v115 < v86 )
      {
        v104 = v114;
        n = v85;
        v102 = v86;
        v113 = qvector_reserve();
        v53 = v113;
        v84 = v104;
        v54 = v114;
        v85 = n;
        v86 = v102;
      }
      v104 = v84;
      n = v85;
      v102 = v86;
      memset((void *)(v53 + v54), 0, v86 - v54);
      v85 = n;
      v84 = v104;
      v114 = v102;
      goto LABEL_57;
    }
LABEL_73:
    v62 = pack_dd() - (_QWORD)src;
    v63 = v62;
    if ( !v62 )
      goto LABEL_79;
    v64 = v114;
    v65 = v114 + v62;
    if ( __CFADD__(v114, v62) )
    {
      if ( v114 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
          v114 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_78;
      }
      v65 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v66 = v113;
    v67 = v114;
    if ( v115 < v65 )
    {
      v102 = v65;
      v113 = qvector_reserve();
      v66 = v113;
      v65 = v102;
      v67 = v114;
    }
    v102 = v65;
    memset((void *)(v66 + v67), 0, v65 - v67);
    v114 = v102;
LABEL_78:
    memcpy((void *)(v64 + v113), src, v63);
LABEL_79:
    v19 += 80;
  }
  while ( v19 != *v106 + 80 * v106[1] );
LABEL_80:
  v68 = pack_dd() - (_QWORD)src;
  v69 = v68;
  if ( !v68 )
    goto LABEL_86;
  v70 = v114;
  v71 = v114 + v68;
  if ( __CFADD__(v114, v68) )
  {
    if ( v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v114 != 0x7FFFFFFFFFFFFFFFLL )
        v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_85;
    }
    v71 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v72 = v113;
  v73 = v114;
  if ( v115 < v71 )
  {
    v113 = qvector_reserve();
    v72 = v113;
    v73 = v114;
  }
  memset((void *)(v72 + v73), 0, v71 - v73);
  v114 = v71;
LABEL_85:
  memcpy((void *)(v70 + v113), src, v69);
LABEL_86:
  v74 = v107 + 864;
  v75 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(v107 + 864) + 16LL);
  if ( v75 == sub_BE00 )
    v76 = (unsigned int *)sub_2E450(v74, 47, v105, 0);
  else
    v76 = (unsigned int *)v75(v74, 47u, (__int64)v105);
  v77 = v76;
  if ( v76 )
  {
    v78 = *v76;
    s = (char *)v77 + 5;
    v112 = (unsigned __int64)v77 + v78 + 5;
    v79 = unpack_dd();
    v80 = v79;
    if ( v79 == 1 )
    {
      v87 = v110;
      if ( v110 )
        *v87 = unpack_dq() - 1;
    }
    else if ( v79 != -1 && v109 )
    {
      v81 = s;
      v82 = s;
      do
      {
        if ( (unsigned __int64)v82 >= v112 )
          goto LABEL_95;
        ++v82;
      }
      while ( *(v82 - 1) );
      s = v82;
      if ( !v81 || (v88 = strlen(v81), (v89 = v88) == 0) )
      {
LABEL_95:
        *(_QWORD *)(v109 + 8) = 0;
        goto LABEL_96;
      }
      v90 = v88 + 1;
      v91 = *(void **)v109;
      if ( *(_QWORD *)(v109 + 16) < v88 + 1 )
      {
        v99 = (_QWORD *)v109;
        v100 = qvector_reserve();
        *v99 = v100;
        v91 = (void *)v100;
      }
      v92 = (_QWORD *)v109;
      *(_QWORD *)(v109 + 8) = v90;
      memmove(v91, v81, v89);
      *(_BYTE *)(*v92 + v89) = 0;
    }
LABEL_96:
    qfree();
  }
  else
  {
    v80 = -2;
  }
  if ( v113 )
  {
    v114 = 0;
    qfree();
  }
  return v80;
}

