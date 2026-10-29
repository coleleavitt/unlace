void __noreturn sub_BD10()
{
  if ( !under_debugger )
    interr();
  BUG();
}

