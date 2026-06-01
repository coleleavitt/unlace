__int64 __fastcall sub_463B0(__int64 a1, __int64 a2)
{
  int word; // ebx
  char v3; // al
  int v4; // edx

  word = get_word(a2);
  v3 = get_word(a2 + 2);
  HIWORD(v4) = HIWORD(word);
  LOWORD(v4) = word & 0x7E0;
  return ((word << 11) | v4 | v3 & 0x1F) << 16;
}

