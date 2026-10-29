__int64 __fastcall sub_1D3A0(_QWORD *a1, const char *a2, int a3, double a4)
{
  int v5; // r12d
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rax
  size_t v14; // r15
  void *v15; // rax

  if ( a2 == (const char *)-1LL )
    return 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, const char *, __int64))(*a1 + 312LL))(
         a1,
         0,
         4,
         a2,
         0xFFFFFFFFLL);
  sub_1BF10((__int64)a1, (__int64)"%a: bpt hook for %s: %d\n", a4, a2, a3);
  if ( v5 <= 0 )
    return 0;
  v6 = (_QWORD *)a1[206];
  if ( !v6 )
    goto LABEL_10;
  v7 = a1 + 205;
  do
  {
    while ( 1 )
    {
      v8 = v6[2];
      v9 = v6[3];
      if ( v6[4] < (unsigned __int64)a2 )
        break;
      v7 = v6;
      v6 = (_QWORD *)v6[2];
      if ( !v8 )
        goto LABEL_8;
    }
    v6 = (_QWORD *)v6[3];
  }
  while ( v9 );
LABEL_8:
  if ( a1 + 205 == v7 || (unsigned __int64)a2 < v7[4] )
  {
LABEL_10:
    if ( under_debugger )
      BUG();
    interr();
    return 0;
  }
  sub_19640((__int64)(a1 + 248), v7[4]);
  if ( v11 )
  {
    v12 = operator new(0x48u);
    v13 = v7[4];
    *(_QWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 32) = v13;
    *(_OWORD *)(v12 + 48) = 0;
    v14 = v7[6];
    if ( v14 )
    {
      v15 = (void *)qalloc_or_throw();
      *(_QWORD *)(v12 + 40) = v15;
      *(_QWORD *)(v12 + 56) = v14;
      memcpy(v15, (const void *)v7[5], v14);
      *(_QWORD *)(v12 + 48) = v14;
    }
    *(_QWORD *)(v12 + 64) = v7[8];
    std::_Rb_tree_insert_and_rebalance();
    ++a1[253];
  }
  return 1;
}

