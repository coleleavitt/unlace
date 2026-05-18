unsigned __int64 __fastcall sub_109290(
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
  int v15; // r8d
  __int64 v16; // r9
  __int128 _0; // [rsp+0h] [rbp+0h] BYREF
  int vars10; // [rsp+10h] [rbp+10h]
  int vars14; // [rsp+14h] [rbp+14h]
  int vars18; // [rsp+18h] [rbp+18h]
  double vars20; // [rsp+20h] [rbp+20h]
  __int64 vars30; // [rsp+30h] [rbp+30h] BYREF
  char vars38; // [rsp+38h] [rbp+38h]
  char vars39; // [rsp+39h] [rbp+39h]
  char vars3A; // [rsp+3Ah] [rbp+3Ah]
  char vars3B; // [rsp+3Bh] [rbp+3Bh]
  char vars3C; // [rsp+3Ch] [rbp+3Ch]
  char vars3D; // [rsp+3Dh] [rbp+3Dh]
  char vars3E; // [rsp+3Eh] [rbp+3Eh]
  char vars3F; // [rsp+3Fh] [rbp+3Fh]
  char vars40; // [rsp+40h] [rbp+40h]
  char vars41; // [rsp+41h] [rbp+41h]
  char vars42; // [rsp+42h] [rbp+42h]
  char vars43; // [rsp+43h] [rbp+43h]
  char vars44; // [rsp+44h] [rbp+44h]
  unsigned __int64 vars48; // [rsp+48h] [rbp+48h]

  vars48 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_1081B0(a1, a2, a3, &_0, a13, a14, a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    sub_C8C60((__int64)&_0);
    BYTE5(vars30) = 45;
    vars38 = 45;
    vars3B = 32;
    vars3E = 58;
    vars41 = 58;
    vars44 = 0;
    v15 = abs32(SDWORD2(_0));
    v16 = (unsigned int)(v15 >> 31);
    BYTE1(vars30) = (char)(v15 / 1000) % 10 + 48;
    BYTE2(vars30) = (char)(v15 / 100) % 10 + 48;
    BYTE3(vars30) = (char)(v15 / 10) % 10 + 48;
    BYTE4(vars30) = v15 % 10 + 48;
    BYTE6(vars30) = (char)(SHIDWORD(_0) / 10) % 10 + 48;
    HIBYTE(vars30) = SHIDWORD(_0) % 10 + 48;
    vars39 = (char)(vars10 / 10) % 10 + 48;
    vars3A = vars10 % 10 + 48;
    vars3C = (char)(vars14 / 10) % 10 + 48;
    vars3D = vars14 % 10 + 48;
    vars3F = (char)(vars18 / 10) % 10 + 48;
    vars40 = vars18 % 10 + 48;
    vars42 = (int)vars20 / 10 % 10 + 48;
    vars43 = (int)vars20 % 10 + 48;
    if ( SDWORD2(_0) < 0 )
    {
      LOBYTE(vars30) = 45;
      sub_F48B0((__int64)a1, &vars30, 20, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v16);
    }
    else
    {
      sub_F48B0(
        (__int64)a1,
        (__int64 *)((char *)&vars30 + 1),
        19,
        1u,
        (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
        v16);
    }
  }
  return __readfsqword(0x28u) ^ vars48;
}
