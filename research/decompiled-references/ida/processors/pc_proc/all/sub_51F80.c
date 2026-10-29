__int64 sub_51F80()
{
  __int64 result; // rax

  result = get_flags_ex();
  if ( (result & 0x800) == 0 )
    return set_cmt();
  return result;
}

