unsigned __int64 __fastcall sub_4C430(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v1 = *(unsigned __int16 *)(a1 + 472);
  v13 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 120);
  v12 = v1;
  netnode_supset(v3, -3, &v12, 8, 65);
  v4 = *(_QWORD *)(a1 + 120);
  v12 = *(unsigned int *)(a1 + 460);
  netnode_supset(v4, -4, &v12, 8, 65);
  v5 = ea2node(*(_QWORD *)(a1 + 424));
  v6 = *(_QWORD *)(a1 + 120);
  v12 = v5 + 1;
  netnode_supset(v6, -1, &v12, 8, 65);
  v7 = ea2node(*(_QWORD *)(a1 + 432));
  v8 = *(_QWORD *)(a1 + 120);
  v12 = v7 + 1;
  netnode_supset(v8, -5, &v12, 8, 65);
  v9 = ea2node(*(_QWORD *)(a1 + 440));
  v10 = *(_QWORD *)(a1 + 120);
  v12 = v9 + 1;
  netnode_supset(v10, -6, &v12, 8, 65);
  return v13 - __readfsqword(0x28u);
}

