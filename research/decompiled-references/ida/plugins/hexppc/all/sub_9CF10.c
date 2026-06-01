__int64 __fastcall sub_9CF10(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v3; // [rsp+28h] [rbp-20h]
  unsigned __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  memset(&v2[1], 0, 32);
  v2[0] = off_4C8FC0;
  v3 = 0;
  ((void (__fastcall *)(__int64, _QWORD *))sub_11BFA0)(a1, v2);
  return v3;
}

