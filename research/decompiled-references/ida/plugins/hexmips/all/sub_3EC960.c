void __fastcall sub_3EC960(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rcx

  if ( *(_WORD *)(a1 + 890) != 8 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD7Cu, a4);
LABEL_23:
    BUG();
  }
  if ( *(_BYTE *)(a1 + 145) != 5 || *(_BYTE *)(a1 + 185) != 5 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD7Du, a4);
    goto LABEL_23;
  }
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 152);
  v6 = v5;
  if ( *(_WORD *)(a1 + 48) == 583 )
    v6 = v5 + 32;
  if ( v6 > 63 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD7Eu, a4);
    goto LABEL_23;
  }
  v7 = *(_QWORD *)(a1 + 192);
  v8 = v7 + 1;
  if ( (unsigned int)v7 > 0x1F )
  {
    if ( !under_debugger )
      sub_37E160(0xCD7Fu, a4);
    goto LABEL_23;
  }
  v9 = *(_QWORD *)(a1 + 832);
  if ( v6 + v8 > 64 )
    v8 = 64 - v6;
  v10 = *(_QWORD *)(v9 + 760);
  if ( !v10 )
    sub_3E5460(a4);
  v11 = v8 + v6;
  v12 = *(int *)(*(_QWORD *)(v9 + 752) + 4 * v10 - 4);
  *(_QWORD *)(v9 + 760) = v10 - 1;
  if ( v11 <= 63 )
  {
    sub_3EC710(a1, 64 - v11, 2, v12, 1);
    v13 = v4;
    v4 = a2;
    sub_3EAB70(a1, 0x16u, *(unsigned __int16 *)(a1 + 890), v13, v12, a2, 0);
  }
  sub_3EC710(a1, 64 - v8, 3, v12, 1);
  sub_3EAB70(a1, 0x18u, *(unsigned __int16 *)(a1 + 890), v4, v12, a2, 0);
  sub_3E8540(*(_QWORD *)(a1 + 832), v12);
}

