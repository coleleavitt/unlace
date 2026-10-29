unsigned __int64 sub_D310()
{
  __int64 v0; // rax
  __int64 v1; // rax
  int v3; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-40h]
  unsigned __int64 v5; // [rsp+18h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      v1 = netnode_altval();
      if ( v1 )
      {
        if ( v1 == 1 )
        {
          v3 = 3;
        }
        else if ( v1 == 2 )
        {
          v3 = 2;
        }
        else
        {
          v0 = node2ea();
          v4 = v0 & 0xFFFFFFFFFFFFFFFELL;
          v3 = v0 & 1;
        }
        node2ea();
        sub_D280(&v3);
      }
    }
    while ( netnode_supnext() != -1 );
  }
  return v5 - __readfsqword(0x28u);
}

