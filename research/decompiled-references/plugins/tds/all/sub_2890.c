__int64 __fastcall sub_2890(__int64 a1, __int64 a2)
{
  if ( a2 != 95 || *(_QWORD *)(a1 + 48) == -1 )
    return 0;
  netnode_check(a1 + 48, "$ PE header", 0, 1);
  return 0;
}
