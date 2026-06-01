void __fastcall sub_4BEE0(_QWORD **a1)
{
  _QWORD *v1; // r12
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 *v6; // r13
  __int64 v7; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[1];
    if ( v2 )
    {
      v3 = v1[2];
      if ( v3 )
      {
        v4 = 0;
        for ( i = 0; i != v3; ++i )
        {
          if ( *(_DWORD *)(v2 + v4) == 6 )
          {
            v6 = *(__int64 **)(v2 + v4 + 8);
            if ( v6 )
            {
              v7 = *v6;
              if ( *v6 )
              {
                v6[1] = 0;
                qfree(v7);
              }
              operator delete(v6, 0x18u);
              v2 = v1[1];
            }
          }
          v4 += 56;
        }
      }
      v1[2] = 0;
      qfree(v2);
    }
    operator delete(v1, 0x28u);
  }
}

