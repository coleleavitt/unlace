unsigned __int64 __fastcall sub_122290(__int64 a1, __int64 a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-58h] BYREF
  char v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h]
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = a2;
  memset(&v3[1], 0, 32);
  v4 = 0;
  v3[0] = &off_4DD9A8;
  sub_11E900((_BYTE *)a1, (__int64)v3);
  *(_QWORD *)(a1 + 24) = a2;
  return v6 - __readfsqword(0x28u);
}

