_UNKNOWN **__fastcall sub_2B3E70(_QWORD *a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 i; // rbp
  __int64 **v6; // rcx
  __int64 *v7; // rdx
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 j; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 k; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  _UNKNOWN **result; // rax

  *a1 = &off_4E11E0;
  v3 = a1[7];
  if ( v3 )
  {
    v4 = a1[8];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 **)(v3 + 8 * i);
        v7 = *v6;
        if ( *v6 )
        {
          if ( (*((_DWORD *)v7 + 26))-- == 1 )
          {
            v9 = *v6;
            if ( *v6 )
            {
              sub_258970(*v6);
              v10 = v9[23];
              if ( v10 )
              {
                v11 = v9[24];
                if ( v11 )
                {
                  for ( j = 0; j != v11; ++j )
                  {
                    v13 = (__int64 *)(v10 + 24 * j);
                    v14 = *v13;
                    if ( *v13 )
                    {
                      v13[1] = 0;
                      qfree(v14);
                      v10 = v9[23];
                    }
                  }
                }
                v9[24] = 0;
                qfree(v10);
              }
              v15 = v9[20];
              if ( v15 )
              {
                v9[21] = 0;
                qfree(v15);
              }
              v16 = v9[16];
              if ( v16 )
              {
                v17 = v9[17];
                if ( v17 )
                {
                  for ( k = 0; k != v17; ++k )
                  {
                    v19 = (__int64 *)(v16 + 32 * k);
                    v20 = *v19;
                    if ( *v19 )
                    {
                      v19[1] = 0;
                      qfree(v20);
                      v16 = v9[16];
                    }
                  }
                }
                v9[17] = 0;
                qfree(v16);
              }
              sub_255050((__int64)(v9 + 2), a2);
              j__qfree((__int64)v9);
            }
          }
          v3 = a1[7];
        }
      }
    }
    a1[8] = 0;
    qfree(v3);
  }
  v21 = a1[2];
  result = &off_4E0FB0;
  *a1 = &off_4E0FB0;
  if ( v21 )
  {
    a1[3] = 0;
    return (_UNKNOWN **)qfree(v21);
  }
  return result;
}

