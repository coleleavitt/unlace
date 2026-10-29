void __noreturn sub_16B80()
{
  if ( !under_debugger )
    interr();
  BUG();
}

