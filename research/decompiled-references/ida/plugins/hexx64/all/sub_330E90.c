bool __fastcall sub_330E90(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-48h] BYREF
  char v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  unsigned __int64 v8; // [rsp+38h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  v5[0] = &off_4E37C0;
  v6 = 0;
  v5[1] = v3;
  v7 = v3 + 232;
  memset(&v5[2], 0, 24);
  return (unsigned int)sub_11E9B0(a2, (__int64)v5, 0, 0, a3) == 1;
}

