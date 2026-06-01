_QWORD *__fastcall sub_49070(
        _QWORD *a1,
        _QWORD *a2,
        double a3,
        double a4,
        double a5,
        __int64 a6,
        unsigned __int64 **a7)
{
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  _BOOL8 v18; // rdi
  __int64 v19; // rax

  v9 = a2;
  v14 = operator new(0x40u);
  v15 = **a7;
  *(_OWORD *)(v14 + 48) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 32) = v15;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v10 = a1[4];
      v9 = nullptr;
      if ( *(_QWORD *)(v10 + 32) < v15 )
        goto LABEL_6;
    }
LABEL_5:
    v9 = sub_24A80((__int64)a1, v15, v10, v11, v12);
    goto LABEL_6;
  }
  v16 = a2[4];
  if ( v15 < v16 )
  {
    v10 = (unsigned __int64)a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v17 = std::_Rb_tree_decrement(a2, a2, a2, v11, v12);
    v10 = v17;
    if ( *(_QWORD *)(v17 + 32) >= v15 )
      goto LABEL_5;
    if ( *(_QWORD *)(v17 + 24) )
      v10 = (unsigned __int64)a2;
    else
      v9 = nullptr;
LABEL_6:
    if ( v10 )
    {
      if ( v9 || a1 + 1 == (_QWORD *)v10 )
      {
        v18 = 1;
LABEL_10:
        v9 = (_QWORD *)v14;
        std::_Rb_tree_insert_and_rebalance(v18, v14, v10, a1 + 1, 0.0, a4, a5);
        ++a1[5];
        return v9;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v16 >= v15 )
    goto LABEL_17;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v19 = std::_Rb_tree_increment(a2, a2, v10, v11, v12, v13, 0.0, a4, a5);
    v10 = v19;
    if ( v15 < *(_QWORD *)(v19 + 32) )
    {
      if ( !a2[3] )
      {
        v10 = (unsigned __int64)a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v9 = (_QWORD *)v19;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = (unsigned __int64)a2;
  if ( a2 )
  {
LABEL_25:
    v16 = *(_QWORD *)(v10 + 32);
LABEL_26:
    v18 = v15 < v16;
    goto LABEL_10;
  }
LABEL_17:
  if ( v14 )
    operator delete((void *)v14, 0x40u);
  return v9;
}

