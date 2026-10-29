__int64 __fastcall sub_3FD4A0(__int64 a1, int a2, unsigned __int8 *a3, double a4, __int64 a5, __int64 *a6)
{
  unsigned int v7; // ebp
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v9[3] = __readfsqword(0x28u);
  sub_123480((__int64)v9, a3);
  v7 = sub_3FD2B0(a1, a2, (__int64)v9, 0, 0, a6, a4);
  sub_11C7E0((__int64)v9);
  return v7;
}

