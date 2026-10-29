__int64 __fastcall sub_329B0(double a1, double a2, __int64 a3, const char *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( a6 )
  {
    result = debug;
    if ( (debug & 0x40000) != 0 )
      return sub_111A0((__int64)"DEXSIP: add_module(%s, [%a -> %a))\n", a4, a1, a2);
  }
  return result;
}

