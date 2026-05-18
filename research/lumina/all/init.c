void init()
{
  signed __int64 v0; // rbp
  __int64 i; // rbx

  init_proc();
  v0 = &off_236198 - funcs_1A6F09;
  if ( v0 )
  {
    for ( i = 0; i != v0; ++i )
      funcs_1A6F09[i]();
  }
}
