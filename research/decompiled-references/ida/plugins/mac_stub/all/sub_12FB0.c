void __fastcall sub_12FB0(void **a1)
{
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_12FB0(v1[3]);
      v3 = v1[5];
      v1 = (void **)v1[2];
      if ( v3 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL))(v3);
      operator delete(v2, 0x30u);
    }
    while ( v1 );
  }
}

