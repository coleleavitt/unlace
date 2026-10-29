unsigned __int64 __fastcall sub_4E20(__int64 a1, int a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v11; // rdi
  __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 109);
  v15 = __readfsqword(0x28u);
  v14 = a5;
  netnode_supset(v9, a2, &v14, 8, 65);
  netnode_supset(*(_QWORD *)(a1 + 109), a2, a3, 0, 83);
  if ( a4 )
  {
    v13 = *(_QWORD *)(a1 + 109);
    v14 = 1;
    netnode_supset(v13, a2, &v14, 8, 87);
  }
  if ( a6 != -1 )
  {
    v11 = *(_QWORD *)(a1 + 109);
    v14 = a6 + 1;
    netnode_supset(v11, a2, &v14, 8, 71);
  }
  return v15 - __readfsqword(0x28u);
}
