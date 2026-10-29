__int64 __fastcall sub_162230(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rbx
  int v6; // edx
  _DWORD *v7; // rax
  __int64 v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  _DWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbp
  char *v20; // rdi
  __int64 v21; // rcx
  char *v22; // rdx
  _DWORD *v23; // rsi
  __int64 v24; // rdx
  int v25; // ebx
  _DWORD *v26; // rcx
  _DWORD *v27; // rax
  __int64 v29; // rax
  __int64 v30; // rdx

  v3 = a3;
  v5 = a1;
  v6 = **(_DWORD **)(a3 + 56);
  if ( **(_DWORD **)(a1 + 56) == 55 )
  {
    if ( v6 != 55 )
      goto LABEL_7;
  }
  else if ( v6 == 55 )
  {
    goto LABEL_6;
  }
  v7 = *(_DWORD **)(a1 + 344);
  v8 = *(_QWORD *)(a1 + 352);
  v9 = &v7[v8];
  if ( v7 != v9 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) != *v7 )
    {
      if ( v9 == ++v7 )
        goto LABEL_4;
    }
    v10 = *(_DWORD **)(v3 + 344);
    v11 = *(_QWORD *)(v3 + 352);
    v12 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 72LL);
    v13 = &v10[v11];
    if ( v10 != v13 )
    {
LABEL_34:
      while ( *v10 != v12 )
      {
        if ( ++v10 == v13 )
          goto LABEL_44;
      }
      if ( v13 != v10 )
      {
        if ( v7 == v9 || (int)v8 >= (int)v11 )
          goto LABEL_7;
        goto LABEL_6;
      }
    }
LABEL_44:
    if ( v7 == v9 && (int)v8 >= (int)v11 )
      goto LABEL_7;
LABEL_6:
    v14 = v5;
    a2 = *(_QWORD *)(v3 + 48);
    v5 = v3;
    v3 = v14;
    goto LABEL_7;
  }
LABEL_4:
  v10 = *(_DWORD **)(v3 + 344);
  v11 = *(_QWORD *)(v3 + 352);
  v12 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 72LL);
  v13 = &v10[v11];
  if ( v10 != v13 )
    goto LABEL_34;
  if ( (int)v8 < (int)v11 )
    goto LABEL_6;
LABEL_7:
  if ( *(_DWORD *)(v5 + 376) != 1 )
  {
    if ( !under_debugger )
      sub_37B760(51999);
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v3 + 376) != 1 )
  {
    if ( !under_debugger )
      sub_37B760(52000);
    goto LABEL_56;
  }
  if ( **(_DWORD **)(v5 + 368) != **(_DWORD **)(v3 + 368) )
  {
    if ( !under_debugger )
      sub_37B760(52001);
    goto LABEL_56;
  }
  v15 = *(_QWORD *)(v5 + 56);
  if ( a2 != v15 )
  {
    while ( v15 )
    {
      sub_9CDC0(v5, v15);
      v15 = *(_QWORD *)(v5 + 56);
      if ( v15 == a2 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_37B760(52002);
LABEL_56:
    BUG();
  }
LABEL_13:
  sub_116EE0(a2);
  v16 = *(_DWORD *)(v5 + 24);
  BYTE1(v16) &= ~2u;
  LOBYTE(v16) = v16 | 0x80;
  *(_DWORD *)(v5 + 24) = v16;
  *(_DWORD *)a2 = 55;
  *(_BYTE *)(a2 + 32) = 7;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v3 + 72);
  v17 = *(_QWORD *)(v5 + 64);
  v18 = **(unsigned int **)(v5 + 368);
  if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
    sub_161430(a2);
  v19 = *(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18);
  v20 = *(char **)(v19 + 344);
  v21 = *(_QWORD *)(v19 + 352);
  v22 = &v20[4 * v21];
  if ( v20 != v22 )
  {
    while ( *(_DWORD *)(v5 + 72) != *(_DWORD *)v20 )
    {
      v20 += 4;
      if ( v22 == v20 )
        goto LABEL_20;
    }
    if ( v22 != v20 )
    {
      memmove(v20, v20 + 4, v22 - v20 - 4);
      v21 = *(_QWORD *)(v19 + 352) - 1LL;
      *(_QWORD *)(v19 + 352) = v21;
    }
  }
LABEL_20:
  if ( !v21 )
    **(_DWORD **)(v19 + 64) |= 0x400u;
  **(_DWORD **)(v5 + 368) = *(_DWORD *)(v3 + 72);
  *(_DWORD *)(v5 + 76) = 3;
  v23 = *(_DWORD **)(v3 + 344);
  v24 = *(_QWORD *)(v3 + 352);
  v25 = *(_DWORD *)(v5 + 72);
  v26 = &v23[v24];
  if ( v23 != v26 )
  {
    v27 = *(_DWORD **)(v3 + 344);
    while ( v25 != *v27 )
    {
      if ( v26 == ++v27 )
        goto LABEL_39;
    }
    if ( v27 != v26 )
    {
      if ( !under_debugger )
        sub_37B760(52003);
      goto LABEL_56;
    }
  }
LABEL_39:
  if ( *(_QWORD *)(v3 + 360) < (unsigned __int64)(v24 + 1) )
  {
    v29 = qvector_reserve();
    v30 = *(_QWORD *)(v3 + 352);
    *(_QWORD *)(v3 + 344) = v29;
    v26 = (_DWORD *)(v29 + 4 * v30);
  }
  *v26 = v25;
  ++*(_QWORD *)(v3 + 352);
  sub_134C00(v3);
  return 1;
}

