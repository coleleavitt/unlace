__int64 __fastcall sub_7250(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // eax

  result = (unsigned int)(2 * a2 - 768);
  if ( (unsigned __int16)a2 > 0x7Fu )
  {
    if ( (unsigned __int16)a2 <= 0xEFu )
    {
      v3 = -!sub_7170(a1);
      LOWORD(v3) = v3 & 0xE00;
      return v3 + 2 * (a2 & 0x7Fu) - 3840;
    }
    else
    {
      return 2 * (a2 & 0xFu) - 32;
    }
  }
  return result;
}

