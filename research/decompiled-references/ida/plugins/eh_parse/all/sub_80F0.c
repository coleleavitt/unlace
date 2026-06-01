__int64 __fastcall sub_80F0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  __int64 v4; // r12
  int v5; // r13d
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h] BYREF
  __int128 v8; // [rsp+18h] [rbp-40h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  netnode_check(&v7, "$ eh info", 0, 0);
  *(_QWORD *)(a1 + 104) = v7;
  v1 = netnode_exist(a1 + 104);
  if ( !(_BYTE)v1 )
    return 0;
  v2 = v1;
  v7 = 0;
  v8 = 0;
  if ( ea2node(0) && netnode_qgetblob(*(_QWORD *)(a1 + 104), &v7, 1, 0, 321) > 0 )
  {
    netnode_delblob(*(_QWORD *)(a1 + 104), 0, 321);
    netnode_setblob(*(_QWORD *)(a1 + 104), v7, v8, 0, 65);
  }
  if ( netnode_qgetblob(*(_QWORD *)(a1 + 104), &v7, 1, 0, 65) <= 0 )
  {
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v7);
    }
    return 0;
  }
  v6 = v7;
  v4 = v8 + v7;
  v5 = unpack_dd(&v6, v8 + v7);
  *(_DWORD *)(a1 + 120) = unpack_dd(&v6, v4);
  if ( v5 > 0 )
    *(_DWORD *)(a1 + 124) = unpack_dd(&v6, v4);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v2;
}

