__int64 sub_44D70()
{
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      if ( (unsigned __int16)netnode_altval() )
      {
        netnode_altval();
        sub_30140();
      }
    }
    while ( netnode_supnext() != -1 );
  }
  return netnode_supdel_all();
}
