__int64 __fastcall sub_B5190(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int128 v15; // rdi

  v4 = a1[7];
  if ( v4 && ((unsigned int)(*(_DWORD *)v4 - 56) <= 1 && *(_BYTE *)(v4 + 64) != 8 || sub_32ED40(*(_DWORD *)v4, 0)) )
  {
    if ( !under_debugger )
      sub_383060(0xC820u, a3);
    BUG();
  }
  v6 = a1[8];
  v7 = sub_1CFBB0(v6, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 4) & 0x20) != 0 )
  {
    v8 = *(int *)(*(_QWORD *)(v6 + 1504) + 80LL);
    v7 += v8;
  }
  if ( a1[40] < v7 )
    a1[40] = v7;
  v10 = sub_96D90(a1[60], a2, v8, v9);
  if ( v10 )
    sub_338690((__int64)a1, v10, v11, v12, v13, v14);
  sub_338690((__int64)a1, a2, v11, v12, v13, v14);
  if ( *(_DWORD *)a2 == 58 )
    sub_1D55B0(a1[8], *(_QWORD *)(a2 + 24));
  do
  {
    *((_QWORD *)&v15 + 1) = a2;
    *(_QWORD *)&v15 = a1;
  }
  while ( (unsigned __int8)sub_B36D0(v15) );
  return a2;
}

