__int64 __fastcall sub_117720(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = a1;
  v3 = a1 & 1;
  if ( (a1 & 1) != 0 && a1 != -1 )
  {
    if ( (unsigned __int64)(8 * a2) > 0x3F
      || (v4 = (1LL << (8 * (unsigned __int8)a2)) - 1, result = v4 & a1, v4 != (v4 & a1)) && (result & 1) != 0 )
    {
      do
      {
        v5 = v3;
        v3 *= 2;
        result &= ~v5;
      }
      while ( (v3 & result) != 0 );
    }
  }
  return result;
}

