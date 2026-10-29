__int64 __fastcall sub_F920(__int64 a1, int *a2)
{
  __int64 v2; // rdx
  int v3; // r8d
  __int64 result; // rax
  char *v5; // rdi
  char *v6; // rcx
  int v7; // esi
  char *v8; // rax

  v2 = *(_QWORD *)(a1 + 192);
  if ( !v2 )
    return -1;
  v3 = *a2;
  result = 0;
  if ( *a2 != -1 )
  {
    v5 = *(char **)(a1 + 184);
    v6 = &v5[8 * v2];
    if ( v5 != v6 )
    {
      v7 = a2[1];
      v8 = v5;
      while ( v7 != *(_DWORD *)v8 || v3 != *(_DWORD *)v8 )
      {
        v8 += 8;
        if ( v6 == v8 )
          return 0;
      }
      if ( v8 != v6 )
        return (v8 - v5) >> 3;
      return 0;
    }
  }
  return result;
}

