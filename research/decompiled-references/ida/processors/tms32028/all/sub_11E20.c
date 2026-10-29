__int64 __fastcall sub_11E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  int v5; // r15d
  __int64 flags; // rbp
  __int16 v7; // ax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // ax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) )
  {
    *(_BYTE *)(a1 + 255) = 1;
    get_flags_ex();
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 255) = ~(_BYTE)v5;
    *(_BYTE *)(a1 + 255) &= 1u;
    flags = get_flags_ex();
    if ( (v5 & 0x100) != 0 )
      sub_11A90(a1, (_QWORD *)a2, a2 + 40, flags, 1);
    if ( (v5 & 0x200) != 0 )
      sub_11A90(a1, (_QWORD *)a2, a2 + 80, flags, 1);
    if ( (v5 & 0x400) != 0 )
      sub_11A90(a1, (_QWORD *)a2, a2 + 120, flags, 1);
    if ( (v5 & 4) != 0 )
      sub_11A90(a1, (_QWORD *)a2, a2 + 40, flags, 0);
    if ( (v5 & 8) != 0 )
      sub_11A90(a1, (_QWORD *)a2, a2 + 80, flags, 0);
    if ( (v5 & 0x10) != 0 )
    {
      sub_11A90(a1, (_QWORD *)a2, a2 + 120, flags, 0);
      if ( *(_WORD *)(a2 + 24) != 119 )
        goto LABEL_18;
      goto LABEL_15;
    }
  }
  if ( *(_WORD *)(a2 + 24) == 119 )
LABEL_15:
    netnode_supset();
LABEL_18:
  sub_11620(a1, a2);
  v7 = *(_WORD *)(a2 + 24);
  if ( v7 != 21 && v7 != 18 && v7 != 122 || *(_BYTE *)(a2 + 113) != 15 )
  {
    if ( (unsigned __int8)segtype() != 1 )
      goto LABEL_22;
LABEL_27:
    *(_BYTE *)(a1 + 255) = 0;
    goto LABEL_24;
  }
  *(_BYTE *)(a1 + 255) = 0;
  if ( (unsigned __int8)segtype() == 1 )
    goto LABEL_27;
LABEL_22:
  if ( *(_BYTE *)(a1 + 255) )
    add_cref();
LABEL_24:
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( !*(_BYTE *)(a1 + 255) )
    {
      recalc_spd();
      return 1;
    }
    v9 = *(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL;
    if ( v9 == 0x1B000000000400LL )
      return 1;
    if ( v9 == 0x1B000000000300LL )
      goto LABEL_49;
    v10 = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
    if ( v10 == 0x1B000000000400LL )
      return 1;
    if ( v10 == 0x1B000000000300LL || (v11 = *(_WORD *)(a2 + 24), v11 == 109) )
    {
LABEL_49:
      get_dtype_size();
LABEL_41:
      get_func();
      add_auto_stkpnt();
      return 1;
    }
    if ( v11 > 0x6Du )
    {
      if ( (unsigned __int16)(v11 - 131) <= 1u && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 27 )
        goto LABEL_41;
    }
    else if ( v11 > 5u )
    {
      if ( v11 == 107 )
      {
        get_dtype_size();
        get_func();
        add_auto_stkpnt();
      }
    }
    else if ( v11 > 3u && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 27 )
    {
      goto LABEL_41;
    }
  }
  return 1;
}

