_DWORD *__fastcall sub_281B0(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  _DWORD *v5; // rbx
  unsigned int *v6; // rax
  unsigned int v7; // r13d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  _BOOL8 v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // rbp

  v5 = (_DWORD *)operator new(0x28u);
  v6 = *a3;
  v5[9] = 0;
  v7 = *v6;
  v5[8] = *v6;
  v10 = sub_27F70(a1, a2, v7, v8, v9);
  if ( v11 )
  {
    v12 = 1;
    v13 = a1 + 1;
    if ( !v10 && (_QWORD *)v11 != v13 )
      v12 = (int)v7 < *(_DWORD *)(v11 + 32);
    std::_Rb_tree_insert_and_rebalance(v12, v5, v11, v13);
    ++a1[5];
    return v5;
  }
  v14 = v10;
  if ( !v5 )
    return (_DWORD *)v14;
  operator delete(v5, 0x28u);
  return (_DWORD *)v14;
}
