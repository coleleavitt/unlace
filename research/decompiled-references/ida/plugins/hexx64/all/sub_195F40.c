__int64 __fastcall sub_195F40(__int64 a1, _QWORD *a2, double a3)
{
  int v3; // eax
  unsigned int v5; // r10d
  int v6; // edx
  __int64 v7; // rax
  int *v8; // r8
  unsigned __int64 v9; // rdi
  int v10; // edi
  int v12; // edx

  if ( (*(_BYTE *)(a1 + 52) & 2) == 0 )
    return 0;
  v3 = *(_DWORD *)(a1 + 48);
  v5 = 0;
  if ( v3 != -1 )
  {
    if ( (unsigned __int64)v3 >= a2[1] )
      goto LABEL_14;
    v12 = *(_DWORD *)(*a2 + 4LL * v3);
    if ( v3 != v12 )
    {
      *(_DWORD *)(a1 + 48) = v12;
      v5 = 1;
    }
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = (int *)(*(_QWORD *)(a1 + 24) + 4 * v7);
      v9 = *v8;
      if ( v9 >= a2[1] )
        break;
      v10 = *(_DWORD *)(*a2 + 4 * v9);
      if ( *v8 != v10 )
      {
        *v8 = v10;
        v5 = 1;
      }
      v7 = ++v6;
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 32) )
        return v5;
    }
LABEL_14:
    if ( !under_debugger )
      sub_383060(0xC9ADu, a3);
    BUG();
  }
  return v5;
}

