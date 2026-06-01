__int64 __fastcall sub_16A30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = netnode_hashval_long();
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    return 1;
  }
  return v3;
}
