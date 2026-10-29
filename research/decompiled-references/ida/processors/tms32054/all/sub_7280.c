__int64 __fastcall sub_7280(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // r15d
  __int64 flags; // rbp
  __int16 v8; // r12

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    *(_BYTE *)(a1 + 235) = 1;
    LODWORD(flags) = get_flags_ex();
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 235) = ~(_BYTE)v6;
    *(_BYTE *)(a1 + 235) &= 1u;
    flags = get_flags_ex();
    if ( (v6 & 0x100) != 0 )
      sub_6E90(a1, a2, (unsigned __int8 *)(a2 + 40), a3, flags, 1);
    if ( (v6 & 0x200) != 0 )
      sub_6E90(a1, a2, (unsigned __int8 *)(a2 + 80), a3, flags, 1);
    if ( (v6 & 0x400) != 0 )
      sub_6E90(a1, a2, (unsigned __int8 *)(a2 + 120), a3, flags, 1);
    if ( (v6 & 4) != 0 )
      sub_6E90(a1, a2, (unsigned __int8 *)(a2 + 40), a3, flags, 0);
    if ( (v6 & 8) != 0 )
      sub_6E90(a1, a2, (unsigned __int8 *)(a2 + 80), a3, flags, 0);
    if ( (v6 & 0x10) != 0 )
      sub_6E90(a1, a2, (unsigned __int8 *)(a2 + 120), a3, flags, 0);
  }
  v8 = *(_WORD *)(a2 + 24);
  if ( (v8 & 0xFFFD) != 0x99 )
    goto LABEL_23;
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x2E000000000100LL )
  {
    get_item_end();
    split_sreg_range();
    v8 = *(_WORD *)(a2 + 24);
LABEL_23:
    if ( v8 == 161
      && (*(_QWORD *)(a2 + 40) & 0xFF000000FF00LL) == 0x500
      && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x2F000000000100LL )
    {
      get_item_end();
      split_sreg_range();
    }
  }
  if ( (unsigned __int8)segtype() == 1 )
    goto LABEL_28;
  if ( !*(_BYTE *)(a1 + 235) )
    goto LABEL_20;
  if ( sub_6BB0(a2, flags) )
  {
LABEL_28:
    *(_BYTE *)(a1 + 235) = 0;
    goto LABEL_20;
  }
  if ( *(_BYTE *)(a1 + 235) )
    add_cref();
LABEL_20:
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_BYTE *)(a1 + 235) )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0x7C:
        case 0x7D:
        case 0x7E:
        case 0x7F:
          if ( get_func() )
            goto LABEL_42;
          break;
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8A:
        case 0x8B:
        case 0x91:
        case 0x92:
          if ( get_func() )
            goto LABEL_42;
          break;
        case 0x90:
          if ( get_func() )
            goto LABEL_42;
          break;
        case 0x93:
        case 0x94:
          if ( get_func() )
LABEL_42:
            add_auto_stkpnt();
          break;
        default:
          return 1;
      }
    }
    else
    {
      recalc_spd();
    }
  }
  return 1;
}

