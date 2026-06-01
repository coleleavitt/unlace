__int64 __fastcall sub_8C00(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ecx

  if ( ((a3 >> 7) & 0x3F) == 0 )
    return sub_89B0(a1, a2, a3, (__int64)qword_F7C0, 0);
  if ( (a3 & 0x1800) == 0 )
    return 0;
  v4 = sub_89B0(a1, a2, a3, (__int64)qword_F7E0 + 6 * (int)(((a3 >> 7) & 0x3F) - 16), 0);
  if ( v4 )
    sub_7210(a2);
  return v4;
}

