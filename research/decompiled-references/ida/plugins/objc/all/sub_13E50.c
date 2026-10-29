__int64 sub_13E50()
{
  __int64 v0; // rdx
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  v0 = netnode_altval();
  result = 71;
  if ( !v0 )
  {
    v2 = netnode_altval();
    result = 115;
    if ( !v2 )
    {
      v3 = netnode_altval();
      result = 70;
      if ( !v3 )
        return netnode_altval() != 0 ? 0x69 : 0;
    }
  }
  return result;
}
