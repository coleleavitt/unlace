unsigned __int64 __fastcall sub_13AD0()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  sub_EC40();
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      get_ea_name();
      sub_EC40();
    }
    while ( netnode_supnext() != -1 );
  }
  sub_EC40();
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      get_ea_name();
      sub_EC40();
    }
    while ( netnode_supnext() != -1 );
  }
  sub_EC40();
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      get_ea_name();
      sub_EC40();
    }
    while ( netnode_supnext() != -1 );
  }
  sub_EC40();
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      node2ea();
      get_ea_name();
      sub_EC40();
    }
    while ( netnode_supnext() != -1 );
  }
  return v1 - __readfsqword(0x28u);
}
