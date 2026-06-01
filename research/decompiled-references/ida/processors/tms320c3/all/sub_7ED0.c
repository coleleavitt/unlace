__int64 __fastcall sub_7ED0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  __int64 flags; // rbp
  __int16 v7; // ax
  int v9; // r15d
  unsigned __int16 v10; // ax
  int wide_byte; // eax
  __int64 v12; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 >= v5 && v4 < *(_DWORD *)(v3 + 108) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 240) = ~*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 240) &= 1u;
    flags = get_flags_ex();
    if ( *(char *)(a2 + 28) >= 0 )
    {
      if ( (v9 & 0x100) != 0 )
        sub_7C40(a1, a2, (unsigned __int8 *)(a2 + 40), a3, flags, 1);
      if ( (v9 & 0x200) != 0 )
        sub_7C40(a1, a2, (unsigned __int8 *)(a2 + 80), a3, flags, 1);
      if ( (v9 & 0x400) != 0 )
        sub_7C40(a1, a2, (unsigned __int8 *)(a2 + 120), a3, flags, 1);
      if ( (v9 & 4) != 0 )
        sub_7C40(a1, a2, (unsigned __int8 *)(a2 + 40), a3, flags, 0);
      if ( (v9 & 8) != 0 )
        sub_7C40(a1, a2, (unsigned __int8 *)(a2 + 80), a3, flags, 0);
      if ( (v9 & 0x10) != 0 )
        sub_7C40(a1, a2, (unsigned __int8 *)(a2 + 120), a3, flags, 0);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 240) = 1;
    LODWORD(flags) = get_flags_ex();
  }
  if ( (flags & 0x10000) != 0
    && *(_WORD *)(a2 + 26)
    && *(_QWORD *)(a2 + 16) > 2u
    && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    wide_byte = get_wide_byte();
    if ( (wide_byte & 0xFF000000) == 0x61000000
      || ((wide_byte & 0xFFE00000) == 0x6A200000 || (wide_byte & 0xFE200000) == 0x6E200000)
      && (v12 = *(_QWORD *)(a2 + 16) + (__int16)wide_byte, v12 != -1) )
    {
      add_cref();
    }
  }
  v7 = *(_WORD *)(a2 + 24);
  if ( v7 == 87 )
  {
    add_cref();
    v7 = *(_WORD *)(a2 + 24);
  }
  if ( (v7 == 76 || v7 == 18)
    && *(_BYTE *)(a2 + 41) == 5
    && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1B000000000100LL )
  {
    get_item_end();
    split_sreg_range();
  }
  if ( (unsigned __int8)segtype() == 1 )
    goto LABEL_20;
  if ( !*(_BYTE *)(a1 + 240) )
    goto LABEL_14;
  if ( sub_7A70(a2, flags) )
  {
LABEL_20:
    *(_BYTE *)(a1 + 240) = 0;
    goto LABEL_14;
  }
  if ( *(_BYTE *)(a1 + 240) )
    add_cref();
LABEL_14:
  if ( !(unsigned __int8)getinf_flag() || (unsigned int)get_auto_state() != 40 )
    return 1;
  if ( !*(_BYTE *)(a1 + 240) )
  {
    recalc_spd();
    return 1;
  }
  v10 = *(_WORD *)(a2 + 24);
  if ( v10 != 51 )
  {
    if ( v10 > 0x33u )
    {
      if ( v10 == 86 )
      {
        if ( !get_func() )
          return 1;
        goto LABEL_61;
      }
      if ( v10 != 87 )
        return 1;
    }
    else
    {
      if ( v10 > 0x1Fu )
      {
        if ( (unsigned __int16)(v10 - 32) > 1u || !get_func() )
          return 1;
LABEL_61:
        add_auto_stkpnt();
        return 1;
      }
      if ( v10 <= 0x1Du )
      {
        if ( v10 == 5 && *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 19 && *(_BYTE *)(a2 + 41) == 5 )
          sub_7AF0(a2, *(_QWORD *)(a2 + 48));
        return 1;
      }
    }
    if ( !get_func() )
      return 1;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 19 && *(_BYTE *)(a2 + 41) == 5 )
    sub_7AF0(a2, -*(_QWORD *)(a2 + 48));
  return 1;
}

