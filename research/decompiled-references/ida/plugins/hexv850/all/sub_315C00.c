void __fastcall __noreturn sub_315C00(__int64 a1, unsigned int a2)
{
  if ( !dword_4C2A70++ )
  {
    sub_68620((__int64)"BLOCK %d\n", *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL));
    sub_9D960(*(_QWORD *)(a1 + 16), (__int64)"INTERR %d", a2);
  }
  if ( !under_debugger )
    sub_37CFE0(a2);
  BUG();
}

