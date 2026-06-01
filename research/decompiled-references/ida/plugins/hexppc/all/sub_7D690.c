int __fastcall sub_7D690(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  char v4; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // dl
  char v7; // al
  const char *v8; // rdx
  const char *v9; // rax

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a2 + 32);
  if ( v2 < v3 )
    return -1;
  if ( v3 < v2 )
    return 1;
  v4 = *(_BYTE *)(a1 + 4);
  if ( *(char *)(a2 + 4) > v4 )
    return -1;
  if ( *(char *)(a2 + 4) < v4 )
    return 1;
  if ( (char)(*(_BYTE *)(a1 + 5) & 0xF8) < (char)(*(_BYTE *)(a2 + 5) & 0xF8) )
    return -1;
  if ( (char)(*(_BYTE *)(a1 + 5) & 0xF8) > (char)(*(_BYTE *)(a2 + 5) & 0xF8) )
    return 1;
  v5 = *(_BYTE *)(a1 + 6);
  v6 = *(_BYTE *)(a2 + 6);
  if ( v5 < v6 )
    return -1;
  if ( v6 < v5 )
    return 1;
  v7 = *(_BYTE *)(a2 + 7);
  if ( *(char *)(a1 + 7) < v7 )
    return -1;
  if ( *(char *)(a1 + 7) > v7 )
    return 1;
  v8 = s1;
  if ( *(_QWORD *)(a2 + 16) )
    v8 = *(const char **)(a2 + 8);
  v9 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v9 = *(const char **)(a1 + 8);
  return strcmp(v9, v8);
}

