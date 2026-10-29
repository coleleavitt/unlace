unsigned __int64 __fastcall sub_1C9DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[7]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5[3] = a3;
  v5[1] = a1;
  v5[2] = a2;
  v5[4] = 0;
  v5[5] = 0;
  v5[0] = off_4B1360;
  v5[6] = a4;
  sub_1C9040(a1, a2, v5);
  v5[0] = &unk_4BDE68;
  qfree();
  return v6 - __readfsqword(0x28u);
}

