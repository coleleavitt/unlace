unsigned __int64 __fastcall sub_1975D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 vars0; // [rsp+18h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+20h] [rbp+8h]

  v2 = (unsigned int)*(char *)(a2 + 12);
  vars8 = __readfsqword(0x28u);
  sub_326800(&vars0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL) + 1504LL), v2);
  copy_tinfo_t();
  clear_tinfo_t();
  vars0 = 25;
  copy_tinfo_t();
  clear_tinfo_t();
  print_tinfo();
  vars8 = 0;
  vars0 = 0;
  print_tinfo();
  return vars8 - __readfsqword(0x28u);
}

