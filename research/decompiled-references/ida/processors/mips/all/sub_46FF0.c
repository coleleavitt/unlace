__int64 __fastcall sub_46FF0(__int16 a1)
{
  char v1; // cl

  v1 = a1 - 120;
  if ( (unsigned __int16)(a1 - 120) <= 0xEu )
  {
    if ( ((1LL << v1) & 0x2841) != 0 )
      return 1;
    if ( ((1LL << v1) & 0x5002) != 0 )
      return 0;
  }
  if ( under_debugger )
    BUG();
  interr(10437);
  return sub_47040();
}

