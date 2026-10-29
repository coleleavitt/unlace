__int64 __fastcall sub_29EE90(__int64 *a1, double a2)
{
  __int64 result; // rax
  __int64 i; // r13
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-40h]

  result = *a1;
  if ( *a1 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v5 = result + 48 * i;
        v6 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v5 + 16);
          if ( v7 )
          {
            v8 = 0;
            do
            {
              v9 = v8++;
              v10 = v6 + 32 * v9;
              clear_tinfo_t();
              sub_29EC30(v10, a2);
              v6 = *(_QWORD *)(v5 + 8);
            }
            while ( v7 != v8 );
          }
          *(_QWORD *)(v5 + 16) = 0;
          qfree(v6);
          result = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(result);
  }
  return result;
}

