void __fastcall __noreturn sub_314140(__int64 a1, unsigned int a2)
{
  if ( !dword_4BB890++ )
  {
    sub_66B20((__int64)"BLOCK %d\n", *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL));
    sub_9BE60(*(_QWORD *)(a1 + 16), (__int64)"INTERR %d", a2);
  }
  if ( !under_debugger )
    sub_37B760(a2);
  BUG();
}

