__int64 __fastcall sub_21670(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 **a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbp

  v5 = operator new(0x30u);
  v6 = **a4;
  *(_BYTE *)(v5 + 42) = 0;
  *(_WORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 32) = v6;
  v7 = sub_1D740(a1, a2, v6);
  if ( v8 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v5;
  }
  v9 = v7;
  if ( !v5 )
    return (__int64)v9;
  operator delete((void *)v5, 0x30u);
  return (__int64)v9;
}

