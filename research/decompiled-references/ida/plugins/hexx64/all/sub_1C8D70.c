__int64 __fastcall sub_1C8D70(__int64 a1, __int64 a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5 = a2;
  memset(&v3[1], 0, 32);
  v4 = 0;
  v3[0] = &off_4DE890;
  return sub_11FBB0(a1, (__int64)v3);
}

