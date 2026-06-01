char __fastcall sub_10E2F0(__int64 a1)
{
  _DWORD *v1; // rbp
  char *v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  char *v6; // rdx
  __int64 v7; // rbp
  char *v8; // rdi
  __int64 v9; // rcx
  char *v10; // rdx
  int v12; // eax

  v1 = *(_DWORD **)(a1 + 56);
  v1[1] &= ~0x10u;
  *v1 = 55;
  sub_1188E0(v1 + 8);
  sub_1188E0(v1 + 12);
  sub_118550(v1 + 8, v1 + 16);
  v3 = *(char **)(a1 + 368);
  v4 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 76) = 3;
  v5 = *(_DWORD *)(v4 + 72);
  v6 = &v3[4 * *(_QWORD *)(a1 + 376)];
  if ( v3 == v6 )
    goto LABEL_18;
  while ( v5 != *(_DWORD *)v3 )
  {
    v3 += 4;
    if ( v6 == v3 )
      goto LABEL_18;
  }
  if ( v6 == v3 )
  {
LABEL_18:
    if ( !under_debugger )
      sub_37DDE0(51857);
    goto LABEL_20;
  }
  memmove(v3, v3 + 4, v6 - v3 - 4);
  v7 = *(_QWORD *)(a1 + 8);
  --*(_QWORD *)(a1 + 376);
  v8 = *(char **)(v7 + 344);
  v9 = *(_QWORD *)(v7 + 352);
  v10 = &v8[4 * v9];
  if ( v8 == v10 )
    goto LABEL_14;
  while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v8 )
  {
    v8 += 4;
    if ( v10 == v8 )
      goto LABEL_14;
  }
  if ( v8 == v10 )
  {
LABEL_14:
    if ( !v9 )
      **(_DWORD **)(v7 + 64) |= 0x400u;
    if ( !under_debugger )
      sub_37DDE0(51858);
LABEL_20:
    BUG();
  }
  memmove(v8, v8 + 4, v10 - v8 - 4);
  if ( (*(_QWORD *)(v7 + 352))-- == 1 )
    **(_DWORD **)(v7 + 64) |= 0x400u;
  v12 = *(_DWORD *)(a1 + 24);
  BYTE1(v12) &= ~2u;
  LOBYTE(v12) = v12 | 0x80;
  *(_DWORD *)(a1 + 24) = v12;
  return v12;
}

