unsigned __int64 __fastcall sub_3D7E0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int16 v5; // ax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 v9; // al

  v2 = netnode_altval(*(_QWORD *)(a1 + 152), 0, 65);
  v3 = node2ea(v2 - 1);
  v4 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 352) = v3;
  v5 = netnode_altval(v4, -1, 65);
  v6 = *(_QWORD *)(a1 + 152);
  *(_WORD *)(a1 + 188) = v5;
  *(_DWORD *)(a1 + 260) = netnode_altval(v6, -3, 65);
  v7 = sub_3B700(a1);
  v8 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 376) = v7;
  *(_DWORD *)(a1 + 384) = netnode_altval(v8, -5, 65) - 1;
  sub_3D3E0(a1, 0);
  v9 = getinf(8);
  return sub_3B640(a1, v9, 0);
}

