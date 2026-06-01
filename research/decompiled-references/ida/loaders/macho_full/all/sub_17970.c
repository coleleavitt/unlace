__int64 __fastcall sub_17970(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rdx

  v1 = *(_QWORD **)(a1 + 8);
  v2 = v1[30];
  if ( *(_QWORD *)(v1[1] + 16LL) == v2 || v2 == -1 || v1[23] && rangeset_t_find_range() )
    netnode_supset();
  return 0;
}

