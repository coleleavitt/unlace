__int64 __fastcall sub_4C070(__int64 a1)
{
  int v2; // eax
  void *v4; // rbp
  _QWORD *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 i; // rbp
  __int64 *v10; // r14
  __int64 v11; // rdi
  _QWORD *v12; // rbp
  __int64 v13; // rdi

  v2 = *(_DWORD *)(a1 + 4);
  switch ( v2 )
  {
    case 2:
      v5 = *(_QWORD **)(a1 + 16);
      if ( v5 )
      {
        v6 = v5[1];
        if ( v6 )
        {
          v7 = v5[2];
          if ( v7 )
          {
            v8 = 0;
            for ( i = 0; i != v7; ++i )
            {
              if ( *(_DWORD *)(v6 + v8) == 6 )
              {
                v10 = *(__int64 **)(v6 + v8 + 8);
                if ( v10 )
                {
                  v11 = *v10;
                  if ( *v10 )
                  {
                    v10[1] = 0;
                    qfree(v11);
                  }
                  operator delete(v10, 0x18u);
                  v6 = v5[1];
                }
              }
              v8 += 56;
            }
          }
          v5[2] = 0;
          qfree(v6);
        }
        operator delete(v5, 0x28u);
      }
      break;
    case 3:
      v4 = *(void **)(a1 + 16);
      if ( v4 )
      {
        sub_4BEE0(*(_QWORD ***)(a1 + 16));
        operator delete(v4, 0x10u);
      }
      break;
    case 1:
      v12 = *(_QWORD **)(a1 + 16);
      if ( v12 )
      {
        v13 = v12[1];
        if ( v13 )
        {
          v12[2] = 0;
          qfree(v13);
        }
        operator delete(v12, 0x28u);
      }
      break;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = 2;
  *(_QWORD *)(a1 + 4) = 0x100000000LL;
  return 0x100000000LL;
}

