__int64 __fastcall sub_2B7CF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  char v5; // [rsp+10h] [rbp-28h]
  __int64 v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 96);
  v7 = __readfsqword(0x28u);
  v4[1] = a2;
  v5 = 117;
  v4[0] = &off_4E10F0;
  v6 = 0;
  return sub_2B63F0(v2, v4);
}

