void __fastcall sub_4810(void *a1)
{
  void *v1; // r12
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_4810(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 14);
      v1 = *((void **)v1 + 2);
      while ( v3 )
      {
        sub_4640(*(_QWORD **)(v3 + 24));
        v4 = (void *)v3;
        v3 = *(_QWORD *)(v3 + 16);
        operator delete(v4, 0x28u);
      }
      v5 = v2[9];
      if ( v5 )
      {
        v6 = v2[10];
        if ( v6 )
        {
          for ( i = 0; i != v6; ++i )
          {
            v8 = v5 + 48 * i;
            v9 = *(_QWORD *)(v8 + 16);
            if ( v9 )
            {
              *(_QWORD *)(v8 + 24) = 0;
              qfree(v9);
              v5 = v2[9];
            }
          }
        }
        v2[10] = 0;
        qfree(v5);
      }
      v10 = v2[4];
      if ( v10 )
      {
        v2[5] = 0;
        qfree(v10);
      }
      operator delete(v2, 0x98u);
    }
    while ( v1 );
  }
}
