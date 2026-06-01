unsigned __int64 __fastcall sub_9380(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v2; // r12d
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  set_immd();
  v2 = *a2;
  get_flags_ex();
  if ( (unsigned __int8)op_adds_xrefs() )
  {
    sub_A460(a2, v2);
    insn_add_off_drefs();
  }
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    result = *(unsigned __int16 *)(a1 + 24);
    if ( (unsigned __int16)result <= 0x36u )
    {
      if ( !(_WORD)result )
        return result;
      v4 = 0x4E000680D211AELL;
      if ( !_bittest64(&v4, result) )
        return result;
LABEL_10:
      num_flag();
      return set_op_type();
    }
    result = (unsigned int)(result - 56);
    if ( (unsigned __int16)result <= 0x3Eu )
    {
      v5 = 0x4044D00000000005LL;
      if ( _bittest64(&v5, result) )
        goto LABEL_10;
    }
  }
  return result;
}

