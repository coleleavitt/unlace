void __fastcall sub_57F10(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbx
  void *v9; // rdi
  __int64 v10; // rbx
  void *v11; // rdi

  v1 = a1 + 10;
  v3 = a1[12];
  if ( a1 + 10 != (_QWORD *)v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 48);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = std::_Rb_tree_increment(v3);
    }
    while ( v1 != (_QWORD *)v3 );
  }
  v5 = a1[20];
  while ( v5 )
  {
    sub_53930(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
  v7 = a1[15];
  if ( v7 )
  {
    a1[16] = 0;
    qfree(v7);
  }
  v8 = a1[11];
  while ( v8 )
  {
    sub_53B00(*(_QWORD **)(v8 + 24));
    v9 = (void *)v8;
    v8 = *(_QWORD *)(v8 + 16);
    operator delete(v9, 0x38u);
  }
  v10 = a1[5];
  while ( v10 )
  {
    sub_546C0(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x30u);
  }
}
