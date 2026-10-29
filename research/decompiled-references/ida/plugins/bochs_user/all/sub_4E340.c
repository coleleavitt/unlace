unsigned __int64 __fastcall sub_4E340(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]

  v2 = __readfsqword(0x28u);
  sub_25230((__int64 *)(a1 + 32));
  *(_BYTE *)(a1 + 56) = 1;
  return v2 - __readfsqword(0x28u);
}

