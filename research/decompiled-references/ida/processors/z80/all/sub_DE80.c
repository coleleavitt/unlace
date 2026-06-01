void __noreturn sub_DE80()
{
  if ( !under_debugger )
    interr();
  BUG();
}

