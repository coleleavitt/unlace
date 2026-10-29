__int64 __fastcall sub_A1C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  bool v5; // al
  unsigned __int16 v6; // ax
  bool v7; // cc
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  v5 = v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) || (*(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8) & 1) == 0;
  *(_BYTE *)(a1 + 4682) = v5;
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 73 > 1 || *(_DWORD *)(a2 + 28) != 2 )
  {
    if ( *(_BYTE *)(a2 + 41) )
      goto LABEL_26;
LABEL_6:
    if ( *(_BYTE *)(a2 + 81) )
      goto LABEL_27;
LABEL_7:
    if ( *(_BYTE *)(a2 + 121) )
      goto LABEL_28;
LABEL_8:
    if ( *(_BYTE *)(a1 + 4682) )
      goto LABEL_29;
    goto LABEL_9;
  }
  *(_BYTE *)(a1 + 4682) = 0;
  if ( !*(_BYTE *)(a2 + 41) )
    goto LABEL_6;
LABEL_26:
  sub_9DE0(a1, a2, a2 + 40);
  if ( !*(_BYTE *)(a2 + 81) )
    goto LABEL_7;
LABEL_27:
  sub_9DE0(a1, a2, a2 + 80);
  if ( !*(_BYTE *)(a2 + 121) )
    goto LABEL_8;
LABEL_28:
  sub_9DE0(a1, a2, a2 + 120);
  if ( *(_BYTE *)(a1 + 4682) )
  {
LABEL_29:
    add_cref();
    v6 = *(_WORD *)(a2 + 24);
    v7 = v6 <= 0x58u;
    if ( v6 == 88 )
      goto LABEL_13;
    goto LABEL_10;
  }
LABEL_9:
  v6 = *(_WORD *)(a2 + 24);
  v7 = v6 <= 0x58u;
  if ( v6 == 88 )
    goto LABEL_13;
LABEL_10:
  if ( !v7 )
  {
    if ( v6 == 89 )
    {
      split_sreg_range();
      if ( (get_flags_ex() & 0x800) != 0 )
        goto LABEL_16;
      goto LABEL_15;
    }
    goto LABEL_23;
  }
  if ( v6 != 86 )
  {
    if ( v6 == 87 )
    {
LABEL_13:
      get_sreg();
      goto LABEL_14;
    }
LABEL_23:
    get_flags_ex();
    goto LABEL_16;
  }
LABEL_14:
  split_sreg_range();
  if ( (get_flags_ex() & 0x800) == 0 )
  {
LABEL_15:
    get_sreg();
    qsnprintf();
    set_cmt();
  }
LABEL_16:
  if ( (unsigned __int8)getinf_flag()
    && *(_WORD *)(a2 + 24) == 75
    && (unsigned int)get_auto_state() == 40
    && get_switch_info() > 0 )
  {
    delete_switch_table();
    v9 = sub_9CA0();
    if ( v9 == -1 )
    {
      del_switch_info();
    }
    else if ( v9 == 1 )
    {
      set_switch_info();
      create_switch_table();
    }
  }
  return 1;
}

