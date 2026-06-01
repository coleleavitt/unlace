__int64 __fastcall sub_65B0(__int64 a1)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 136) = netnode_altval();
  *(_WORD *)(a1 + 132) = netnode_altval();
  *(_WORD *)(a1 + 134) = netnode_altval();
  result = netnode_altval();
  *(_DWORD *)(a1 + 128) = result;
  return result;
}

