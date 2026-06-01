__int64 __fastcall sub_A0950(__int64 a1)
{
  __int64 v2[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v3; // [rsp+28h] [rbp-20h]
  unsigned __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  memset(&v2[1], 0, 32);
  v2[0] = (__int64)&off_4DBE60;
  v3 = 0;
  sub_11F9E0(a1, v2);
  return v3;
}

