__int64 __fastcall sub_2B38C0(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-38h] BYREF
  char v4; // [rsp+10h] [rbp-28h]
  __int64 v5; // [rsp+18h] [rbp-20h]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v3[1] = a2;
  v4 = 109;
  v3[0] = &off_4C1880;
  v5 = 0;
  return sub_2B1B70(a1, v3);
}

