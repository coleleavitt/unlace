__int64 __fastcall sub_BE50(__int64 a1, int a2)
{
  __int64 v2; // rsi

  v2 = (unsigned int)(a2 - 16);
  if ( (unsigned int)v2 > 9 )
    return 0xFFFFFFFFLL;
  else
    return dword_15F60[v2];
}

