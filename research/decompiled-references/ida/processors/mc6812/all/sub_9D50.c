__int64 __fastcall sub_9D50(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  __int64 v6; // r14
  __int16 v7; // ax
  __int16 v8; // ax
  unsigned __int64 word; // r15
  __int16 v10; // ax
  char byte; // al
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 1:
    case 3:
    case 9:
      return v12 - __readfsqword(0x28u);
    case 2:
      if ( (unsigned __int8)is_forced_operand() )
        return v12 - __readfsqword(0x28u);
      sub_9AA0(a1, (__int64)a2, *(_QWORD *)(a3 + 16));
      insn_create_op_data();
      return insn_add_dref();
    case 4:
      goto LABEL_5;
    case 5:
      if ( a4 )
      {
        set_immd();
        get_flags_ex();
        if ( (unsigned __int8)op_adds_xrefs() )
        {
          if ( (unsigned __int8)is_off() )
            sub_9AA0(a1, (__int64)a2, *(_QWORD *)(a3 + 8));
          insn_add_off_drefs();
        }
        return v12 - __readfsqword(0x28u);
      }
      if ( under_debugger )
LABEL_56:
        BUG();
      interr();
      return sub_A2D0(10107);
    case 7:
      v8 = a2[12];
      if ( v8 == 39 || v8 == 112 )
        return v12 - __readfsqword(0x28u);
      v6 = sub_9AA0(a1, (__int64)a2, *(_QWORD *)(a3 + 16));
      goto LABEL_22;
    case 8:
      set_immd();
      if ( (*(_BYTE *)(a3 + 32) & 4) != 0 || *(_WORD *)(a3 + 6) != 6 )
        return v12 - __readfsqword(0x28u);
LABEL_5:
      get_flags_ex();
      if ( !(unsigned __int8)getinf_flag()
        || (unsigned int)get_auto_state() != 40
        || (unsigned __int8)is_defarg()
        || a2[12] == 121
        || *(_WORD *)(a3 + 6) != 5
        || *(_BYTE *)(a3 + 32) )
      {
        set_immd();
      }
      else
      {
        if ( !get_func() || !(unsigned __int8)insn_create_stkvar() || !(unsigned __int8)op_stkvar() )
          return v12 - __readfsqword(0x28u);
        get_flags_ex();
      }
      if ( (unsigned __int8)op_adds_xrefs() && !(unsigned __int8)is_forced_operand() )
        insn_add_off_drefs();
      if ( *(_WORD *)(a3 + 6) != 6 || ((*(_BYTE *)(a3 + 1) - 4) & 0xFB) != 0 )
        return v12 - __readfsqword(0x28u);
      v6 = sub_9AA0(a1, (__int64)a2, a2[8] + *(_WORD *)(a3 + 16) + a2[13]);
      if ( (*(_BYTE *)(a3 + 32) & 4) != 0 )
      {
        insn_create_op_data();
        insn_add_dref();
        word = (unsigned __int16)get_word();
        if ( a2[12] == 45 )
        {
          insn_create_op_data();
          word |= ((unsigned int)get_byte() << 16) & 0xFF0000;
        }
        if ( word )
        {
          v10 = a2[12];
          if ( (unsigned __int16)(v10 - 95) > 1u && v10 != 45 )
            return insn_add_dref();
LABEL_49:
          if ( (get_flags_ex() & 0x600) == 0x200 && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
          {
            byte = get_byte();
            if ( byte == 33 || byte == -113 )
            {
              del_items();
              auto_mark_range();
            }
          }
          goto LABEL_23;
        }
        return v12 - __readfsqword(0x28u);
      }
      v7 = a2[12];
      if ( (unsigned __int16)(v7 - 95) > 1u && v7 != 45 )
        return insn_add_dref();
LABEL_22:
      if ( v6 )
        goto LABEL_49;
LABEL_23:
      if ( (unsigned __int8)has_insn_feature() )
      {
        if ( !(unsigned __int8)func_does_return() )
          *(_BYTE *)(a1 + 344) = 0;
      }
      return insn_add_cref();
    default:
      if ( under_debugger )
        goto LABEL_56;
      interr();
      return insn_add_dref();
  }
}

