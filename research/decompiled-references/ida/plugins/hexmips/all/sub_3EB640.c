void __fastcall sub_3EB640(__int64 a1, unsigned int a2, int a3, int a4, double a5)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // ebp

  if ( ((*(_WORD *)(a1 + 890) - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC6Fu, a5);
    BUG();
  }
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 832);
  v7 = *(_QWORD *)(v6 + 760);
  if ( !v7 )
    sub_3E5460(a5);
  v8 = *(int *)(*(_QWORD *)(v6 + 752) + 4 * v7 - 4);
  *(_QWORD *)(v6 + 760) = v7 - 1;
  v9 = v8;
  sub_3EAB70(a1, a2, *(unsigned __int16 *)(a1 + 890), a3, v5, v8, 0);
  sub_3EAE40((__int64 *)a1, v9, (__int64)"__integer_overflow");
  sub_3E8540(*(_QWORD *)(a1 + 832), v9);
}

