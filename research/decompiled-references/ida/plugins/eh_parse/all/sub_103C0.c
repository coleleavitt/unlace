unsigned __int64 __fastcall sub_103C0(__int64 a1, __int64 *a2, _DWORD *a3)
{
  _DWORD *v3; // rbp
  int *v5; // rdx
  __int64 v6; // rax
  int *v7; // rbx
  unsigned __int64 v8; // rdx
  bool v9; // r12
  __int64 v10; // rax
  char *v11; // rax
  __int64 v12; // rdx
  __int64 flags; // rbx
  __int64 v14; // rdx
  int *v15; // r12
  int *v16; // rax
  int *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  char v21; // cl
  int *v22; // rax
  bool v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned int v28; // ebx
  _DWORD *v29; // r14
  int *v30; // r8
  int *v31; // rax
  int *v32; // rdi
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  char v35; // bl
  __int64 v36; // rbp
  __int64 v37; // rax
  int *v38; // rbx
  int *v39; // r14
  unsigned __int64 v40; // rax
  int *v41; // rdx
  bool v42; // al
  int *v43; // rax
  int *v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rdx
  char m; // al
  __int64 v48; // rdx
  int v49; // eax
  int *v51; // rax
  unsigned __int64 v52; // rax
  char i; // al
  int *v54; // rax
  int *v55; // rdi
  __int64 v56; // rcx
  int *v57; // rdi
  int *v58; // rax
  __int64 v59; // rcx
  char v60; // di
  _DWORD *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  char j; // al
  bool v65; // r14
  int *v66; // r12
  int *v67; // rdx
  int *v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rcx
  int *k; // rax
  __int64 v72; // r8
  __int64 v73; // rsi
  int *v74; // rdi
  void *v75; // rax
  __int64 v76; // rbp
  char v77; // cl
  int *v78; // rax
  unsigned __int64 v79; // rax
  bool v80; // cl
  int *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rbp
  char v84; // r12
  __int64 *func; // rax
  __int64 v87; // [rsp+18h] [rbp-280h]
  unsigned int v88; // [rsp+24h] [rbp-274h]
  int *v89; // [rsp+28h] [rbp-270h]
  unsigned __int64 v90; // [rsp+28h] [rbp-270h]
  int *v91; // [rsp+28h] [rbp-270h]
  char v94[8]; // [rsp+50h] [rbp-248h] BYREF
  _DWORD *v95; // [rsp+58h] [rbp-240h]
  char v96; // [rsp+61h] [rbp-237h]
  _BYTE v97[17]; // [rsp+70h] [rbp-228h] BYREF
  char v98; // [rsp+81h] [rbp-217h]
  int v99; // [rsp+98h] [rbp-200h] BYREF
  int *v100; // [rsp+A0h] [rbp-1F8h]
  int *v101; // [rsp+A8h] [rbp-1F0h]
  int *v102; // [rsp+B0h] [rbp-1E8h]
  __int64 v103; // [rsp+B8h] [rbp-1E0h]
  int v104; // [rsp+C8h] [rbp-1D0h] BYREF
  int *v105; // [rsp+D0h] [rbp-1C8h]
  int *v106; // [rsp+D8h] [rbp-1C0h]
  int *v107; // [rsp+E0h] [rbp-1B8h]
  __int64 v108; // [rsp+E8h] [rbp-1B0h]
  __int128 v109; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v110; // [rsp+100h] [rbp-198h]
  __int64 v111; // [rsp+108h] [rbp-190h]
  __int64 v112; // [rsp+110h] [rbp-188h]
  char v113; // [rsp+118h] [rbp-180h] BYREF
  _QWORD v114[8]; // [rsp+258h] [rbp-40h] BYREF

  v3 = a3;
  v5 = &v104;
  v114[0] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 8);
  v99 = 0;
  v100 = nullptr;
  v101 = &v99;
  v102 = &v99;
  v103 = 0;
  v104 = 0;
  v105 = nullptr;
  v106 = &v104;
  v107 = &v104;
  v108 = 0;
  if ( (unsigned int)(*(_DWORD *)(v6 + 4) - 12) > 1 || a3 == (_DWORD *)-1LL )
  {
LABEL_2:
    v7 = &v104;
    if ( v5 == &v104 )
    {
      v9 = 1;
      goto LABEL_6;
    }
LABEL_3:
    v8 = *(_QWORD *)(std::_Rb_tree_decrement(v7) + 32);
    goto LABEL_4;
  }
  v3 = (_DWORD *)((unsigned int)a3 & 0xFFFFFFFE);
  if ( (unsigned __int8)getinf_flag(3, 4) )
    v3 = a3;
  v7 = v105;
  if ( !v105 )
  {
    v5 = v106;
    goto LABEL_2;
  }
  while ( 1 )
  {
    v8 = *((_QWORD *)v7 + 4);
    v77 = 0;
    v78 = *((int **)v7 + 3);
    if ( (unsigned __int64)v3 < v8 )
    {
      v78 = *((int **)v7 + 2);
      v77 = 1;
    }
    if ( !v78 )
      break;
    v7 = v78;
  }
  if ( v77 )
  {
    if ( v7 == v106 )
    {
      v9 = 1;
      if ( v7 == &v104 )
        goto LABEL_6;
LABEL_173:
      v9 = (unsigned __int64)v3 < *((_QWORD *)v7 + 4);
      goto LABEL_6;
    }
    goto LABEL_3;
  }
LABEL_4:
  if ( v8 >= (unsigned __int64)v3 )
    goto LABEL_7;
  v9 = 1;
  if ( v7 != &v104 )
    goto LABEL_173;
LABEL_6:
  v10 = operator new(0x28u);
  *(_QWORD *)(v10 + 32) = v3;
  std::_Rb_tree_insert_and_rebalance(v9, v10, v7, &v104);
  ++v108;
LABEL_7:
  v87 = -1;
LABEL_8:
  v11 = &v113;
  v111 = 0;
  v112 = 0;
  v109 = -1;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 40;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *((_QWORD *)v11 - 2) = 0;
  }
  while ( v114 != (_QWORD *)v11 );
  v110 = -1;
  flags = get_flags_ex(v3, 4, v114);
  while ( 1 )
  {
    if ( (flags & 0x600) == 0x600 )
    {
      v88 = decode_insn(&v109, v3, v12, 0.0);
      if ( !v88 )
        goto LABEL_131;
    }
    else
    {
      if ( (flags & 0x600) != 0 )
        goto LABEL_131;
      v88 = decode_insn(&v109, v3, v12, 0.0);
      if ( !v88 )
        goto LABEL_131;
      create_insn(v3, 0);
      flags = get_flags_ex(v3, 4, v14);
    }
    if ( (flags & 0x1000) != 0 )
    {
      v15 = v105;
      if ( !v105 )
      {
        v15 = &v104;
        if ( v106 == &v104 )
        {
          v23 = 1;
LABEL_32:
          v24 = operator new(0x28u);
          *(_QWORD *)(v24 + 32) = v3;
          std::_Rb_tree_insert_and_rebalance(v23, v24, v15, &v104);
          ++v108;
          goto LABEL_33;
        }
        goto LABEL_151;
      }
      v16 = v105;
      v17 = &v104;
      do
      {
        while ( 1 )
        {
          v18 = *((_QWORD *)v16 + 2);
          v19 = *((_QWORD *)v16 + 3);
          if ( *((_QWORD *)v16 + 4) < (unsigned __int64)v3 )
            break;
          v17 = v16;
          v16 = *((int **)v16 + 2);
          if ( !v18 )
            goto LABEL_21;
        }
        v16 = *((int **)v16 + 3);
      }
      while ( v19 );
LABEL_21:
      if ( v17 == &v104 || (unsigned __int64)v3 < *((_QWORD *)v17 + 4) )
      {
        while ( 1 )
        {
          v20 = *((_QWORD *)v15 + 4);
          v21 = 0;
          v22 = *((int **)v15 + 3);
          if ( (unsigned __int64)v3 < v20 )
          {
            v22 = *((int **)v15 + 2);
            v21 = 1;
          }
          if ( !v22 )
            break;
          v15 = v22;
        }
        if ( !v21 )
        {
LABEL_29:
          if ( v20 >= (unsigned __int64)v3 )
            goto LABEL_33;
          goto LABEL_30;
        }
        if ( v15 == v106 )
        {
LABEL_30:
          v23 = 1;
          if ( v15 != &v104 )
            v23 = (unsigned __int64)v3 < *((_QWORD *)v15 + 4);
          goto LABEL_32;
        }
LABEL_151:
        v20 = *(_QWORD *)(std::_Rb_tree_decrement(v15) + 32);
        goto LABEL_29;
      }
    }
LABEL_33:
    v25 = sub_136E0(a1, &v109);
    if ( v25 != -1 )
    {
      if ( v87 != v25 || !a2 )
        goto LABEL_131;
      if ( (int)get_func_chunknum(a2, v87) < 0 )
      {
        v83 = *a2;
        v84 = sub_EB40(a1, (__int64)a2, v87);
        func = (__int64 *)get_func(v83);
        a2 = func;
        if ( v84 )
          a2 = (__int64 *)sub_EAB0(func);
        goto LABEL_131;
      }
      if ( (flags & 0x10000) != 0 )
        goto LABEL_50;
LABEL_159:
      v76 = *a2;
      v35 = sub_EB40(a1, (__int64)a2, v87);
      a2 = (__int64 *)get_func(v76);
      goto LABEL_47;
    }
    v26 = (unsigned __int64)v3;
    v87 = sub_13740(a1, &v109, v87);
    v28 = xrefblk_t_first_from(v94, v3, 5);
    if ( (_BYTE)v28 )
    {
      while ( 1 )
      {
        v29 = v95;
        if ( (unsigned __int8)(v96 - 16) > 1u )
        {
          v26 = (unsigned __int64)v95;
          for ( i = xrefblk_t_first_to(v97, v95, 5); i; i = xrefblk_t_next_to(v97) )
          {
            if ( (unsigned __int8)(v98 - 16) <= 1u )
              goto LABEL_36;
          }
          v54 = v105;
          v55 = &v104;
          if ( v105 )
          {
            do
            {
              while ( 1 )
              {
                v56 = *((_QWORD *)v54 + 2);
                v34 = *((_QWORD *)v54 + 3);
                if ( *((_QWORD *)v54 + 4) < (unsigned __int64)v29 )
                  break;
                v55 = v54;
                v54 = *((int **)v54 + 2);
                if ( !v56 )
                  goto LABEL_95;
              }
              v54 = *((int **)v54 + 3);
            }
            while ( v34 );
LABEL_95:
            if ( v55 != &v104 && (unsigned __int64)v29 >= *((_QWORD *)v55 + 4) )
              goto LABEL_43;
          }
          v26 = (unsigned __int64)v100;
          v57 = &v99;
          v58 = v100;
          if ( !v100 )
          {
            v26 = (unsigned __int64)&v99;
            if ( v101 == &v99 )
              goto LABEL_113;
            goto LABEL_153;
          }
          do
          {
            while ( 1 )
            {
              v59 = *((_QWORD *)v58 + 2);
              v34 = *((_QWORD *)v58 + 3);
              if ( *((_QWORD *)v58 + 4) < (unsigned __int64)v29 )
                break;
              v57 = v58;
              v58 = *((int **)v58 + 2);
              if ( !v59 )
                goto LABEL_102;
            }
            v58 = *((int **)v58 + 3);
          }
          while ( v34 );
LABEL_102:
          if ( v57 != &v99 && (unsigned __int64)v29 >= *((_QWORD *)v57 + 4) )
            goto LABEL_43;
          while ( 1 )
          {
            v34 = *(_QWORD *)(v26 + 32);
            v60 = 0;
            v61 = *(_DWORD **)(v26 + 24);
            if ( (unsigned __int64)v29 < v34 )
            {
              v61 = *(_DWORD **)(v26 + 16);
              v60 = v28;
            }
            if ( !v61 )
              break;
            v26 = (unsigned __int64)v61;
          }
          if ( v60 )
          {
            if ( (int *)v26 == v101 )
            {
LABEL_111:
              if ( (int *)v26 != &v99 )
                LOBYTE(v28) = (unsigned __int64)v29 < *(_QWORD *)(v26 + 32);
LABEL_113:
              v90 = v26;
              v62 = operator new(0x28u);
              *(_QWORD *)(v62 + 32) = v29;
              v26 = v62;
              std::_Rb_tree_insert_and_rebalance((unsigned __int8)v28, v62, v90, &v99);
              ++v103;
              goto LABEL_43;
            }
LABEL_153:
            v34 = *(_QWORD *)(std::_Rb_tree_decrement(v26) + 32);
          }
          if ( v34 < (unsigned __int64)v29 )
            goto LABEL_111;
          goto LABEL_43;
        }
LABEL_36:
        v30 = v105;
        if ( !v105 )
          break;
        v31 = v105;
        v32 = &v104;
        do
        {
          while ( 1 )
          {
            v33 = *((_QWORD *)v31 + 2);
            v34 = *((_QWORD *)v31 + 3);
            if ( *((_QWORD *)v31 + 4) < (unsigned __int64)v29 )
              break;
            v32 = v31;
            v31 = *((int **)v31 + 2);
            if ( !v33 )
              goto LABEL_41;
          }
          v31 = *((int **)v31 + 3);
        }
        while ( v34 );
LABEL_41:
        if ( v32 != &v104 && (unsigned __int64)v29 >= *((_QWORD *)v32 + 4) )
          goto LABEL_43;
        while ( 1 )
        {
          v34 = *((_QWORD *)v30 + 4);
          v26 = 0;
          v51 = *((int **)v30 + 3);
          if ( (unsigned __int64)v29 < v34 )
          {
            v51 = *((int **)v30 + 2);
            v26 = v28;
          }
          if ( !v51 )
            break;
          v30 = v51;
        }
        if ( (_BYTE)v26 )
        {
          if ( v106 == v30 )
          {
LABEL_83:
            if ( v30 != &v104 )
              LOBYTE(v28) = (unsigned __int64)v29 < *((_QWORD *)v30 + 4);
LABEL_85:
            v89 = v30;
            v52 = operator new(0x28u);
            *(_QWORD *)(v52 + 32) = v29;
            v26 = v52;
            std::_Rb_tree_insert_and_rebalance((unsigned __int8)v28, v52, v89, &v104);
            ++v108;
            goto LABEL_43;
          }
          goto LABEL_115;
        }
LABEL_82:
        if ( v34 < (unsigned __int64)v29 )
          goto LABEL_83;
LABEL_43:
        v28 = xrefblk_t_next_from(v94, v26, v34);
        if ( !(_BYTE)v28 )
          goto LABEL_44;
      }
      v30 = &v104;
      if ( v106 == &v104 )
        goto LABEL_85;
LABEL_115:
      v91 = v30;
      v63 = std::_Rb_tree_decrement(v30);
      v30 = v91;
      v34 = *(_QWORD *)(v63 + 32);
      goto LABEL_82;
    }
LABEL_44:
    v3 = (_DWORD *)((char *)v3 + v88);
    flags = get_flags_ex(v3, 4, v27);
    if ( (flags & 0x1000) != 0 )
      break;
LABEL_45:
    if ( (flags & 0x10000) == 0 )
      goto LABEL_46;
  }
  for ( j = xrefblk_t_first_to(v97, v3, 5); ; j = xrefblk_t_next_to(v97) )
  {
    v65 = j;
    if ( !j )
      goto LABEL_45;
    if ( (unsigned __int8)(v98 - 16) <= 1u )
      break;
  }
  v66 = v105;
  v67 = &v104;
  v68 = v105;
  if ( !v105 )
  {
    v66 = &v104;
    if ( v106 != &v104 )
    {
LABEL_183:
      v79 = *(_QWORD *)(std::_Rb_tree_decrement(v66) + 32);
LABEL_184:
      if ( v79 >= (unsigned __int64)v3 )
        goto LABEL_131;
      goto LABEL_185;
    }
    goto LABEL_187;
  }
  do
  {
    while ( 1 )
    {
      v69 = *((_QWORD *)v68 + 2);
      v70 = *((_QWORD *)v68 + 3);
      if ( *((_QWORD *)v68 + 4) < (unsigned __int64)v3 )
        break;
      v67 = v68;
      v68 = *((int **)v68 + 2);
      if ( !v69 )
        goto LABEL_129;
    }
    v68 = *((int **)v68 + 3);
  }
  while ( v70 );
LABEL_129:
  if ( v67 == &v104 || (unsigned __int64)v3 < *((_QWORD *)v67 + 4) )
  {
    while ( 1 )
    {
      v79 = *((_QWORD *)v66 + 4);
      v80 = 0;
      v81 = *((int **)v66 + 3);
      if ( (unsigned __int64)v3 < v79 )
      {
        v81 = *((int **)v66 + 2);
        v80 = v65;
      }
      if ( !v81 )
        break;
      v66 = v81;
    }
    if ( !v80 )
      goto LABEL_184;
    if ( v106 != v66 )
      goto LABEL_183;
LABEL_185:
    if ( v66 != &v104 )
      v65 = (unsigned __int64)v3 < *((_QWORD *)v66 + 4);
LABEL_187:
    v82 = operator new(0x28u);
    *(_QWORD *)(v82 + 32) = v3;
    std::_Rb_tree_insert_and_rebalance(v65, v82, v66, &v104);
    ++v108;
  }
LABEL_131:
  if ( (flags & 0x10000) != 0 )
    goto LABEL_50;
LABEL_46:
  v35 = a2 != nullptr && v87 != -1;
  if ( v35 )
    goto LABEL_159;
LABEL_47:
  v36 = sub_136E0(a1, &v109);
  sub_13710(a1, &v109, v87, a3);
  v37 = sub_136E0(a1, &v109);
  if ( a2 && (v36 != v37 || v35) )
    a2 = (__int64 *)sub_EAB0(a2);
LABEL_50:
  while ( 2 )
  {
    if ( v103 )
    {
LABEL_51:
      v3 = *((_DWORD **)v101 + 4);
      if ( v100 )
      {
        v38 = v100;
        v39 = &v99;
        while ( 1 )
        {
          while ( 1 )
          {
            v40 = *((_QWORD *)v38 + 4);
            if ( v40 >= (unsigned __int64)v3 )
              break;
            v38 = *((int **)v38 + 3);
            if ( !v38 )
              goto LABEL_57;
          }
          v41 = *((int **)v38 + 2);
          if ( (unsigned __int64)v3 >= v40 )
            break;
          v39 = v38;
          v38 = *((int **)v38 + 2);
          if ( !v41 )
          {
LABEL_57:
            v42 = v39 == &v99;
            goto LABEL_58;
          }
        }
        for ( k = *((int **)v38 + 3); k; k = *((int **)k + 3) )
        {
          while ( 1 )
          {
            v72 = *((_QWORD *)k + 2);
            if ( (unsigned __int64)v3 >= *((_QWORD *)k + 4) )
              break;
            v39 = k;
            k = *((int **)k + 2);
            if ( !v72 )
              goto LABEL_137;
          }
        }
LABEL_137:
        while ( v41 )
        {
          while ( 1 )
          {
            v73 = *((_QWORD *)v41 + 2);
            if ( *((_QWORD *)v41 + 4) < (unsigned __int64)v3 )
              break;
            v38 = v41;
            v41 = *((int **)v41 + 2);
            if ( !v73 )
              goto LABEL_140;
          }
          v41 = *((int **)v41 + 3);
        }
LABEL_140:
        if ( v38 == v101 && v39 == &v99 )
        {
LABEL_60:
          sub_E1D0(v100);
          v101 = &v99;
          v100 = nullptr;
          v102 = &v99;
          v103 = 0;
        }
        else
        {
          while ( v38 != v39 )
          {
            v74 = v38;
            v38 = (int *)std::_Rb_tree_increment(v38);
            v75 = (void *)std::_Rb_tree_rebalance_for_erase(v74, &v99);
            operator delete(v75, 0x28u);
            --v103;
          }
        }
      }
      else
      {
        v42 = 1;
        v39 = &v99;
LABEL_58:
        if ( v101 == v39 && v42 )
          goto LABEL_60;
      }
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) - 12) <= 1
        && v3 != (_DWORD *)-1LL
        && !(unsigned __int8)getinf_flag(3, 4) )
      {
        v3 = (_DWORD *)((unsigned int)v3 & 0xFFFFFFFE);
      }
      v43 = v105;
      if ( v105 )
      {
        v44 = &v104;
        do
        {
          while ( 1 )
          {
            v45 = *((_QWORD *)v43 + 2);
            v46 = *((_QWORD *)v43 + 3);
            if ( *((_QWORD *)v43 + 4) < (unsigned __int64)v3 )
              break;
            v44 = v43;
            v43 = *((int **)v43 + 2);
            if ( !v45 )
              goto LABEL_67;
          }
          v43 = *((int **)v43 + 3);
        }
        while ( v46 );
LABEL_67:
        if ( v44 != &v104 && (unsigned __int64)v3 >= *((_QWORD *)v44 + 4) )
          continue;
      }
      for ( m = xrefblk_t_first_to(v97, v3, 5); m; m = xrefblk_t_next_to(v97) )
      {
        if ( (unsigned __int8)(v98 - 16) <= 1u )
          goto LABEL_50;
      }
      v49 = get_flags_ex(v3, 4, v48);
      if ( (~(_WORD)v49 & 0x600) != 0 || (v49 & 0x10000000) == 0 )
        goto LABEL_8;
      if ( !v103 )
        break;
      goto LABEL_51;
    }
    break;
  }
  sub_E1D0(v105);
  sub_E1D0(v100);
  return v114[0] - __readfsqword(0x28u);
}

