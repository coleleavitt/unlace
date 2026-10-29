__int64 __fastcall sub_CB6C0(_BYTE *a1, unsigned __int64 a2)
{
  if ( a2 <= 0x7F )
  {
    *a1 = a2;
    return 1;
  }
  else if ( a2 <= 0x3FFF )
  {
    a1[1] = a2 & 0x7F;
    *a1 = (a2 >> 7) | 0x80;
    return 2;
  }
  else
  {
    return sub_C2790(a1, a2);
  }
}
