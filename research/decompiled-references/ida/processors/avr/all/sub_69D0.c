unsigned __int64 __fastcall sub_69D0(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-38h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  getinf();
  get_ea_name();
  sub_5E40(
    a2,
    0xFFFF,
    (__int64)&unk_B37F,
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
    &unk_B62C,
    0);
  if ( v3 )
    qfree();
  return v4 - __readfsqword(0x28u);
}

