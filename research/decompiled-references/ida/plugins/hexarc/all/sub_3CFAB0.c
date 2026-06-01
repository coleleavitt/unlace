__int64 __fastcall sub_3CFAB0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbx
  _QWORD *v5; // rbp
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = *(_QWORD **)(v2 + 8 * i);
        if ( v5 )
        {
          if ( *v5 )
          {
            v5[1] = 0;
            qfree();
          }
          operator delete(v5, 0x38u);
          v2 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

