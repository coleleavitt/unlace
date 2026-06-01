__int64 __fastcall sub_3EFEC0(__int64 a1, int a2, unsigned int a3, double a4, __m128 a5)
{
  __int64 v5; // rbp
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[3] = __readfsqword(0x28u);
  v7[0] = 0xFFFFFFFF00000000LL;
  v7[1] = 0;
  v5 = sub_3EF590(a1, (__int64)"readx18", a2, nullptr, a3, a4, a5);
  sub_11C7E0((__int64)v7);
  sub_151110(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 832) + 712LL);
  return v5;
}

