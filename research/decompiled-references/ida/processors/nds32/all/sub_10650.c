unsigned __int64 __fastcall sub_10650(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  get_segm_name(&v7, a3, 0);
  v3 = &unk_21435;
  if ( (_QWORD)v8 )
    v3 = v7;
  sub_104D0(a2, 0xFFFF, (__int64)&unk_1FD40, v3);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, 0xFFFF, v4, v5);
  }
  return v9 - __readfsqword(0x28u);
}

