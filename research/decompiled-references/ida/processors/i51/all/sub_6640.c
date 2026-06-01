__int64 sub_6640()
{
  __int64 result; // rax

  result = getinf_flag();
  if ( (_BYTE)result )
  {
    result = get_auto_state();
    if ( (_DWORD)result == 40 )
    {
      result = get_func();
      if ( result )
        return add_auto_stkpnt();
    }
  }
  return result;
}

