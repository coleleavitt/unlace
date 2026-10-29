__int64 __fastcall sub_E090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = netnode_altval();
  *(_WORD *)(a3 + 154) = result;
  return result;
}

