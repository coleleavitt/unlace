__int64 __fastcall sub_A2B00(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, char a6, __m128i a7)
{
  int v9; // ecx
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF

  v9 = *(_DWORD *)(a4 + 4);
  v12[3] = __readfsqword(0x28u);
  v12[0] = 0xFFFFFFFF00000000LL;
  v12[1] = 0;
  sub_120A10((__int64)v12, (__int64)a2, a5, v9, -1, 0);
  sub_A29B0(a1, a2, a3, a4, (unsigned __int8 *)v12, a6, a7);
  sub_11CDA0((__int64)v12);
  return a1;
}

