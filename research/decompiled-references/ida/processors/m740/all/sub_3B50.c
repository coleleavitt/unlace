__int64 __fastcall sub_3B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // ax

  get_flags_ex();
  result = *(unsigned __int8 *)(a3 + 1);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 0:
    case 1:
      return result;
    case 2:
      goto LABEL_5;
    case 4:
      result = op_adds_xrefs();
      if ( !(_BYTE)result )
        return result;
      insn_add_off_drefs();
      return insn_create_op_data();
    case 5:
      set_immd();
      if ( !(unsigned __int8)is_defarg() )
      {
        v5 = *(_WORD *)(a2 + 24);
        if ( v5 == 2 || v5 == 44 )
          set_op_type();
      }
      result = op_adds_xrefs();
      if ( (_BYTE)result )
        return insn_add_off_drefs();
      return result;
    case 7:
      if ( *(_WORD *)(a2 + 24) == 36 && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 224) = 0;
      return insn_add_cref();
    default:
      if ( under_debugger )
        BUG();
      interr();
LABEL_5:
      insn_add_dref();
      return insn_create_op_data();
  }
}

