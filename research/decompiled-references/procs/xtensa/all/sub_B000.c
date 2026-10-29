__int64 __fastcall sub_B000(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  bool v5; // al
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  bool v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  __int64 v12; // rax
  int *v13; // rdx
  int v14; // esi
  unsigned int v15; // ecx

  if ( *(_WORD *)(a1 + 40) != 69 )
    return 0;
  v1 = *(_QWORD *)(a1 + 864);
  v2 = *(_BYTE *)(v1 + 81);
  if ( !v2 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v4 == sub_9290 )
  {
    if ( v2 != *(_BYTE *)(a1 + 57) )
      return 0;
    if ( v2 != 99 )
    {
      if ( v2 == 100 )
      {
        v5 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v1 + 88);
      }
      else
      {
        if ( v2 != 1 )
          return 0;
        v5 = *(_WORD *)(a1 + 62) == *(_WORD *)(v1 + 86);
      }
      if ( !v5 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v4(a1, a1 + 56, v1 + 80) )
  {
    return 0;
  }
  v6 = *(_BYTE *)(v1 + 85);
  v7 = *(_BYTE *)(a1 + 61);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v7 < v6 || v6 <= 0xF9u )
      goto LABEL_17;
  }
  else if ( v7 < v6 && v6 <= 0xF9u && (!*(_BYTE *)(a1 + 8) || v7 != 2) )
  {
LABEL_17:
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v9 == sub_92F0 )
      return 0;
    v10 = v9(a1, a1 + 56);
    v11 = v8 || v10 < v6;
    if ( v10 <= 0xF9u )
      v11 = v10 < v6 && v8;
    if ( v11 )
      return 0;
  }
  v12 = *(_QWORD *)(a1 + 104);
  v13 = *(int **)(a1 + 376);
  *(_QWORD *)(a1 + 904) = v12;
  v14 = *v13;
  v15 = *v13 & 0xFFFFFBFB;
  *v13 = v15;
  if ( (_DWORD)v12 == 4 )
  {
    *v13 = v15 | 4;
    return 1;
  }
  if ( (int)v12 > 4 )
  {
    if ( (_DWORD)v12 == 8 )
    {
      *v13 = v14 | 0x404;
      return 1;
    }
  }
  else
  {
    if ( (_DWORD)v12 == 1 )
    {
      BYTE1(v15) |= 4u;
      *v13 = v15;
      return 1;
    }
    if ( (_DWORD)v12 == 2 )
      return 1;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_B1E0(1297);
}
