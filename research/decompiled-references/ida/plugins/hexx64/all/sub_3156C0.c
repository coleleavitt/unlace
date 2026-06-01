__int64 __fastcall sub_3156C0(__m128i *a1, unsigned int a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v9 = 0;
  v8 = 0x800000000LL;
  v10 = 0;
  v6 = sub_314D00(a1, (__m128i *)&v8, a2, a4, 0.0, a6);
  sub_312B80((__int64)&v8, 0.0);
  return v6;
}

