__int64 __fastcall sub_2B0CC0(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-30h]

  ea2node();
  v2 = netnode_altval();
  v4 = v2 - 1;
  if ( !v2 && a2 )
  {
    netnode_check();
    ea2node();
    netnode_supset();
  }
  return v4;
}

