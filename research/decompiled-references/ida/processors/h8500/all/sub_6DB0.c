_BOOL8 __fastcall sub_6DB0(__int64 a1)
{
  _BOOL8 result; // rax

  result = netnode_altval() != 0;
  *(_WORD *)(a1 + 152) = result;
  return result;
}

