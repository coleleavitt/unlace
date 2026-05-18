__int64 __fastcall sub_172EE0(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5, char *a6)
{
  unsigned __int64 v6; // r15
  char v8; // r13
  char v9; // al
  __int64 v10; // rbx
  int v12; // r13d
  char v13; // al
  __int64 v14; // rax
  int v15; // eax
  int *i; // rbx
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // r12
  const char *v20; // rax
  unsigned int v21; // ebp
  unsigned __int64 v22; // r12
  __int64 v23; // rbx
  bool v24; // zf
  size_t v25; // rbp
  size_t v26; // r8
  __int64 v27; // rsi
  const void *v28; // r9
  size_t v29; // r12
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  size_t v33; // r8
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r15
  __int64 v41; // rax
  size_t v42; // rdx
  __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  int *v45; // rax
  int *v46; // rbp
  __int64 v47; // r12
  _QWORD *v48; // r15
  char *v49; // rcx
  __int64 v50; // r12
  char *v51; // r14
  __int64 v52; // r13
  char *v53; // rbp
  _QWORD *v54; // rbx
  const char *v55; // rdi
  const char *v56; // rsi
  int v57; // eax
  _QWORD *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  size_t v61; // r15
  __int64 v62; // r12
  __int64 v63; // rcx
  int *v64; // rax
  __int64 v65; // rdx
  _BOOL8 v66; // rdi
  _BYTE *v67; // r12
  _BYTE *v68; // rax
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // r13
  __int64 v72; // rbx
  const char *v73; // rsi
  _QWORD *v74; // r15
  const char *v75; // r14
  const char *v76; // r12
  const char *v77; // rdi
  _QWORD *v78; // rbp
  const char *v79; // rsi
  int v80; // eax
  _QWORD *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  char *v84; // rdi
  char v85; // al
  __int64 v86; // rdx
  int *v87; // rax
  int *v88; // r14
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r13
  char *v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  int *v95; // rax
  __int64 v96; // rdx
  _BOOL8 v97; // rdi
  char *v98; // r12
  char *v99; // rcx
  char *v100; // rdi
  char v101; // al
  __int64 v102; // rdx
  char v103; // r8
  int v104; // r9d
  size_t v105; // rbp
  const char *v106; // rax
  __int64 v107; // rbp
  __int64 v108; // rbx
  void *v109; // rdi
  void *v110; // rdi
  _QWORD *v111; // r14
  _QWORD *v112; // r14
  unsigned __int64 v113; // [rsp+8h] [rbp-160h]
  const void *v114; // [rsp+8h] [rbp-160h]
  const void *v115; // [rsp+8h] [rbp-160h]
  unsigned __int64 v116; // [rsp+8h] [rbp-160h]
  size_t v117; // [rsp+8h] [rbp-160h]
  size_t v119; // [rsp+10h] [rbp-158h]
  size_t v120; // [rsp+10h] [rbp-158h]
  char *s1; // [rsp+18h] [rbp-150h]
  char *s1a; // [rsp+18h] [rbp-150h]
  char *s1b; // [rsp+18h] [rbp-150h]
  __int64 v124; // [rsp+20h] [rbp-148h]
  int v125; // [rsp+28h] [rbp-140h]
  __int64 v126; // [rsp+28h] [rbp-140h]
  char *v128; // [rsp+30h] [rbp-138h]
  unsigned __int64 v129; // [rsp+48h] [rbp-120h]
  unsigned __int64 v130; // [rsp+58h] [rbp-110h] BYREF
  void *ptr; // [rsp+60h] [rbp-108h] BYREF
  __int128 v132; // [rsp+68h] [rbp-100h]
  __int64 v133; // [rsp+80h] [rbp-E8h] BYREF
  int v134; // [rsp+88h] [rbp-E0h] BYREF
  int *v135; // [rsp+90h] [rbp-D8h]
  int *v136; // [rsp+98h] [rbp-D0h]
  int *v137; // [rsp+A0h] [rbp-C8h]
  __int64 v138; // [rsp+A8h] [rbp-C0h]
  char *s2; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v140; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 *v141; // [rsp+C8h] [rbp-A0h]
  __int128 *v142; // [rsp+D0h] [rbp-98h]
  __int64 v143; // [rsp+D8h] [rbp-90h]
  char v144[8]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v145; // [rsp+E8h] [rbp-80h]
  __int64 v146; // [rsp+F8h] [rbp-70h]
  char s[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v148; // [rsp+128h] [rbp-40h]

  v6 = a2;
  v148 = __readfsqword(0x28u);
  v8 = a5;
  while ( 1 )
  {
    v9 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 == 7 )
    {
      v22 = *(_QWORD *)(a1 + 16);
      v23 = a1;
      if ( !v22 )
      {
        v6 = 0;
        if ( (v8 & 1) == 0 )
          v6 = 0;
        goto LABEL_25;
      }
      v35 = v22 - 1;
      if ( a2 >= 0 || (v6 = v35 + a2, (__int64)(v35 + a2) >= 0) )
      {
        if ( v35 <= v6 )
          v6 = v22 - 1;
        if ( (v8 & 1) == 0 )
        {
LABEL_54:
          if ( a3 >= 0 )
          {
            v22 = v6;
            if ( v35 > a3 )
              v35 = a3;
            if ( v35 >= v6 )
              v6 = v35;
            goto LABEL_25;
          }
          goto LABEL_46;
        }
        if ( (__int64)(v6 + 1) < 0 )
        {
          v6 = 0x7FFFFFFFFFFFFFFFLL;
          a3 = 0x8000000000000000LL;
LABEL_46:
          v22 = v6;
          if ( (__int64)(v35 + a3) >= 0 )
          {
            if ( v35 > v35 + a3 )
              v35 += a3;
            if ( v35 >= v6 )
              v6 = v35;
          }
          goto LABEL_25;
        }
        v22 = v6++;
      }
      else
      {
        v6 = 0;
        if ( (v8 & 1) == 0 )
          goto LABEL_54;
        v22 = 0;
        v6 = 1;
      }
      if ( v35 < v6 )
      {
        if ( v35 < v22 )
          v35 = v22;
        v6 = v35;
      }
LABEL_25:
      v24 = *a4 == 7;
      v144[0] = 2;
      v146 = 0;
      v145 = 0;
      if ( !v24 )
      {
        v21 = sub_176730(v144, a4);
        if ( v21 || (v21 = sub_176BC0(v144)) != 0 )
        {
          sub_176520(v144);
          return v21;
        }
        a4 = v144;
      }
      v25 = *((_QWORD *)a4 + 2);
      v26 = v6 - v22;
      if ( v25 )
      {
        --v25;
        v27 = *(_QWORD *)(a1 + 8);
        if ( v25 >= v26 )
        {
          v113 = v6 - v22;
          memcpy((void *)(v27 + v22), *((const void **)a4 + 1), v6 - v22);
          if ( v6 - v22 >= v25 )
          {
LABEL_39:
            sub_176520(v144);
            return 0;
          }
          v28 = &unk_1BF7FD;
          v29 = v25 + v22 - v6;
          if ( *((_QWORD *)a4 + 2) | v113 )
            v28 = (const void *)(v113 + *((_QWORD *)a4 + 1));
          v30 = *(_QWORD *)(a1 + 16);
          v31 = *(_QWORD *)(a1 + 24);
          v32 = *(_QWORD *)(a1 + 8);
          if ( v30 )
          {
            --v30;
            v33 = v29 + v30;
            v34 = v29 + v30 + 1;
            if ( v31 >= v34 )
              goto LABEL_36;
            v43 = a1 + 8;
          }
          else
          {
            v34 = v29 + 1;
            v43 = a1 + 8;
            v33 = v29;
            if ( v31 >= v29 + 1 )
            {
              *(_QWORD *)(v23 + 16) = v34;
              *(_BYTE *)(v32 + v29) = 0;
LABEL_38:
              memmove((void *)(v30 + *(_QWORD *)(v23 + 8)), v28, v29);
              goto LABEL_39;
            }
          }
          v119 = v33;
          v115 = v28;
          v60 = sub_1987B0(v43, v32, v34, 1);
          *(_QWORD *)(v23 + 8) = v60;
          v33 = v119;
          v32 = v60;
          v28 = v115;
LABEL_36:
          *(_QWORD *)(v23 + 16) = v34;
          *(_BYTE *)(v32 + v33) = 0;
          if ( v6 < v30 )
          {
            v44 = v30;
            v114 = v28;
            v30 = v6;
            memmove((void *)(v6 + *(_QWORD *)(v23 + 8) + v29), (const void *)(v6 + *(_QWORD *)(v23 + 8)), v44 - v6);
            v28 = v114;
          }
          goto LABEL_38;
        }
      }
      else
      {
        if ( v22 == v6 )
          goto LABEL_39;
        v27 = *(_QWORD *)(a1 + 8);
      }
      v36 = *(_QWORD *)(a1 + 16);
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v22 < v37 )
        {
          v38 = v22;
          v39 = v6 - v25;
          if ( v6 - v25 < v37 )
          {
            v117 = v6 - v22;
            v61 = v37 - v6 + v25;
            memmove((void *)(v27 + v22), (const void *)(v27 + v39), v61);
            v27 = *(_QWORD *)(a1 + 8);
            v26 = v117;
            v38 = v61 + v22;
          }
          v40 = v38 + 1;
          v41 = v27;
          if ( *(_QWORD *)(a1 + 24) < v38 + 1 )
          {
            v120 = v26;
            v116 = v38;
            v41 = sub_1987B0(a1 + 8, v27, v38 + 1, 1);
            v26 = v120;
            v38 = v116;
            *(_QWORD *)(a1 + 8) = v41;
          }
          *(_QWORD *)(a1 + 16) = v40;
          *(_BYTE *)(v41 + v38) = 0;
          v27 = *(_QWORD *)(a1 + 8);
        }
      }
      v42 = v25;
      if ( v26 <= v25 )
        v42 = v26;
      memcpy((void *)(v27 + v22), *((const void **)a4 + 1), v42);
      goto LABEL_39;
    }
    if ( v9 != 10 )
      break;
    a1 = sub_176840(a1, 0);
    if ( !a1 )
      return sub_18FA20(0, 0);
  }
  v10 = a1;
  if ( v9 != 5 )
    return sub_18FA40(1568);
  v12 = v8 & 1;
  if ( v12 )
  {
    sub_19D9D0((unsigned int)s, 32, (unsigned int)"%llu", a2, (_BYTE)a5, (_DWORD)a6);
    return (unsigned int)sub_178DB0(a1, s, a4, 0);
  }
  v134 = 0;
  v136 = &v134;
  v137 = &v134;
  v13 = *a4;
  v135 = nullptr;
  v138 = 0;
  if ( v13 != 5 )
  {
    if ( v13 != 7 )
    {
      v21 = sub_18FA40(1568);
      sub_178620(v135);
      return v21;
    }
    v14 = *((_QWORD *)a4 + 2);
    if ( v14 )
    {
      a5 = 0;
      do
      {
        if ( a5 >= v14 - 1 )
          break;
        v45 = v135;
        v46 = &v134;
        if ( !v135 )
          goto LABEL_109;
        do
        {
          if ( *((_QWORD *)v45 + 4) < a5 )
          {
            v45 = *((int **)v45 + 3);
          }
          else
          {
            v46 = v45;
            v45 = *((int **)v45 + 2);
          }
        }
        while ( v45 );
        if ( v46 == &v134 || a5 < *((_QWORD *)v46 + 4) )
        {
LABEL_109:
          s1a = (char *)a5;
          v62 = operator new(0x48u);
          *(_BYTE *)(v62 + 40) = 2;
          *(_QWORD *)(v62 + 32) = s1a;
          *(_QWORD *)(v62 + 64) = 0;
          *(_OWORD *)(v62 + 48) = 0;
          v64 = (int *)sub_1722C0(&v133, v46, (unsigned __int64)s1a, v63, (__int64)s1a);
          a5 = (unsigned __int64)s1a;
          v46 = v64;
          if ( v65 )
          {
            v66 = v64 || &v134 == (int *)v65 || (unsigned __int64)s1a < *(_QWORD *)(v65 + 32);
            v46 = (int *)v62;
            std::_Rb_tree_insert_and_rebalance(v66, v62, v65, &v134);
            a5 = (unsigned __int64)s1a;
            ++v138;
          }
          else if ( v62 )
          {
            sub_176520(v62 + 40);
            operator delete((void *)v62, 0x48u);
            a5 = (unsigned __int64)s1a;
          }
        }
        v67 = &unk_1BF7FD;
        if ( *((_QWORD *)a4 + 2) | a5 )
          v67 = (_BYTE *)(*((_QWORD *)a4 + 1) + a5);
        sub_176520(v46 + 10);
        *((_BYTE *)v46 + 40) = 7;
        *(_OWORD *)(v46 + 14) = 0;
        *((_QWORD *)v46 + 6) = 0;
        v68 = (_BYTE *)sub_1987B0(v46 + 12, 0, 2, 1);
        *((_QWORD *)v46 + 6) = v68;
        ++v12;
        *((_QWORD *)v46 + 7) = 2;
        a5 = v12;
        *v68 = *v67;
        *(_BYTE *)(*((_QWORD *)v46 + 6) + 1LL) = 0;
        v14 = *((_QWORD *)a4 + 2);
      }
      while ( v14 );
      goto LABEL_117;
    }
    goto LABEL_10;
  }
  v47 = *((_QWORD *)a4 + 1);
  s2 = nullptr;
  v140 = 0;
  s2 = (char *)sub_1987B0(&s2, 0, 2, 1);
  *(_QWORD *)&v140 = 2;
  *s2 = 48;
  s2[1] = 0;
  v124 = v47 + 8;
  LODWORD(a6) = (_DWORD)s2;
  if ( !*(_QWORD *)(v47 + 16) )
  {
    if ( s2 )
    {
      *(_QWORD *)&v140 = 0;
      j__free(s2);
    }
    goto LABEL_117;
  }
  LODWORD(a5) = v140;
  v48 = *(_QWORD **)(v47 + 16);
  v49 = (char *)::s1;
  v50 = v47 + 8;
  v51 = s2;
  v52 = v140;
  if ( (_QWORD)v140 )
    v49 = s2;
  v126 = a1;
  v53 = v49;
  while ( 2 )
  {
    v59 = v48[5];
    if ( v52 )
    {
      v54 = v48;
      if ( !v59 )
      {
        v55 = ::s1;
        v56 = v51;
        goto LABEL_91;
      }
LABEL_99:
      v55 = (const char *)v48[4];
      v56 = v53;
LABEL_91:
      v57 = strcmp(v55, v56);
      v58 = (_QWORD *)v48[2];
      v48 = (_QWORD *)v48[3];
      if ( v57 >= 0 )
      {
        v50 = (__int64)v54;
        v48 = v58;
      }
      if ( !v48 )
      {
        v10 = v126;
        v6 = a2;
        a6 = v51;
        goto LABEL_133;
      }
      continue;
    }
    break;
  }
  if ( v59 )
  {
LABEL_98:
    v54 = v48;
    goto LABEL_99;
  }
  while ( 1 )
  {
    v58 = (_QWORD *)v48[2];
    if ( !v58 )
      break;
    v50 = (__int64)v48;
    v48 = (_QWORD *)v48[2];
    if ( v58[5] )
      goto LABEL_98;
  }
  a6 = v51;
  v112 = v48;
  v10 = v126;
  v6 = a2;
  v50 = (__int64)v112;
LABEL_133:
  if ( a6 )
  {
    *(_QWORD *)&v140 = 0;
    j__free(a6);
  }
  if ( v124 != v50 )
  {
    while ( 2 )
    {
      if ( !*(_QWORD *)(v50 + 40) )
        goto LABEL_117;
      v84 = *(char **)(v50 + 32);
      v85 = *v84;
      if ( !*v84 )
        goto LABEL_117;
      v86 = *(_QWORD *)(v50 + 32);
      if ( v85 != 48 )
      {
        while ( (unsigned __int8)(v85 - 48) <= 9u )
        {
          v85 = *(_BYTE *)++v86;
          if ( !v85 )
            goto LABEL_141;
        }
        goto LABEL_117;
      }
      if ( v84[1] )
        goto LABEL_117;
LABEL_141:
      sub_19DA80((_DWORD)v84, (unsigned int)"%llu", (unsigned int)&s2, (_DWORD)v58, a5, (_DWORD)a6);
      s1b = (char *)(v50 + 56);
      v87 = v135;
      if ( v135 )
      {
        v88 = &v134;
        do
        {
          while ( 1 )
          {
            v89 = *((_QWORD *)v87 + 2);
            v90 = *((_QWORD *)v87 + 3);
            if ( *((_QWORD *)v87 + 4) >= (unsigned __int64)s2 )
              break;
            v87 = *((int **)v87 + 3);
            if ( !v90 )
              goto LABEL_146;
          }
          v88 = v87;
          v87 = *((int **)v87 + 2);
        }
        while ( v89 );
LABEL_146:
        if ( v88 == &v134 || (unsigned __int64)s2 < *((_QWORD *)v88 + 4) )
        {
LABEL_148:
          v91 = operator new(0x48u);
          *(_BYTE *)(v91 + 40) = 2;
          v92 = s2;
          *(_QWORD *)(v91 + 32) = s2;
          *(_QWORD *)(v91 + 64) = 0;
          *(_OWORD *)(v91 + 48) = 0;
          v128 = v92;
          v95 = (int *)sub_1722C0(&v133, v88, (unsigned __int64)v92, v93, v94);
          v88 = v95;
          if ( v96 )
          {
            v97 = v95 || &v134 == (int *)v96 || (unsigned __int64)v128 < *(_QWORD *)(v96 + 32);
            v88 = (int *)v91;
            std::_Rb_tree_insert_and_rebalance(v97, v91, v96, &v134);
            ++v138;
          }
          else if ( v91 )
          {
            sub_176520(v91 + 40);
            operator delete((void *)v91, 0x48u);
          }
        }
        sub_176730(v88 + 10, s1b);
        v50 = std::_Rb_tree_increment(v50, s1b);
        if ( v50 == v124 )
          goto LABEL_117;
        continue;
      }
      break;
    }
    v88 = &v134;
    goto LABEL_148;
  }
LABEL_117:
  v12 = v138;
LABEL_10:
  s1 = *(char **)(v10 + 8);
  v15 = a3 - v6;
  if ( (__int64)(a3 - v6) < 0 )
    v15 = 0;
  v125 = v12 - v15;
  if ( v12 == v15 )
    goto LABEL_13;
  LODWORD(v140) = 0;
  v141 = &v140;
  v142 = &v140;
  *((_QWORD *)&v140 + 1) = 0;
  v143 = 0;
  ptr = nullptr;
  v132 = 0;
  ptr = (void *)sub_1987B0(&ptr, 0, 2, 1);
  *(_QWORD *)&v132 = 2;
  *(_BYTE *)ptr = 48;
  *((_BYTE *)ptr + 1) = 0;
  if ( !*((_QWORD *)s1 + 2) )
  {
    if ( ptr )
    {
      *(_QWORD *)&v132 = 0;
      j__free(ptr);
    }
    goto LABEL_165;
  }
  v71 = v132;
  v72 = (__int64)(s1 + 8);
  v73 = ::s1;
  v129 = v6;
  v74 = *((_QWORD **)s1 + 2);
  v75 = (const char *)ptr;
  if ( (_QWORD)v132 )
    v73 = (const char *)ptr;
  v76 = v73;
  while ( 2 )
  {
    v82 = v74[5];
    if ( v71 )
    {
      if ( !v82 )
      {
        v77 = ::s1;
        v78 = v74;
        v79 = v75;
        goto LABEL_124;
      }
LABEL_131:
      v77 = (const char *)v74[4];
      v78 = v74;
      v79 = v76;
LABEL_124:
      v80 = strcmp(v77, v79);
      v81 = (_QWORD *)v74[2];
      v74 = (_QWORD *)v74[3];
      if ( v80 >= 0 )
      {
        v72 = (__int64)v78;
        v74 = v81;
      }
      if ( !v74 )
      {
        v98 = s1 + 8;
        v6 = v129;
        v99 = (char *)v75;
        goto LABEL_161;
      }
      continue;
    }
    break;
  }
  if ( v82 )
    goto LABEL_131;
  while ( 1 )
  {
    v83 = v74[2];
    if ( !v83 )
      break;
    v72 = (__int64)v74;
    v74 = (_QWORD *)v74[2];
    if ( *(_QWORD *)(v83 + 40) )
      goto LABEL_131;
  }
  v99 = (char *)v75;
  v111 = v74;
  v98 = s1 + 8;
  v6 = v129;
  v72 = (__int64)v111;
LABEL_161:
  if ( v99 )
  {
    *(_QWORD *)&v132 = 0;
    j__free(v99);
  }
  while ( (char *)v72 != v98 )
  {
    if ( !*(_QWORD *)(v72 + 40) )
      break;
    v100 = *(char **)(v72 + 32);
    v101 = *v100;
    if ( !*v100 )
      break;
    v102 = *(_QWORD *)(v72 + 32);
    if ( v101 != 48 )
    {
      while ( (unsigned __int8)(v101 - 48) <= 9u )
      {
        v101 = *(_BYTE *)++v102;
        if ( !v101 )
          goto LABEL_170;
      }
      break;
    }
    if ( v100[1] )
      break;
LABEL_170:
    sub_19DA80((_DWORD)v100, (unsigned int)"%llu", (unsigned int)&v130, (_DWORD)v99, v69, v70);
    if ( v130 < v6 )
    {
      v72 = std::_Rb_tree_increment(v72);
    }
    else
    {
      if ( v130 >= a3 )
      {
        sub_19D9D0((unsigned int)s, 32, (unsigned int)"%llu", v130 + v125, v103, v104);
        ptr = nullptr;
        v132 = 0;
        v105 = strlen(s);
        ptr = (void *)sub_1987B0(&ptr, 0, v105 + 1, 1);
        *(_QWORD *)&v132 = v105 + 1;
        memmove(ptr, s, v105);
        *((_BYTE *)ptr + v105) = 0;
        v106 = sub_172CA0(&s2, (__int64)&ptr);
        sub_176730(v106, v72 + 56);
        if ( ptr )
        {
          *(_QWORD *)&v132 = 0;
          j__free(ptr);
        }
      }
      v107 = std::_Rb_tree_increment(v72);
      v108 = std::_Rb_tree_rebalance_for_erase(v72, v98);
      sub_176520(v108 + 56);
      v109 = *(void **)(v108 + 32);
      if ( v109 )
      {
        *(_QWORD *)(v108 + 40) = 0;
        j__free(v109);
      }
      v110 = (void *)v108;
      v72 = v107;
      operator delete(v110, 0x58u);
      --*((_QWORD *)s1 + 5);
    }
  }
LABEL_165:
  sub_176C50(s1, v141, &v140);
  sub_17A9C0(*((_QWORD *)&v140 + 1));
LABEL_13:
  for ( i = v136; i != &v134; i = (int *)std::_Rb_tree_increment(i) )
  {
    sub_19D9D0((unsigned int)s, 32, (unsigned int)"%llu", v6, (_BYTE)a5, (_DWORD)a6);
    s2 = nullptr;
    v140 = 0;
    v17 = strlen(s);
    v18 = v17 + 1;
    v19 = v17;
    s2 = (char *)sub_1987B0(&s2, 0, v17 + 1, 1);
    *(_QWORD *)&v140 = v18;
    memmove(s2, s, v19);
    s2[v19] = 0;
    v20 = sub_172CA0(s1, (__int64)&s2);
    sub_176730(v20, i + 10);
    if ( s2 )
    {
      *(_QWORD *)&v140 = 0;
      j__free(s2);
    }
    LODWORD(v6) = v6 + 1;
  }
  sub_178620(v135);
  return 0;
}
