__int64 __fastcall sub_201E0(_QWORD *a1, __int64 a2, __int64 a3, int **a4)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  int v7; // r13d
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v5 = a2;
  v6 = operator new(0x40u);
  v7 = **a4;
  *(_OWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_DWORD *)(v6 + 32) = v7;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v9 = a1[4];
      v5 = 0;
      if ( *(_DWORD *)(v9 + 32) < v7 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_1D220((__int64)a1, v7);
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(a2 + 32);
  if ( v8 <= v7 )
  {
    if ( v8 >= v7 )
      goto LABEL_14;
    if ( a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_14;
    }
    v11 = std::_Rb_tree_increment();
    v9 = v11;
    if ( *(_DWORD *)(v11 + 32) > v7 )
    {
      if ( !*(_QWORD *)(a2 + 24) )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_14;
      }
      v5 = v11;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = a2;
  if ( a1[3] == a2 )
    goto LABEL_6;
  v10 = std::_Rb_tree_decrement();
  v9 = v10;
  if ( *(_DWORD *)(v10 + 32) >= v7 )
    goto LABEL_5;
  if ( *(_QWORD *)(v10 + 24) )
    v9 = a2;
  else
    v5 = 0;
LABEL_6:
  if ( v9 )
  {
LABEL_7:
    v5 = v6;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v5;
  }
LABEL_14:
  if ( v6 )
    operator delete((void *)v6, 0x40u);
  return v5;
}

