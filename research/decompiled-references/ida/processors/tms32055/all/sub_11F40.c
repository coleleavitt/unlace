__int64 __fastcall sub_11F40(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi

  v2 = a2 >> 1;
  if ( (*(_BYTE *)(a1 + 256) & 2) != 0 && v2 <= 0x4F )
    return *((unsigned int *)qword_18EE0 + (int)v2);
  else
    return 0xFFFFFFFFLL;
}

