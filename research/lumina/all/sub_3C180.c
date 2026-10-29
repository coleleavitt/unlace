__int64 __fastcall sub_3C180(_QWORD *a1, __int64 a2, __int64 a3, signed int **a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r12
  signed int v11; // r13d
  int v12; // r15d
  __int64 v13; // rax
  _BOOL8 v14; // rdi
  __int64 v15; // rax

  v6 = a2;
  v10 = operator new(0x40u);
  v11 = **a4;
  *(_OWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 40) = 0;
  *(_DWORD *)(v10 + 32) = v11;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v7 = a1[4];
      v6 = 0;
      if ( *(_DWORD *)(v7 + 32) < v11 )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_2CD00((__int64)a1, (unsigned int)v11, v7, v8, v9);
    goto LABEL_6;
  }
  v12 = *(_DWORD *)(a2 + 32);
  if ( v12 > v11 )
  {
    v7 = a2;
    if ( a1[3] == a2 )
      goto LABEL_6;
    v13 = std::_Rb_tree_decrement(a2, a2, a2, v8, v9);
    v7 = v13;
    if ( *(_DWORD *)(v13 + 32) >= v11 )
      goto LABEL_5;
    if ( *(_QWORD *)(v13 + 24) )
      v7 = a2;
    else
      v6 = 0;
LABEL_6:
    if ( v7 )
    {
      if ( v6 || a1 + 1 == (_QWORD *)v7 )
      {
        v14 = 1;
LABEL_10:
        v6 = v10;
        std::_Rb_tree_insert_and_rebalance(v14, v10, v7, a1 + 1);
        ++a1[5];
        return v6;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v12 >= v11 )
    goto LABEL_17;
  if ( a1[4] != a2 )
  {
    v15 = std::_Rb_tree_increment(a2);
    v7 = v15;
    if ( *(_DWORD *)(v15 + 32) > v11 )
    {
      if ( !*(_QWORD *)(a2 + 24) )
      {
        v7 = a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v6 = v15;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v7 = a2;
  if ( a2 )
  {
LABEL_25:
    v12 = *(_DWORD *)(v7 + 32);
LABEL_26:
    v14 = v11 < v12;
    goto LABEL_10;
  }
LABEL_17:
  if ( v10 )
    operator delete((void *)v10, 0x40u);
  return v6;
}
