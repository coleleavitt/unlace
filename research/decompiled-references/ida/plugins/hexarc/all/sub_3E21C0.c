__int64 __fastcall sub_3E21C0(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 <= 63 )
    return (unsigned int)(4 * a2 + 8);
  result = (unsigned int)(a2 - 64);
  if ( a2 >= 68 )
    return 0xFFFFFFFFLL;
  return result;
}

