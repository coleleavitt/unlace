__int64 __fastcall sub_5550(__int64 a1)
{
  __int64 result; // rax

  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    result = (unsigned int)*(unsigned __int16 *)(a1 + 24) - 10;
    if ( ((*(_WORD *)(a1 + 24) - 10) & 0xFFFD) == 0 )
    {
      num_flag();
      return set_op_type();
    }
  }
  return result;
}

