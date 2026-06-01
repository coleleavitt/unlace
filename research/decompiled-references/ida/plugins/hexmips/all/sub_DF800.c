void __noreturn sub_DF800()
{
  if ( !under_debugger )
  {
    interr();
    sub_DF820(2858);
  }
  BUG();
}

