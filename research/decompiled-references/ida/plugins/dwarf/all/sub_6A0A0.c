void __fastcall sub_6A0A0(_QWORD *a1, const char *a2)
{
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 j; // rbx
  __int64 v9; // rax
  void *v10; // r12
  __int64 v11; // rbx
  _QWORD *v12; // r13
  void *v13; // r12
  __int64 v14; // rbx
  void *v15; // rdi

  v3 = a1[6];
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = (__int64 *)(a1[5] + 32 * i);
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        qfree(v6);
      }
    }
  }
  v7 = a1[16];
  a1[6] = 0;
  if ( v7 )
  {
    for ( j = 0; j != v7; ++j )
    {
      v9 = a1[15];
      v10 = *(void **)(v9 + 8 * j);
      if ( v10 )
      {
        sub_69E70(*(_QWORD *)(v9 + 8 * j), a2);
        a2 = (const char *)&dword_E8;
        operator delete(v10, 0xE8u);
      }
    }
  }
  v11 = a1[12];
  v12 = a1 + 10;
  for ( a1[16] = 0; (_QWORD *)v11 != v12; v11 = std::_Rb_tree_increment(v11) )
  {
    v13 = *(void **)(v11 + 40);
    if ( v13 )
    {
      sub_69E70(*(_QWORD *)(v11 + 40), a2);
      a2 = (const char *)&dword_E8;
      operator delete(v13, 0xE8u);
    }
  }
  v14 = a1[11];
  while ( v14 )
  {
    sub_683E0(*(_QWORD **)(v14 + 24));
    v15 = (void *)v14;
    v14 = *(_QWORD *)(v14 + 16);
    operator delete(v15, 0x30u);
  }
  a1[11] = 0;
  a1[12] = v12;
  a1[13] = v12;
  a1[14] = 0;
}

