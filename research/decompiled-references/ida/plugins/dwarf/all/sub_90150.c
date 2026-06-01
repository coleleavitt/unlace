__int64 __fastcall sub_90150(__int64 a1, __int64 (**a2)())
{
  __int64 (**v3[2])(); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int8 v4; // [rsp+10h] [rbp-18h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v3[1] = a2;
  v4 = 0;
  v3[0] = off_C9010;
  sub_8E7C0(a1, v3);
  return v4;
}

