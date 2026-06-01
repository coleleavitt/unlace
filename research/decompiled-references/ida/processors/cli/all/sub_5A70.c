unsigned __int64 __fastcall sub_5A70(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rbp
  __int64 ash; // rax
  void *v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v1 = getinf(16);
  v6 = 0;
  v5 = nullptr;
  get_ea_name(&v5, v1, 3, 0);
  v2 = &unk_15584;
  if ( (_QWORD)v6 )
    v2 = v5;
  ash = get_ash();
  sub_4D60(a1, 0xFFFF, (__int64)&unk_14B50, *(_QWORD *)(ash + 48), v2);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v7 - __readfsqword(0x28u);
}

