unsigned __int8 *__fastcall sub_4145E0(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        char a7)
{
  *(_DWORD *)a2 = a3;
  sub_125180(a2 + 32, a4);
  sub_125180(a2 + 48, a5);
  sub_125180(a2 + 64, a6);
  if ( a7 || a3 > 62 )
    *((_DWORD *)a2 + 1) |= 0x10u;
  return a2;
}

