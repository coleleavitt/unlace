void __fastcall sub_27840(void *a1)
{
  void *v1; // r13
  _QWORD *v2; // r12
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_27840(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 19);
      v1 = *((void **)v1 + 2);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = v2[18];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = v2[12];
      if ( v5 )
      {
        v2[13] = 0;
        qfree(v5);
      }
      v6 = v2[8];
      while ( v6 )
      {
        v7 = (_QWORD *)v6;
        sub_27580(*(_QWORD **)(v6 + 24));
        v8 = *(_QWORD *)(v6 + 32);
        v6 = *(_QWORD *)(v6 + 16);
        if ( v8 )
        {
          v7[5] = 0;
          qfree(v8);
        }
        operator delete(v7, 0x40u);
      }
      operator delete(v2, 0xA8u);
    }
    while ( v1 );
  }
}
