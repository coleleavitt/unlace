_DWORD *__fastcall sub_A31B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  char *v9; // rdi
  char *v10; // rdx
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rsi
  int v14; // edx
  _DWORD *result; // rax
  __int64 v16; // rax

  if ( *(_QWORD *)(a1 + 376) != 1 )
  {
    if ( !under_debugger )
      sub_37E160(50107);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 64);
  v4 = **(unsigned int **)(a1 + 368);
  if ( (unsigned int)v4 >= *(_DWORD *)(v2 + 64) )
    sub_9CAB0();
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 528) + 8 * v4);
  v7 = *(_DWORD *)(a1 + 72);
  v8 = *(_QWORD *)(v6 + 352);
  v9 = *(char **)(v6 + 344);
  v10 = &v9[4 * v8];
  if ( v9 != v10 )
  {
    while ( v7 != *(_DWORD *)v9 )
    {
      v9 += 4;
      if ( v10 == v9 )
        goto LABEL_9;
    }
    if ( v10 != v9 )
    {
      memmove(v9, v9 + 4, v10 - v9 - 4);
      v8 = *(_QWORD *)(v6 + 352) - 1LL;
      *(_QWORD *)(v6 + 352) = v8;
    }
  }
LABEL_9:
  if ( !v8 )
    **(_DWORD **)(v6 + 64) |= 0x400u;
  v11 = *(_QWORD *)(a2 + 352);
  v12 = *(_DWORD *)(a1 + 72);
  v13 = *(_QWORD *)(a2 + 344);
  if ( *(_QWORD *)(a2 + 360) < (unsigned __int64)(v11 + 1) )
  {
    v16 = qvector_reserve();
    *(_QWORD *)(a2 + 344) = v16;
    v13 = v16;
    v11 = *(_QWORD *)(a2 + 352);
  }
  *(_DWORD *)(v13 + 4 * v11) = v12;
  v14 = *(_DWORD *)(a2 + 72);
  ++*(_QWORD *)(a2 + 352);
  result = *(_DWORD **)(a1 + 368);
  *result = v14;
  return result;
}

