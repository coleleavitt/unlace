__int64 __fastcall sub_170D80(_BYTE *a1)
{
  _QWORD v2[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v3; // [rsp+28h] [rbp-20h]
  unsigned __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  memset(&v2[1], 0, 32);
  v2[0] = off_4B0870;
  v3 = 0;
  sub_11B2A0(a1, v2);
  return v3;
}

