__int64 __fastcall sub_DE960(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 *v6; // r14
  int v9; // eax

  v3 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 44LL) & 4) != 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 160);
  if ( !v4 )
    v4 = a1;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL * a2 + 24) + 104LL);
  if ( v5 && *(char *)(v5 + 48) >= 0 && *(_BYTE *)(v5 + 63) != 1 && *(_WORD *)(v5 + 54) == 2 )
  {
    v6 = *(__int64 **)(v4 + 152);
    if ( v6 )
    {
      if ( a3 == v6[1] )
        return *((unsigned int *)v6 + 5);
      while ( 1 )
      {
        v6 = (__int64 *)*v6;
        if ( !v6 )
          break;
        if ( v6[1] == a3 )
          return *((unsigned int *)v6 + 5);
      }
    }
    v6 = sub_DBF10(v3, 24);
    sub_DC930((__int64 *)v4, (__int64 *)(v4 + 184), (void (__fastcall *)(__int64, __int64))sub_C92C0, (__int64)v6);
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
    {
      *v6 = *(_QWORD *)(v4 + 152);
      *(_QWORD *)(v4 + 152) = v6;
      v6[1] = a3;
      *((_DWORD *)v6 + 4) = a2;
      v9 = *(_DWORD *)(v4 + 56) + 2;
      *(_DWORD *)(v4 + 56) = v9;
      *((_DWORD *)v6 + 5) = v9;
      *(_DWORD *)(v4 + 56) += 2;
      return *((unsigned int *)v6 + 5);
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 24) = 523;
  }
  return 0;
}
