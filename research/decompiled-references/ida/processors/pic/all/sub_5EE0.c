unsigned __int64 __fastcall sub_5EE0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx

  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    result = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)result > 0x23u )
    {
      if ( (_WORD)result == 116 && *(_QWORD *)(a1 + 232) != -1 )
        return op_offset();
    }
    else if ( (unsigned __int16)result > 0x17u )
    {
      v3 = 0x811000000LL;
      if ( _bittest64(&v3, result) )
      {
        num_flag();
        return set_op_type();
      }
    }
  }
  return result;
}

