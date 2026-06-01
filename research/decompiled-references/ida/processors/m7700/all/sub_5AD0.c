__int64 __fastcall sub_5AD0(__int64 a1)
{
  __int64 result; // rax

  set_immd();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    result = *(unsigned __int16 *)(a1 + 24);
    if ( (_WORD)result == 2 || (_WORD)result == 45 )
      return set_op_type();
  }
  return result;
}

