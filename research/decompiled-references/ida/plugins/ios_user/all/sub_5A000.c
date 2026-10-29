unsigned __int64 __fastcall sub_5A000(__int64 a1, int a2, unsigned __int8 a3)
{
  if ( a3 == 92 )
    return sub_59DE0(a1, a2, (__int64)"\\\\");
  if ( (unsigned __int8)(a3 - 32) > 0x5Eu )
    return sub_59DE0(a1, a2, (__int64)"\\x%02X", a3);
  return sub_59DE0(a1, a2, (__int64)"%c", a3);
}

