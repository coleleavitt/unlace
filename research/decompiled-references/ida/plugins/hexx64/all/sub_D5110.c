unsigned __int64 __fastcall sub_D5110(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7, char a8)
{
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rdx
  signed __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v9 = a5 - 1;
  v10 = -a5;
  v11 = v9;
  v12 = v10;
  v21 = __readfsqword(0x28u);
  v13 = v10 & (v9 + *(_QWORD *)(a2 + 8));
  v14 = *(_QWORD *)(a2 + 16);
  if ( v14 != -1 )
  {
    v15 = v10 & (unsigned __int64)(v9 + v14);
    *(_QWORD *)(a2 + 16) = v15;
    if ( v13 < v15 )
      LODWORD(v13) = v15;
  }
  v20 = a3;
  sub_CFF70();
  if ( a8 && (int)v13 != v20 && *(_DWORD *)(*(_QWORD *)(a1 + 80) + 656LL) > a6 )
  {
    if ( !under_debugger )
      sub_383060(0xC7DDu, a7);
    BUG();
  }
  *(_QWORD *)(a2 + 8) = a4 + v20;
  v16 = *(_QWORD *)(a2 + 16);
  if ( v16 != -1 )
    *(_QWORD *)(a2 + 16) = a4 + (v12 & (v11 + v16));
  cleanup_argloc();
  return v21 - __readfsqword(0x28u);
}

