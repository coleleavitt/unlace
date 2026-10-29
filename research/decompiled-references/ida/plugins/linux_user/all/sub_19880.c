_QWORD *__fastcall sub_19880(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned __int64 v10; // r13
  _QWORD *v11; // r12
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  bool v18; // zf

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
    goto LABEL_25;
  v5 = *a2;
  v6 = v2;
  do
  {
    while ( 1 )
    {
      v7 = v4[2];
      v8 = v4[3];
      if ( v4[4] < v5 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v8 );
LABEL_6:
  if ( v2 == v6 )
  {
LABEL_25:
    v17 = (_QWORD *)operator new(0x40u);
    v10 = *a2;
    v18 = a1[5] == 0;
    v17[5] = -1;
    v11 = v17;
    v17[4] = v10;
    v17[7] = 0;
    if ( !v18 )
    {
      v13 = (_QWORD *)a1[4];
      v6 = nullptr;
      if ( v13[4] < v10 )
      {
LABEL_13:
        if ( v13 )
        {
LABEL_14:
          v6 = v11;
          std::_Rb_tree_insert_and_rebalance();
          ++a1[5];
          return v6 + 5;
        }
        goto LABEL_17;
      }
    }
LABEL_27:
    v6 = sub_103C0((__int64)a1, v10);
    goto LABEL_13;
  }
  if ( v5 >= v6[4] )
    return v6 + 5;
  v9 = (_QWORD *)operator new(0x40u);
  v10 = *a2;
  v9[5] = -1;
  v11 = v9;
  v9[4] = v10;
  v9[7] = 0;
  v12 = v6[4];
  if ( v10 < v12 )
  {
    v13 = v6;
    if ( (_QWORD *)a1[3] == v6 )
      goto LABEL_13;
    v14 = std::_Rb_tree_decrement();
    v13 = (_QWORD *)v14;
    if ( *(_QWORD *)(v14 + 32) < v10 )
    {
      if ( *(_QWORD *)(v14 + 24) )
        v13 = v6;
      else
        v6 = nullptr;
      goto LABEL_13;
    }
    goto LABEL_27;
  }
  if ( v12 < v10 )
  {
    if ( (_QWORD *)a1[4] == v6 )
    {
      if ( v6 )
        goto LABEL_14;
    }
    else
    {
      v16 = std::_Rb_tree_increment();
      v13 = (_QWORD *)v16;
      if ( v10 >= *(_QWORD *)(v16 + 32) )
        goto LABEL_27;
      if ( v6[3] )
      {
        v6 = (_QWORD *)v16;
        goto LABEL_13;
      }
      if ( v6 )
        goto LABEL_14;
    }
  }
LABEL_17:
  if ( v11 )
    operator delete(v11, 0x40u);
  return v6 + 5;
}

