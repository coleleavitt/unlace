void __fastcall sub_11130(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 i; // r15
  __int64 *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-48h]
  __int64 v20; // [rsp+8h] [rbp-40h]

  *a1 = &off_231C0;
  v5 = a1[13];
  if ( v5 )
  {
    a1[14] = 0;
    qfree(v5, a2, a3, a4);
  }
  v6 = a1[7];
  *a1 = &off_23158;
  if ( v6 )
  {
    a1[8] = 0;
    qfree(v6, a2, a3, a4);
  }
  v7 = a1[4];
  if ( v7 )
  {
    v20 = a1[5];
    if ( v20 )
    {
      v19 = 0;
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v7 + v8);
        v10 = *(_QWORD *)(v7 + v8 + 56);
        if ( v10 )
        {
          v11 = v9[8];
          if ( v11 )
          {
            for ( i = 0; i != v11; ++i )
            {
              v13 = (__int64 *)(v10 + 48 * i);
              v14 = v13[3];
              if ( v14 )
              {
                v13[4] = 0;
                qfree(v14, a2, a3, a4);
              }
              v15 = *v13;
              if ( *v13 )
              {
                v13[1] = 0;
                qfree(v15, a2, a3, a4);
              }
              v10 = v9[7];
            }
          }
          v9[8] = 0;
          qfree(v10, a2, a3, a4);
        }
        v16 = v9[4];
        if ( v16 )
        {
          v9[5] = 0;
          qfree(v16, a2, a3, a4);
        }
        v17 = v9[1];
        if ( v17 )
        {
          v9[2] = 0;
          qfree(v17, a2, a3, a4);
        }
        ++v19;
        v7 = a1[4];
        v8 += 88;
      }
      while ( v20 != v19 );
    }
    a1[5] = 0;
    qfree(v7, a2, a3, a4);
  }
  v18 = a1[1];
  if ( v18 )
  {
    a1[2] = 0;
    qfree(v18, a2, a3, a4);
  }
  operator delete(a1, 0x80u);
}

