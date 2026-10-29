bool __fastcall sub_3311B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-48h] BYREF
  char v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 64);
  v4[0] = off_4DDE80;
  v5 = 0;
  v4[1] = v2;
  v6 = v2 + 232;
  memset(&v4[2], 0, 24);
  return (unsigned int)sub_11E3F0(a2, (__int64)v4, 0, 0) == 1;
}

