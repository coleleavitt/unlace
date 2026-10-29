unsigned __int64 __fastcall sub_2B3370(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  _QWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 96);
  v10 = __readfsqword(0x28u);
  v7[1] = a2;
  v9 = a3;
  v7[0] = &off_4B4B58;
  v8 = 118;
  sub_2B0E40(v4, (__int64)v7);
  sub_13FB70(*(_QWORD *)(a1 + 96), a2, a3);
  return v10 - __readfsqword(0x28u);
}

