__int64 __fastcall sub_1688F0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // r12
  __int64 v6; // rbx
  int v7; // edx
  _DWORD *v8; // rax
  __int64 v9; // r9
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  __int64 v12; // r8
  int v13; // edi
  _DWORD *v14; // rsi
  __int64 v15; // rax
  _BYTE *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbp
  char *v21; // rdi
  __int64 v22; // rcx
  char *v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  int v26; // ebx
  _DWORD *v27; // rcx
  _DWORD *v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx

  v4 = a3;
  v6 = a1;
  v7 = **(_DWORD **)(a3 + 56);
  if ( **(_DWORD **)(a1 + 56) == 55 )
  {
    if ( v7 != 55 )
      goto LABEL_7;
  }
  else if ( v7 == 55 )
  {
    goto LABEL_6;
  }
  v8 = *(_DWORD **)(a1 + 344);
  v9 = *(_QWORD *)(a1 + 352);
  v10 = &v8[v9];
  if ( v8 != v10 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) != *v8 )
    {
      if ( v10 == ++v8 )
        goto LABEL_4;
    }
    v11 = *(_DWORD **)(v4 + 344);
    v12 = *(_QWORD *)(v4 + 352);
    v13 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 72LL);
    v14 = &v11[v12];
    if ( v11 != v14 )
    {
LABEL_34:
      while ( *v11 != v13 )
      {
        if ( ++v11 == v14 )
          goto LABEL_44;
      }
      if ( v14 != v11 )
      {
        if ( v8 == v10 || (int)v9 >= (int)v12 )
          goto LABEL_7;
        goto LABEL_6;
      }
    }
LABEL_44:
    if ( v8 == v10 && (int)v9 >= (int)v12 )
      goto LABEL_7;
LABEL_6:
    v15 = v6;
    a2 = *(_QWORD *)(v4 + 48);
    v6 = v4;
    v4 = v15;
    goto LABEL_7;
  }
LABEL_4:
  v11 = *(_DWORD **)(v4 + 344);
  v12 = *(_QWORD *)(v4 + 352);
  v13 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 72LL);
  v14 = &v11[v12];
  if ( v11 != v14 )
    goto LABEL_34;
  if ( (int)v9 < (int)v12 )
    goto LABEL_6;
LABEL_7:
  if ( *(_DWORD *)(v6 + 376) != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCB1Fu, a4);
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v4 + 376) != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCB20u, a4);
    goto LABEL_56;
  }
  if ( **(_DWORD **)(v6 + 368) != **(_DWORD **)(v4 + 368) )
  {
    if ( !under_debugger )
      sub_383060(0xCB21u, a4);
    goto LABEL_56;
  }
  v16 = *(_BYTE **)(v6 + 56);
  if ( (_BYTE *)a2 != v16 )
  {
    while ( v16 )
    {
      sub_A3480(v6, v16);
      v16 = *(_BYTE **)(v6 + 56);
      if ( v16 == (_BYTE *)a2 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_383060(0xCB22u, a4);
LABEL_56:
    BUG();
  }
LABEL_13:
  sub_11D5A0(a2);
  v17 = *(_DWORD *)(v6 + 24);
  BYTE1(v17) &= ~2u;
  LOBYTE(v17) = v17 | 0x80;
  *(_DWORD *)(v6 + 24) = v17;
  *(_DWORD *)a2 = 55;
  *(_BYTE *)(a2 + 32) = 7;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v4 + 72);
  v18 = *(_QWORD *)(v6 + 64);
  v19 = **(unsigned int **)(v6 + 368);
  if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 64) )
    sub_167AF0(a4);
  v20 = *(_QWORD *)(*(_QWORD *)(v18 + 528) + 8 * v19);
  v21 = *(char **)(v20 + 344);
  v22 = *(_QWORD *)(v20 + 352);
  v23 = &v21[4 * v22];
  if ( v21 != v23 )
  {
    while ( *(_DWORD *)(v6 + 72) != *(_DWORD *)v21 )
    {
      v21 += 4;
      if ( v23 == v21 )
        goto LABEL_20;
    }
    if ( v23 != v21 )
    {
      memmove(v21, v21 + 4, v23 - v21 - 4);
      v22 = *(_QWORD *)(v20 + 352) - 1LL;
      *(_QWORD *)(v20 + 352) = v22;
    }
  }
LABEL_20:
  if ( !v22 )
    **(_DWORD **)(v20 + 64) |= 0x400u;
  **(_DWORD **)(v6 + 368) = *(_DWORD *)(v4 + 72);
  *(_DWORD *)(v6 + 76) = 3;
  v24 = *(_QWORD *)(v4 + 344);
  v25 = *(_QWORD *)(v4 + 352);
  v26 = *(_DWORD *)(v6 + 72);
  v27 = (_DWORD *)(v24 + 4 * v25);
  if ( (_DWORD *)v24 != v27 )
  {
    v28 = *(_DWORD **)(v4 + 344);
    while ( v26 != *v28 )
    {
      if ( v27 == ++v28 )
        goto LABEL_39;
    }
    if ( v28 != v27 )
    {
      if ( !under_debugger )
        sub_383060(0xCB23u, a4);
      goto LABEL_56;
    }
  }
LABEL_39:
  v29 = v25 + 1;
  if ( *(_QWORD *)(v4 + 360) < v29 )
  {
    v31 = qvector_reserve(v4 + 344, v24, v29, 4);
    v32 = *(_QWORD *)(v4 + 352);
    *(_QWORD *)(v4 + 344) = v31;
    v27 = (_DWORD *)(v31 + 4 * v32);
  }
  *v27 = v26;
  ++*(_QWORD *)(v4 + 352);
  sub_13B2C0(v4);
  return 1;
}

