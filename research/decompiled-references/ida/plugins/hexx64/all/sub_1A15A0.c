__int64 __fastcall sub_1A15A0(__int64 a1, char a2, double a3)
{
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdx

  if ( !*(_QWORD *)a1 )
  {
    if ( !under_debugger )
      sub_383060(0xC8ACu, a3);
    BUG();
  }
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 40LL);
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
    return v3;
  v4 = *(__int64 **)(a1 + 96);
  v5 = &v4[*(_QWORD *)(a1 + 104)];
  if ( v5 == v4 )
    return -1;
  v6 = *(_QWORD *)(*v4 + 24);
  if ( a2 )
  {
    v7 = v4 + 1;
    if ( v3 == v6 )
    {
      while ( v5 != v7 )
      {
        v8 = *v7++;
        v6 = *(_QWORD *)(v8 + 24);
        if ( v6 != v3 )
          return v6;
      }
      return -1;
    }
  }
  return v6;
}

