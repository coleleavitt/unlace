void __fastcall sub_3EC7E0(__int64 a1, int a2, int a3, int a4, double a5)
{
  __int64 v6; // r8
  __int16 v7; // dx
  __int64 v8; // r13
  bool v9; // zf
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbp
  int v14; // r12d
  __int64 v15; // rsi

  v6 = a4;
  v7 = *(_WORD *)(a1 + 890);
  if ( ((v7 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC6Du, a5);
LABEL_18:
    BUG();
  }
  if ( *(_BYTE *)(a1 + 185) != 5 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC6Cu, a5);
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(a1 + 192);
  if ( (int)v8 <= 0 )
    goto LABEL_11;
  v9 = v7 == 4;
  v10 = 32;
  if ( !v9 )
    v10 = 64;
  if ( v10 < (int)v8 )
  {
LABEL_11:
    if ( !under_debugger )
      sub_37E160(0xCC6Eu, a5);
    goto LABEL_18;
  }
  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(_QWORD *)(v11 + 760);
  if ( !v12 )
    sub_3E5460(a5);
  v13 = a2;
  v14 = *(_DWORD *)(*(_QWORD *)(v11 + 752) + 4 * v12 - 4);
  *(_QWORD *)(v11 + 760) = v12 - 1;
  sub_3EAB70(a1, 0x17u, *(unsigned __int16 *)(a1 + 890), a3, v6, a2, 0);
  v15 = -1;
  if ( (_DWORD)v8 != 64 )
    v15 = (1LL << v8) - 1;
  sub_3EC710(a1, v15, 3, v14, *(unsigned __int16 *)(a1 + 890));
  sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), v13, v14, v13, 0);
  sub_3E8540(*(_QWORD *)(a1 + 832), v14);
}

