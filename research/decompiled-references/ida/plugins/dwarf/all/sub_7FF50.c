void __fastcall sub_7FF50(char *a1)
{
  char *v2; // r12
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 i; // r14
  __int64 v7; // rax
  __int64 v8; // rdx

  v2 = a1 - 8;
  v3 = a1 + 2392;
  *(_QWORD *)a1 = &off_C8D68;
  do
  {
    if ( *(_QWORD *)v3 )
    {
      v4 = *((_QWORD *)v3 + 1);
      if ( v4 )
      {
        v5 = *(_QWORD *)v3;
        for ( i = 0; i != v4; ++i )
        {
          v7 = v5 + 32 * i;
          v8 = *(_QWORD *)(v7 + 8);
          if ( v8 )
          {
            *(_QWORD *)(v7 + 16) = 0;
            qfree(v8);
            v5 = *(_QWORD *)v3;
          }
        }
      }
      else
      {
        v5 = *(_QWORD *)v3;
      }
      *((_QWORD *)v3 + 1) = 0;
      qfree(v5);
    }
    v3 -= 24;
  }
  while ( v3 != v2 );
  operator delete(a1, 0x978u);
}

