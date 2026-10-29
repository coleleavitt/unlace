bool __fastcall sub_17BF20(
        __int64 *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned int a8)
{
  __int64 v9[7]; // [rsp+8h] [rbp-38h] BYREF

  v9[5] = __readfsqword(0x28u);
  memset(&v9[1], 0, 32);
  v9[0] = (__int64)off_4D8660;
  return (unsigned int)sub_179900(a1, v9, a2, a3, a4, a5, a6, a7, a8) != 0;
}

