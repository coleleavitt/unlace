_QWORD *__fastcall sub_B3C0(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v5; // rbx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _BOOL8 v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rbp

  v5 = (_QWORD *)operator new(0x30u);
  v6 = *a3;
  v5[5] = 0;
  v7 = *v6;
  v5[4] = *v6;
  v10 = sub_AE40(a1, a2, v7, v8, v9);
  if ( v11 )
  {
    v12 = 1;
    v13 = a1 + 1;
    if ( !v10 && v11 != v13 )
      v12 = v7 < v11[4];
    std::_Rb_tree_insert_and_rebalance(v12, v5, v11, v13);
    ++a1[5];
    return v5;
  }
  v14 = v10;
  if ( !v5 )
    return v14;
  operator delete(v5, 0x30u);
  return v14;
}
