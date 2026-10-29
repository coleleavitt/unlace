__int64 __fastcall sub_604A0(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = a1[1];
  result = 0;
  if ( a2[1] >= v2 )
  {
    v4 = v2 >> 6;
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        return 1;
      v6 = *(_QWORD *)(*a1 + 8 * v5) & ~*(_QWORD *)(*a2 + 8 * v5);
      ++v5;
    }
    while ( !v6 );
    return 0;
  }
  return result;
}

