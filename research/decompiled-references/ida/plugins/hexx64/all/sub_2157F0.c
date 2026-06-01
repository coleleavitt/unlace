__int64 (__fastcall **__fastcall sub_2157F0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi

  result = off_4DF720;
  *a1 = off_4DF720;
  v3 = a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v4 = a1[9];
  if ( v4 )
  {
    v5 = a1[10];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 24 * i);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8);
          v4 = a1[9];
        }
      }
    }
    a1[10] = 0;
    result = (__int64 (__fastcall **)())qfree(v4);
  }
  v9 = a1[6];
  if ( v9 )
  {
    a1[7] = 0;
    return (__int64 (__fastcall **)())qfree(v9);
  }
  return result;
}

