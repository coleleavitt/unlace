__int64 __fastcall create_dirtree(__int64 a1, __int64 a2)
{
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(2649);
    BUG();
  }
  return sub_4273A0(a1, a2, 0);
}
