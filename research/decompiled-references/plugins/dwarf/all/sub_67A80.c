_UNKNOWN **__fastcall sub_67A80(_QWORD *a1)
{
  __int64 v1; // rdx
  _UNKNOWN **result; // rax
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi

  v1 = a1[2];
  result = &off_C86E0;
  *a1 = &off_C86E0;
  if ( v1 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v1 + 48 * i;
        v7 = *(_QWORD *)(v6 + 16);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 24) = 0;
          qfree(v7);
          v1 = a1[2];
        }
      }
    }
    a1[3] = 0;
    return (_UNKNOWN **)qfree(v1);
  }
  return result;
}
