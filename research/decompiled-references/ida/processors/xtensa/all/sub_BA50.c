__int64 __fastcall sub_BA50(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  bool v5; // al
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  bool v8; // r13
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  __int64 v14; // rbp
  char v15; // al
  __int64 (__fastcall *v16)(__int64, __int64, __int64); // rcx
  unsigned __int8 v17; // bp
  unsigned __int8 v18; // al
  bool v19; // r12
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  unsigned __int8 v21; // al
  bool v22; // dl
  bool v23; // al
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx

  if ( *(_WORD *)(a1 + 40) != 46 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  v3 = *(_BYTE *)(v2 + 1);
  if ( !v3 )
    goto LABEL_4;
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v4 == sub_9290 )
  {
    if ( v3 != *(_BYTE *)(a1 + 57) )
      return 0;
    if ( v3 != 99 )
    {
      if ( v3 == 100 )
      {
        v5 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v2 + 8);
      }
      else
      {
        if ( v3 != 1 )
          return 0;
        v5 = *(_WORD *)(a1 + 62) == *(_WORD *)(v2 + 6);
      }
      if ( !v5 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v4(a1, a1 + 56, v2) )
  {
    return 0;
  }
  v6 = *(_BYTE *)(v2 + 5);
  v7 = *(_BYTE *)(a1 + 61);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && v7 >= v6 )
      goto LABEL_22;
  }
  else if ( v6 > 0xF9u || v7 >= v6 || *(_BYTE *)(a1 + 8) && v7 == 2 )
  {
    goto LABEL_22;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 == sub_92F0 )
    return 0;
  v10 = v9(a1, a1 + 56);
  v11 = v8 || v10 < v6;
  v12 = v10 <= 0xF9u;
  v13 = v8 && v10 < v6;
  if ( !v12 )
    v13 = v11;
  if ( v13 )
    return 0;
LABEL_22:
  v14 = *(_QWORD *)(a1 + 864);
  v15 = *(_BYTE *)(v14 + 1);
  if ( !v15 )
  {
LABEL_4:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v16 == sub_9290 )
  {
    if ( v15 != *(_BYTE *)(a1 + 97) )
      return 0;
    if ( v15 != 99 )
    {
      if ( v15 == 100 )
      {
        if ( *(_QWORD *)(a1 + 104) != *(_QWORD *)(v14 + 8) )
          return 0;
      }
      else if ( v15 != 1 || *(_WORD *)(a1 + 102) != *(_WORD *)(v14 + 6) )
      {
        return 0;
      }
    }
  }
  else if ( !(unsigned __int8)v16(a1, a1 + 96, v14) )
  {
    return 0;
  }
  v17 = *(_BYTE *)(v14 + 5);
  v18 = *(_BYTE *)(a1 + 101);
  v19 = v17 <= 0xF9u;
  if ( v18 > 0xF9u )
  {
    if ( v17 > 0xF9u && v18 >= v17 )
      goto LABEL_38;
  }
  else if ( v17 > 0xF9u || v18 >= v17 || v18 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_38;
  }
  v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v20 == sub_92F0 )
    return 0;
  v21 = v20(a1, a1 + 96);
  v22 = v19 || v21 < v17;
  v12 = v21 <= 0xF9u;
  v23 = v19 && v21 < v17;
  if ( !v12 )
    v23 = v22;
  if ( v23 )
    return 0;
LABEL_38:
  v24 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 912) = *(_QWORD *)(a1 + 144);
  if ( (unsigned __int64)(int)v24 <= 0x3F )
  {
    v26 = (1LL << v24) - 1;
    v25 = (unsigned __int64)(1LL << v24) >> 1;
  }
  else
  {
    LOWORD(v25) = 0;
    v26 = -1;
  }
  v27 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 920) = v26;
  *(_WORD *)(v27 + 4) = v25 - (*(_QWORD *)(v27 + 16) >> 1);
  **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFE7F
                          | ((unsigned __int16)*(_QWORD *)(a1 + 912) << 7) & 0x180;
  return 1;
}

