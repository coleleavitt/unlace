__int64 (__fastcall **__fastcall sub_1BDCC0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  _QWORD *v2; // rbp
  __int64 v3; // r12
  __int64 i; // rbx

  result = off_4BEF98;
  v2 = (_QWORD *)a1[1];
  *a1 = off_4BEF98;
  if ( v2 )
  {
    if ( *v2 )
    {
      v3 = v2[1];
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
          cleanup_argloc();
      }
      v2[1] = 0;
      qfree();
    }
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

