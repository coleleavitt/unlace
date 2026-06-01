__int64 __fastcall sub_27F740(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rax
  int *v9; // rdi
  int v10; // r13d
  _QWORD *v11; // r12
  __int64 v12; // rcx

  if ( *(_DWORD *)(a2 + 8) != 81 )
  {
    if ( !under_debugger )
      sub_37E160(50606);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 24);
  if ( (int)v2 - 1 <= 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v2 - 1);
  v5 = v4 - 8 - 8LL * (unsigned int)(v2 - 2);
  while ( 1 )
  {
    v6 = *(_QWORD *)v4;
    v7 = *(_DWORD *)(*(_QWORD *)v4 + 8LL);
    if ( (unsigned int)(v7 - 74) <= 2 )
      break;
    v4 -= 8;
    if ( v4 == v5 )
      return 0;
  }
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(int **)(a2 + 24);
  v10 = *v9;
  v11 = *(_QWORD **)(*(_QWORD *)(v8 + 64) + 24LL);
  v12 = v11[1];
  if ( *(_DWORD *)(v12 + 24) == 70 && *(_DWORD *)(v12 + 28) == v10 )
    goto LABEL_17;
  if ( v7 == 75 )
  {
    if ( *(_DWORD *)(v6 + 12) == v10 )
      goto LABEL_17;
  }
  else if ( v7 == 74 )
  {
    return 0;
  }
  if ( *(_DWORD *)(v8 + 8) != 61
    || !sub_2511B0(*(__int64 **)(v8 + 24))
    || *(_DWORD *)(*v11 + 28LL) != v10 && *(_DWORD *)(v6 + 12) != v10 )
  {
    return 0;
  }
  v9 = *(int **)(a2 + 24);
LABEL_17:
  if ( v9 )
    j__qfree();
  *(_DWORD *)(a2 + 8) = 79;
  return 1;
}

