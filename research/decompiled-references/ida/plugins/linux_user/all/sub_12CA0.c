__int64 __fastcall sub_12CA0(__int64 a1, int *a2, _DWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  int i; // r12d
  unsigned int v15; // r12d

  v6 = a1 + 1216;
  sub_B330();
  v7 = *(_QWORD *)(a1 + 1224);
  v8 = *(unsigned int *)(a1 + 204);
  if ( !v7 )
    goto LABEL_8;
  v9 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 24);
      if ( (int)v8 > *(_DWORD *)(v7 + 32) )
        break;
      v9 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v10 )
        goto LABEL_6;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v11 );
LABEL_6:
  if ( v9 == v6
    || (v12 = *(_DWORD *)(v9 + 32), (int)v8 < v12)
    || !*(_BYTE *)(v9 + 65)
    || (v8 = *(unsigned int *)(v9 + 48), (int)v8 > 0)
    || *(int *)(v9 + 44) > 0 )
  {
LABEL_8:
    v13 = *(_QWORD *)(a1 + 1232);
    for ( i = 0; ; ++i )
    {
      while ( v6 == v13 )
      {
        v9 = v6;
LABEL_21:
        if ( ++i == 3 )
        {
LABEL_22:
          v15 = 0;
          if ( v6 == v9 )
            goto LABEL_23;
          v12 = *(_DWORD *)(v9 + 32);
          goto LABEL_27;
        }
      }
      v9 = v13;
      while ( 1 )
      {
        if ( *(int *)(v9 + 48) > 0 || *(int *)(v9 + 44) > 0 || !*(_BYTE *)(v9 + 65) )
          goto LABEL_20;
        if ( i )
          break;
        if ( *(_BYTE *)(v9 + 56) )
          goto LABEL_18;
LABEL_20:
        v9 = std::_Rb_tree_increment();
        if ( v9 == v6 )
          goto LABEL_21;
      }
      if ( i != 1 )
        goto LABEL_22;
      if ( (unsigned __int8)*(_DWORD *)(v9 + 68) != 127 || (*(_DWORD *)(v9 + 68) & 0xFF00) != 0x500 )
        goto LABEL_20;
LABEL_18:
      ;
    }
  }
LABEL_27:
  *a2 = v12;
  *a3 = *(_DWORD *)(v9 + 68);
  *(_BYTE *)(v9 + 65) = 0;
  if ( --*(_DWORD *)(a1 + 1408) < 0 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_12E30(30186);
  }
  else
  {
    v15 = 1;
LABEL_23:
    sub_B340(v9, v8);
    return v15;
  }
}

