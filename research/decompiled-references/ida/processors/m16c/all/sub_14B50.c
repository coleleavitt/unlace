__int64 __fastcall sub_14B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // al

  get_flags_ex();
  result = *(unsigned __int8 *)(a3 + 1);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 0:
    case 1:
    case 3:
    case 8:
    case 9:
    case 0xA:
      return result;
    case 2:
      calc_dataseg();
      insn_create_op_data();
      return insn_add_dref();
    case 4:
      result = sub_14A20(a1, a2, a3);
      if ( !(_BYTE)result )
        goto LABEL_10;
      return result;
    case 5:
      if ( !(unsigned __int8)is_defarg() && (*(_BYTE *)(a3 + 24) & 2) != 0 )
      {
        num_flag();
        set_op_type();
        get_flags_ex();
      }
LABEL_10:
      set_immd();
      result = is_off();
      if ( (_BYTE)result )
      {
        sub_168E0(a1, a2, a3);
        return insn_add_off_drefs();
      }
      return result;
    case 6:
    case 7:
      v5 = has_insn_feature();
      if ( *(_BYTE *)(a3 + 1) == 7 )
      {
        if ( !v5 )
          return insn_add_cref();
      }
      else if ( !v5 )
      {
        return insn_add_cref();
      }
      result = insn_add_cref();
      if ( *(_BYTE *)(a1 + 4372) )
      {
        result = func_does_return();
        *(_BYTE *)(a1 + 4372) = result;
      }
      return result;
    default:
      if ( under_debugger )
        BUG();
      interr();
      return sub_14D80(560);
  }
}

