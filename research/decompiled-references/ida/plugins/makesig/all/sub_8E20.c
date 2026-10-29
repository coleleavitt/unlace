void __fastcall sub_8E20(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi

  v1 = a1[2];
  while ( v1 )
  {
    v2 = (_QWORD *)v1;
    sub_8D70(*(void **)(v1 + 24));
    v3 = *(_QWORD *)(v1 + 40);
    v1 = *(_QWORD *)(v1 + 16);
    if ( v3 )
    {
      v4 = v2[6];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = (__int64 *)(v3 + 24 * i);
          v7 = *v6;
          if ( *v6 )
          {
            v6[1] = 0;
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
}

