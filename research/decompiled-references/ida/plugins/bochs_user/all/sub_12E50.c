unsigned __int64 __fastcall sub_12E50(__int64 *a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 j; // rbp
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 i; // rbp

  result = a2[3];
  v3 = a1[3];
  v4 = (__int64 *)(v3 + 8);
  if ( v3 + 8 < result )
  {
    do
    {
      v5 = *v4;
      v6 = *v4 + 504;
      do
      {
        v5 += 72;
        free_debug_event();
      }
      while ( v6 != v5 );
      result = a2[3];
      ++v4;
    }
    while ( (unsigned __int64)v4 < result );
    v3 = a1[3];
  }
  v7 = *a1;
  if ( v3 == result )
  {
    for ( i = *a2; i != v7; result = free_debug_event() )
      v7 += 72;
  }
  else
  {
    for ( j = a1[2]; j != v7; result = free_debug_event() )
      v7 += 72;
    v9 = *a2;
    v10 = a2[1];
    if ( *a2 != v10 )
    {
      do
      {
        v10 += 72;
        result = free_debug_event();
      }
      while ( v9 != v10 );
    }
  }
  return result;
}

