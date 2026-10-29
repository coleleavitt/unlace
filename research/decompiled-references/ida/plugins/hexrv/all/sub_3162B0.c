void __fastcall __noreturn sub_3162B0(__int64 a1, unsigned int a2, double a3)
{
  if ( !dword_4C1B70++ )
  {
    sub_1B1540(*(int **)(a1 + 32));
    sub_68D20((__int64)"INSN: %a: %s\n", a3, *(const char **)(*(_QWORD *)(a1 + 32) + 24LL));
  }
  if ( !under_debugger )
    sub_37DDE0(a2);
  BUG();
}

