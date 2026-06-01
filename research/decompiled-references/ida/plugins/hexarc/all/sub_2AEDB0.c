__int64 sub_2AEDB0()
{
  __int64 v0; // rax
  unsigned int v1; // edx

  ea2node();
  v0 = netnode_altval();
  v1 = 0;
  if ( v0 )
  {
    netnode_supdel();
    netnode_kill();
    return 1;
  }
  return v1;
}

