__int64 __fastcall sub_67A60(_QWORD *a1, int *a2)
{
  _QWORD *v2; // r12
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  _BOOL8 v15; // rdi
  __int64 v17; // rdi

  v2 = a1 + 1;
  v4 = a1[2];
  if ( v4 )
  {
    v5 = *a2;
    v6 = (__int64)v2;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v4 + 16);
        v8 = *(_QWORD *)(v4 + 24);
        if ( v5 > *(_DWORD *)(v4 + 32) )
          break;
        v6 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v7 )
          goto LABEL_6;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v8 );
LABEL_6:
    if ( v2 != (_QWORD *)v6 && v5 >= *(_DWORD *)(v6 + 32) )
      return v6 + 40;
  }
  else
  {
    v6 = (__int64)(a1 + 1);
  }
  v9 = operator new(0x58u);
  *(_DWORD *)(v9 + 32) = *a2;
  sub_51600(v9 + 40);
  v10 = *(_DWORD *)(v9 + 32);
  v13 = sub_64CB0(a1, v6, v10, v11, v12);
  v6 = v13;
  if ( v14 )
  {
    v15 = v13 || v2 == (_QWORD *)v14 || (int)v10 < *(_DWORD *)(v14 + 32);
    v6 = v9;
    std::_Rb_tree_insert_and_rebalance(v15, v9, v14, v2);
    ++a1[5];
    return v6 + 40;
  }
  if ( !v9 )
    return v6 + 40;
  v17 = *(_QWORD *)(v9 + 64);
  if ( v17 )
  {
    *(_QWORD *)(v9 + 72) = 0;
    qfree(v17);
  }
  operator delete((void *)v9, 0x58u);
  return v6 + 40;
}
