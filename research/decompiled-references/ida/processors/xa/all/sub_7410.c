__int64 __fastcall sub_7410(__int64 a1)
{
  __int64 result; // rax

  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    result = *(unsigned __int16 *)(a1 + 24);
    if ( (_WORD)result == 52 || (_WORD)result == 71 || (_WORD)result == 4 )
    {
      num_flag();
      return set_op_type();
    }
  }
  return result;
}

