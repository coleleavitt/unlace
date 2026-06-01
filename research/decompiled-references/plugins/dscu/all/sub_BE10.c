__int64 __fastcall sub_BE10(__int64 a1)
{
  netnode_supdel(*(_QWORD *)(a1 + 104), 2, 83);
  netnode_supdel(*(_QWORD *)(a1 + 104), 3, 65);
  netnode_supdel_all(*(_QWORD *)(a1 + 104), 116);
  netnode_supdel_all(*(_QWORD *)(a1 + 104), 103);
  netnode_supdel_all(*(_QWORD *)(a1 + 104), 104);
  netnode_supdel_all(*(_QWORD *)(a1 + 104), 112);
  return netnode_supdel_all(*(_QWORD *)(a1 + 104), 102);
}
