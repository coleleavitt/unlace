// Alternative name is '_ZN7qvectorI5udm_tED1Ev'
__int64 __fastcall qvector<udm_t>::~qvector(__int64 *a1)
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
        while ( 1 )
        {
          v5 = (_QWORD *)(v2 + 144 * i);
          clear_tinfo_t();
          if ( v5[5] )
          {
            v5[6] = 0;
            qfree();
          }
          if ( !v5[2] )
            break;
          v5[3] = 0;
          ++i;
          qfree();
          v2 = *a1;
          if ( v3 == i )
            goto LABEL_8;
        }
        v2 = *a1;
      }
    }
LABEL_8:
    a1[1] = 0;
    return qfree();
  }
  return result;
}

