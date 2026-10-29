__int64 __fastcall sub_8860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 v4; // ax

  result = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)result != 5 )
  {
    if ( (_BYTE)result == 7 )
    {
      sub_87F0(a1, a2, a3);
      if ( (unsigned __int8)has_insn_feature() )
        *(_BYTE *)(a1 + 680) = func_does_return();
      return insn_add_cref();
    }
    else if ( (_BYTE)result == 2 )
    {
      sub_87F0(a1, a2, a3);
      insn_add_dref();
      return insn_create_op_data();
    }
    return result;
  }
  set_immd();
  get_flags_ex();
  if ( (unsigned __int8)is_defarg() )
    goto LABEL_9;
  v4 = *(_WORD *)(a2 + 24);
  if ( v4 > 0x63u )
  {
    if ( v4 != 108 )
    {
      if ( v4 > 0x6Cu )
      {
        if ( v4 != 125 )
          goto LABEL_9;
      }
      else if ( (unsigned __int16)(v4 - 101) > 1u )
      {
        goto LABEL_9;
      }
    }
LABEL_18:
    num_flag();
    set_op_type();
    goto LABEL_9;
  }
  if ( v4 > 0x5Bu )
  {
    set_op_type();
    goto LABEL_9;
  }
  if ( (unsigned __int16)(v4 - 48) <= 0xBu )
    goto LABEL_18;
LABEL_9:
  get_flags_ex();
  result = op_adds_xrefs();
  if ( (_BYTE)result )
    return insn_add_off_drefs();
  return result;
}

