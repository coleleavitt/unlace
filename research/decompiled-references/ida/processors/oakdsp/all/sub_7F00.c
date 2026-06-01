__int64 __fastcall sub_7F00(__int64 a1, __int64 a2)
{
  char v2; // r14
  char v3; // r13
  char v4; // r12
  __int16 v5; // ax
  int v6; // eax
  unsigned __int64 *v7; // rax
  int v8; // eax
  bool v9; // zf
  char v11; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-30h] BYREF

  v12 = __readfsqword(0x28u);
  if ( (unsigned __int8)segtype() == 1 )
    return 1;
  v2 = is_forced_operand();
  v3 = is_forced_operand();
  v4 = is_forced_operand();
  *(_BYTE *)(a1 + 256) = has_insn_feature() ^ 1;
  if ( (unsigned __int8)has_insn_feature() )
    sub_7C20(a1, a2, a2 + 40, v2);
  if ( (unsigned __int8)has_insn_feature() )
    sub_7C20(a1, a2, a2 + 80, v3);
  if ( (unsigned __int8)has_insn_feature() )
    sub_7C20(a1, a2, a2 + 120, v4);
  if ( (unsigned __int8)has_insn_feature() )
    sub_7C20(a1, a2, a2 + 40, v2);
  if ( (unsigned __int8)has_insn_feature() )
    sub_7C20(a1, a2, a2 + 80, v3);
  if ( (unsigned __int8)has_insn_feature() )
  {
    sub_7C20(a1, a2, a2 + 120, v4);
    v5 = *(_WORD *)(a2 + 24);
    if ( v5 != 95 )
      goto LABEL_14;
LABEL_30:
    get_item_end();
    split_sreg_range();
    v5 = *(_WORD *)(a2 + 24);
    goto LABEL_14;
  }
  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 95 )
    goto LABEL_30;
LABEL_14:
  if ( v5 == 62 && *(_BYTE *)(a2 + 41) == 5 && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x9000000000100LL )
  {
    get_item_end();
    split_sreg_range();
  }
  v6 = *(char *)(a2 + 33);
  *(_BYTE *)(a1 + 257) = 0;
  *(_DWORD *)(a1 + 260) = v6;
  v7 = (unsigned __int64 *)&v11;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( &v12 != v7 );
  if ( decode_prev_insn() != -1 )
  {
    v8 = *(_DWORD *)(a1 + 260);
    v9 = *(_BYTE *)(a1 + 257) == 0;
    *(_DWORD *)(a1 + 260) = v8;
    if ( !v9 )
      goto LABEL_31;
    decode_prev_insn();
  }
  if ( !*(_BYTE *)(a1 + 257) )
  {
LABEL_21:
    if ( *(_WORD *)(a2 + 24) != 62 || (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0xC000000000100LL )
    {
      if ( *(_BYTE *)(a1 + 256) )
        add_cref();
      goto LABEL_24;
    }
    goto LABEL_34;
  }
  v8 = *(_DWORD *)(a1 + 260);
LABEL_31:
  if ( v8 <= 1 )
    goto LABEL_21;
  *(_BYTE *)(a1 + 256) = 0;
  if ( *(_WORD *)(a2 + 24) == 62 && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0xC000000000100LL )
LABEL_34:
    *(_BYTE *)(a1 + 256) = 0;
LABEL_24:
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_BYTE *)(a1 + 256) )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case '\'':
          if ( *(_BYTE *)(a2 + 41) == 5
            && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0xD000000000100LL
            && get_func() )
          {
            goto LABEL_54;
          }
          break;
        case '+':
          if ( *(_BYTE *)(a2 + 41) == 5
            && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0xD000000000100LL
            && get_func() )
          {
            goto LABEL_54;
          }
          break;
        case 'D':
          if ( get_func() )
            goto LABEL_54;
          break;
        case 'E':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
          if ( get_func() )
            goto LABEL_54;
          break;
        case 'X':
          if ( get_func() )
LABEL_54:
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

