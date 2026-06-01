__int64 __fastcall sub_12290(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // eax
  int v5; // edx

  v5 = *(unsigned __int16 *)(a1 + 24);
  LOBYTE(v4) = (_WORD)v5 == 55;
  LOBYTE(a4) = (_WORD)v5 == 157;
  v5 -= 62;
  LOBYTE(v5) = (unsigned __int16)v5 <= 2u;
  return v5 | a4 | v4;
}

