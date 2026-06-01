void __fastcall __noreturn sub_31B3B0(__int64 a1, unsigned int a2, double a3)
{
  if ( !dword_4EF950++ )
  {
    sub_1B5B40(*(int **)(a1 + 32));
    sub_6D0A0((__int64)"INSN: %a: %s\n", a3, *(const char **)(*(_QWORD *)(a1 + 32) + 24LL));
  }
  if ( !under_debugger )
    sub_383060(a2, a3);
  BUG();
}

