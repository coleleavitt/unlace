char __fastcall sub_112660(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // rdi
  __int64 v11; // rcx
  char *v12; // rdx
  int v14; // eax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(unsigned int *)(v3 + 72);
  sub_11D5A0(v3);
  v5 = *(char **)(a1 + 368);
  v6 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)(a1 + 76) = 3;
  v7 = &v5[4 * v6];
  if ( v5 == v7 )
    goto LABEL_19;
  while ( (_DWORD)v4 != *(_DWORD *)v5 )
  {
    v5 += 4;
    if ( v7 == v5 )
      goto LABEL_19;
  }
  if ( v7 == v5 )
  {
LABEL_19:
    if ( !under_debugger )
      sub_383060(0xC3FBu, a2);
    goto LABEL_22;
  }
  memmove(v5, v5 + 4, v7 - v5 - 4);
  v8 = *(_QWORD *)(a1 + 64);
  --*(_QWORD *)(a1 + 376);
  if ( (unsigned int)v4 >= *(_DWORD *)(v8 + 64) )
    sub_111110(a2);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v4);
  v10 = *(char **)(v9 + 344);
  v11 = *(_QWORD *)(v9 + 352);
  v12 = &v10[4 * v11];
  if ( v10 == v12 )
    goto LABEL_15;
  while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v10 )
  {
    v10 += 4;
    if ( v12 == v10 )
      goto LABEL_15;
  }
  if ( v10 == v12 )
  {
LABEL_15:
    if ( !v11 )
      **(_DWORD **)(v9 + 64) |= 0x400u;
    if ( !under_debugger )
      sub_383060(0xC3FCu, a2);
LABEL_22:
    BUG();
  }
  memmove(v10, v10 + 4, v12 - v10 - 4);
  if ( (*(_QWORD *)(v9 + 352))-- == 1 )
    **(_DWORD **)(v9 + 64) |= 0x400u;
  v14 = *(_DWORD *)(a1 + 24);
  BYTE1(v14) &= ~2u;
  LOBYTE(v14) = v14 | 0x80;
  *(_DWORD *)(a1 + 24) = v14;
  return v14;
}

