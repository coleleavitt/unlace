__int64 __fastcall sub_23BF0(__int64 a1, const char *a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v6; // rbx

  v3 = *(_QWORD *)(a1 + 680);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 672);
  v6 = 0;
  while ( strcasecmp(a2, *(const char **)v4) )
  {
    ++v6;
    v4 += 32;
    if ( v6 == v3 )
      return 0xFFFFFFFFLL;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)(v4 + 12);
  return (unsigned int)v6;
}

