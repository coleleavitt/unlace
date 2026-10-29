__int64 __fastcall sub_319A0(__int64 a1)
{
  __int64 v1; // rax

  *(_WORD *)a1 = 17990;
  v1 = sub_31370();
  *(_BYTE *)(a1 + 1) = netnode_altval(v1, 0, 65);
  return a1;
}

