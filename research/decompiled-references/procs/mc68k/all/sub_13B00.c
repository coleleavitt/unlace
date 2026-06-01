__int64 __fastcall sub_13B00(__int64 a1, int a2, bool *a3)
{
  if ( (a2 & 0x800) != 0 )
  {
    if ( a3 )
      *a3 = (a2 & 0x400) != 0;
    a2 &= ~0x400u;
    return find_ioport(a1 + 160, a2);
  }
  if ( !a3 )
    return find_ioport(a1 + 160, a2);
  *a3 = 0;
  return find_ioport(a1 + 160, a2);
}
