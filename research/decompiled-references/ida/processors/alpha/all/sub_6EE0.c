__int64 __fastcall sub_6EE0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  __int16 v6; // ax
  char v8; // r12
  char v9; // al
  __int16 v10; // dx
  int v11; // r13d
  int v12; // r15d
  int v13; // r14d
  __int16 v14; // r15
  __int64 v15; // r14
  __int64 dword; // r12
  unsigned __int64 v17; // rax
  char v18; // [rsp+2h] [rbp-336h]
  char v19; // [rsp+3h] [rbp-335h]
  int v20; // [rsp+4h] [rbp-334h]
  int v21; // [rsp+4h] [rbp-334h]
  int v22; // [rsp+8h] [rbp-330h]
  int v23; // [rsp+Ch] [rbp-32Ch]
  _QWORD v24[45]; // [rsp+20h] [rbp-318h] BYREF
  _QWORD v25[53]; // [rsp+190h] [rbp-1A8h] BYREF

  v25[45] = __readfsqword(0x28u);
  if ( (unsigned __int8)segtype() == 1 )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    *(_DWORD *)(a1 + 220) = 1;
  }
  else
  {
    v20 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    v8 = is_forced_operand();
    v19 = is_forced_operand();
    v9 = is_forced_operand();
    v10 = v20;
    v18 = v9;
    v11 = v20 & 1;
    v12 = v20 & 8;
    v13 = v20 & 0x10;
    *(_DWORD *)(a1 + 220) = !(v20 & 1);
    v21 = v20 & 0x200;
    v22 = v10 & 0x400;
    v23 = v10 & 4;
    if ( (v10 & 0x100) != 0 )
      sub_6BD0(a1, (_WORD *)a2, a2 + 40, v8, 1, a3);
    if ( v21 )
      sub_6BD0(a1, (_WORD *)a2, a2 + 80, v19, 1, a3);
    if ( v22 )
      sub_6BD0(a1, (_WORD *)a2, a2 + 120, v18, 1, a3);
    if ( v23 )
      sub_6BD0(a1, (_WORD *)a2, a2 + 40, v8, 0, a3);
    if ( v12 )
      sub_6BD0(a1, (_WORD *)a2, a2 + 80, v19, 0, a3);
    if ( v13 )
      sub_6BD0(a1, (_WORD *)a2, a2 + 120, v18, 0, a3);
    if ( v11 )
    {
      *(_DWORD *)(a1 + 220) = 0;
      if ( *(_WORD *)(a2 + 24) != 108 )
        goto LABEL_7;
      goto LABEL_27;
    }
  }
  if ( *(_DWORD *)(a1 + 220) )
    add_cref();
  if ( *(_WORD *)(a2 + 24) != 108 )
    goto LABEL_7;
LABEL_27:
  if ( *(_WORD *)(a2 + 46) != 29 || *(_WORD *)(a2 + 86) != 29 )
    goto LABEL_8;
  qmemcpy(v24, (const void *)a2, sizeof(v24));
  if ( decode_prev_insn() != -1 && LOWORD(v24[3]) == 109 && HIWORD(v24[5]) == 29 )
  {
    if ( *(_QWORD *)(a1 + 200) != -1 )
    {
      v14 = HIWORD(v24[10]);
      qmemcpy(v25, v24, 0x168u);
      do
        v15 = v24[2];
      while ( decode_prev_insn() != -1
           && (HIWORD(v24[5]) != v14
            || LOWORD(v24[3]) != 106 && LOWORD(v24[3]) != 22 && (LOWORD(v24[3]) != 21 || v24[12] != v15))
           && (get_flags_ex() & 0x10000) != 0 );
      qmemcpy(v24, v25, sizeof(v24));
    }
    split_sreg_range();
  }
LABEL_7:
  if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1D000000000400LL
    && (unsigned __int16)(*(_WORD *)(a2 + 24) - 108) > 1u
    && get_sreg() != -1 )
  {
    insn_add_dref();
    get_dword();
    insn_add_dref();
    if ( (unsigned __int8)segtype() != 1 )
      insn_create_op_data();
  }
LABEL_8:
  if ( !(unsigned __int8)getinf_flag() || (unsigned int)get_auto_state() != 40 )
    goto LABEL_9;
  if ( !*(_DWORD *)(a1 + 220) )
  {
    recalc_spd();
    v6 = *(_WORD *)(a2 + 24);
    goto LABEL_10;
  }
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 == 108 )
  {
    if ( *(_WORD *)(a2 + 46) != 30 || *(_WORD *)(a2 + 86) != 30 )
      return 1;
    get_func();
    add_auto_stkpnt();
    v6 = *(_WORD *)(a2 + 24);
LABEL_10:
    if ( v6 != 106 )
      return 1;
    qmemcpy(v25, (const void *)a2, 0x168u);
    do
    {
      if ( decode_prev_insn() == -1 )
        return 1;
    }
    while ( ((LOWORD(v25[3]) - 114) & 0xFFFD) != 0 || HIWORD(v25[5]) != *(_WORD *)(a2 + 86) );
    dword = netnode_altval();
    if ( !(unsigned __int8)is_spec_ea() )
    {
      if ( !(unsigned __int8)is_loaded() )
        return 1;
      if ( LOWORD(v25[3]) != 114 )
      {
        v17 = get_qword() - 1;
LABEL_49:
        if ( v17 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          netnode_supset();
          add_cref();
          auto_apply_type();
        }
        return 1;
      }
      dword = (unsigned int)get_dword();
    }
    v17 = dword - 1;
    goto LABEL_49;
  }
  if ( v6 != 187 && v6 != 5 )
    goto LABEL_10;
  if ( *(_WORD *)(a2 + 46) == 30 && *(_BYTE *)(a2 + 81) == 5 && *(_WORD *)(a2 + 126) == 30 )
  {
    get_func();
    add_auto_stkpnt();
LABEL_9:
    v6 = *(_WORD *)(a2 + 24);
    goto LABEL_10;
  }
  return 1;
}

