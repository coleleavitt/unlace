__int64 __fastcall sub_9A50(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a2 + 1);
  if ( (_BYTE)result == 2 )
  {
    calc_dataseg();
    insn_create_op_data();
    return insn_add_dref();
  }
  else if ( (_BYTE)result == 4 )
  {
    sub_99B0(a1);
    get_flags_ex();
    result = op_adds_xrefs();
    if ( (_BYTE)result )
      return insn_add_off_drefs();
  }
  return result;
}

