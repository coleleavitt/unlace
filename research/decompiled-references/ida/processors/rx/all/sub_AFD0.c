void __noreturn sub_AFD0()
{
  if ( !under_debugger )
    interr();
  BUG();
}

