__int64 __fastcall sub_12A530(__int64 a1, __int64 a2, unsigned int a3, int a4, double a5)
{
  __int64 v7; // rsi
  unsigned int v8; // ebx
  _QWORD vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  vars0[3] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 8);
  vars0[0] = 0xFFFFFFFF00000000LL;
  vars0[1] = 0;
  sub_126420((__int64)vars0, v7, a2, a4, a5);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(
         *(_QWORD *)(a1 + 16),
         vars0,
         a3);
  sub_11CDA0((__int64)vars0);
  return v8;
}

