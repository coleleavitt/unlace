__int64 __fastcall sub_55020(int a1, void (__fastcall ***a2)(__int64, __int64, void **))
{
  void (__fastcall **v3)(__int64, __int64, void **); // rax
  const char *v5; // rsi
  time_t v6; // rbp
  const char *v7; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a1 != -2 )
    return 1;
  v3 = *a2;
  ptr = nullptr;
  v9 = 0;
  (*v3)((__int64)a2, 1, &ptr);
  v5 = s1;
  if ( (_QWORD)v9 )
    v5 = (const char *)ptr;
  v6 = sub_58130(0, v5);
  ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, void **)))(*a2)[9])(a2);
  if ( v6 >= sub_4CC60() )
  {
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      j__free(ptr);
    }
    return 1;
  }
  v7 = s1;
  if ( (_QWORD)v9 )
    v7 = (const char *)ptr;
  sub_4BC40((__int64 (__fastcall ***)(_QWORD))"Wrong borrow date: %s\n", v7);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    j__free(ptr);
  }
  return 0;
}
