void __fastcall sub_3F9E0(_QWORD *a1)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdi
  _QWORD *i; // rbp
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rbp
  void *v8; // r14
  __int64 v9; // rbx
  void *v10; // rdi

  v2 = a1 + 518;
  v3 = (unsigned __int64)(a1 + 6);
  *(_QWORD *)(v3 - 8) = 0;
  *(v2 - 2) = 0;
  memset((void *)(v3 & 0xFFFFFFFFFFFFFFF8LL), 0, 8 * (((unsigned int)a1 - (v3 & 0xFFFFFFF8) + 4136) >> 3));
  for ( i = (_QWORD *)a1[520]; i != v2; i = (_QWORD *)std::_Rb_tree_increment() )
  {
    v5 = i[7];
    while ( v5 )
    {
      sub_3F4D0(*(_QWORD **)(v5 + 24));
      v6 = (void *)v5;
      v5 = *(_QWORD *)(v5 + 16);
      operator delete(v6, 0x28u);
    }
    i[7] = 0;
    i[8] = i + 6;
    i[9] = i + 6;
    i[10] = 0;
  }
  v7 = a1[519];
  while ( v7 )
  {
    v8 = (void *)v7;
    sub_3F6A0(*(void ***)(v7 + 24));
    v9 = *(_QWORD *)(v7 + 56);
    v7 = *(_QWORD *)(v7 + 16);
    while ( v9 )
    {
      sub_3F4D0(*(_QWORD **)(v9 + 24));
      v10 = (void *)v9;
      v9 = *(_QWORD *)(v9 + 16);
      operator delete(v10, 0x28u);
    }
    operator delete(v8, 0x58u);
  }
  a1[519] = 0;
  a1[520] = v2;
  a1[521] = v2;
  a1[522] = 0;
}

