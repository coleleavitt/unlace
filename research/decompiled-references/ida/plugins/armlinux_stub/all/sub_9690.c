__int64 __fastcall sub_9690(_QWORD *a1)
{
  __int64 i; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // rax

  for ( i = a1[3]; a1[4] != i; ++a1[6] )
  {
    while ( *(_DWORD *)(i + 32) != 4 || get_sreg() != 1 )
    {
      i += 56;
      if ( a1[4] == i )
        return 0;
    }
    ++*(_QWORD *)i;
    v2 = a1[6];
    v3 = a1[5];
    if ( a1[7] < (unsigned __int64)(v2 + 1) )
    {
      v5 = qvector_reserve();
      a1[5] = v5;
      v3 = v5;
      v2 = a1[6];
    }
    *(_QWORD *)(v3 + 8 * v2) = i;
    i += 56;
  }
  return 0;
}

