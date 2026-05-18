unsigned __int64 __fastcall sub_109590(
        __m128i *a1,
        int a2,
        __int64 *a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __int64 a12,
        int a13,
        int a14)
{
  __int64 v14; // r9
  __int128 _0; // [rsp+0h] [rbp+0h] BYREF
  int vars14; // [rsp+14h] [rbp+14h]
  int vars18; // [rsp+18h] [rbp+18h]
  double vars20; // [rsp+20h] [rbp+20h]
  char vars2B; // [rsp+2Bh] [rbp+2Bh]
  __int64 vars30; // [rsp+30h] [rbp+30h] BYREF
  char vars38; // [rsp+38h] [rbp+38h]
  unsigned __int64 vars48; // [rsp+48h] [rbp+48h]

  vars48 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_1081B0(a1, a2, a3, &_0, a13, a14, a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    if ( !vars2B )
      sub_C8B90((__int64)&_0);
    BYTE2(vars30) = 58;
    BYTE5(vars30) = 58;
    vars38 = 0;
    LOBYTE(vars30) = (char)(vars14 / 10) % 10 + 48;
    BYTE1(vars30) = vars14 % 10 + 48;
    BYTE3(vars30) = (char)(vars18 / 10) % 10 + 48;
    BYTE4(vars30) = vars18 % 10 + 48;
    BYTE6(vars30) = (char)((int)vars20 / 10) % 10 + 48;
    HIBYTE(vars30) = (int)vars20 % 10 + 48;
    sub_F48B0((__int64)a1, &vars30, 8, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v14);
  }
  return __readfsqword(0x28u) ^ vars48;
}
