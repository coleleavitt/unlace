void __fastcall sub_26170(void *a1)
{
  void *v1; // r14
  _QWORD *v2; // r12
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_26170(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 14);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[15] = 0;
        qfree(v3);
      }
      v4 = v2[7];
      if ( v4 )
      {
        v5 = v2[8];
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = (_QWORD *)(v4 + 144 * i);
            clear_tinfo_t(v7 + 8);
            v8 = v7[5];
            if ( v8 )
            {
              v7[6] = 0;
              qfree(v8);
            }
            v9 = v7[2];
            if ( v9 )
            {
              v7[3] = 0;
              qfree(v9);
            }
            v4 = v2[7];
          }
        }
        v2[8] = 0;
        qfree(v4);
      }
      v10 = v2[4];
      if ( v10 )
      {
        v2[5] = 0;
        qfree(v10);
      }
      operator delete(v2, 0x88u);
    }
    while ( v1 );
  }
}

