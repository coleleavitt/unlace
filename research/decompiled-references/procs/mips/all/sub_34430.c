__int64 __fastcall sub_34430(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbp

  v4 = ea2node(a2);
  v5 = ea2node(a3);
  netnode_supdel_range(*(_QWORD *)(a1 + 152), v4, v5, 108);
  netnode_supdel_range(*(_QWORD *)(a1 + 152), v4, v5, 115);
  netnode_supdel_range(*(_QWORD *)(a1 + 152), v4, v5, 111);
  return netnode_supdel_range(*(_QWORD *)(a1 + 104), v4, v5, 0);
}
