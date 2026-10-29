__int64 __fastcall sub_7220(__int64 a1, int a2)
{
  int v3; // eax

  if ( (unsigned __int16)a2 > 0xEFu )
    return 2 * (a2 & 0xFu) - 32;
  v3 = -!sub_7170(a1);
  LOWORD(v3) = v3 & 0xE00;
  return (unsigned int)(v3 + 2 * a2 - 4096);
}

