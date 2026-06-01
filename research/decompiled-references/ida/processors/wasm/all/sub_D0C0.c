_QWORD *__fastcall sub_D0C0(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  _BOOL4 v11; // [rsp+Ch] [rbp-3Ch]

  v5 = *a2;
  v6 = sub_AF40(a1, *a2, a3, a4, a5);
  if ( !v7 )
    return v6;
  v11 = 1;
  v8 = v7;
  if ( !v6 && v7 != a1 + 8 )
    v11 = v5 < *(_QWORD *)(v7 + 32);
  v9 = operator new(0x28u);
  *(_QWORD *)(v9 + 32) = *a2;
  std::_Rb_tree_insert_and_rebalance(v11, v9, v8, a1 + 8);
  ++*(_QWORD *)(a1 + 40);
  return (_QWORD *)v9;
}

