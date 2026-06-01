__int64 __fastcall sub_46360(__int64 a1, __int64 a2)
{
  unsigned __int16 word; // bx

  word = get_word(a2);
  return 4 * ((unsigned __int16)get_word(a2 + 2) | ((word & 0x1F) << 21) | (((word >> 5) & 0x1F) << 16));
}
