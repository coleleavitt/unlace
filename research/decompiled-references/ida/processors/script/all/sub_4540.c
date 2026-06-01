__int64 __fastcall sub_4540(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( a1[1] )
  {
    v2 = 0;
    do
    {
      result = 16 * v2;
      if ( *(_QWORD *)(v1 + 16 * v2 + 8) )
      {
        result = qfree();
        v1 = *a1;
      }
      ++v2;
    }
    while ( v2 < a1[1] );
  }
  if ( v1 )
  {
    a1[1] = 0;
    result = qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  return result;
}

