__int64 __fastcall sub_2850(__int64 a1, __int64 a2)
{
  if ( a2 != 95 || *(_QWORD *)(a1 + 152) == -1 )
    return 0;
  netnode_check(a1 + 152, "$ PE header", 0, 1);
  return 0;
}
