unsigned __int64 __fastcall sub_1CFE20(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // rcx
  unsigned __int64 *v9; // rax
  __int64 v10; // r10
  _QWORD *v11; // r11
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  if ( a3 == -1 )
  {
    v5 = *(_QWORD *)(a1 + 1472);
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL);
    goto LABEL_3;
  }
  v9 = sub_1CFB40(a1, a3);
  if ( v9 )
    v10 += v9[1];
  if ( v10 < 0 )
    sub_1CCFB0(a4);
  v5 = v11[184];
  if ( !(40LL * v11[185]) )
  {
LABEL_23:
    if ( !under_debugger )
      sub_383060(0xCDDCu, a4);
    BUG();
  }
  v12 = (_QWORD *)v11[184];
  while ( 1 )
  {
    v13 = v12[1];
    if ( (__int64)v13 <= v10 )
      break;
    v12 += 5;
    if ( (_QWORD *)(v5 + 40LL * v11[185]) == v12 )
      goto LABEL_23;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v11[187] + 24LL) + 24LL);
  if ( !v12 )
  {
LABEL_3:
    v7 = *(_QWORD *)(v5 + 32) + a2;
    if ( v6 != 8 )
      return (int)v7;
    return v7;
  }
  v14 = v12[4];
  v15 = v12[2];
  v7 = a2 + v14;
  if ( v6 == 8 )
  {
    if ( v7 < v13 || !v15 || v15 + v13 - 1 < v7 )
      return *(_QWORD *)(v5 + 32) + a2;
  }
  else
  {
    v7 = (int)v7;
    if ( (int)v7 < v13 || !v15 || v15 + v13 - 1 < (int)v7 )
      return (int)(*(_QWORD *)(v5 + 32) + a2);
  }
  return v7;
}

