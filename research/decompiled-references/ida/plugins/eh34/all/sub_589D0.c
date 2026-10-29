__int64 __fastcall sub_589D0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r13d
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  _BOOL4 v11; // [rsp+4h] [rbp-44h]
  __int64 v12; // [rsp+8h] [rbp-40h]

  v5 = a2[1];
  v6 = *a2;
  v7 = sub_56F80(a1, *a2, v5, a4, a5);
  if ( !v8 )
    return v7;
  v11 = 1;
  if ( !v7 && v8 != a1 + 8 && v6 >= *(_DWORD *)(v8 + 32) )
  {
    v11 = 0;
    if ( v6 == *(_DWORD *)(v8 + 32) )
      v11 = (int)v5 < *(_DWORD *)(v8 + 36);
  }
  v12 = v8;
  v9 = operator new(0x28u);
  *(_QWORD *)(v9 + 32) = *(_QWORD *)a2;
  std::_Rb_tree_insert_and_rebalance(v11, v9, v12, a1 + 8);
  ++*(_QWORD *)(a1 + 40);
  return v9;
}

