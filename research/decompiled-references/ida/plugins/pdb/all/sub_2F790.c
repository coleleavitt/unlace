void __fastcall sub_2F790(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rbx
  void *v10; // rbp
  __int64 v11; // rbx
  void *v12; // rdi

  v9 = a1[8];
  for ( *a1 = &off_A9CE0; a1 + 6 != (_QWORD *)v9; v9 = std::_Rb_tree_increment(v9, a2, a3, a4, a5, a6, a7, a8, a9) )
  {
    v10 = *(void **)(v9 + 40);
    if ( v10 )
    {
      sub_2CFE0(*(_QWORD *)(v9 + 40));
      a2 = 752;
      operator delete(v10, 0x2F0u);
    }
  }
  sub_2F6E0((__int64)a1, a7, a8, a9);
  v11 = a1[7];
  while ( v11 )
  {
    sub_25F40(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x30u);
  }
}

