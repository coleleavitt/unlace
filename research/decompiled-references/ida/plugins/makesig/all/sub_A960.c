void __fastcall sub_A960(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 i; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-40h]

  if ( !*(_BYTE *)a1 )
  {
    v3 = (__int64 *)a1[1];
    if ( !v3 )
      return;
    v4 = *v3;
    if ( *v3 )
    {
      v16 = v3[1];
      if ( v16 )
      {
        v5 = 0;
        while ( 1 )
        {
          v8 = v4 + 40 * v5;
          v9 = *(_QWORD *)(v8 + 16);
          if ( v9 )
          {
            *(_QWORD *)(v8 + 24) = 0;
            qfree(v9);
          }
          if ( *(_BYTE *)v8 )
            break;
          v10 = *(__int64 **)(v8 + 8);
          if ( v10 )
          {
            v11 = *v10;
            if ( *v10 )
            {
              v12 = v10[1];
              if ( v12 )
              {
                for ( i = 0; i != v12; ++i )
                {
                  v14 = (_QWORD *)(v11 + 40 * i);
                  v15 = v14[2];
                  if ( v15 )
                  {
                    v14[3] = 0;
                    qfree(v15);
                  }
                  sub_A960(v14);
                  v11 = *v10;
                }
              }
              v10[1] = 0;
              qfree(v11);
            }
            ++v5;
            qfree(v10);
            v4 = *v3;
            if ( v16 == v5 )
              goto LABEL_28;
          }
          else
          {
LABEL_15:
            v4 = *v3;
            if ( v16 == ++v5 )
              goto LABEL_28;
          }
        }
        v6 = *(__int64 **)(v8 + 8);
        if ( v6 )
        {
          v7 = *v6;
          if ( *v6 )
          {
            v6[1] = 0;
            qfree(v7);
          }
          qfree(v6);
        }
        goto LABEL_15;
      }
LABEL_28:
      v3[1] = 0;
      qfree(v4);
    }
    qfree(v3);
    return;
  }
  v1 = (__int64 *)a1[1];
  if ( v1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
      v1[1] = 0;
      qfree(v2);
    }
    qfree(v1);
  }
}

