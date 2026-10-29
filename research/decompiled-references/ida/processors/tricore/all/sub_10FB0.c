__int64 (__fastcall **__fastcall sub_10FB0(_QWORD *a1, __int64 a2, __int64 a3, double a4))()
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 i; // r15
  __int64 *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-48h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  *a1 = &off_231C0;
  v5 = a1[13];
  if ( v5 )
  {
    a1[14] = 0;
    qfree(v5, a2, a3, a4);
  }
  v6 = a1[7];
  result = &off_23158;
  *a1 = &off_23158;
  if ( v6 )
  {
    a1[8] = 0;
    result = (__int64 (__fastcall **)())qfree(v6, a2, a3, a4);
  }
  v8 = a1[4];
  if ( v8 )
  {
    v21 = a1[5];
    if ( v21 )
    {
      v20 = 0;
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v8 + v9);
        v11 = *(_QWORD *)(v8 + v9 + 56);
        if ( v11 )
        {
          v12 = v10[8];
          if ( v12 )
          {
            for ( i = 0; i != v12; ++i )
            {
              v14 = (__int64 *)(v11 + 48 * i);
              v15 = v14[3];
              if ( v15 )
              {
                v14[4] = 0;
                qfree(v15, a2, a3, a4);
              }
              v16 = *v14;
              if ( *v14 )
              {
                v14[1] = 0;
                qfree(v16, a2, a3, a4);
              }
              v11 = v10[7];
            }
          }
          v10[8] = 0;
          qfree(v11, a2, a3, a4);
        }
        v17 = v10[4];
        if ( v17 )
        {
          v10[5] = 0;
          qfree(v17, a2, a3, a4);
        }
        v18 = v10[1];
        if ( v18 )
        {
          v10[2] = 0;
          qfree(v18, a2, a3, a4);
        }
        ++v20;
        v8 = a1[4];
        v9 += 88;
      }
      while ( v21 != v20 );
    }
    a1[5] = 0;
    result = (__int64 (__fastcall **)())qfree(v8, a2, a3, a4);
  }
  v19 = a1[1];
  if ( v19 )
  {
    a1[2] = 0;
    return (__int64 (__fastcall **)())qfree(v19, a2, a3, a4);
  }
  return result;
}

