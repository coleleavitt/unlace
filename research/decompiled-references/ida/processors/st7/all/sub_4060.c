__int64 __fastcall sub_4060(__int64 a1)
{
  __int64 result; // rax

  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    result = (unsigned int)*(unsigned __int16 *)(a1 + 24) - 5;
    if ( (unsigned int)result <= 3 )
      return set_op_type();
  }
  return result;
}

