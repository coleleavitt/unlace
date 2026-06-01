void __noreturn sub_14850()
{
  if ( !under_debugger )
  {
    interr();
    if ( !under_debugger )
    {
      interr();
      if ( !under_debugger )
        interr();
      BUG();
    }
    BUG();
  }
  BUG();
}

