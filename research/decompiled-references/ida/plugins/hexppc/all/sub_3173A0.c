void __fastcall __noreturn sub_3173A0(__int64 a1, unsigned int a2)
{
  const char *v3; // rax

  if ( !dword_4DC890++ )
  {
    v3 = sub_1AAEA0(*(_QWORD *)(a1 + 64));
    sub_69660((__int64)"LVAR %s\n", v3);
  }
  if ( !under_debugger )
    sub_37EEE0(a2);
  BUG();
}

