unsigned __int64 __fastcall sub_DCF0(__int64 a1, unsigned __int64 a2, const char *a3)
{
  void *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a2 > 0xFFF && !(unsigned __int8)is_problem_present(1, a1) )
  {
    v8 = nullptr;
    v9 = 0;
    sub_DC30((__int64 *)&v8, (__int64)"%s unmapped address %llx", a3, a2);
    v5 = &unk_21435;
    if ( (_QWORD)v9 )
      v5 = v8;
    remember_problem(1, a1, v5);
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, a1, v6, v7);
    }
  }
  return v10 - __readfsqword(0x28u);
}
