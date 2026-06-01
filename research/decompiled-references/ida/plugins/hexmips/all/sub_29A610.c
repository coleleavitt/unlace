__int64 __fastcall sub_29A610(__int64 *a1)
{
  __int64 result; // rax
  __int64 i; // r13
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // [rsp+0h] [rbp-40h]

  result = *a1;
  if ( *a1 )
  {
    v10 = a1[1];
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v4 = result + 48 * i;
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v4 + 16);
          if ( v6 )
          {
            v7 = 0;
            do
            {
              v8 = v7++;
              v9 = v5 + 32 * v8;
              clear_tinfo_t();
              sub_29A3B0(v9);
              v5 = *(_QWORD *)(v4 + 8);
            }
            while ( v6 != v7 );
          }
          *(_QWORD *)(v4 + 16) = 0;
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

