void __noreturn sub_FA20()
{
  if ( !under_debugger )
    interr();
  BUG();
}

