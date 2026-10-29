__int64 __fastcall sub_283FC0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // edx
  __int64 v9; // rax
  int *v10; // rdi
  int v11; // r13d
  _QWORD *v12; // r12
  __int64 v13; // rcx

  if ( *(_DWORD *)(a2 + 8) != 81 )
  {
    if ( !under_debugger )
      sub_383060(0xC5AEu, a3);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( (int)v3 - 1 <= 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v3 - 1);
  v6 = v5 - 8 - 8LL * (unsigned int)(v3 - 2);
  while ( 1 )
  {
    v7 = *(_QWORD *)v5;
    v8 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
    if ( (unsigned int)(v8 - 74) <= 2 )
      break;
    v5 -= 8;
    if ( v5 == v6 )
      return 0;
  }
  v9 = *(_QWORD *)(v7 + 24);
  v10 = *(int **)(a2 + 24);
  v11 = *v10;
  v12 = *(_QWORD **)(*(_QWORD *)(v9 + 64) + 24LL);
  v13 = v12[1];
  if ( *(_DWORD *)(v13 + 24) == 70 && *(_DWORD *)(v13 + 28) == v11 )
    goto LABEL_17;
  if ( v8 == 75 )
  {
    if ( *(_DWORD *)(v7 + 12) == v11 )
      goto LABEL_17;
  }
  else if ( v8 == 74 )
  {
    return 0;
  }
  if ( *(_DWORD *)(v9 + 8) != 61
    || !sub_255A30(*(__int64 **)(v9 + 24))
    || *(_DWORD *)(*v12 + 28LL) != v11 && *(_DWORD *)(v7 + 12) != v11 )
  {
    return 0;
  }
  v10 = *(int **)(a2 + 24);
LABEL_17:
  if ( v10 )
    j__qfree((__int64)v10);
  *(_DWORD *)(a2 + 8) = 79;
  return 1;
}

