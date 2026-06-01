__int64 __fastcall sub_19CFA0(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx

  if ( !*(_QWORD *)a1 )
  {
    if ( !under_debugger )
      sub_37DDE0(51372);
    BUG();
  }
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 40LL);
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
    return v2;
  v3 = *(__int64 **)(a1 + 96);
  v4 = &v3[*(_QWORD *)(a1 + 104)];
  if ( v4 == v3 )
    return -1;
  v5 = *(_QWORD *)(*v3 + 24);
  if ( a2 )
  {
    v6 = v3 + 1;
    if ( v2 == v5 )
    {
      while ( v4 != v6 )
      {
        v7 = *v6++;
        v5 = *(_QWORD *)(v7 + 24);
        if ( v5 != v2 )
          return v5;
      }
      return -1;
    }
  }
  return v5;
}

