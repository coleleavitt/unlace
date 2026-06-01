void __fastcall sub_359F30(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbx
  _QWORD *v11; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree();
  }
  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*((_DWORD *)v1 + 26))-- == 1 )
    {
      v3 = *(__int64 **)a1;
      if ( *(_QWORD *)a1 )
      {
        sub_2540F0(*(__int64 **)a1);
        v4 = v3[23];
        if ( v4 )
        {
          v5 = v3[24];
          if ( v5 )
          {
            for ( i = 0; i != v5; ++i )
            {
              v7 = (_QWORD *)(v4 + 24 * i);
              if ( *v7 )
              {
                v7[1] = 0;
                qfree();
                v4 = v3[23];
              }
            }
          }
          v3[24] = 0;
          qfree();
        }
        if ( v3[20] )
        {
          v3[21] = 0;
          qfree();
        }
        v8 = v3[16];
        if ( v8 )
        {
          v9 = v3[17];
          if ( v9 )
          {
            for ( j = 0; j != v9; ++j )
            {
              v11 = (_QWORD *)(v8 + 32 * j);
              if ( *v11 )
              {
                v11[1] = 0;
                qfree();
                v8 = v3[16];
              }
            }
          }
          v3[17] = 0;
          qfree();
        }
        sub_2507D0((__int64)(v3 + 2));
        j__qfree();
      }
    }
  }
}

