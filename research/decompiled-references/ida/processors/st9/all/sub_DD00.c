signed __int64 __fastcall sub_DD00(__int64 a1)
{
  signed __int64 result; // rax

  *(_DWORD *)(a1 + 4676) = netnode_altval();
  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_C890((__int64 *)(a1 + 128), 0);
  return result;
}

