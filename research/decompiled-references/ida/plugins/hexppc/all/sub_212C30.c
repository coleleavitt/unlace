__int64 __fastcall sub_212C30(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+10h] [rbp-18h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6 = a3;
  v5[1] = a4;
  v5[0] = off_4CC778;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))sub_2B8640)(a1, a2, v5);
}

