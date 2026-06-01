__int64 sub_5F90()
{
  __int64 result; // rax

  result = get_flags_ex() & 0x600;
  if ( result == 512 )
  {
    result = segtype();
    if ( (_BYTE)result == 12 )
    {
      prev_not_tail();
      result = get_flags_ex() & 0xC000;
      if ( result != 0x4000 )
      {
        del_items();
        create_data();
        getinf();
        if ( next_that() == -1 )
          getseg();
        return create_data();
      }
    }
  }
  return result;
}

