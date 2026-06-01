unsigned __int64 __fastcall sub_16380(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-58h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  unsigned __int64 v8; // [rsp+48h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v4 = *a4;
  v6[5] = a4;
  v6[6] = a2;
  v7 = a3;
  v6[1] = 31;
  v6[3] = -1;
  v6[4] = a1;
  v6[2] = v4;
  v6[0] = &off_3C280;
  sub_16340(a1, (__int64)v6, a2, a3);
  return v8 - __readfsqword(0x28u);
}
