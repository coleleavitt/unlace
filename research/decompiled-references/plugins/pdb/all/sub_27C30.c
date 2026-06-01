void __fastcall sub_27C30(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  _QWORD *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rdi

  *a1 = off_AA180;
  v2 = a1[12];
  if ( v2 )
  {
    a1[13] = 0;
    qfree(v2);
  }
  v3 = a1[8];
  while ( v3 )
  {
    v4 = (_QWORD *)v3;
    sub_27840(*(void **)(v3 + 24));
    v5 = *(_QWORD *)(v3 + 152);
    v3 = *(_QWORD *)(v3 + 16);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = v4[18];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = v4[12];
    if ( v7 )
    {
      v4[13] = 0;
      qfree(v7);
    }
    v8 = v4[8];
    while ( v8 )
    {
      v9 = (_QWORD *)v8;
      sub_27580(*(_QWORD **)(v8 + 24));
      v10 = *(_QWORD *)(v8 + 32);
      v8 = *(_QWORD *)(v8 + 16);
      if ( v10 )
      {
        v9[5] = 0;
        qfree(v10);
      }
      operator delete(v9, 0x40u);
    }
    operator delete(v4, 0xA8u);
  }
  operator delete(a1, 0x78u);
}
