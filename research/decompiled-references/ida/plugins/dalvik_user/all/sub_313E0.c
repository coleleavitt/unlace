_UNKNOWN **__fastcall sub_313E0(_QWORD *a1)
{
  __int64 v1; // rdx
  _UNKNOWN **result; // rax
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax

  v1 = a1[2];
  result = &off_7D800;
  *a1 = &off_7D800;
  if ( v1 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v1 + 48 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v1 = a1[2];
        }
      }
    }
    a1[3] = 0;
    return (_UNKNOWN **)qfree();
  }
  return result;
}

