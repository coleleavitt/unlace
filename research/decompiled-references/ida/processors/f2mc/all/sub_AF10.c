unsigned __int64 __fastcall sub_AF10(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-38h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  getinf();
  get_ea_name();
  sub_9F90(
    a2,
    0xFFFF,
    (__int64)byte_F38B,
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
    &dword_F62C,
    0);
  if ( v3 )
    qfree();
  return v4 - __readfsqword(0x28u);
}

