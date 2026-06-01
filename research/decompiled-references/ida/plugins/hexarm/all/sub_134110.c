__int64 (__fastcall **__fastcall sub_134110(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx

  result = off_4D8098;
  *a1 = off_4D8098;
  v3 = a1[9];
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        if ( v6[5] )
        {
          v6[6] = 0;
          qfree();
        }
        if ( v6[2] )
        {
          v6[3] = 0;
          qfree();
        }
        v3 = a1[9];
      }
    }
    a1[10] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

