__int64 __fastcall sub_116C0(__int64 a1)
{
  unsigned __int16 byte; // ax

  byte = get_byte();
  return sub_10D40(a1, 83 - ((byte >> 2) & 1u), 255, 255);
}

