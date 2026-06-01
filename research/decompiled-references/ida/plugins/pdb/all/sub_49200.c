__int64 __fastcall sub_49200(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, double a6, double a7, double a8)
{
  const char *v12; // r14
  size_t v13; // rax
  char v14; // al
  const char *v15; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  _QWORD *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  const char *v25; // rdx
  char v26; // al
  __int64 v27; // r15
  char *v28; // rdx
  char v29; // al
  const char *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbp
  size_t v35; // r9
  const char *v36; // r10
  void *v37; // rax
  int v38; // ebx
  unsigned int v39; // ebx
  unsigned __int64 max_strlit_length; // rbp
  int v41; // edx
  unsigned int v42; // edi
  char *v43; // rdx
  int v44; // eax
  signed __int64 v45; // rdx
  const char *v46; // rsi
  char *v47; // rbp
  char **v48; // rbx
  char *v49; // rax
  const char *v50; // rdi
  int v51; // eax
  _QWORD *v52; // rdi
  unsigned __int64 v53; // rax
  _QWORD *v54; // r15
  _QWORD *v55; // r13
  unsigned __int64 v56; // rdx
  _QWORD *v57; // rcx
  const char *v58; // rdi
  int v59; // eax
  _QWORD *v60; // rax
  _QWORD *v61; // r13
  unsigned __int64 v62; // rbp
  _QWORD *i; // rdx
  __int64 v64; // r8
  __int64 v65; // rsi
  _QWORD *v66; // rax
  __int64 v67; // rdi
  const char *v68; // r14
  unsigned __int64 v69; // [rsp+0h] [rbp-208h]
  char *v70; // [rsp+0h] [rbp-208h]
  unsigned __int64 v71; // [rsp+0h] [rbp-208h]
  _QWORD *v72; // [rsp+0h] [rbp-208h]
  _QWORD *v73; // [rsp+0h] [rbp-208h]
  size_t v74; // [rsp+8h] [rbp-200h]
  char *v75; // [rsp+10h] [rbp-1F8h]
  char *v76; // [rsp+10h] [rbp-1F8h]
  __int64 v77[2]; // [rsp+18h] [rbp-1F0h] BYREF
  unsigned __int64 *v78; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned __int64 *v79; // [rsp+38h] [rbp-1D0h] BYREF
  char *s1; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v81; // [rsp+48h] [rbp-1C0h]
  __int128 v82; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v83; // [rsp+70h] [rbp-198h]
  __int64 v84; // [rsp+78h] [rbp-190h]
  __int64 v85; // [rsp+80h] [rbp-188h]
  char v86; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v87[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v77[0] = a2;
  v87[0] = __readfsqword(0x28u);
  show_auto(a2, 0);
  if ( *(_QWORD *)(a3 + 8) )
  {
    v12 = *(const char **)a3;
    v13 = strlen(*(const char **)a3);
    if ( v13 > 0xE && !strcmp(&v12[v13 - 14], "_epilog1_start") )
      return 1;
    if ( !strncmp(v12, "Temp.", 5u) )
    {
      v14 = v12[5];
      if ( v14 )
      {
        v15 = v12 + 5;
        while ( (unsigned __int8)(v14 - 48) <= 9u )
        {
          v14 = *++v15;
          if ( !v14 )
            return 1;
        }
      }
    }
  }
  else
  {
    v12 = src;
  }
  if ( *v12 == 95
    && v12[1] == 108
    && v12[2] == 99
    && (unsigned __int8)(v12[3] - 48) <= 9u
    && (unsigned __int8)(v12[4] - 48) <= 9u
    && (unsigned __int8)(v12[5] - 48) <= 9u
    && v12[6] == 95
    && (unsigned __int8)(v12[7] - 48) <= 9u
    && (unsigned __int8)(v12[8] - 48) <= 9u
    && (unsigned __int8)(v12[9] - 48) <= 9u
    && (unsigned __int8)(v12[10] - 48) <= 9u
    && (unsigned __int8)(v12[11] - 48) <= 9u
    && (unsigned __int8)(v12[12] - 48) <= 9u
    && v12[13] == 95 )
  {
    return 1;
  }
  v17 = strncmp(v12, "??_C@_", 6u);
  v18 = v17;
  if ( !v17 )
  {
    if ( *(_BYTE *)(*(_QWORD *)a3 + 6LL) == 49 )
    {
      v41 = *(_DWORD *)(a1 + 532);
      if ( v41 < 0 )
      {
        v50 = "UTF-16LE";
        if ( (unsigned __int8)getinf_flag(3, 32) )
          v50 = "UTF-16BE";
        v51 = add_encoding(v50);
        *(_DWORD *)(a1 + 532) = v51;
        v41 = v51;
      }
      v18 = (v41 << 24) | 1u;
    }
    create_strlit(v77[0], 0, v18);
    return 1;
  }
  s1 = nullptr;
  v81 = 0;
  if ( a4 <= 0 && (int)demangle_name(&s1, v12, 245612135, 2) > 0 && (_QWORD)v81 && !strcmp(s1, "`string'") )
  {
    v38 = *(_DWORD *)(a1 + 532);
    if ( v38 < 0 )
    {
      v58 = "UTF-16LE";
      if ( (unsigned __int8)getinf_flag(3, 32) )
        v58 = "UTF-16BE";
      v59 = add_encoding(v58);
      *(_DWORD *)(a1 + 532) = v59;
      v38 = v59;
    }
    v39 = (v38 << 24) | 1;
    max_strlit_length = get_max_strlit_length(v77[0], 0, 0);
    if ( max_strlit_length >= get_max_strlit_length(v77[0], v39, 0) )
      v39 = 0;
    create_strlit(v77[0], 0, v39);
    goto LABEL_61;
  }
  v19 = *(_QWORD **)(a1 + 488);
  v20 = (_QWORD *)(a1 + 480);
  if ( !v19 )
  {
    v21 = (_QWORD *)(a1 + 480);
LABEL_34:
    v78 = (unsigned __int64 *)v77;
    v21 = sub_49070((_QWORD *)(a1 + 472), v21, 0.0, a7, a8, (__int64)&unk_93F91, &v78);
    goto LABEL_35;
  }
  v21 = (_QWORD *)(a1 + 480);
  do
  {
    while ( 1 )
    {
      v22 = v19[2];
      v23 = v19[3];
      if ( v19[4] < v77[0] )
        break;
      v21 = v19;
      v19 = (_QWORD *)v19[2];
      if ( !v22 )
        goto LABEL_32;
    }
    v19 = (_QWORD *)v19[3];
  }
  while ( v23 );
LABEL_32:
  if ( v20 == v21 || v77[0] < v21[4] )
    goto LABEL_34;
LABEL_35:
  if ( (_QWORD *)a3 != v21 + 5 )
  {
    v24 = *(_QWORD *)(a3 + 8);
    if ( !v24 || (v35 = v24 - 1, v24 == 1) )
    {
      v21[6] = 0;
    }
    else
    {
      v36 = *(const char **)a3;
      v37 = (void *)v21[5];
      if ( v21[7] < v24 )
      {
        v76 = *(char **)a3;
        v74 = v24 - 1;
        v71 = *(_QWORD *)(a3 + 8);
        v37 = (void *)qvector_reserve(v21 + 5, v21[5], v71, 1);
        v36 = v76;
        v35 = v74;
        v21[5] = v37;
        v24 = v71;
      }
      v21[6] = v24;
      v69 = v24;
      memmove(v37, v36, v35);
      *(_BYTE *)(v21[5] + v69 - 1) = 0;
    }
  }
  v25 = src;
  if ( *(_QWORD *)(a3 + 8) )
    v25 = *(const char **)a3;
  v26 = sub_34240(a1, v77[0], v25);
  v27 = v77[0];
  if ( v26 )
    goto LABEL_60;
  v28 = (char *)src;
  if ( (_QWORD)v81 )
    v28 = s1;
  v29 = sub_34240(a1, v77[0], v28);
  v27 = v77[0];
  if ( v29 )
    goto LABEL_60;
  if ( !*(_QWORD *)(a3 + 8) )
  {
    if ( a4 >= 0 )
    {
      v30 = src;
      if ( a4 )
        goto LABEL_49;
      goto LABEL_47;
    }
LABEL_60:
    set_notcode(v27);
    goto LABEL_61;
  }
  v75 = *(char **)a3;
  if ( !strncmp(*(const char **)a3, "__IMPORT_DESCRIPTOR", 0x13u) )
    goto LABEL_60;
  if ( !strncmp(v75, "__real@", 7u) )
  {
    v42 = v75[7];
    if ( v42 <= 0x7F )
    {
      v43 = v75 + 7;
      do
      {
        v70 = v43;
        v44 = isxdigit(v42);
        v43 = v70;
        if ( !v44 )
          break;
        v42 = v70[1];
        v43 = v70 + 1;
      }
      while ( v42 <= 0x7F );
      v45 = v43 - (v75 + 7);
      switch ( v45 )
      {
        case 8LL:
          create_data(v27, 0x80000000LL, 4, -1);
          break;
        case 16LL:
          create_data(v27, 2415919104LL, 8, -1);
          break;
        case 20LL:
          create_data(v27, 0x40000000, 10, -1);
          break;
        default:
          goto LABEL_84;
      }
      v27 = v77[0];
      goto LABEL_60;
    }
  }
LABEL_84:
  if ( a4 < 0 )
    goto LABEL_60;
  v30 = v75;
  if ( a4 )
    goto LABEL_49;
LABEL_47:
  if ( (unsigned int)get_mangled_name_type(v30) == 1 )
    goto LABEL_61;
  v27 = v77[0];
LABEL_49:
  v31 = getseg(v27);
  if ( !v31 || (*(_BYTE *)(v31 + 44) & 0x10) == 0 )
    goto LABEL_61;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 12LL) & 8) == 0 )
    goto LABEL_54;
  if ( a5 == 104 )
    goto LABEL_54;
  v32 = v77[0];
  v77[0] &= ~1uLL;
  if ( (v32 & 1) == 0 )
    goto LABEL_54;
  v52 = *(_QWORD **)(a1 + 488);
  v53 = v32 | 1;
  v54 = (_QWORD *)(a1 + 480);
  if ( !v52 )
  {
LABEL_121:
    if ( *(_QWORD **)(a1 + 496) != v54 || v20 != v54 )
      goto LABEL_124;
    goto LABEL_123;
  }
  v55 = *(_QWORD **)(a1 + 488);
  while ( 1 )
  {
    v56 = v55[4];
    if ( v56 >= v53 )
      break;
    v55 = (_QWORD *)v55[3];
LABEL_114:
    if ( !v55 )
      goto LABEL_121;
  }
  v57 = (_QWORD *)v55[2];
  if ( v53 < v56 )
  {
    v54 = v55;
    v55 = (_QWORD *)v55[2];
    goto LABEL_114;
  }
  for ( i = (_QWORD *)v55[3]; i; i = (_QWORD *)i[3] )
  {
    while ( 1 )
    {
      v64 = i[2];
      if ( v53 >= i[4] )
        break;
      v54 = i;
      i = (_QWORD *)i[2];
      if ( !v64 )
        goto LABEL_141;
    }
  }
LABEL_141:
  while ( v57 )
  {
    while ( 1 )
    {
      v65 = v57[2];
      if ( v57[4] < v53 )
        break;
      v55 = v57;
      v57 = (_QWORD *)v57[2];
      if ( !v65 )
        goto LABEL_144;
    }
    v57 = (_QWORD *)v57[3];
  }
LABEL_144:
  if ( *(_QWORD **)(a1 + 496) == v55 && v20 == v54 )
  {
LABEL_123:
    sub_272C0(v52);
    v52 = nullptr;
    *(_QWORD *)(a1 + 488) = 0;
    *(_QWORD *)(a1 + 496) = v20;
    *(_QWORD *)(a1 + 504) = v20;
    *(_QWORD *)(a1 + 512) = 0;
    goto LABEL_124;
  }
  if ( v54 != v55 )
  {
    do
    {
      v72 = v55;
      v55 = (_QWORD *)std::_Rb_tree_increment(v55);
      v66 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v72, a1 + 480);
      v67 = v66[5];
      if ( v67 )
      {
        v66[6] = 0;
        v73 = v66;
        qfree(v67);
        v66 = v73;
      }
      operator delete(v66, 0x40u);
      --*(_QWORD *)(a1 + 512);
    }
    while ( v55 != v54 );
    v52 = *(_QWORD **)(a1 + 488);
  }
LABEL_124:
  v60 = v52;
  if ( !v52 )
  {
    v61 = (_QWORD *)(a1 + 480);
    goto LABEL_132;
  }
  v61 = (_QWORD *)(a1 + 480);
  do
  {
    if ( v60[4] >= v77[0] )
    {
      v61 = v60;
      v60 = (_QWORD *)v60[2];
    }
    else
    {
      v60 = (_QWORD *)v60[3];
    }
  }
  while ( v60 );
  if ( v61 == v20 || v77[0] < v61[4] )
  {
LABEL_132:
    v79 = (unsigned __int64 *)v77;
    v61 = sub_49070((_QWORD *)(a1 + 472), v61, 0.0, a7, a8, (__int64)&unk_93F91, &v79);
  }
  if ( (_QWORD *)a3 != v61 + 5 )
  {
    v62 = *(_QWORD *)(a3 + 8);
    if ( v62 > 1 )
    {
      v68 = *(const char **)a3;
      if ( v61[7] < v62 )
        v61[5] = qvector_reserve(v61 + 5, v61[5], *(_QWORD *)(a3 + 8), 1);
      v61[6] = v62;
      memmove((void *)v61[5], v68, v62 - 1);
      *(_BYTE *)(v61[5] + v62 - 1) = 0;
    }
    else
    {
      v61[6] = 0;
    }
  }
LABEL_54:
  if ( !a4 )
  {
    if ( (unsigned __int8)segtype(v77[0]) == 3 )
      goto LABEL_98;
    v46 = src;
    if ( *(_QWORD *)(a3 + 8) )
      v46 = *(const char **)a3;
    if ( (int)demangle_name(&s1, v46, 104857607, 2) <= 0 )
    {
LABEL_98:
      if ( (segtype(v77[0]) & 0xFD) != 0 )
        goto LABEL_61;
      v83 = -1;
      v49 = &v86;
      v84 = 0;
      v85 = 0;
      v82 = -1;
      do
      {
        *(_WORD *)v49 = 0;
        v49 += 40;
        *((_WORD *)v49 - 19) = 0;
        *((_WORD *)v49 - 18) = 0;
        *((_DWORD *)v49 - 2) = 0;
        *((_WORD *)v49 - 17) = 0;
        *((_OWORD *)v49 - 2) = 0;
        *((_QWORD *)v49 - 2) = 0;
      }
      while ( v87 != (_QWORD *)v49 );
      if ( !(unsigned int)decode_insn(&v82, v77[0], v87, 0.0) || sub_29E40(0x20u, &v82, 1) < 0 )
        goto LABEL_61;
      goto LABEL_56;
    }
    if ( (_QWORD)v81 )
    {
      v47 = s1;
      if ( strchr(s1, 40) )
      {
LABEL_56:
        v33 = v77[0];
        v34 = v77[0] + 1;
        auto_mark_range(v77[0], v77[0] + 1, 20);
        auto_mark_range(v33, v34, 30);
        goto LABEL_61;
      }
    }
    else
    {
      v47 = (char *)src;
    }
    v48 = off_AA560;
    while ( !strstr(v47, *v48) )
    {
      if ( algn_AA598 == (_BYTE *)++v48 )
        goto LABEL_98;
    }
    goto LABEL_56;
  }
  if ( a4 == 1 )
    goto LABEL_56;
LABEL_61:
  if ( s1 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(s1);
  }
  return 1;
}

