__int64 __fastcall sub_9A00(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  int word; // ebx

  result = -1;
  if ( a1 != -1 )
  {
    if ( a2 == 3 )
    {
      word = (unsigned __int16)get_word();
      return word | ((unsigned __int8)get_byte() << 16);
    }
    else if ( a2 > 3 )
    {
      if ( a2 == 4 )
        return (unsigned int)get_dword();
    }
    else if ( a2 == 1 )
    {
      return (unsigned __int8)get_byte();
    }
    else if ( a2 == 2 )
    {
      return (unsigned __int16)get_word();
    }
  }
  return result;
}

