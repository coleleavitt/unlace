void __noreturn sub_BBC0()
{
  if ( !under_debugger )
    interr();
  BUG();
}

