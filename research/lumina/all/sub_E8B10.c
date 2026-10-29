unsigned __int64 __fastcall sub_E8B10(unsigned int a1, _BYTE *a2, __int64 a3, double a4)
{
  void (__fastcall *v4)(__int64, _QWORD, __int64 *); // rbp
  __int64 *v5; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-118h] BYREF
  int v8; // [rsp+18h] [rbp-100h]
  __int16 v9; // [rsp+1Ch] [rbp-FCh]
  char v10; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v11; // [rsp+F8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v7[0] = 0;
  v7[2] = 210;
  v8 = 0;
  v7[1] = &v10;
  v9 = 0;
  sub_D9E30((__int64)v7, a2, a3, a4);
  v4 = (void (__fastcall *)(__int64, _QWORD, __int64 *))qword_2415F8;
  v5 = sub_DC130((__int64)v7);
  v4(qword_241600, a1, v5);
  return __readfsqword(0x28u) ^ v11;
}
