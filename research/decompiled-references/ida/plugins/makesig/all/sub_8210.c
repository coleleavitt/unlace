__int64 __fastcall sub_8210(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  _BOOL8 v11; // rdi
  __int64 v12; // rax

  v5 = a2;
  v6 = operator new(0x58u);
  v7 = **a3;
  *(_DWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 56) = 0;
  *(_DWORD *)(v6 + 32) = v7;
  *(_QWORD *)(v6 + 64) = v6 + 48;
  *(_QWORD *)(v6 + 72) = v6 + 48;
  *(_QWORD *)(v6 + 80) = 0;
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
    v5 = sub_7FC0((__int64)a1, v7);
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(a2 + 32);
  if ( v7 < v8 )
  {
    v9 = a2;
    if ( a1[3] == a2 )
      goto LABEL_6;
    v10 = std::_Rb_tree_decrement(a2, a2);
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
      if ( a1 + 1 == (_QWORD *)v9 || v5 )
      {
        v11 = 1;
LABEL_10:
        v5 = v6;
        std::_Rb_tree_insert_and_rebalance(v11, v6, v9, a1 + 1);
        ++a1[5];
        return v5;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v8 >= v7 )
    goto LABEL_17;
  if ( a1[4] != a2 )
  {
    v12 = std::_Rb_tree_increment(a2);
    v9 = v12;
    if ( v7 < *(_DWORD *)(v12 + 32) )
    {
      if ( !*(_QWORD *)(a2 + 24) )
      {
        v9 = a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v5 = v12;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = a2;
  if ( a2 )
  {
LABEL_25:
    v8 = *(_DWORD *)(v9 + 32);
LABEL_26:
    v11 = v7 < v8;
    goto LABEL_10;
  }
LABEL_17:
  if ( v6 )
  {
    sub_8120(nullptr);
    operator delete((void *)v6, 0x58u);
  }
  return v5;
}

