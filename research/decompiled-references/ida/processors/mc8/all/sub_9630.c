signed __int64 __fastcall sub_9630(__int64 a1)
{
  signed __int64 result; // rax

  *(_DWORD *)(a1 + 2992) = netnode_altval();
  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_8640((__int64 *)(a1 + 128), 0);
  return result;
}

