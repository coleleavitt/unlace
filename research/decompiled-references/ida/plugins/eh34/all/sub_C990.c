void __fastcall sub_C990(void *a1)
{
  void *v1; // r12
  _QWORD *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_C990(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 5);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v4 = v2[6];
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
          {
            v6 = v3 + 80 * i;
            v7 = *(_QWORD *)(v6 + 56);
            if ( v7 )
            {
              *(_QWORD *)(v6 + 64) = 0;
              qfree(v7);
              v3 = v2[5];
            }
          }
        }
        v2[6] = 0;
        qfree(v3);
      }
      operator delete(v2, 0x40u);
    }
    while ( v1 );
  }
}

