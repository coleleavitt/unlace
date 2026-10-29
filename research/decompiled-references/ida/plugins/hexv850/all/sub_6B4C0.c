__int64 __fastcall sub_6B4C0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64, int, int); // rax
  unsigned int v5; // eax

  v2 = a1[38];
  v3 = (int)a2;
  if ( !*(_DWORD *)(v2 + 4LL * (int)a2) )
    return (unsigned int)a2;
  do
  {
    while ( 1 )
    {
      v4 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v4 != sub_60650 )
        break;
      a2 = **(unsigned int **)(a1[6] + 24 * v3);
      v3 = (int)a2;
      if ( !*(_DWORD *)(v2 + 4LL * (int)a2) )
        return (unsigned int)a2;
    }
    v5 = v4((__int64)a1, a2, 0);
    v2 = a1[38];
    a2 = v5;
    v3 = (int)v5;
  }
  while ( *(_DWORD *)(v2 + 4LL * (int)v5) );
  return (unsigned int)a2;
}

