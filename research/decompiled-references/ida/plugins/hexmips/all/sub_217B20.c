__int64 __fastcall sub_217B20(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 j; // rbx

  *a1 = &off_4BFEB0;
  clear_tinfo_t();
  cleanup_argloc();
  v1 = a1[12];
  if ( v1 )
  {
    v2 = a1[13];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 32 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[12];
        }
      }
    }
    a1[13] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  result = qfree();
  v6 = a1[3];
  if ( v6 )
  {
    v7 = a1[4];
    if ( v7 )
    {
      v8 = 0;
      for ( j = 0; j != v7; ++j )
      {
        if ( *(_QWORD *)(v6 + v8) )
        {
          *(_QWORD *)(v6 + v8 + 8) = 0;
          qfree();
          v6 = a1[3];
        }
        v8 += 56;
      }
    }
    a1[4] = 0;
    return qfree();
  }
  return result;
}

