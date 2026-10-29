unsigned __int64 __fastcall sub_1CF860(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  int v5; // edi
  unsigned __int64 v6; // rcx
  unsigned __int64 *v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // r11
  _QWORD *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( a3 == -1 )
  {
    v4 = *(_QWORD *)(a1 + 1472);
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL);
    goto LABEL_3;
  }
  v8 = sub_1CF580(a1, a3);
  if ( v8 )
    v9 += v8[1];
  if ( v9 < 0 )
    sub_1CC9F0();
  v4 = v10[184];
  if ( !(40LL * v10[185]) )
  {
LABEL_23:
    if ( !under_debugger )
      sub_3835A0(52700);
    BUG();
  }
  v11 = (_QWORD *)v10[184];
  while ( 1 )
  {
    v12 = v11[1];
    if ( (__int64)v12 <= v9 )
      break;
    v11 += 5;
    if ( (_QWORD *)(v4 + 40LL * v10[185]) == v11 )
      goto LABEL_23;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(v10[187] + 24LL) + 24LL);
  if ( !v11 )
  {
LABEL_3:
    v6 = *(_QWORD *)(v4 + 32) + a2;
    if ( v5 != 8 )
      return (int)v6;
    return v6;
  }
  v13 = v11[4];
  v14 = v11[2];
  v6 = a2 + v13;
  if ( v5 == 8 )
  {
    if ( v6 < v12 || !v14 || v14 + v12 - 1 < v6 )
      return *(_QWORD *)(v4 + 32) + a2;
  }
  else
  {
    v6 = (int)v6;
    if ( (int)v6 < v12 || !v14 || v14 + v12 - 1 < (int)v6 )
      return (int)(*(_QWORD *)(v4 + 32) + a2);
  }
  return v6;
}

