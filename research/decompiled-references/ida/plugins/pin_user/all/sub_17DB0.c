unsigned __int64 *__fastcall sub_17DB0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *result; // rax
  unsigned __int64 *v6; // [rsp+8h] [rbp-20h]

  result = (unsigned __int64 *)byte_3A5B0;
  if ( (byte_3A5B0[0] & 2) != 0 )
  {
    result = (unsigned __int64 *)get_func();
    if ( result || (result = (unsigned __int64 *)get_next_func()) != nullptr )
    {
      do
      {
        if ( *result >= a3 )
          break;
        if ( (result[2] & 4) != 0 )
        {
          if ( a2 < *result )
          {
            v6 = result;
            sub_17D10(a1, a2, *result);
            result = v6;
          }
          a2 = result[1];
        }
        result = (unsigned __int64 *)get_next_func();
      }
      while ( result );
    }
  }
  if ( a2 < a3 )
    return (unsigned __int64 *)sub_17D10(a1, a2, a3);
  return result;
}

