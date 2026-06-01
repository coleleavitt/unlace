unsigned __int64 __fastcall sub_D4B50(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  int v8; // r9d
  int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rdx
  signed __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v8 = a5 - 1;
  v9 = -a5;
  v10 = v8;
  v11 = v9;
  v20 = __readfsqword(0x28u);
  v12 = v9 & (v8 + *(_QWORD *)(a2 + 8));
  v13 = *(_QWORD *)(a2 + 16);
  if ( v13 != -1 )
  {
    v14 = v9 & (unsigned __int64)(v8 + v13);
    *(_QWORD *)(a2 + 16) = v14;
    if ( v12 < v14 )
      LODWORD(v12) = v14;
  }
  v19 = a3;
  sub_CF9B0();
  if ( a7 && (int)v12 != v19 && *(_DWORD *)(*(_QWORD *)(a1 + 80) + 656LL) > a6 )
  {
    if ( !under_debugger )
      sub_3835A0(51165);
    BUG();
  }
  *(_QWORD *)(a2 + 8) = a4 + v19;
  v15 = *(_QWORD *)(a2 + 16);
  if ( v15 != -1 )
    *(_QWORD *)(a2 + 16) = a4 + (v11 & (v10 + v15));
  cleanup_argloc();
  return v20 - __readfsqword(0x28u);
}

