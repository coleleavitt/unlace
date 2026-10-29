__int64 __fastcall sub_43D00(_QWORD *a1, __int64 a2, signed int **a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r12
  signed int v10; // r13d
  int v11; // r15d
  __int64 v12; // rax
  _BOOL8 v13; // rdi
  __int64 v14; // rax

  v5 = a2;
  v9 = operator new(0x58u);
  v10 = **a3;
  *(_OWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_DWORD *)(v9 + 32) = v10;
  *(_QWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 72) = 0;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v6 = a1[4];
      v5 = 0;
      if ( *(_DWORD *)(v6 + 32) < v10 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_43AE0((__int64)a1, (unsigned int)v10, v6, v7, v8);
    goto LABEL_6;
  }
  v11 = *(_DWORD *)(a2 + 32);
  if ( v11 > v10 )
  {
    v6 = a2;
    if ( a1[3] == a2 )
      goto LABEL_6;
    v12 = std::_Rb_tree_decrement(a2, a2, a2, v7, v8);
    v6 = v12;
    if ( *(_DWORD *)(v12 + 32) >= v10 )
      goto LABEL_5;
    if ( *(_QWORD *)(v12 + 24) )
      v6 = a2;
    else
      v5 = 0;
LABEL_6:
    if ( v6 )
    {
      if ( a1 + 1 == (_QWORD *)v6 || v5 )
      {
        v13 = 1;
LABEL_10:
        v5 = v9;
        std::_Rb_tree_insert_and_rebalance(v13, v9, v6, a1 + 1);
        ++a1[5];
        return v5;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v11 >= v10 )
    goto LABEL_17;
  if ( a1[4] != a2 )
  {
    v14 = std::_Rb_tree_increment(a2);
    v6 = v14;
    if ( *(_DWORD *)(v14 + 32) > v10 )
    {
      if ( !*(_QWORD *)(a2 + 24) )
      {
        v6 = a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v5 = v14;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v6 = a2;
  if ( a2 )
  {
LABEL_25:
    v11 = *(_DWORD *)(v6 + 32);
LABEL_26:
    v13 = v10 < v11;
    goto LABEL_10;
  }
LABEL_17:
  if ( v9 )
    operator delete((void *)v9, 0x58u);
  return v5;
}

