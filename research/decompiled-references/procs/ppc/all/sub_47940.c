__int64 __fastcall sub_47940(_QWORD *a1, __int64 a2, double a3, double a4, double a5)
{
  __int64 v6; // rcx
  int v7; // eax
  int v9; // esi
  __int16 v10; // dx
  bool v11; // bl
  int v12; // r12d
  __int64 v13; // rdi
  bool v14; // bl
  unsigned __int64 auto_state; // rax
  __int64 v16; // rdx
  unsigned __int8 *v17; // r15
  _DWORD *v18; // rbx
  unsigned __int8 *v19; // r14
  unsigned __int8 *v20; // rbx
  _DWORD *v21; // r15
  int v22; // ebx
  __int64 v23; // rax
  int v25; // ebx
  __int64 v26; // r14
  char v27; // r15
  __int64 func; // rax
  __int64 v29; // rbx
  __int64 v30; // rbx
  int flags; // eax
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  char does_return; // al
  __int64 v39; // rdx
  double v40; // xmm0_8
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 *v44; // r11
  unsigned __int64 *v45; // rbx
  __int64 v46; // rdx
  unsigned __int64 *v47; // rax
  __int64 v48; // rdi
  unsigned __int64 *v49; // rsi
  unsigned __int64 *v50; // rdx
  unsigned __int64 v51; // r12
  unsigned __int64 *v52; // rax
  unsigned __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdi
  unsigned __int8 *v56; // [rsp+8h] [rbp-D0h]
  unsigned __int8 *v57; // [rsp+10h] [rbp-C8h]
  char v58; // [rsp+10h] [rbp-C8h]
  char v59; // [rsp+1Fh] [rbp-B9h]
  __int64 v60; // [rsp+28h] [rbp-B0h] BYREF
  char *v61; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v62; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v63[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v64; // [rsp+50h] [rbp-88h] BYREF
  __int128 v65; // [rsp+58h] [rbp-80h]
  unsigned __int64 *v66; // [rsp+70h] [rbp-68h] BYREF
  __int128 v67; // [rsp+78h] [rbp-60h]
  char v68; // [rsp+88h] [rbp-50h]
  unsigned __int64 v69; // [rsp+98h] [rbp-40h]

  v6 = a1[2];
  v7 = *(unsigned __int16 *)(a2 + 24);
  v69 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(v6 + 104);
  v10 = v7;
  if ( v9 <= v7 && *(_DWORD *)(v6 + 108) > v7 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v7 - v9) + 8);
    v11 = (v12 & 1) == 0;
  }
  else
  {
    v11 = 1;
    v12 = 0;
  }
  if ( (_WORD)v7 == 13 || (_WORD)v7 == 320 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 8) == 0 )
    {
      v13 = *(_QWORD *)(a2 + 16);
      goto LABEL_30;
    }
    if ( *(_BYTE *)(a2 + 41) != 7 )
    {
      v13 = *(_QWORD *)(a2 + 16);
      v14 = v11;
      goto LABEL_10;
    }
    v33 = *(_QWORD *)(a1[4] + 16LL);
    v34 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
    if ( v34 != v33 )
    {
      v33 &= v34;
      if ( v34 == -1 )
        v33 = -1;
    }
    v35 = use_mapping(v33);
    v13 = *(_QWORD *)(a2 + 16);
    v36 = v35;
    if ( v13 + *(unsigned __int16 *)(a2 + 26) != v35 )
    {
      insn_add_cref(a2, v35, (unsigned int)*(char *)(a2 + 42), 17);
      does_return = func_does_return(v36);
      v13 = *(_QWORD *)(a2 + 16);
      if ( !does_return )
      {
        v11 = 0;
        set_noret_insn(v13, 1);
        v13 = *(_QWORD *)(a2 + 16);
        if ( *(_WORD *)(a2 + 24) != 241 )
          goto LABEL_30;
        goto LABEL_8;
      }
    }
    v10 = *(_WORD *)(a2 + 24);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 16);
  }
  if ( v10 == 241 )
  {
LABEL_8:
    if ( *(_WORD *)(a2 + 86) != *(_WORD *)(a2 + 126) )
      goto LABEL_9;
LABEL_30:
    segtype(v13);
    auto_state = get_auto_state();
    if ( (unsigned int)auto_state <= 0x19 )
      goto LABEL_14;
    goto LABEL_31;
  }
LABEL_9:
  v14 = v11;
LABEL_10:
  if ( (unsigned __int8)segtype(v13) != 1 && v14 )
    a3 = add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21, a3);
  auto_state = get_auto_state();
  if ( (unsigned int)auto_state <= 0x19 )
  {
LABEL_14:
    v16 = 34603009;
    v57 = (unsigned __int8 *)(a2 + 40);
    if ( _bittest64(&v16, auto_state) )
      goto LABEL_15;
  }
LABEL_31:
  sub_42950((__int64)a1, a2, a3, a4, a5);
  v57 = (unsigned __int8 *)(a2 + 40);
  if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 1) <= 1u )
  {
    v37 = a2 + 80;
    if ( !*(_BYTE *)(a2 + 121) )
      v37 = a2 + 40;
    sub_37E40((__int64)a1, a2, *(unsigned __int16 *)(v37 + 6), *(unsigned __int16 *)(v37 + 46));
  }
  sub_38D90((__int64)a1, a2);
LABEL_15:
  v17 = v57;
  v18 = &unk_7A220;
  v19 = (unsigned __int8 *)(a2 + 280);
  v56 = v57;
  do
  {
    if ( (*v18 & v12) != 0 )
      sub_47690((__int64)a1, a2, v17, 1u, a3);
    v17 += 40;
    ++v18;
  }
  while ( v17 != v19 );
  v20 = v57;
  v21 = dword_7A240;
  do
  {
    if ( (*v21 & v12) != 0 )
      sub_47690((__int64)a1, a2, v20, 0, a3);
    v20 += 40;
    ++v21;
  }
  while ( v20 != v19 );
  v22 = get_auto_state();
  v23 = *(_QWORD *)(a2 + 24);
  if ( (v23 & 0x2000000FFFFLL) != 0x20000000140LL )
  {
    if ( (v23 & 0x1000000FFFFLL) != 0x10000000140LL )
      goto LABEL_25;
LABEL_50:
    sub_33960(a2);
    goto LABEL_25;
  }
  v63[1] = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  v63[0] = -1;
  v27 = sub_35AD0((__int64)a1, v63, &v60, &v61);
  if ( v27 )
  {
    if ( v22 == 40 )
    {
      v30 = v63[0];
      flags = get_flags_ex(v63[0], 4);
      if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
      {
        v32 = ea2node(v30);
        if ( netnode_supval(v32, 1, &v66, 8, 65) <= 0 || !v66 )
        {
          auto_mark_range(v30, v30 + 1, 20);
          auto_mark_range(v30, v30 + 1, 30);
        }
      }
    }
    goto LABEL_25;
  }
  if ( (*(_BYTE *)(a2 + 28) & 8) == 0 || v22 != 40 )
    goto LABEL_50;
  v39 = *(_QWORD *)(a2 + 16);
  v40 = 0.0;
  v66 = nullptr;
  v68 = 0;
  v67 = 0;
  v58 = sub_5B9B0(a1, &v66, v39, 281, 0xFFFFFFFFLL, 0);
  if ( !v58 )
  {
LABEL_72:
    v41 = *(_QWORD *)(a2 + 16);
    netnode_supdel(a1[15], v41, 321);
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree(v66, v41, v42, v40);
    }
    goto LABEL_50;
  }
  v43 = v67;
  v44 = v66;
  v45 = v66;
  v46 = 3 * v67;
  if ( !v68 )
    goto LABEL_82;
  if ( (_QWORD)v67 != 1 )
  {
    v47 = v66 + 3;
    if ( v46 != 3 )
    {
      while ( *v66 == *v47 )
      {
        v47 += 3;
        if ( &v66[v46] == v47 )
          goto LABEL_83;
      }
LABEL_82:
      v58 = 0;
LABEL_83:
      v64 = 0;
      v40 = 0.0;
      v65 = 0;
      if ( !(v46 * 8) )
        goto LABEL_72;
      goto LABEL_84;
    }
  }
  v40 = 0.0;
  v64 = 0;
  v65 = 0;
LABEL_84:
  v48 = 0;
  v49 = nullptr;
  while ( 1 )
  {
    v50 = &v49[v48];
    v51 = *v45;
    if ( v50 == v49 )
      goto LABEL_92;
    v52 = v49;
    while ( v51 != *v52 )
    {
      if ( v50 == ++v52 )
        goto LABEL_92;
    }
    if ( v50 == v52 )
    {
LABEL_92:
      v53 = v48 + 1;
      if ( *((_QWORD *)&v65 + 1) < v53 )
      {
        v64 = qvector_reserve(&v64, v49, v53, 8);
        v50 = (unsigned __int64 *)(v64 + 8 * v65);
      }
      *v50 = v51;
      *(_QWORD *)&v65 = v65 + 1;
      if ( v51 > 0x20 && (v59 = is_mapped(v51)) != 0 )
      {
        v40 = add_cref(*(_QWORD *)(a2 + 16), v51, 17, v40);
        sub_393C0((__int64)a1, v51);
        sub_47140((__int64)a1, v51);
        if ( v58 )
        {
          auto_apply_type(*(_QWORD *)(a2 + 16), v51);
          v54 = *(_QWORD *)(a2 + 16);
          v55 = a1[15];
          v62 = v51;
          netnode_supset(v55, v54, &v62, 8, 833);
          v49 = (unsigned __int64 *)v64;
          v27 = v58;
        }
        else
        {
          v49 = (unsigned __int64 *)v64;
          v27 = v59;
        }
        v43 = v67;
        v44 = v66;
      }
      else
      {
        v49 = (unsigned __int64 *)v64;
        v43 = v67;
        v44 = v66;
      }
    }
    v45 += 3;
    if ( v45 == &v44[3 * v43] )
      break;
    v48 = v65;
  }
  if ( v49 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v49, v49, v50, v40);
  }
  if ( !v27 )
    goto LABEL_72;
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66, v49, v50, v40);
  }
LABEL_25:
  if ( (unsigned __int8)getinf_flag(10, 4096) )
  {
    if ( (unsigned int)get_auto_state() == 40 )
    {
      func = get_func(*(_QWORD *)(a2 + 16));
      v29 = func;
      if ( func )
      {
        if ( !(unsigned __int8)recalc_spd_for_basic_block(func, *(_QWORD *)(a2 + 16)) )
          sub_3FBC0((__int64)a1, v29, a2);
      }
    }
  }
  if ( (unsigned __int8)getinf_flag(10, 512) && (unsigned int)get_auto_state() == 40 )
  {
    v25 = 0;
    v26 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
    do
    {
      while ( (*(_QWORD *)(a2 + 40LL * v25 + 40) & 0xFFFF00000000FF00LL) != 0x1000000000400LL
           || (unsigned __int8)is_defarg(v26, *v56) )
      {
        ++v25;
        v56 += 40;
        if ( v25 == 6 )
          goto LABEL_42;
      }
      ++v25;
      sub_349F0((__int64)a1, a2, (__int64)v56, 1u);
      v56 += 40;
    }
    while ( v25 != 6 );
LABEL_42:
    if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 4) <= 1u
      && *(_WORD *)(a2 + 86) == 1
      && *(_WORD *)(a2 + 46) != 1
      && !(unsigned __int8)is_defarg(v26, 2) )
    {
      sub_349F0((__int64)a1, a2, a2 + 120, 0);
    }
  }
  return 1;
}
