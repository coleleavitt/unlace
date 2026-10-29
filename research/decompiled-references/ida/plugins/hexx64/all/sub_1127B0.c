char __fastcall sub_1127B0(__int64 a1, double a2)
{
  __int64 v2; // rbp
  char *v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  char *v7; // rdx
  __int64 v8; // rbp
  char *v9; // rdi
  __int64 v10; // rcx
  char *v11; // rdx
  int v13; // eax

  v2 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(v2 + 4) &= ~0x10u;
  *(_DWORD *)v2 = 55;
  sub_11CDA0(v2 + 32);
  sub_11CDA0(v2 + 48);
  sub_11CA10((char *)(v2 + 32), (char *)(v2 + 64));
  v4 = *(char **)(a1 + 368);
  v5 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 76) = 3;
  v6 = *(_DWORD *)(v5 + 72);
  v7 = &v4[4 * *(_QWORD *)(a1 + 376)];
  if ( v4 == v7 )
    goto LABEL_18;
  while ( v6 != *(_DWORD *)v4 )
  {
    v4 += 4;
    if ( v7 == v4 )
      goto LABEL_18;
  }
  if ( v7 == v4 )
  {
LABEL_18:
    if ( !under_debugger )
      sub_383060(0xCA91u, a2);
    goto LABEL_20;
  }
  memmove(v4, v4 + 4, v7 - v4 - 4);
  v8 = *(_QWORD *)(a1 + 8);
  --*(_QWORD *)(a1 + 376);
  v9 = *(char **)(v8 + 344);
  v10 = *(_QWORD *)(v8 + 352);
  v11 = &v9[4 * v10];
  if ( v9 == v11 )
    goto LABEL_14;
  while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v9 )
  {
    v9 += 4;
    if ( v11 == v9 )
      goto LABEL_14;
  }
  if ( v9 == v11 )
  {
LABEL_14:
    if ( !v10 )
      **(_DWORD **)(v8 + 64) |= 0x400u;
    if ( !under_debugger )
      sub_383060(0xCA92u, a2);
LABEL_20:
    BUG();
  }
  memmove(v9, v9 + 4, v11 - v9 - 4);
  if ( (*(_QWORD *)(v8 + 352))-- == 1 )
    **(_DWORD **)(v8 + 64) |= 0x400u;
  v13 = *(_DWORD *)(a1 + 24);
  BYTE1(v13) &= ~2u;
  LOBYTE(v13) = v13 | 0x80;
  *(_DWORD *)(a1 + 24) = v13;
  return v13;
}

