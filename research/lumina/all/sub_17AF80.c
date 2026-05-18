__int64 __fastcall sub_17AF80(__int64 a1, const char *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // r15
  _QWORD *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  void *v10; // rdi
  __int64 v11; // rax

  v3 = sub_1727F0(a1, (__int64)a2);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v4;
  v7 = (__int64)v3;
  if ( v3 == *(_QWORD **)(a1 + 24) && v4 == (_QWORD *)(a1 + 8) )
  {
    sub_17A9C0(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( v3 == v4 )
  {
    return 0;
  }
  else
  {
    do
    {
      v8 = v7;
      v7 = std::_Rb_tree_increment(v7, a2);
      v9 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v8, a1 + 8);
      sub_176520((__int64)(v9 + 7));
      v10 = (void *)v9[4];
      if ( v10 )
      {
        v9[5] = 0;
        j__free(v10);
      }
      a2 = (const char *)&qword_58;
      operator delete(v9, 0x58u);
      v11 = *(_QWORD *)(a1 + 40) - 1LL;
      *(_QWORD *)(a1 + 40) = v11;
    }
    while ( v6 != (_QWORD *)v7 );
    v5 -= v11;
  }
  return v5;
}
