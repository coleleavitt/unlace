__int64 (__fastcall **__fastcall sub_25930(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi

  result = off_A9E40;
  *a1 = off_A9E40;
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v4 = a1[3];
  if ( v4 )
  {
    v5 = a1[4];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (__int64 *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 24);
        if ( v9 )
        {
          v8[4] = 0;
          qfree(v9);
        }
        v10 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v10);
        }
        v4 = a1[3];
        v6 += 56;
      }
    }
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree(v4);
  }
  return result;
}
