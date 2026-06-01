bool __fastcall sub_17C4E0(
        __int64 *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        unsigned __int8 a8,
        unsigned int a9)
{
  __int64 v10[7]; // [rsp+8h] [rbp-38h] BYREF

  v10[5] = __readfsqword(0x28u);
  memset(&v10[1], 0, 32);
  v10[0] = (__int64)&off_4DDFA0;
  return (unsigned int)sub_179EC0(a1, v10, a2, a3, a4, a5, a7, a6, a8, a9) != 0;
}

