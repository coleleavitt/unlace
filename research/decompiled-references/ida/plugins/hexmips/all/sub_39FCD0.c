void __fastcall sub_39FCD0(void *a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 j; // rbp
  _QWORD *v11; // rax

  *(_QWORD *)a1 = &off_4C7770;
  if ( *((_QWORD *)a1 + 4) )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree();
  }
  v1 = *((_QWORD *)a1 + 3);
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 104))-- == 1 )
    {
      v3 = *((_QWORD **)a1 + 3);
      if ( v3 )
      {
        sub_2540F0(*((__int64 **)a1 + 3));
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
  operator delete(a1, 0x40u);
}

