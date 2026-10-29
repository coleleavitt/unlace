__int64 __fastcall sub_3EA410(__int64 a1, __int64 a2, _BYTE *a3)
{
  _QWORD v4[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4[2] = a2;
  v4[1] = 0;
  v4[4] = 0;
  v4[0] = off_4E4038;
  v5 = 0;
  v4[3] = a3;
  sub_11F1A0(a3, v4);
  return v5;
}

