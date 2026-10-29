void __fastcall sub_6A1D0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi

  *a1 = off_C8788;
  sub_6A0A0(a1, a2);
  v3 = a1[15];
  a1[8] = 0;
  if ( v3 )
  {
    a1[16] = 0;
    qfree(v3);
  }
  v4 = a1[11];
  while ( v4 )
  {
    sub_683E0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = a1[5];
  if ( v6 )
  {
    v7 = a1[6];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 32 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10);
          v6 = a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree(v6);
  }
}

