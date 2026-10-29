__int64 __fastcall sub_60D40(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = a1[1];
  if ( v2 > a2[1] )
    v2 = a2[1];
  result = 0;
  if ( v2 )
  {
    v4 = v2 >> 6;
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        return 0;
      v6 = *(_QWORD *)(*a1 + 8 * v5) & *(_QWORD *)(*a2 + 8 * v5);
      ++v5;
    }
    while ( !v6 );
    return 1;
  }
  return result;
}

