__int64 (__fastcall **__fastcall sub_15440(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi

  result = off_C7478;
  *a1 = off_C7478;
  v3 = a1[138];
  if ( v3 )
  {
    a1[139] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v4 = a1[135];
  if ( v4 )
  {
    a1[136] = 0;
    result = (__int64 (__fastcall **)())qfree(v4);
  }
  v5 = a1[132];
  if ( v5 )
  {
    a1[133] = 0;
    result = (__int64 (__fastcall **)())qfree(v5);
  }
  v6 = a1[129];
  if ( v6 )
  {
    v7 = a1[130];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10);
          v6 = a1[129];
        }
      }
    }
    a1[130] = 0;
    return (__int64 (__fastcall **)())qfree(v6);
  }
  return result;
}
