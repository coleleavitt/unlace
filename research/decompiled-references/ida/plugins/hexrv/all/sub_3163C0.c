void __fastcall __noreturn sub_3163C0(__int64 a1, unsigned int a2)
{
  if ( !dword_4C1B70++ )
  {
    sub_68D20((__int64)"BLOCK %d\n", *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL));
    sub_9E060(*(_QWORD *)(a1 + 16), (__int64)"INTERR %d", a2);
  }
  if ( !under_debugger )
    sub_37DDE0(a2);
  BUG();
}

