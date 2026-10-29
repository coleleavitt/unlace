unsigned __int64 __fastcall sub_C290(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  _QWORD v13[2]; // [rsp+10h] [rbp-28h] BYREF
  char v14; // [rsp+20h] [rbp-18h]
  unsigned __int64 v15; // [rsp+28h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v13[0] = a2;
  v13[1] = a3;
  v14 = a4;
  sub_BBA0(a1, (__int64)v13, a5, a6, a7, a8, a9, a10, a11, a12);
  return v15 - __readfsqword(0x28u);
}

