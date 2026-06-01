__int64 (__fastcall **__fastcall sub_70250(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax

  result = off_C8C38;
  *a1 = off_C8C38;
  a1[1] = 0;
  a1[2] = 0;
  v3 = a1[3];
  if ( v3 )
  {
    v4 = a1[4];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = 5 * i;
        cleanup_argloc(v3 + 8 * v6);
        v3 = a1[3];
      }
    }
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
