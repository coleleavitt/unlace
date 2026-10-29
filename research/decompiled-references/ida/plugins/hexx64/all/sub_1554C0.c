__int64 __fastcall sub_1554C0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  int v5; // r14d
  unsigned int v6; // r12d
  __int64 v7; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  if ( *(int *)(a1 + 8) <= 0 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    while ( (get_tinfo_property() & 0xF) != 9 )
    {
      ++v5;
      v3 += 80;
      if ( *(_DWORD *)(a1 + 8) <= v5 )
        return v6;
    }
    v7 = v3;
    ++v5;
    v3 += 80;
    v6 |= sub_1552F0(v7, a2, a3);
  }
  while ( *(_DWORD *)(a1 + 8) > v5 );
  return v6;
}

