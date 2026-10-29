unsigned __int64 __fastcall sub_DAC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // r9
  __int64 v4; // rdx
  void *v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = getinf(16);
  v7 = 0;
  v6 = nullptr;
  get_ea_name(&v6, v2, 3, 0);
  v3 = &unk_11E50;
  if ( (_QWORD)v7 )
    v3 = v6;
  sub_CE00(
    a2,
    0xFFFF,
    (__int64)&unk_11955,
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
    v3);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, 0xFFFF, v4, 0.0);
  }
  return v8 - __readfsqword(0x28u);
}

