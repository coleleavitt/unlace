__int64 __fastcall sub_11FBB0(__int64 a1, __int64 a2)
{
  __int64 v3[9]; // [rsp+0h] [rbp-48h] BYREF

  v3[7] = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 8) = a1;
  v3[5] = a2;
  memset(&v3[1], 0, 32);
  v3[0] = (__int64)&off_4DD6B0;
  return sub_11F9E0(a1, v3);
}

