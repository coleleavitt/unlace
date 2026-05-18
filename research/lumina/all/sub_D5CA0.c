__int64 __fastcall sub_D5CA0(__int16 a1)
{
  unsigned __int64 v1; // rax

  _BitScanReverse64(&v1, a1);
  return (unsigned __int16)word_1BACD0[((unsigned __int64)a1 >> (60 - ((unsigned __int8)v1 ^ 0x3Fu))) & 7]
       + 10 * (60 - ((unsigned int)v1 ^ 0x3F))
       - 3;
}
