// Alternative name is '_ZN7qvectorIS_IxEED2Ev'
__int64 __fastcall qvector<qvector<long long>>::~qvector(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        while ( *(_QWORD *)(v1 + 24 * i) )
        {
          *(_QWORD *)(v1 + 24 * i++ + 8) = 0;
          qfree();
          v1 = *a1;
          if ( v2 == i )
            goto LABEL_6;
        }
      }
    }
LABEL_6:
    a1[1] = 0;
    return qfree();
  }
  return result;
}

