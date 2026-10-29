__int64 __fastcall sub_43C00(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 504) = a2;
  netnode_check();
  ea2node();
  netnode_supset();
  return invalidate_regfinder_cache();
}

