unsigned __int64 __fastcall sub_11ED10(_BYTE *a1, __int64 a2, __int64 a3)
{
  _QWORD v4[5]; // [rsp+0h] [rbp-48h] BYREF
  char v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6 = a2;
  memset(&v4[2], 0, 24);
  v5 = 0;
  v4[0] = off_4D7D48;
  v4[1] = a3;
  sub_11E340(a1, (__int64)v4);
  return v7 - __readfsqword(0x28u);
}

