void __fastcall sub_3DE20(void *a1)
{
  void *v1; // r12
  _QWORD *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  _QWORD *v6; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_3DE20(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 7);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v4 = v2[8];
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
          {
            v6 = (_QWORD *)(v3 + 32 * i);
            if ( *v6 )
            {
              v6[1] = 0;
              qfree();
              v3 = v2[7];
            }
          }
        }
        v2[8] = 0;
        qfree();
      }
      if ( v2[4] )
      {
        v2[5] = 0;
        qfree();
      }
      operator delete(v2, 0x50u);
    }
    while ( v1 );
  }
}

