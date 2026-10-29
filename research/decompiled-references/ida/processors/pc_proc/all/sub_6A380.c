_QWORD *__fastcall sub_6A380(_QWORD *a1, _QWORD *a2, _QWORD **a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  _QWORD *v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  v5 = (_QWORD *)operator new(0x1E8u);
  v5[4] = **a3;
  memset(v5 + 5, 0, 0x1C0u);
  v6 = v5 + 5;
  do
  {
    *v6 = 0;
    v6 += 2;
    *((_BYTE *)v6 - 8) = 0;
  }
  while ( v6 != v5 + 61 );
  v7 = v5[4];
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v9 = a1[4];
      v4 = nullptr;
      if ( *(_QWORD *)(v9 + 32) < v7 )
        goto LABEL_8;
    }
LABEL_7:
    v4 = sub_6A2C0((__int64)a1, v7);
    goto LABEL_8;
  }
  v8 = a2[4];
  if ( v7 < v8 )
  {
    v9 = a1[3];
    if ( a2 == (_QWORD *)v9 )
      goto LABEL_8;
    v10 = std::_Rb_tree_decrement();
    v9 = v10;
    if ( *(_QWORD *)(v10 + 32) >= v7 )
      goto LABEL_7;
    if ( *(_QWORD *)(v10 + 24) )
    {
      v9 = (__int64)a2;
      goto LABEL_8;
    }
    goto LABEL_25;
  }
  if ( v8 >= v7 )
    goto LABEL_16;
  v9 = a1[4];
  if ( a2 == (_QWORD *)v9 )
  {
LABEL_25:
    v4 = nullptr;
    goto LABEL_8;
  }
  v11 = std::_Rb_tree_increment();
  v9 = v11;
  if ( v7 >= *(_QWORD *)(v11 + 32) )
    goto LABEL_7;
  if ( !a2[3] )
  {
    if ( a2 )
      goto LABEL_9;
    goto LABEL_16;
  }
  v4 = (_QWORD *)v11;
LABEL_8:
  if ( v9 )
  {
LABEL_9:
    v4 = v5;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_16:
  if ( v5 )
    operator delete(v5, 0x1E8u);
  return v4;
}

