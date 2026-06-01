__int64 (__fastcall **__fastcall sub_10D30(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax

  result = off_44D78;
  *a1 = off_44D78;
  if ( a1[138] )
  {
    a1[139] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[135] )
  {
    a1[136] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[132] )
  {
    a1[133] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v2 = a1[129];
  if ( v2 )
  {
    v3 = a1[130];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[129];
        }
      }
    }
    a1[130] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

