__int64 __fastcall sub_BA20(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 **a4,
        unsigned __int64 a5,
        unsigned int a6,
        double a7,
        double a8,
        __m128 a9)
{
  unsigned __int8 *v9; // rax
  int v12; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  void *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  size_t v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  unsigned __int8 *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 p_src; // rsi
  __int64 v38; // r8
  size_t v39; // r10
  __int64 v40; // rsi
  __int64 v41; // rbx
  unsigned __int64 v42; // rbp
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rax
  __int16 v46; // si
  const char *v47; // rcx
  char *v48; // rax
  char v49; // dl
  const char *v50; // rcx
  char v51; // di
  const char *v52; // rcx
  char v53; // di
  const char *v54; // rcx
  char v55; // si
  size_t v56; // rax
  __int64 v57; // r9
  size_t v58; // r11
  __int64 v59; // rsi
  __int64 v60; // rdx
  char *v61; // r9
  _BYTE *v62; // rdi
  signed __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // r8
  unsigned __int64 v66; // rdx
  __int64 v67; // r10
  __int64 v68; // rsi
  size_t v69; // r10
  __int64 v70; // r8
  size_t v71; // r11
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // [rsp+8h] [rbp-4F0h]
  unsigned __int64 v79; // [rsp+8h] [rbp-4F0h]
  unsigned __int8 v80; // [rsp+13h] [rbp-4E5h]
  void *v82; // [rsp+18h] [rbp-4E0h]
  void *v83; // [rsp+18h] [rbp-4E0h]
  void *v84; // [rsp+18h] [rbp-4E0h]
  void *v85; // [rsp+18h] [rbp-4E0h]
  void *v86; // [rsp+18h] [rbp-4E0h]
  __int64 v87; // [rsp+20h] [rbp-4D8h]
  size_t v88; // [rsp+20h] [rbp-4D8h]
  size_t v89; // [rsp+20h] [rbp-4D8h]
  __int64 v90; // [rsp+20h] [rbp-4D8h]
  unsigned __int64 v91; // [rsp+20h] [rbp-4D8h]
  size_t v92; // [rsp+20h] [rbp-4D8h]
  __int64 v93; // [rsp+28h] [rbp-4D0h]
  size_t v94; // [rsp+28h] [rbp-4D0h]
  __int64 v95; // [rsp+28h] [rbp-4D0h]
  __int64 v96; // [rsp+28h] [rbp-4D0h]
  size_t v97; // [rsp+28h] [rbp-4D0h]
  __int64 v98; // [rsp+30h] [rbp-4C8h]
  int v99; // [rsp+30h] [rbp-4C8h]
  size_t v100; // [rsp+30h] [rbp-4C8h]
  __int64 v101; // [rsp+30h] [rbp-4C8h]
  __int64 v102; // [rsp+38h] [rbp-4C0h]
  size_t v103; // [rsp+38h] [rbp-4C0h]
  char v104; // [rsp+40h] [rbp-4B8h] BYREF
  int v105; // [rsp+48h] [rbp-4B0h]
  __int64 v106; // [rsp+50h] [rbp-4A8h] BYREF
  __int128 v107; // [rsp+58h] [rbp-4A0h]
  void *src; // [rsp+70h] [rbp-488h] BYREF
  __int128 v109; // [rsp+78h] [rbp-480h]
  void *v110; // [rsp+90h] [rbp-468h] BYREF
  unsigned __int64 v111; // [rsp+98h] [rbp-460h]
  _BYTE v112[8]; // [rsp+A8h] [rbp-450h]
  char s[1023]; // [rsp+B0h] [rbp-448h] BYREF
  char v114; // [rsp+4AFh] [rbp-49h] BYREF
  char v115; // [rsp+4B0h] [rbp-48h] BYREF
  unsigned __int64 v116; // [rsp+4B8h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  v9 = *a4;
  if ( (unsigned __int64)*a4 >= a5 )
    return 0;
  v12 = *v9;
  v16 = a5 - (_DWORD)v9;
  if ( (v12 & 0x80u) != 0 )
  {
    if ( (v12 & 0xC0) == 0x80 )
    {
      if ( v16 <= 1 )
        return 0;
      v17 = ((_WORD)v12 << 8) & 0x3F00 | v9[1];
      v18 = 2;
    }
    else
    {
      if ( (v12 & 0xE0) != 0xC0 || v16 <= 3 )
        return 0;
      v17 = (v12 << 24) & 0x1F000000 | v9[3] | (v9[2] << 8) | (v9[1] << 16);
      v18 = 4;
    }
  }
  else
  {
    if ( !v16 )
      return 0;
    v17 = (unsigned __int8)v12;
    v18 = 1;
  }
  v19 = *(_QWORD *)(a1 + 616);
  *a4 = &v9[v18];
  v80 = sub_65F0(a1, a2, a4, a5, a5);
  if ( !v80 )
    return 0;
  v20 = a3[1];
  if ( v20 )
  {
    v21 = v20 + 1;
    v22 = a3[1];
    --v20;
  }
  else
  {
    v21 = 2;
    v22 = 1;
  }
  v23 = *a3;
  if ( a3[2] < v21 )
  {
    v90 = v20;
    v86 = (void *)v22;
    v79 = v21;
    v75 = qvector_reserve(a3, v23, v21, 1);
    v20 = v90;
    v22 = (__int64)v86;
    *a3 = v75;
    v21 = v79;
    v23 = v75;
  }
  a3[1] = v21;
  *(_BYTE *)(v23 + v22) = 0;
  *(_BYTE *)(*a3 + v20) = 40;
  v24 = *(_QWORD *)(v19 + 144);
  v107 = 0;
  v106 = 0;
  v25 = netnode_altval(v24, a6, 65);
  netnode_qgetblob(v25, &v106, 4, 0, 65);
  if ( v17 )
  {
    v30 = v17;
    v31 = 0;
    v78 = v30;
    do
    {
      v32 = *a4;
      if ( (unsigned __int64)*a4 >= a5 )
        break;
      if ( !v31 )
      {
        do
        {
LABEL_21:
          if ( (*v32 & 0x40) == 0 )
            break;
          *a4 = ++v32;
        }
        while ( (unsigned __int8 *)a5 != v32 );
        goto LABEL_22;
      }
      v33 = a3[1];
      if ( v33 )
      {
        v34 = v33 + 1;
        v35 = v33 + 2;
        v36 = *a3;
        --v33;
        if ( a3[2] >= v35 )
          goto LABEL_18;
      }
      else
      {
        v36 = *a3;
        v35 = 3;
        v34 = 2;
        if ( (unsigned __int64)a3[2] >= 3 )
          goto LABEL_18;
      }
      v93 = v34;
      v87 = v33;
      v82 = (void *)v35;
      v45 = qvector_reserve(a3, v36, v35, 1);
      *a3 = v45;
      v34 = v93;
      v36 = v45;
      v33 = v87;
      v35 = (unsigned __int64)v82;
LABEL_18:
      a3[1] = v35;
      *(_BYTE *)(v36 + v34) = 0;
      v28 = *a3 + v33;
      *(_WORD *)v28 = 8236;
      v32 = *a4;
      if ( (unsigned __int64)*a4 < a5 )
        goto LABEL_21;
LABEL_22:
      if ( v31 >= (unsigned __int64)v107
        || netnode_supval(*(_QWORD *)(v19 + 144), *(unsigned int *)(v106 + 4 * v31), &v104, 16, 97) <= 0 )
      {
        goto LABEL_24;
      }
      v46 = v105;
      if ( (v105 & 1) == 0 )
        goto LABEL_60;
      v47 = "[in] ";
      v48 = s;
      do
      {
        v49 = *v47++;
        *v48 = v49;
        if ( !v49 )
        {
          if ( (v46 & 2) != 0 )
          {
            if ( v48 < &v115 )
              goto LABEL_61;
            if ( under_debugger )
              goto LABEL_120;
            interr(520);
LABEL_60:
            v48 = s;
            if ( (v46 & 2) != 0 )
            {
LABEL_61:
              if ( v48 == &v114 )
                goto LABEL_102;
              v50 = "[out] ";
              while ( 1 )
              {
                v51 = *v50++;
                *v48 = v51;
                if ( !v51 )
                  break;
                if ( ++v48 == &v114 )
                  goto LABEL_102;
              }
            }
          }
          if ( (v46 & 0x10) == 0 )
            goto LABEL_71;
          if ( v48 >= &v115 )
          {
            if ( !under_debugger )
              interr(520);
            goto LABEL_120;
          }
LABEL_67:
          if ( v48 == &v114 )
          {
LABEL_105:
            v114 = 0;
            if ( (v46 & 0x2000) != 0 )
LABEL_106:
              v114 = 0;
            v48 = &v114;
            goto LABEL_78;
          }
          v52 = "[opt] ";
          while ( 1 )
          {
            v53 = *v52++;
            *v48 = v53;
            if ( !v53 )
              break;
            if ( ++v48 == &v114 )
              goto LABEL_105;
          }
LABEL_71:
          if ( (v46 & 0x2000) == 0 )
            goto LABEL_77;
          if ( v48 < &v115 )
            goto LABEL_73;
LABEL_116:
          if ( !under_debugger )
            interr(520);
          goto LABEL_120;
        }
        ++v48;
      }
      while ( v48 != &v114 );
      v114 = 0;
      if ( (v46 & 2) == 0 )
      {
        if ( (v46 & 0x10) == 0 )
          goto LABEL_71;
        goto LABEL_67;
      }
LABEL_102:
      v114 = 0;
      if ( (v46 & 0x10) != 0 )
        goto LABEL_105;
      v48 = &v114;
      if ( (v46 & 0x2000) == 0 )
        goto LABEL_77;
LABEL_73:
      if ( v48 == &v114 )
        goto LABEL_106;
      v54 = "[hasfieldmarshal] ";
      while ( 1 )
      {
        v55 = *v54++;
        *v48 = v55;
        if ( !v55 )
          break;
        if ( ++v48 == &v114 )
          goto LABEL_106;
      }
LABEL_77:
      if ( v48 >= &v115 )
      {
        if ( !under_debugger )
        {
          interr(519);
          goto LABEL_116;
        }
LABEL_120:
        BUG();
      }
LABEL_78:
      *v48 = 0;
      v56 = strlen(s);
      v57 = a3[1];
      LODWORD(v28) = v56;
      v58 = v56;
      if ( v57 )
      {
        --v57;
        v58 = v56 + v57;
      }
      v59 = *a3;
      v60 = v58 + 1;
      if ( a3[2] < v58 + 1 )
      {
        v99 = v56;
        v95 = v57;
        v89 = v58;
        v85 = (void *)(v58 + 1);
        v73 = qvector_reserve(a3, v59, v60, 1);
        *a3 = v73;
        v59 = v73;
        LODWORD(v28) = v99;
        v57 = v95;
        v58 = v89;
        v60 = (__int64)v85;
      }
      a3[1] = v60;
      *(_BYTE *)(v59 + v58) = 0;
      v61 = (char *)(*a3 + v57);
      if ( (unsigned int)v28 >= 8 )
      {
        v62 = (_BYTE *)((unsigned __int64)(v61 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        *(_QWORD *)v61 = *(_QWORD *)s;
        *(_QWORD *)&v61[(unsigned int)v28 - 8] = *(_QWORD *)&v112[(unsigned int)v28];
        v63 = v61 - v62;
        LODWORD(v28) = (unsigned int)(v63 + v28) >> 3;
        qmemcpy(v62, &s[-v63], 8LL * (unsigned int)v28);
      }
      else if ( (v28 & 4) != 0 )
      {
        *(_DWORD *)v61 = *(_DWORD *)s;
        *(_DWORD *)&v61[(unsigned int)v28 - 4] = *(_DWORD *)&v112[(unsigned int)v28 + 4];
      }
      else if ( (_DWORD)v28 )
      {
        *v61 = s[0];
        if ( (v28 & 2) != 0 )
          *(_WORD *)&v61[(unsigned int)v28 - 2] = *(_WORD *)&v112[(unsigned int)v28 + 6];
      }
LABEL_24:
      p_src = &src;
      v109 = 0;
      src = nullptr;
      if ( !(unsigned __int8)sub_65F0(a1, (__int64 *)&src, a4, a5, v28) )
      {
        if ( src )
        {
          *(_QWORD *)&v109 = 0;
          qfree(src, &src, v26, v27, v28, v29);
        }
        break;
      }
      v26 = (void *)v109;
      if ( (_QWORD)v109 )
      {
        v29 = v109 - 1;
        if ( (_QWORD)v109 != 1 )
        {
          v38 = a3[1];
          v39 = v109 - 1;
          if ( v38 )
          {
            --v38;
            v39 = v29 + v38;
            v26 = (void *)(v109 + v38);
          }
          v40 = *a3;
          if ( a3[2] < (unsigned __int64)v26 )
          {
            v98 = v38;
            v94 = v109 - 1;
            v88 = v39;
            v84 = v26;
            v64 = qvector_reserve(a3, v40, v26, 1);
            *a3 = v64;
            v38 = v98;
            v40 = v64;
            v29 = v94;
            v39 = v88;
            v26 = v84;
          }
          a3[1] = (__int64)v26;
          *(_BYTE *)(v40 + v39) = 0;
          p_src = src;
          memcpy((void *)(v38 + *a3), src, v29);
        }
      }
      if ( v31 < (unsigned __int64)v107 && (a6 & 0xFFFFFF) != 0 )
      {
        p_src = (void *)a1;
        sub_8540((__int64 *)&v110, a1, *(_DWORD *)(v106 + 4 * v31), 0.0, a8, a9);
        v29 = v111;
        v83 = v110;
        if ( v111 > 1 )
        {
          v65 = a3[1];
          if ( v65 )
          {
            v66 = v65 + 1;
            v67 = a3[1];
            --v65;
          }
          else
          {
            v66 = 2;
            v67 = 1;
          }
          v68 = *a3;
          if ( a3[2] < v66 )
          {
            v102 = v65;
            v100 = v111;
            v96 = v67;
            v91 = v66;
            v76 = qvector_reserve(a3, v68, v66, 1);
            *a3 = v76;
            v65 = v102;
            v68 = v76;
            v29 = v100;
            v67 = v96;
            v66 = v91;
          }
          a3[1] = v66;
          *(_BYTE *)(v68 + v67) = 0;
          v69 = v29 - 1;
          *(_BYTE *)(*a3 + v65) = 32;
          v70 = a3[1];
          v71 = v29 - 1;
          if ( v70 )
          {
            --v70;
            v71 = v69 + v70;
            v29 += v70;
          }
          v72 = *a3;
          if ( a3[2] < v29 )
          {
            v103 = v71;
            v101 = v70;
            v97 = v69;
            v92 = v29;
            v77 = qvector_reserve(a3, v72, v29, 1);
            *a3 = v77;
            v71 = v103;
            v72 = v77;
            v70 = v101;
            v69 = v97;
            v29 = v92;
          }
          a3[1] = v29;
          *(_BYTE *)(v72 + v71) = 0;
          p_src = v83;
          memcpy((void *)(v70 + *a3), v83, v69);
        }
        if ( v83 )
          qfree(v83, (__int64)p_src, v26, v27, v28, v29);
      }
      if ( src )
      {
        *(_QWORD *)&v109 = 0;
        qfree(src, (__int64)p_src, v26, v27, v28, v29);
      }
      ++v31;
    }
    while ( v31 != v78 );
  }
  v41 = a3[1];
  if ( v41 )
  {
    v42 = v41 + 1;
    v43 = a3[1];
    --v41;
  }
  else
  {
    v42 = 2;
    v43 = 1;
  }
  v44 = *a3;
  if ( a3[2] < v42 )
  {
    v74 = qvector_reserve(a3, v44, v42, 1);
    *a3 = v74;
    v44 = v74;
  }
  a3[1] = v42;
  *(_BYTE *)(v44 + v43) = 0;
  *(_BYTE *)(*a3 + v41) = 41;
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106, v44, v26, v27, v28, v29);
  }
  return v80;
}

