__int64 __fastcall sub_469F0(__int64 a1, __int64 a2)
{
  int word; // ebx

  word = get_word(a2);
  return (((word << 16) | (unsigned __int16)get_word(a2 + 2)) & 0x3FFFFFFu) << ((((word << 16) & 0xFC000000) == -268435456)
                                                                              + 1);
}
