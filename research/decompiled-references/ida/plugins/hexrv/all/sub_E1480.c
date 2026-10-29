__int64 sub_E1480()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int v2; // edx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  if ( !(unsigned __int8)getinf_flag() )
    return 256;
  netnode_check();
  v1 = netnode_altval();
  if ( v1 <= 0x74 )
    return 256;
  v2 = *(_DWORD *)(get_ph() + 4);
  result = 176;
  if ( v2 )
  {
    v3 = (unsigned int)(v2 - 13);
    if ( (unsigned int)v3 > 0x3B )
      return 256;
    v4 = 0x800000000000005LL;
    if ( !_bittest64(&v4, v3) || v1 == 117 )
      return 256;
  }
  return result;
}

