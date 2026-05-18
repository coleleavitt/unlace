__int64 __fastcall sub_CB800(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( (__int16)a1 < (__int16)a2 )
  {
    result = a2;
    if ( (__int16)a1 + 49 >= (__int16)a2 )
    {
      if ( (__int16)a1 + 31 < (__int16)a2 )
        return a2 + 1;
      else
        return a2 + byte_1BACA0[(__int16)a2 - (__int16)a1];
    }
  }
  else
  {
    result = a1;
    if ( (__int16)a2 + 49 >= (__int16)a1 )
    {
      if ( (__int16)a2 + 31 >= (__int16)a1 )
        return a1 + byte_1BACA0[(__int16)a1 - (__int16)a2];
      else
        return a1 + 1;
    }
  }
  return result;
}
