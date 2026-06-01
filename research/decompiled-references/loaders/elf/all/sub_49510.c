_QWORD *__fastcall sub_49510(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 **a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _BOOL8 v13; // rdi
  __int64 v14; // rax

  v6 = a2;
  v7 = (_QWORD *)operator new(0x40u);
  v8 = *a4;
  v7[5] = 0;
  v7[6] = 0;
  v9 = *v8;
  v7[7] = 0;
  v7[4] = v9;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v11 = (_QWORD *)a1[4];
      v6 = nullptr;
      if ( v11[4] < v9 )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_30F40((__int64)a1, v9);
    goto LABEL_6;
  }
  v10 = a2[4];
  if ( v9 < v10 )
  {
    v11 = a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v12 = std::_Rb_tree_decrement(a2, a2);
    v11 = (_QWORD *)v12;
    if ( *(_QWORD *)(v12 + 32) >= v9 )
      goto LABEL_5;
    if ( *(_QWORD *)(v12 + 24) )
      v11 = a2;
    else
      v6 = nullptr;
LABEL_6:
    if ( v11 )
    {
      if ( v6 || a1 + 1 == v11 )
      {
        v13 = 1;
LABEL_10:
        v6 = v7;
        std::_Rb_tree_insert_and_rebalance(v13, v7, v11, a1 + 1);
        ++a1[5];
        return v6;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v10 >= v9 )
    goto LABEL_17;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v14 = std::_Rb_tree_increment(a2);
    v11 = (_QWORD *)v14;
    if ( v9 < *(_QWORD *)(v14 + 32) )
    {
      if ( !a2[3] )
      {
        v11 = a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v6 = (_QWORD *)v14;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v11 = a2;
  if ( a2 )
  {
LABEL_25:
    v10 = v11[4];
LABEL_26:
    v13 = v9 < v10;
    goto LABEL_10;
  }
LABEL_17:
  if ( v7 )
    operator delete(v7, 0x40u);
  return v6;
}
