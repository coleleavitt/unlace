unsigned __int64 __fastcall sub_109710(
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
  int v14; // r8d
  __int64 v15; // r9
  __int128 _0; // [rsp+0h] [rbp+0h] BYREF
  int vars10; // [rsp+10h] [rbp+10h]
  char vars2A; // [rsp+2Ah] [rbp+2Ah]
  __int64 vars30; // [rsp+30h] [rbp+30h] BYREF
  char vars38; // [rsp+38h] [rbp+38h]
  char vars39; // [rsp+39h] [rbp+39h]
  char vars3A; // [rsp+3Ah] [rbp+3Ah]
  char vars3B; // [rsp+3Bh] [rbp+3Bh]
  unsigned __int64 vars48; // [rsp+48h] [rbp+48h]

  vars48 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_1081B0(a1, a2, a3, &_0, a13, a14, a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    if ( !vars2A )
      sub_C8A60((__int64 *)&_0);
    BYTE5(vars30) = 45;
    vars38 = 45;
    vars3B = 0;
    v14 = abs32(SDWORD2(_0));
    v15 = (unsigned int)(v14 >> 31);
    BYTE1(vars30) = (char)(v14 / 1000) % 10 + 48;
    BYTE2(vars30) = (char)(v14 / 100) % 10 + 48;
    BYTE3(vars30) = (char)(v14 / 10) % 10 + 48;
    BYTE4(vars30) = v14 % 10 + 48;
    BYTE6(vars30) = (char)(SHIDWORD(_0) / 10) % 10 + 48;
    HIBYTE(vars30) = SHIDWORD(_0) % 10 + 48;
    vars39 = vars10 / 10 % 10 + 48;
    vars3A = vars10 % 10 + 48;
    if ( SDWORD2(_0) < 0 )
    {
      LOBYTE(vars30) = 45;
      sub_F48B0((__int64)a1, &vars30, 11, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v15);
    }
    else
    {
      sub_F48B0(
        (__int64)a1,
        (__int64 *)((char *)&vars30 + 1),
        10,
        1u,
        (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
        v15);
    }
  }
  return __readfsqword(0x28u) ^ vars48;
}
