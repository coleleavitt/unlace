__int64 __fastcall sub_F3B40(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, double a4)
{
  __int64 result; // rax

  if ( (a2[5] & 1) == 0 )
  {
    if ( a3 && (a3[5] & 1) != 0 )
    {
      a2 = a3;
    }
    else
    {
      result = sub_F3950(a1, a2, a4);
      if ( result )
        return result;
      a2 = a3;
    }
  }
  return sub_F3950(a1, a2, a4);
}
