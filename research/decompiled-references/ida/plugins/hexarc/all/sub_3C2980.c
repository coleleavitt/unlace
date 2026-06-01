unsigned __int64 __fastcall sub_3C2980(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  v4 = __readfsqword(0x28u);
  sub_3C2810(a1, a2, a3);
  return v4 - __readfsqword(0x28u);
}

