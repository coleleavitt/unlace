__int64 __fastcall sub_384CF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rdx

  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 1008);
  v3 = *(__int64 **)(v2 + 40);
  v4 = &v3[*(_QWORD *)(v2 + 48)];
  if ( v3 == v4 )
    return 0;
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 )
    {
      if ( a2 == *(_QWORD *)(v5 + 8) || a2 == *(_QWORD *)(v5 + 16) )
        break;
    }
    if ( v4 == ++v3 )
      return 0;
  }
  return v5;
}

