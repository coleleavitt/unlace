void __fastcall sub_58B0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // rdi

  v2 = a1[11];
  if ( v2 )
  {
    v3 = a1[12];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 32 * i;
        v6 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          *(_QWORD *)(v5 + 16) = 0;
          qfree(v6);
          v2 = a1[11];
        }
      }
    }
    a1[12] = 0;
    qfree(v2);
  }
  v7 = a1[7];
  while ( v7 )
  {
    sub_4A50(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x28u);
  }
  v9 = a1[1];
  if ( v9 )
  {
    a1[2] = 0;
    qfree(v9);
  }
}

