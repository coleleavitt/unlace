void __fastcall sub_3ECB40(__int64 a1, int a2, int a3, int a4, double a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r14d

  if ( *(_WORD *)(a1 + 890) != 8 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD81u, a5);
LABEL_21:
    BUG();
  }
  if ( *(_BYTE *)(a1 + 145) != 5 || *(_BYTE *)(a1 + 185) != 5 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD82u, a5);
    goto LABEL_21;
  }
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 152);
  v8 = v6;
  if ( *(_WORD *)(a1 + 48) == 583 )
    v8 = v6 + 32;
  v9 = *(_QWORD *)(a1 + 192);
  v10 = v9 + 1;
  if ( v8 > 63 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD83u, a5);
    goto LABEL_21;
  }
  if ( (unsigned int)v9 > 0x1F )
  {
    if ( !under_debugger )
      sub_37E160(0xCD84u, a5);
    goto LABEL_21;
  }
  if ( v8 + v10 > 64 )
    LOBYTE(v10) = 64 - v8;
  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(_QWORD *)(v11 + 760);
  if ( !v12 )
    sub_3E5460(a5);
  v13 = *(_DWORD *)(*(_QWORD *)(v11 + 752) + 4 * v12 - 4);
  *(_QWORD *)(v11 + 760) = v12 - 1;
  sub_3EC710(a1, (1LL << v10) - 1, 3, v13, *(unsigned __int16 *)(a1 + 890));
  sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), a2, v13, v5, 0);
  sub_3EAB70(a1, 0x16u, *(unsigned __int16 *)(a1 + 890), v5, a4, v5, 0);
  sub_3E8540(*(_QWORD *)(a1 + 832), v13);
}

