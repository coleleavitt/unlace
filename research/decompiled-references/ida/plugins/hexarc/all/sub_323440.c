__int64 __fastcall sub_323440(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp

  netnode_check();
  v1 = netnode_altval();
  v2 = v1 - 1;
  if ( v1 && a1 )
    *a1 = netnode_altval();
  return v2;
}

