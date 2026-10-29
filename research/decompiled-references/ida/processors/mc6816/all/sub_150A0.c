__int64 __fastcall sub_150A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  set_immd();
  get_flags_ex();
  if ( (unsigned __int8)op_adds_xrefs() )
    insn_add_off_drefs();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a2 + 1) == 4
      && *(_QWORD *)(a2 + 16) > 0xFFu
      && *(_WORD *)(a2 + 6) <= 2u
      && get_sreg() != -1
      && getseg() )
    {
      return op_offset();
    }
    else
    {
      num_flag();
      return set_op_type();
    }
  }
  return result;
}

