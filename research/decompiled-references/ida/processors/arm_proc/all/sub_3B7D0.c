unsigned __int64 __fastcall sub_3B7D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  getinf();
  get_ea_name();
  sub_39B30(a2, 0xFFFF, (__int64)&unk_86DE1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), &s1);
  return v3 - __readfsqword(0x28u);
}

