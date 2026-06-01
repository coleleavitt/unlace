__int64 (__fastcall **__fastcall sub_7FEA0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 *v2; // r12
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 i; // r13
  __int64 v7; // rax
  __int64 v8; // rdx

  result = &off_C8D68;
  v2 = a1 - 1;
  v3 = a1 + 299;
  *a1 = &off_C8D68;
  do
  {
    if ( *v3 )
    {
      v4 = v3[1];
      if ( v4 )
      {
        v5 = *v3;
        for ( i = 0; i != v4; ++i )
        {
          v7 = v5 + 32 * i;
          v8 = *(_QWORD *)(v7 + 8);
          if ( v8 )
          {
            *(_QWORD *)(v7 + 16) = 0;
            qfree(v8);
            v5 = *v3;
          }
        }
      }
      else
      {
        v5 = *v3;
      }
      v3[1] = 0;
      result = (__int64 (__fastcall **)())qfree(v5);
    }
    v3 -= 3;
  }
  while ( v3 != v2 );
  return result;
}

