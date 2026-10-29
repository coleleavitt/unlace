unsigned __int64 __fastcall sub_1C410(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  char byte; // r13
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rdi
  unsigned int dword; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // r13d
  __int64 v18; // rbp
  const char *v19; // rsi
  unsigned int v20; // r12d
  char v21; // bp
  const char *v22; // rsi
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rbp
  const char *v28; // rsi
  __int64 v29; // r12
  unsigned int v30; // eax
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  const char *v34; // rsi
  __int64 v35; // rbx
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // edx
  const char *v40; // rsi
  char v41; // r12
  __int64 v42; // rbx
  unsigned int v43; // eax
  __int64 v44; // rdx
  unsigned __int64 v45; // r14
  __int64 v46; // rbp
  __int64 v47; // r13
  unsigned __int64 v48; // rsi
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // r13
  char v52; // al
  __int64 v53; // r13
  __int64 v54; // rdx
  int v55; // r13d
  int v56; // ebx
  char i; // al
  char *v58; // rdx
  const char *v59; // rsi
  unsigned int v60; // eax
  __int64 v61; // r12
  __int64 v62; // rbp
  __int64 v63; // rax
  __int64 v64; // r12
  unsigned int v65; // eax
  __int64 v66; // rbp
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // rbp
  unsigned int v70; // eax
  __int64 v71; // r12
  __int64 v72; // r13
  __int64 v73; // rax
  __int64 v74; // r12
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rbp
  __int64 v79; // rbx
  __int64 v80; // rbx
  __int64 func; // rax
  __int64 v82; // rbx
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  unsigned int v86; // [rsp+0h] [rbp-148h]
  const char *v88; // [rsp+10h] [rbp-138h]
  int v89; // [rsp+10h] [rbp-138h]
  bool v90; // [rsp+18h] [rbp-130h]
  __int64 v91; // [rsp+18h] [rbp-130h]
  __int64 v93; // [rsp+30h] [rbp-118h]
  __int64 v94; // [rsp+30h] [rbp-118h]
  __int64 v95; // [rsp+30h] [rbp-118h]
  unsigned __int64 v96; // [rsp+38h] [rbp-110h]
  bool v97; // [rsp+38h] [rbp-110h]
  int v98; // [rsp+40h] [rbp-108h]
  __int64 v99; // [rsp+40h] [rbp-108h]
  unsigned __int64 v100; // [rsp+48h] [rbp-100h]
  char v101; // [rsp+58h] [rbp-F0h]
  int v102; // [rsp+58h] [rbp-F0h]
  int v103; // [rsp+5Ch] [rbp-ECh]
  int v104; // [rsp+6Ch] [rbp-DCh] BYREF
  int v105; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v106; // [rsp+74h] [rbp-D4h] BYREF
  __int64 v107; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v108; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v110; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v111; // [rsp+98h] [rbp-B0h]
  const char *v112; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v113; // [rsp+B8h] [rbp-90h]
  const char *v114; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v115; // [rsp+D8h] [rbp-70h]
  const char *v116; // [rsp+F0h] [rbp-58h] BYREF
  __int128 v117; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v118; // [rsp+108h] [rbp-40h]

  v118 = __readfsqword(0x28u);
  if ( (a5 & 2) == 0 )
    return v118 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + (unsigned int)get_dword(a3));
  set_cmt(v8, "FuncInfo4", 0);
  sub_11320(a1, a3);
  v9 = v8;
  byte = get_byte(v8);
  v11 = v8 + 1;
  create_data(v9, 2048, 1, -1);
  v107 = v11;
  if ( (byte & 4) != 0 )
  {
    set_cmt(v11, "BBT flags", 0);
    if ( !(unsigned __int8)sub_1A3A0(nullptr, (unsigned __int64 *)&v107) )
      return v118 - __readfsqword(0x28u);
    v11 = v107;
  }
  v93 = -1;
  if ( (byte & 8) != 0 )
  {
    v93 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + (unsigned int)get_dword(v11));
    sub_11320(a1, v11);
    set_cmt(v11, "unwind map", 0);
    v11 += 4;
    v107 = v11;
  }
  v96 = -1;
  v90 = (byte & 0x10) != 0;
  if ( (byte & 0x10) != 0 )
  {
    v96 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + (unsigned int)get_dword(v11));
    sub_11320(a1, v11);
    set_cmt(v11, "try block map", 0);
    v11 += 4;
    v107 = v11;
  }
  v110 = 0;
  v111 = 0;
  sub_11320(a1, v11);
  if ( (byte & 2) == 0 )
  {
    set_cmt(v11, "ip2state map", 0);
    dword = get_dword(v11);
    sub_1C1B0(&v110, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + dword), a2);
    v13 = v11 + 4;
    v107 = v11 + 4;
    if ( (byte & 1) == 0 )
      goto LABEL_11;
LABEL_16:
    set_cmt(v13, "disp frame (wrt establisher frame)", 0);
    sub_1A3A0(nullptr, (unsigned __int64 *)&v107);
    if ( (byte & 8) == 0 )
      goto LABEL_12;
    goto LABEL_17;
  }
  set_cmt(v11, "separated code segments", 0);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + (unsigned int)get_dword(v11));
  v114 = (const char *)v12;
  if ( (unsigned __int8)sub_1A3A0(&v112, (unsigned __int64 *)&v114) )
  {
    v27 = (unsigned int)v112;
    v117 = 0;
    v116 = nullptr;
    sub_8A10((__int64 *)&v116, (__int64)"num_segmap_entries: %u", (_DWORD)v112);
    v28 = s1;
    if ( (_QWORD)v117 )
      v28 = v116;
    set_cmt(v12, v28, 0);
    if ( (_DWORD)v27 )
    {
      v29 = (__int64)v114;
      v88 = &v114[8 * v27];
      while ( 1 )
      {
        sub_11320(a1, v29);
        set_cmt(v29, "seg_rva", 0);
        v86 = get_dword(v29);
        v114 = (const char *)(v29 + 4);
        sub_11320(a1, v29 + 4);
        set_cmt(v29 + 4, "ip2state map", 0);
        v30 = get_dword(v29 + 4);
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( a2 == (v31 & (a4 + v86)) )
          break;
        v29 += 8;
        v114 = (const char *)v29;
        if ( (const char *)v29 == v88 )
          goto LABEL_46;
      }
      sub_1C1B0(&v110, v31 & (v30 + a4), a2);
    }
LABEL_46:
    if ( v116 )
    {
      *(_QWORD *)&v117 = 0;
      qfree(v116);
    }
  }
  v13 = v11 + 4;
  v107 = v11 + 4;
  if ( (byte & 1) != 0 )
    goto LABEL_16;
LABEL_11:
  if ( (byte & 8) == 0 )
    goto LABEL_12;
LABEL_17:
  v112 = (const char *)v93;
  if ( !(unsigned __int8)sub_1A3A0(&v116, (unsigned __int64 *)&v112) )
    goto LABEL_12;
  v15 = (__int64)v112;
  v16 = getseg(v112);
  if ( !v16 )
    goto LABEL_12;
  v17 = (unsigned int)v116;
  if ( *(_QWORD *)(v16 + 8) < v15 + (unsigned __int64)(unsigned int)v116 )
    goto LABEL_12;
  v18 = *(_QWORD *)(a1 + 8);
  v101 = 0;
  if ( (unsigned int)getinf(5) - 10 <= 1 && !*(_DWORD *)(v18 + 4) )
    v101 = getinf_flag(3, 4);
  v114 = nullptr;
  v115 = 0;
  sub_8A10((__int64 *)&v114, (__int64)"num unwind entries: %d", v17);
  v19 = s1;
  if ( (_QWORD)v115 )
    v19 = v114;
  set_cmt(v93, v19, 0);
  v20 = 1;
  if ( v17 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)sub_1A3A0(&v109, (unsigned __int64 *)&v112) )
        goto LABEL_37;
      v21 = v109 & 3;
      sub_8A10((__int64 *)&v114, (__int64)"funclet type: %u", v109 & 3);
      v22 = s1;
      if ( (_QWORD)v115 )
        v22 = v114;
      set_cmt(v15, v22, 0);
      if ( (unsigned __int8)(v21 - 1) > 1u )
        break;
      v23 = (__int64)v112;
      set_cmt(v112, "funclet", 0);
      sub_11320(a1, v23);
      v24 = get_dword(v23);
      v25 = v23 + 4;
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      v112 = (const char *)v25;
      if ( v101 )
        sub_1B460(a1, v26 & (v24 + a4), 0);
      set_cmt(v25, "frame offset of object ptr to be destructed", 0);
      if ( !(unsigned __int8)sub_1A3A0(nullptr, (unsigned __int64 *)&v112) )
        goto LABEL_37;
LABEL_28:
      if ( v20 >= v17 )
        goto LABEL_37;
      v15 = (__int64)v112;
      ++v20;
    }
    if ( v21 != 3 )
      goto LABEL_28;
    v117 = 0;
    v116 = nullptr;
    sub_1A7B0((__int64 *)&v116, &v110, v20, 0x7FFFFFFF);
    v77 = (__int64)v112;
    v99 = (__int64)v112;
    set_cmt(v112, "funclet", 0);
    sub_11320(a1, v77);
    v95 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + (unsigned int)get_dword(v77));
    if ( (int)v117 <= 0 )
    {
      if ( v101 )
      {
LABEL_141:
        sub_1B460(a1, v95, 0);
        goto LABEL_142;
      }
      if ( !(_DWORD)v117 )
      {
        v80 = *(_QWORD *)(a1 + 8);
        if ( (unsigned int)getinf(5) - 10 > 1 || *(_DWORD *)(v80 + 4) || !(unsigned __int8)getinf_flag(3, 4) )
        {
          func = get_func(a2);
          v82 = func;
          if ( func && (int)get_func_chunknum(func, v95) < 0 && (unsigned __int8)sub_EB40(a1, v82, v95) )
          {
            v83 = (_QWORD *)get_func(a2);
            sub_EAB0(v83);
          }
          goto LABEL_142;
        }
        goto LABEL_141;
      }
    }
    else
    {
      v78 = 0;
      v79 = 16 * ((unsigned int)(v117 - 1) + 1LL);
      do
      {
        sub_F7D0(a1, *(_QWORD *)&v116[v78], *(_QWORD *)&v116[v78 + 8], v95, -2);
        v78 += 16;
      }
      while ( v78 != v79 );
      if ( v101 )
        goto LABEL_141;
    }
LABEL_142:
    v112 = (const char *)(v99 + 4);
    if ( v116 )
    {
      *(_QWORD *)&v117 = 0;
      qfree(v116);
    }
    goto LABEL_28;
  }
LABEL_37:
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
LABEL_12:
  if ( v90 )
  {
    v108 = v96;
    if ( (unsigned __int8)sub_1A3A0(&v116, (unsigned __int64 *)&v108) )
    {
      v32 = v108;
      v100 = v108;
      v33 = getseg(v108);
      if ( v33 )
      {
        v103 = (int)v116;
        if ( *(_QWORD *)(v33 + 8) >= v32 + 8LL * (unsigned int)v116 - (unsigned int)v116 )
        {
          v113 = 0;
          v112 = nullptr;
          sub_8A10((__int64 *)&v112, (__int64)"num_tryblocks: %u", (_DWORD)v116);
          v34 = s1;
          if ( (_QWORD)v113 )
            v34 = v112;
          set_cmt(v96, v34, 0);
          v98 = 0;
          if ( v103 )
          {
            do
            {
              set_cmt(v100, "lowest state index of try", 0);
              if ( !(unsigned __int8)sub_1A3A0(&v104, (unsigned __int64 *)&v108) )
                break;
              set_cmt(v108, "highest state index of try", 0);
              if ( !(unsigned __int8)sub_1A3A0(&v105, (unsigned __int64 *)&v108) )
                break;
              v115 = 0;
              v114 = nullptr;
              sub_1A7B0((__int64 *)&v114, &v110, v104, v105);
              set_cmt(v108, "highest state index of any associated catch", 0);
              if ( !(unsigned __int8)sub_1A3A0(nullptr, (unsigned __int64 *)&v108) )
              {
                if ( v114 )
                {
                  *(_QWORD *)&v115 = 0;
                  qfree(v114);
                }
                break;
              }
              v35 = v108;
              set_cmt(v108, "list of handlers", 0);
              sub_11320(a1, v35);
              v36 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + (unsigned int)get_dword(v35));
              v100 = v35 + 4;
              v108 = v35 + 4;
              v109 = v36;
              if ( (unsigned __int8)sub_1A3A0(&v116, (unsigned __int64 *)&v109) )
              {
                v37 = v109;
                v38 = getseg(v109);
                if ( v38 )
                {
                  v102 = (int)v116;
                  if ( *(_QWORD *)(v38 + 8) >= v37 + 5LL * (unsigned int)v116 )
                  {
                    v39 = (int)v116;
                    v117 = 0;
                    v116 = nullptr;
                    sub_8A10((__int64 *)&v116, (__int64)"num_handlers: %u", v39);
                    v40 = s1;
                    if ( (_QWORD)v117 )
                      v40 = v116;
                    set_cmt(v36, v40, 0);
                    v89 = 0;
                    if ( v102 )
                    {
                      while ( 1 )
                      {
                        v41 = get_byte(v37);
                        create_data(v37, 0, 1, -1);
                        v42 = v37 + 1;
                        v109 = v42;
                        if ( (v41 & 1) == 0 )
                          break;
                        set_cmt(v42, "adjectives bitfield", 0);
                        if ( !(unsigned __int8)sub_1A3A0(nullptr, (unsigned __int64 *)&v109) )
                          goto LABEL_108;
                        v91 = -1;
                        v42 = v109;
                        if ( (v41 & 2) != 0 )
                          goto LABEL_90;
LABEL_67:
                        if ( (v41 & 4) != 0 )
                        {
                          set_cmt(v42, "displacement of catch object from base", 0);
                          if ( !(unsigned __int8)sub_1A3A0(nullptr, (unsigned __int64 *)&v109) )
                            goto LABEL_108;
                          v42 = v109;
                        }
                        set_cmt(v42, "catch code", 0);
                        sub_11320(a1, v42);
                        v43 = get_dword(v42);
                        v44 = *(_QWORD *)(a1 + 24);
                        v45 = v42 + 4;
                        v109 = v42 + 4;
                        v46 = *(_QWORD *)(v44 + 16) & (a4 + v43);
                        if ( (unsigned __int8)is_mapped(v46) && getseg(v46) && !(unsigned __int8)is_spec_ea(v46) )
                        {
                          if ( (int)v115 > 0 )
                          {
                            v97 = (_DWORD)v115 != 1;
                            v47 = 0;
                            v94 = 16 * ((unsigned int)(v115 - 1) + 1LL);
                            do
                            {
                              v48 = *(_QWORD *)&v114[v47];
                              if ( v46 != v48 || !v97 )
                                sub_F7D0(a1, v48, *(_QWORD *)&v114[v47 + 8], v46, v91);
                              v47 += 16;
                            }
                            while ( v94 != v47 );
                          }
                          v49 = *(_QWORD *)(a1 + 8);
                          if ( (unsigned int)getinf(5) - 10 > 1
                            || *(_DWORD *)(v49 + 4)
                            || !(unsigned __int8)getinf_flag(3, 4) )
                          {
                            v50 = get_func(a2);
                            v51 = v50;
                            if ( v50 && (int)get_func_chunknum(v50, v46) < 0 && (unsigned __int8)sub_EB40(a1, v51, v46) )
                            {
                              v75 = (_QWORD *)get_func(a2);
                              sub_EAB0(v75);
                            }
                          }
                          else
                          {
                            sub_1B460(a1, v46, 1);
                          }
                        }
                        v52 = v41 & 0x30;
                        if ( (v41 & 8) != 0 )
                        {
                          if ( v52 == 16 )
                          {
                            v60 = get_dword(v42 + 4);
                            v61 = *(_QWORD *)(a1 + 8);
                            v62 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + v60);
                            if ( (unsigned int)getinf(5) - 10 > 1
                              || *(_DWORD *)(v61 + 4)
                              || !(unsigned __int8)getinf_flag(3, 4) )
                            {
                              v63 = get_func(a2);
                              v64 = v63;
                              if ( v63
                                && (int)get_func_chunknum(v63, v62) < 0
                                && (unsigned __int8)sub_EB40(a1, v64, v62) )
                              {
                                v76 = (_QWORD *)get_func(a2);
                                sub_EAB0(v76);
                              }
                            }
                            else
                            {
                              sub_1B460(a1, v62, 1);
                            }
                            sub_11320(a1, v42 + 4);
                            set_cmt(v42 + 4, "continuation address", 0);
                            v109 = v42 + 8;
                          }
                          else if ( v52 == 32 )
                          {
                            v65 = get_dword(v42 + 4);
                            v66 = *(_QWORD *)(a1 + 8);
                            v67 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + v65);
                            if ( (unsigned int)getinf(5) - 10 > 1
                              || *(_DWORD *)(v66 + 4)
                              || !(unsigned __int8)getinf_flag(3, 4) )
                            {
                              v68 = get_func(a2);
                              v69 = v68;
                              if ( v68
                                && (int)get_func_chunknum(v68, v67) < 0
                                && (unsigned __int8)sub_EB40(a1, v69, v67) )
                              {
                                v85 = (_QWORD *)get_func(a2);
                                sub_EAB0(v85);
                              }
                            }
                            else
                            {
                              sub_1B460(a1, v67, 1);
                            }
                            sub_11320(a1, v42 + 4);
                            set_cmt(v42 + 4, "continuation address", 0);
                            v109 = v42 + 8;
                            v70 = get_dword(v42 + 8);
                            v71 = *(_QWORD *)(a1 + 8);
                            v72 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a4 + v70);
                            if ( (unsigned int)getinf(5) - 10 > 1
                              || *(_DWORD *)(v71 + 4)
                              || !(unsigned __int8)getinf_flag(3, 4) )
                            {
                              v73 = get_func(a2);
                              v74 = v73;
                              if ( v73
                                && (int)get_func_chunknum(v73, v72) < 0
                                && (unsigned __int8)sub_EB40(a1, v74, v72) )
                              {
                                v84 = (_QWORD *)get_func(a2);
                                sub_EAB0(v84);
                              }
                            }
                            else
                            {
                              sub_1B460(a1, v72, 1);
                            }
                            sub_11320(a1, v42 + 8);
                            set_cmt(v42 + 8, "continuation address 2", 0);
                            v109 = v42 + 12;
                          }
                        }
                        else
                        {
                          if ( v52 == 16 )
                          {
                            v55 = 1;
                          }
                          else
                          {
                            if ( v52 != 32 )
                              goto LABEL_86;
                            v55 = 2;
                          }
                          v56 = 0;
                          for ( i = sub_1A3A0(&v106, (unsigned __int64 *)&v109);
                                i;
                                i = sub_1A3A0(&v106, (unsigned __int64 *)&v109) )
                          {
                            v58 = " 2";
                            if ( v56 != 1 )
                              v58 = "";
                            sub_8A10((__int64 *)&v116, (__int64)"continuation address%s: 0x%a", v58, a2 + v106);
                            v59 = s1;
                            if ( (_QWORD)v117 )
                              v59 = v116;
                            set_cmt(v45, v59, 0);
                            if ( v55 == ++v56 )
                              break;
                            v45 = v109;
                          }
                        }
LABEL_86:
                        if ( ++v89 == v102 )
                          goto LABEL_108;
                        v37 = v109;
                      }
                      v91 = -1;
                      if ( (v41 & 2) == 0 )
                        goto LABEL_67;
LABEL_90:
                      set_cmt(v42, "type descriptor", 0);
                      sub_11320(a1, v42);
                      v53 = (unsigned int)get_dword(v42);
                      v54 = *(_QWORD *)(a1 + 24);
                      v42 += 4;
                      v109 = v42;
                      v91 = *(_QWORD *)(v54 + 16) & (a4 + v53);
                      goto LABEL_67;
                    }
LABEL_108:
                    if ( v116 )
                    {
                      *(_QWORD *)&v117 = 0;
                      qfree(v116);
                    }
                  }
                }
              }
              if ( v114 )
              {
                *(_QWORD *)&v115 = 0;
                qfree(v114);
              }
              ++v98;
            }
            while ( v98 != v103 );
          }
          if ( v112 )
          {
            *(_QWORD *)&v113 = 0;
            qfree(v112);
          }
        }
      }
    }
  }
  if ( v110 )
  {
    *(_QWORD *)&v111 = 0;
    qfree(v110);
  }
  return v118 - __readfsqword(0x28u);
}

