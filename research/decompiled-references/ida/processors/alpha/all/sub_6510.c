unsigned __int16 __fastcall sub_6510(__int64 a1)
{
  unsigned __int16 result; // ax

  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( (_BYTE)result )
    return result;
  result = *(_WORD *)(a1 + 24);
  if ( result > 0x89u )
  {
    if ( result <= 0xABu )
    {
      if ( result > 0xA9u )
        return set_op_type();
      if ( result == 147 )
        goto LABEL_8;
      if ( result == 165 )
        return set_op_type();
      return result;
    }
    result -= 197;
    if ( result > 2u )
      return result;
LABEL_8:
    num_flag();
    return set_op_type();
  }
  if ( result > 0x82u )
    return set_op_type();
  if ( result == 69 )
    goto LABEL_8;
  if ( result > 0x45u )
  {
    if ( result > 0x4Du )
    {
      result -= 95;
      if ( result <= 6u )
        return set_op_type();
    }
    else if ( result != 70 )
    {
      return set_op_type();
    }
  }
  else
  {
    if ( result == 10 )
      goto LABEL_8;
    result -= 14;
    if ( result <= 1u )
      goto LABEL_8;
  }
  return result;
}

