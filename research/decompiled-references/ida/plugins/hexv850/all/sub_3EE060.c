void __fastcall sub_3EE060(__int64 a1, int a2, int a3, int a4, double a5)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v12; // r13d

  if ( *(_BYTE *)(a1 + 65) != 10 || (v5 = *(_QWORD *)(a1 + 72), v7 = (unsigned int)v5, (unsigned int)v5 > 0xF) )
  {
    if ( !under_debugger )
      sub_37CFE0(0, a5);
    BUG();
  }
  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(_QWORD *)(v9 + 584);
  if ( !v10 )
    sub_3E4140(a5);
  v12 = *(_DWORD *)(*(_QWORD *)(v9 + 576) + 4 * v10 - 4);
  *(_QWORD *)(v9 + 584) = v10 - 1;
  sub_3ED6D0(a1, v7, v12, a5);
  sub_3ED490(a1, *(unsigned __int16 *)(a1 + 842), a3, a2, v12, a4, a5, *(_WORD *)(a1 + 48) == 104);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v12);
}

