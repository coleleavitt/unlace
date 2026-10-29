__int64 __fastcall sub_40D0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a3 + 1);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 1:
    case 3:
      return result;
    case 2:
      result = is_forced_operand();
      if ( !(_BYTE)result )
      {
        insn_create_op_data();
        return insn_add_dref();
      }
      return result;
    case 4:
      sub_4060(a2);
      get_flags_ex();
      result = op_adds_xrefs();
      if ( !(_BYTE)result )
        return result;
      result = is_forced_operand();
      if ( (_BYTE)result )
        return result;
      return insn_add_off_drefs();
    case 5:
      if ( a4 )
      {
        sub_4060(a2);
        get_flags_ex();
        result = op_adds_xrefs();
        if ( (_BYTE)result )
          return insn_add_off_drefs();
      }
      else
      {
        if ( under_debugger )
LABEL_20:
          BUG();
        interr();
        return sub_42C0(10111);
      }
      return result;
    case 7:
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 224) = 0;
      return insn_add_cref();
    default:
      if ( under_debugger )
        goto LABEL_20;
      interr();
      return insn_add_off_drefs();
  }
}

