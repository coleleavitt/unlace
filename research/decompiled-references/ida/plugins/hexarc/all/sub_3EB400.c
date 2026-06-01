int *__fastcall sub_3EB400(
        __int64 a1,
        int *a2,
        int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        char a7)
{
  *a2 = a3;
  sub_11EAC0((__int64)(a2 + 8), a4);
  sub_11EAC0((__int64)(a2 + 12), a5);
  sub_11EAC0((__int64)(a2 + 16), a6);
  if ( a7 || a3 > 62 )
    a2[1] |= 0x10u;
  return a2;
}

