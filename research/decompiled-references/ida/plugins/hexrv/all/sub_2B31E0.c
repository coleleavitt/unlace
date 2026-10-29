bool __fastcall sub_2B31E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+10h] [rbp-28h]
  __int64 v7; // [rsp+18h] [rbp-20h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 96);
  v8 = __readfsqword(0x28u);
  v5[1] = a3;
  v7 = a2;
  v6 = 100;
  v5[0] = &off_4B3B58;
  return sub_2B17F0(v3, v5) != 0;
}

