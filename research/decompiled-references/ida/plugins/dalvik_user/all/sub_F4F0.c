void __fastcall sub_F4F0(void *a1)
{
  void *v1; // r15
  _QWORD *v2; // r13
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rbx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_F4F0(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 5);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v4 = v2[6];
        if ( v4 )
        {
          v5 = 0;
          for ( i = 0; i != v4; ++i )
          {
            v7 = (_QWORD *)(v3 + v5);
            if ( *(_QWORD *)(v3 + v5 + 64) )
            {
              v7[9] = 0;
              qfree();
            }
            if ( v7[5] )
            {
              v7[6] = 0;
              qfree();
            }
            if ( v7[2] )
            {
              v7[3] = 0;
              qfree();
            }
            v3 = v2[5];
            v5 += 112;
          }
        }
        v2[6] = 0;
        qfree();
      }
      operator delete(v2, 0x40u);
    }
    while ( v1 );
  }
}

