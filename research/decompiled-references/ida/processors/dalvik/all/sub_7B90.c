__int64 __fastcall sub_7B90(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // eax

  v1 = *(unsigned __int16 *)(a1 + 24);
  v2 = v1 - 15;
  LOBYTE(v2) = (unsigned __int16)(v1 - 15) <= 3u;
  LOBYTE(v1) = (_WORD)v1 == 233;
  return v1 | v2;
}

