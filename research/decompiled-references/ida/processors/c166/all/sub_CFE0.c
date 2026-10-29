void __noreturn sub_CFE0()
{
  if ( !under_debugger )
    interr();
  BUG();
}

