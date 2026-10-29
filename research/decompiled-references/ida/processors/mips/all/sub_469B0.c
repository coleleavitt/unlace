__int64 __fastcall sub_469B0(__int64 a1, __int64 a2)
{
  __int16 word; // bx

  word = get_word(a2);
  return (__int16)((word << 11) | word & 0x7E0 | get_word(a2 + 2) & 0x1F);
}

