unsigned __int64 __fastcall sub_126240(
        char *a1,
        unsigned __int64 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128i a7)
{
  _QWORD v10[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v10[0] = 0xFFFFFFFF00000000LL;
  v10[1] = 0;
  sub_120A10((__int64)v10, a2, a5, a6, a4, 0);
  sub_126010(a1, a2, a3, a4, (unsigned __int8 *)v10, a7);
  sub_11CDA0((__int64)v10);
  return v11 - __readfsqword(0x28u);
}

