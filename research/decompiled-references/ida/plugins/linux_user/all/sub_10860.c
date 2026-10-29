__int64 sub_10860()
{
  int v0; // ebp

  qsnprintf();
  if ( fopenRT() )
  {
    v0 = 3;
    do
    {
      if ( qgetline() < 0 )
      {
        qfclose();
        return 32;
      }
      --v0;
    }
    while ( v0 );
    qfclose();
    if ( under_debugger )
      BUG();
    interr();
  }
  return 32;
}

