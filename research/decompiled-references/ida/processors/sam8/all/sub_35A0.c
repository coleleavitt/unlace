__int64 __fastcall sub_35A0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+108h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 1:
    case 3:
    case 0xB:
      goto LABEL_3;
    case 2:
      goto LABEL_5;
    case 4:
      if ( *(_WORD *)(a3 + 6) != 3 )
        goto LABEL_2;
LABEL_5:
      insn_create_op_data();
      return insn_add_dref();
    case 5:
      if ( !a4 )
        return sub_34D0((__int64)"%a (%s): bad optype", a5, *(const char **)(a2 + 16));
      set_immd();
      get_flags_ex();
      if ( !(unsigned __int8)op_adds_xrefs() )
        goto LABEL_3;
      result = insn_add_off_drefs();
      break;
    case 7:
      if ( (unsigned __int8)has_insn_feature() )
      {
        insn_add_cref();
        if ( *(_BYTE *)(a1 + 120) )
        {
          if ( !(unsigned __int8)func_does_return() )
            *(_BYTE *)(a1 + 120) = 0;
        }
LABEL_3:
        result = v6 - __readfsqword(0x28u);
      }
      else
      {
        result = insn_add_cref();
      }
      break;
    case 9:
      insn_create_op_data();
      insn_add_dref();
      if ( !(unsigned __int8)is_mapped() )
        goto LABEL_3;
      get_word();
      add_cref();
      get_default_reftype();
      return op_offset();
    case 0xA:
LABEL_2:
      qsnprintf();
      set_name();
      insn_create_op_data();
      insn_add_dref();
      goto LABEL_3;
    default:
      return sub_34D0((__int64)"%a (%s): bad optype", a5, *(const char **)(a2 + 16));
  }
  return result;
}

