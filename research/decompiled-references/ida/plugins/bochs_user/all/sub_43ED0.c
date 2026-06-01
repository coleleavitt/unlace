void __fastcall sub_43ED0(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // rbx
  void *v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 i; // rbx
  __int64 v14; // rax

  sub_F0D0((__int64)&off_71E20, 0xCu, 0);
  sub_4C5A0(a1 + 64);
  v2 = *(_QWORD *)(a1 + 4856);
  *(_QWORD *)(a1 + 5464) = 0;
  qword_753F8 = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 4824) = 0;
  while ( v2 )
  {
    sub_42700(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  sub_43C20(a1 + 344);
  v4 = *(_QWORD *)(a1 + 280);
  while ( v4 )
  {
    sub_428D0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = *(_QWORD *)(a1 + 224);
  while ( v6 )
  {
    sub_42530(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x30u);
  }
  v8 = *(_QWORD *)(a1 + 168);
  while ( v8 )
  {
    v9 = (_QWORD *)v8;
    sub_42AA0(*(_QWORD **)(v8 + 24));
    v10 = *(_QWORD *)(v8 + 32);
    v8 = *(_QWORD *)(v8 + 16);
    if ( v10 )
    {
      v9[5] = 0;
      qfree();
    }
    operator delete(v9, 0x40u);
  }
  if ( *(_QWORD *)(a1 + 96) )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree();
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 72);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = v11 + 40 * i;
        if ( *(_QWORD *)(v14 + 8) )
        {
          *(_QWORD *)(v14 + 16) = 0;
          qfree();
          v11 = *(_QWORD *)(a1 + 64);
        }
      }
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree();
  }
}

