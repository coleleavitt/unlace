__int64 (__fastcall **__fastcall sub_12770(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax

  v1 = a1[2];
  result = off_64628;
  *a1 = off_64628;
  if ( v1 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v1 + 40 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v1 = a1[2];
        }
      }
    }
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

