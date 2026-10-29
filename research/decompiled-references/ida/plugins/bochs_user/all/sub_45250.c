unsigned __int64 __fastcall sub_45250(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]

  v2 = __readfsqword(0x28u);
  sub_F3C0((__int64 *)(a1 + 8));
  *(_BYTE *)a1 = 1;
  return v2 - __readfsqword(0x28u);
}

