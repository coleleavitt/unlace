_UNKNOWN **__fastcall sub_14520(_QWORD *a1)
{
  __int64 v1; // rdx
  _UNKNOWN **result; // rax
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi

  v1 = a1[1];
  result = &off_C73E0;
  *a1 = &off_C73E0;
  if ( v1 )
  {
    v4 = a1[2];
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
          v1 = a1[1];
        }
      }
    }
    a1[2] = 0;
    return (_UNKNOWN **)qfree(v1);
  }
  return result;
}
