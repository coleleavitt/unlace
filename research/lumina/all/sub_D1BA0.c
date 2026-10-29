const char *__fastcall sub_D1BA0(int a1)
{
  const char *result; // rax

  result = "no more rows available";
  if ( a1 != 101 )
  {
    result = "abort due to ROLLBACK";
    if ( a1 != 516 )
    {
      result = "another row available";
      if ( a1 != 100 )
      {
        result = "unknown error";
        if ( (unsigned __int8)a1 <= 0x1Cu )
        {
          result = off_23A980[(unsigned __int8)a1];
          if ( !result )
            return "unknown error";
        }
      }
    }
  }
  return result;
}
