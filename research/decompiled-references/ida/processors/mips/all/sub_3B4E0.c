unsigned __int64 __fastcall sub_3B4E0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v7; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  vars0 = ea2node(*(_QWORD *)(a1 + 352)) + 1;
  netnode_supset(*(_QWORD *)(a1 + 152), 0, &vars0, 8, 65);
  v2 = *(_QWORD *)(a1 + 152);
  vars0 = *(unsigned __int16 *)(a1 + 188);
  netnode_supset(v2, -1, &vars0, 8, 65);
  if ( *(_BYTE *)(a1 + 312) )
  {
    v7 = *(_QWORD *)(a1 + 152);
    vars0 = *(unsigned int *)(a1 + 120);
    netnode_supset(v7, -2, &vars0, 8, 65);
  }
  v3 = *(_QWORD *)(a1 + 152);
  vars0 = *(unsigned int *)(a1 + 260);
  netnode_supset(v3, -3, &vars0, 8, 65);
  v4 = *(_QWORD *)(a1 + 152);
  vars0 = *(_QWORD *)(a1 + 376);
  netnode_supset(v4, -4, &vars0, 8, 65);
  v5 = *(_QWORD *)(a1 + 152);
  vars0 = (unsigned int)(*(_DWORD *)(a1 + 384) + 1);
  netnode_supset(v5, -5, &vars0, 8, 65);
  return vars8 - __readfsqword(0x28u);
}

