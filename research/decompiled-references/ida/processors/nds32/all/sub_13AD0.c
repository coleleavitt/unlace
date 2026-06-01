__int64 __fastcall sub_13AD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbp

  v4 = ea2node(a2);
  v5 = ea2node(a3);
  netnode_supdel_range(*(_QWORD *)(a1 + 120), v4, v5, 65);
  netnode_supdel_range(*(_QWORD *)(a1 + 120), v4, v5, 115);
  return netnode_supdel_range(*(_QWORD *)(a1 + 120), v4, v5, 100);
}

