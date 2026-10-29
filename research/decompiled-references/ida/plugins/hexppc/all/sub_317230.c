void __fastcall __noreturn sub_317230(__int64 a1, unsigned int a2, double a3)
{
  if ( !dword_4DC890++ )
  {
    sub_1B2100(*(int **)(a1 + 32));
    sub_69660((__int64)"INSN: %a: %s\n", a3, *(const char **)(*(_QWORD *)(a1 + 32) + 24LL));
  }
  if ( !under_debugger )
    sub_37EEE0(a2);
  BUG();
}

