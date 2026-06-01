_UNKNOWN **__fastcall sub_3A4A80(__int64 a1, double a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 i; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 j; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi

  result = &off_4E7050;
  *(_QWORD *)a1 = &off_4E7050;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    result = (_UNKNOWN **)qfree(v4);
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 104))-- == 1 )
    {
      v7 = *(_QWORD **)(a1 + 24);
      if ( v7 )
      {
        sub_258970(*(__int64 **)(a1 + 24));
        v8 = v7[23];
        if ( v8 )
        {
          v9 = v7[24];
          if ( v9 )
          {
            for ( i = 0; i != v9; ++i )
            {
              v11 = (__int64 *)(v8 + 24 * i);
              v12 = *v11;
              if ( *v11 )
              {
                v11[1] = 0;
                qfree(v12);
                v8 = v7[23];
              }
            }
          }
          v7[24] = 0;
          qfree(v8);
        }
        v13 = v7[20];
        if ( v13 )
        {
          v7[21] = 0;
          qfree(v13);
        }
        v14 = v7[16];
        if ( v14 )
        {
          v15 = v7[17];
          if ( v15 )
          {
            for ( j = 0; j != v15; ++j )
            {
              v17 = (__int64 *)(v14 + 32 * j);
              v18 = *v17;
              if ( *v17 )
              {
                v17[1] = 0;
                qfree(v18);
                v14 = v7[16];
              }
            }
          }
          v7[17] = 0;
          qfree(v14);
        }
        sub_255050((__int64)(v7 + 2), a2);
        return (_UNKNOWN **)j__qfree((__int64)v7);
      }
    }
  }
  return result;
}

