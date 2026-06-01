unsigned __int64 __fastcall sub_13690(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v10 = ea2node(*(_QWORD *)(a1 + 152));
  netnode_supset(*(_QWORD *)(a1 + 120), 2, &v10, 8, 65);
  v2 = ea2node(*(_QWORD *)(a1 + 160));
  v3 = *(_QWORD *)(a1 + 120);
  v10 = v2;
  netnode_supset(v3, 1, &v10, 8, 65);
  v4 = ea2node(*(_QWORD *)(a1 + 168));
  v5 = *(_QWORD *)(a1 + 120);
  v10 = v4;
  netnode_supset(v5, 3, &v10, 8, 65);
  v6 = *(_QWORD *)(a1 + 120);
  v10 = *(_QWORD *)(a1 + 176);
  netnode_supset(v6, 4, &v10, 8, 577);
  v7 = *(_QWORD *)(a1 + 120);
  v10 = *(unsigned __int16 *)(a1 + 184);
  netnode_supset(v7, -1, &v10, 8, 65);
  v8 = *(_QWORD *)(a1 + 120);
  v10 = 1;
  netnode_supset(v8, -2, &v10, 8, 65);
  return v11 - __readfsqword(0x28u);
}
