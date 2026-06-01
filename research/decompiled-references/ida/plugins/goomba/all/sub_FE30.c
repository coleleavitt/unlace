__int64 __fastcall sub_FE30(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD *); // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-20h]
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v5[0] = off_4D800;
  memset(&v5[1], 0, 32);
  v6 = 0;
  hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(a1, a2, a3);
  hexdsp(342, a1, v5);
  return v6;
}

