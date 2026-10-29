__int64 __fastcall sub_9B00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)result == 5 )
  {
LABEL_5:
    sub_99B0(a2);
    get_flags_ex();
    result = op_adds_xrefs();
    if ( (_BYTE)result )
      return insn_add_off_drefs();
    return result;
  }
  if ( (unsigned __int8)result > 5u )
  {
    if ( (_BYTE)result == 7 )
    {
      map_code_ea();
      if ( (unsigned __int8)has_insn_feature() )
      {
        insn_add_cref();
        result = func_does_return();
        if ( !(_BYTE)result )
          *(_BYTE *)(a1 + 233) = 0;
      }
      else
      {
        return insn_add_cref();
      }
    }
  }
  else
  {
    if ( (_BYTE)result == 2 )
    {
      calc_dataseg();
      insn_add_dref();
      return insn_create_op_data();
    }
    if ( (_BYTE)result == 4 )
      goto LABEL_5;
  }
  return result;
}

