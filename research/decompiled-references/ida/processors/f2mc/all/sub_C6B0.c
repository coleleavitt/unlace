signed __int64 __fastcall sub_C6B0(__int64 a1)
{
  signed __int64 result; // rax

  *(_WORD *)(a1 + 242) = netnode_altval();
  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_B760((__int64 *)(a1 + 128), 0);
  return result;
}

