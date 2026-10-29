__int64 __fastcall sub_5760(_QWORD *a1)
{
  __int64 v2; // rdi

  netnode_supset(a1[1037], 0, a1, 0, 83);
  v2 = a1[1037];
  if ( a1[1034] <= 1u )
    netnode_supdel(v2, 1, 83);
  else
    netnode_supset(v2, 1, a1[1033], 0, 83);
  netnode_supset(a1[1037], 2, a1 + 1024, 2, 83);
  netnode_supset(a1[1037], 3, (char *)a1 + 8194, 2, 83);
  return netnode_supset(a1[1037], 4, a1 + 1036, 2, 83);
}
