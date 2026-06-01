__int64 __fastcall sub_3EA0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v5; // dl
  __int64 result; // rax
  char v7; // al

  v5 = *(_BYTE *)(a3 + 1);
  result = v5;
  switch ( v5 )
  {
    case 0u:
    case 1u:
    case 3u:
      return result;
    case 2u:
LABEL_14:
      calc_dataseg();
      insn_create_op_data();
      return insn_add_dref();
    case 4u:
      switch ( *(_WORD *)(a3 + 6) )
      {
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'k':
          if ( get_sreg() != -1 )
            goto LABEL_14;
          goto LABEL_12;
        case 'h':
        case 'i':
        case 'j':
        case 'l':
        case 'm':
          goto LABEL_14;
        case 'n':
        case 'o':
          goto LABEL_7;
        default:
          goto LABEL_12;
      }
    case 5u:
      if ( !a4 )
        goto LABEL_20;
LABEL_12:
      set_immd();
      get_flags_ex();
      result = is_off();
      if ( (_BYTE)result )
        return insn_add_off_drefs();
      return result;
    case 6u:
    case 7u:
      if ( v5 == 7 )
        map_code_ea();
LABEL_7:
      v7 = has_insn_feature();
      if ( *(_BYTE *)(a3 + 1) == 7 )
      {
        if ( !v7 )
          return insn_add_cref();
      }
      else if ( !v7 )
      {
        return insn_add_cref();
      }
      result = insn_add_cref();
      if ( *(_BYTE *)(a1 + 232) )
      {
        result = func_does_return();
        *(_BYTE *)(a1 + 232) = result;
      }
      return result;
    default:
      if ( under_debugger )
        goto LABEL_22;
      interr();
LABEL_20:
      if ( under_debugger )
LABEL_22:
        BUG();
      interr();
      return sub_4100(10301);
  }
}

