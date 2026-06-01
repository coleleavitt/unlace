__int64 (__fastcall **__fastcall sub_63620(_QWORD *a1))()
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = a1[13];
  *a1 = off_AFB98;
  if ( v2 )
  {
    v3 = a1[14];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 24 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[13];
        }
      }
    }
    a1[14] = 0;
    qfree(v2);
  }
  v7 = a1[3];
  result = off_AEE30;
  a1[1] = 0;
  *a1 = off_AEE30;
  if ( v7 )
  {
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree(v7);
  }
  return result;
}
