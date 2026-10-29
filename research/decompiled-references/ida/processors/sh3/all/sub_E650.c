void __fastcall sub_E650(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 i; // r15
  __int64 *v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-48h]
  __int64 v19; // [rsp+8h] [rbp-40h]

  *a1 = &off_142E0;
  v5 = a1[7];
  if ( v5 )
  {
    a1[8] = 0;
    qfree(v5, a2, a3, a4);
  }
  v6 = a1[4];
  if ( v6 )
  {
    v19 = a1[5];
    if ( v19 )
    {
      v18 = 0;
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v6 + v7);
        v9 = *(_QWORD *)(v6 + v7 + 56);
        if ( v9 )
        {
          v10 = v8[8];
          if ( v10 )
          {
            for ( i = 0; i != v10; ++i )
            {
              v12 = (__int64 *)(v9 + 48 * i);
              v13 = v12[3];
              if ( v13 )
              {
                v12[4] = 0;
                qfree(v13, a2, a3, a4);
              }
              v14 = *v12;
              if ( *v12 )
              {
                v12[1] = 0;
                qfree(v14, a2, a3, a4);
              }
              v9 = v8[7];
            }
          }
          v8[8] = 0;
          qfree(v9, a2, a3, a4);
        }
        v15 = v8[4];
        if ( v15 )
        {
          v8[5] = 0;
          qfree(v15, a2, a3, a4);
        }
        v16 = v8[1];
        if ( v16 )
        {
          v8[2] = 0;
          qfree(v16, a2, a3, a4);
        }
        ++v18;
        v6 = a1[4];
        v7 += 88;
      }
      while ( v19 != v18 );
    }
    a1[5] = 0;
    qfree(v6, a2, a3, a4);
  }
  v17 = a1[1];
  if ( v17 )
  {
    a1[2] = 0;
    qfree(v17, a2, a3, a4);
  }
  operator delete(a1, 0x68u);
}

