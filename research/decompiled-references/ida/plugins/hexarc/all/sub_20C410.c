unsigned __int64 __fastcall sub_20C410(__int64 a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  memset(&v2[1], 0, 32);
  v2[0] = off_4ABDE8;
  sub_119560(a1, (__int64)v2);
  return v3 - __readfsqword(0x28u);
}

