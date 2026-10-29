unsigned __int64 __fastcall sub_FC10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = getinf(16);
  v10 = 0;
  v9 = nullptr;
  get_ea_name(&v9, v2, 3, 0);
  v3 = &unk_13D10;
  if ( (_QWORD)v10 )
    v3 = v9;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(v4 + 40);
  v6 = *(_QWORD *)(v4 + 48);
  if ( v5 )
    sub_EC90(a2, 0xFFFF, (__int64)&unk_12591, v5, v6, v3);
  else
    sub_EC90(a2, 0xFFFF, (__int64)&unk_12583, v6, v3);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, 0xFFFF, v7, 0.0);
  }
  return v11 - __readfsqword(0x28u);
}

