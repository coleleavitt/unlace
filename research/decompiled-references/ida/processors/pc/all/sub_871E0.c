void __fastcall sub_871E0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r12
  char v3; // al

  v2 = a2[1];
  if ( *a2 < v2 )
  {
    do
    {
      v3 = netnode_charval();
      if ( v3 )
      {
        if ( v3 != 3 )
          netnode_supdel();
      }
      ea2node();
      netnode_supnext();
    }
    while ( node2ea() < v2 );
  }
}
