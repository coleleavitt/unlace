void __fastcall __noreturn sub_31B520(__int64 a1, unsigned int a2, double a3)
{
  const char *v4; // rax

  if ( !dword_4EF950++ )
  {
    v4 = sub_1AE8E0(*(_QWORD *)(a1 + 64));
    sub_6D0A0((__int64)"LVAR %s\n", v4);
  }
  if ( !under_debugger )
    sub_383060(a2, a3);
  BUG();
}

