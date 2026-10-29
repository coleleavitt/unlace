__int64 __fastcall sub_3080(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        if ( v5[6] )
        {
          v5[7] = 0;
          ((void (*)(void))qfree)();
        }
        if ( v5[3] )
        {
          v5[4] = 0;
          ((void (*)(void))qfree)();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          ((void (*)(void))qfree)();
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}

