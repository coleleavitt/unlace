__int64 __fastcall sub_1D580(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rbx

  v2 = (_QWORD *)a1[250];
  if ( !v2 )
    return 0;
  v4 = a1 + 249;
  do
  {
    while ( 1 )
    {
      v5 = v2[2];
      v6 = v2[3];
      if ( v2[4] >= a2 )
        break;
      v2 = (_QWORD *)v2[3];
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = v2;
    v2 = (_QWORD *)v2[2];
  }
  while ( v5 );
LABEL_6:
  if ( a1 + 249 == v4 || a2 < v4[4] )
    return 0;
  v8 = *((unsigned int *)v4 + 16);
  if ( (unsigned int)v8 > 4 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_1D690(1665);
  }
  else
  {
    if ( (*(int (__fastcall **)(_QWORD *, _QWORD, unsigned __int64, _QWORD, _QWORD))(*a1 + 320LL))(
           a1,
           dword_822B0[v8],
           a2,
           0,
           *((unsigned int *)v4 + 17)) <= 0 )
      return 0;
    v9 = std::_Rb_tree_rebalance_for_erase();
    v10 = (void *)v9;
    if ( *(_QWORD *)(v9 + 40) )
    {
      *(_QWORD *)(v9 + 48) = 0;
      qfree();
    }
    operator delete(v10, 0x48u);
    --a1[253];
    return 1;
  }
}

