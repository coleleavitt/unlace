__int64 (__fastcall **__fastcall sub_25360(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi

  v1 = a1[3];
  result = off_AA320;
  *a1 = off_AA320;
  if ( v1 )
  {
    v4 = a1[4];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v1 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v1 = a1[3];
        }
      }
    }
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree(v1);
  }
  return result;
}

