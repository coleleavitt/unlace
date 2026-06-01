__int64 __fastcall sub_4880(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, double a6)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  result = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)result == 5 )
  {
    if ( !a5 )
      sub_47F0(a2, a6);
    set_immd();
    get_flags_ex();
    if ( !(unsigned __int8)is_defarg() )
    {
      v7 = *(unsigned __int16 *)(a2 + 24);
      if ( (unsigned __int16)v7 <= 0x20u )
      {
        v8 = 0x18400FF00LL;
        if ( _bittest64(&v8, v7) )
        {
          num_flag();
          set_op_type();
        }
      }
    }
    get_flags_ex();
    result = op_adds_xrefs();
    if ( (_BYTE)result )
      return insn_add_off_drefs();
  }
  else if ( (unsigned __int8)result > 5u )
  {
    if ( (_BYTE)result == 7 && !a4 )
    {
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 192) = 0;
      return insn_add_cref();
    }
  }
  else if ( (_BYTE)result == 2 )
  {
    if ( !a4 )
      goto LABEL_21;
  }
  else if ( (_BYTE)result == 3 && !a4 && (*(_WORD *)(a3 + 6) != 3 || *(_QWORD *)(a3 + 8) <= 5u) )
  {
    get_sreg();
LABEL_21:
    insn_add_dref();
    return insn_create_op_data();
  }
  return result;
}

