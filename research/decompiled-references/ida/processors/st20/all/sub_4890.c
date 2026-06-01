__int64 __fastcall sub_4890(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // al
  __int64 result; // rax

  v4 = *(_BYTE *)(a3 + 1);
  if ( v4 != 5 )
  {
    if ( v4 == 7 )
    {
      if ( (unsigned __int8)has_insn_feature() )
      {
        if ( !(unsigned __int8)func_does_return() )
          *(_BYTE *)(a1 + 228) = 0;
      }
      return insn_add_cref();
    }
    if ( under_debugger )
LABEL_19:
      BUG();
    interr();
LABEL_17:
    if ( !under_debugger )
    {
      interr();
      return sub_49E0(10110);
    }
    goto LABEL_19;
  }
  if ( !a4 )
    goto LABEL_17;
  set_immd();
  get_flags_ex();
  if ( !(unsigned __int8)is_defarg() && *(_WORD *)(a2 + 24) == 4 )
  {
    num_flag();
    set_op_type();
  }
  get_flags_ex();
  result = op_adds_xrefs();
  if ( (_BYTE)result )
    return insn_add_off_drefs();
  return result;
}

