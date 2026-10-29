__int64 (__fastcall **__fastcall sub_151B0(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // rdi
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 i; // r15
  _QWORD *v10; // r13
  __int64 v11; // [rsp+0h] [rbp-48h]
  __int64 v12; // [rsp+8h] [rbp-40h]

  *a1 = &off_38508;
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  v2 = a1[7];
  result = &off_384A0;
  *a1 = &off_384A0;
  if ( v2 )
  {
    a1[8] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v4 = a1[4];
  if ( v4 )
  {
    v12 = a1[5];
    if ( v12 )
    {
      v11 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v4 + v5);
        v7 = *(_QWORD *)(v4 + v5 + 56);
        if ( v7 )
        {
          v8 = v6[8];
          if ( v8 )
          {
            for ( i = 0; i != v8; ++i )
            {
              v10 = (_QWORD *)(v7 + 48 * i);
              if ( v10[3] )
              {
                v10[4] = 0;
                qfree();
              }
              if ( *v10 )
              {
                v10[1] = 0;
                qfree();
              }
              v7 = v6[7];
            }
          }
          v6[8] = 0;
          qfree();
        }
        if ( v6[4] )
        {
          v6[5] = 0;
          qfree();
        }
        if ( v6[1] )
        {
          v6[2] = 0;
          qfree();
        }
        ++v11;
        v4 = a1[4];
        v5 += 88;
      }
      while ( v12 != v11 );
    }
    a1[5] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

