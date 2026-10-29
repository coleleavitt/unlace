__int64 __fastcall sub_7F6E0(__int64 *a1)
{
  __int64 result; // rax
  __int64 i; // r13
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // [rsp+0h] [rbp-48h]

  result = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v3 = (__int64 *)(result + 24 * i);
        v4 = *v3;
        if ( *v3 )
        {
          v5 = v3[1];
          if ( v5 )
          {
            v6 = 0;
            v7 = 0;
            do
            {
              v8 = v4 + v6;
              ++v7;
              v6 += 112;
              sub_119360(v8 + 88);
              sub_119360(v8 + 72);
              sub_119360(v8 + 56);
              v4 = *v3;
            }
            while ( v5 != v7 );
          }
          v3[1] = 0;
          qfree();
          result = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

