__int64 __fastcall sub_33BB0(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // eax
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *); // rax
  unsigned int v6; // ebx
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[3] = __readfsqword(0x28u);
  v4 = sub_320C0(a2);
  sub_33A90(v8, a1, *(_QWORD *)(a1 + 536) + 16LL * v4, a3);
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp(v8, a1);
  v6 = hexdsp(218, v8);
  qfree(v8[0]);
  return v6;
}
