void __fastcall sub_4C5A0(_QWORD *a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rbx
  void *v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rdi

  v2 = a1 + 12;
  v3 = a1[14];
  if ( (_QWORD *)v3 != a1 + 12 )
  {
    do
    {
      v4 = *(void **)(v3 + 56);
      sub_36B40((__int64)v4, 1);
      if ( v4 )
      {
        sub_37960((__int64)v4);
        operator delete(v4, 0x39Cu);
      }
      v3 = std::_Rb_tree_increment();
    }
    while ( (_QWORD *)v3 != v2 );
  }
  v5 = a1[13];
  while ( v5 )
  {
    v6 = (_QWORD *)v5;
    sub_4AFF0(*(_QWORD **)(v5 + 24));
    v7 = *(_QWORD *)(v5 + 32);
    v5 = *(_QWORD *)(v5 + 16);
    if ( v7 )
    {
      v6[5] = 0;
      qfree();
    }
    operator delete(v6, 0x40u);
  }
  a1[13] = 0;
  a1[14] = v2;
  a1[15] = v2;
  a1[16] = 0;
}

