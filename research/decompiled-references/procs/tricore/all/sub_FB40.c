unsigned __int64 __fastcall sub_FB40(__int64 a1, __int64 a2)
{
  char v2; // al
  const char *v3; // r8
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdx
  void *v8; // [rsp+0h] [rbp-28h] BYREF
  __int128 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = 0;
  get_segm_name(&v8, a2, 1);
  v2 = segtype(*(_QWORD *)(a1 + 16));
  v3 = "CODE";
  if ( v2 == 3 )
    v3 = "DATA";
  v4 = &unk_1D228;
  if ( (_QWORD)v9 )
    v4 = v8;
  sub_EC60(a1, 0xFFFF, (__int64)&unk_155AE, v4, v3);
  v5 = &unk_1D228;
  if ( (_QWORD)v9 )
    v5 = v8;
  sub_EC60(a1, 0xFFFF, (__int64)&unk_155C2, v5);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, 0xFFFF, v6, 0.0);
  }
  return v10 - __readfsqword(0x28u);
}
