unsigned __int64 __fastcall sub_66FA0(__int64 a1, char a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  v3 = __readfsqword(0x28u);
  sub_1B79D0(a1, a2);
  return v3 - __readfsqword(0x28u);
}

