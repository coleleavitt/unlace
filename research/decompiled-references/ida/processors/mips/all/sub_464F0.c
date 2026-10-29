__int64 __fastcall sub_464F0(__int64 a1, unsigned __int16 a2)
{
  __int16 word; // ax
  __int16 v3; // ax

  word = get_word(a1);
  put_word(a1, word & 0xF800 | (a2 >> 11) | (32 * ((a2 >> 5) & 0x3F)));
  v3 = get_word(a1 + 2);
  put_word(a1 + 2, a2 & 0x1F | v3 & 0xFFE0u);
  return split_sreg_range(a1, 67, 1, 2, 0);
}

