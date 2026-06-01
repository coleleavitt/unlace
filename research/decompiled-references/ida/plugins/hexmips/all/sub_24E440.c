__int64 __fastcall sub_24E440(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( *(_DWORD *)(a2 + 8) != 81 )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(int **)(a2 + 24);
  v5 = v3 + 8;
  v6 = *(_QWORD *)(v3 + 16);
  v7 = *v4;
  if ( !v6 )
    return 0;
  v8 = v5;
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 16);
      v10 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v6 + 32) >= v7 )
        break;
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v10 )
        goto LABEL_8;
    }
    v8 = v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v9 );
LABEL_8:
  if ( v5 == v8 || v7 < *(_DWORD *)(v8 + 32) )
    return 0;
  *v4 = *(_DWORD *)(v8 + 36);
  return 0;
}

