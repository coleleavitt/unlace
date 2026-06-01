__int64 __fastcall sub_49A10(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned __int8 v6; // r13
  unsigned __int8 v7; // al
  bool v8; // bp
  unsigned __int8 v9; // al
  bool v10; // cl
  bool v11; // bp
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // r13
  unsigned __int8 v15; // al
  bool v16; // bp
  unsigned __int8 v17; // al
  bool v18; // cl
  bool v19; // bp
  __int64 v20; // rdx
  __int64 v21; // rax

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 == 92 )
  {
    v4 = *(_QWORD *)(a1 + 864);
    if ( !*(_BYTE *)(v4 + 41) )
      goto LABEL_5;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v4 + 40) )
    {
      v6 = *(_BYTE *)(v4 + 45);
      v7 = *(_BYTE *)(a1 + 61);
      v8 = v6 <= 0xF9u;
      if ( v7 <= 0xF9u )
      {
        if ( v7 >= v6 || v6 > 0xF9u || v7 == 2 && *(_BYTE *)(a1 + 8) )
          goto LABEL_14;
      }
      else if ( v7 >= v6 && v6 > 0xF9u )
      {
        goto LABEL_14;
      }
      LOBYTE(v5) = v7 < v6;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v5);
      v10 = v9 < v6 && v8;
      v11 = v9 < v6 || v8;
      if ( v9 <= 0xF9u )
        v11 = v10;
      if ( !v11 )
      {
LABEL_14:
        if ( *(_BYTE *)(a1 + 97) == 2 && !*(_BYTE *)(a1 + 128) )
        {
          v12 = *(_QWORD *)(a1 + 112) + 16LL * *(_QWORD *)(a1 + 16);
          goto LABEL_28;
        }
      }
    }
    v1 = *(_WORD *)(a1 + 40);
  }
  if ( v1 != 122 )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 41) )
  {
LABEL_5:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v3 + 40) )
    return 0;
  v14 = *(_BYTE *)(v3 + 45);
  v15 = *(_BYTE *)(a1 + 61);
  v16 = v14 <= 0xF9u;
  if ( v15 > 0xF9u )
  {
    if ( v15 < v14 || v14 <= 0xF9u )
    {
LABEL_23:
      LOBYTE(v13) = v15 < v14;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v13);
      v18 = v17 < v14 && v16;
      v19 = v17 < v14 || v16;
      if ( v17 <= 0xF9u )
        v19 = v18;
      if ( v19 )
        return 0;
    }
  }
  else if ( v15 < v14 && v14 <= 0xF9u && (!*(_BYTE *)(a1 + 8) || v15 != 2) )
  {
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a1 + 97) != 5 )
    return 0;
  v12 = *(_QWORD *)(a1 + 104) + 16LL * *(_QWORD *)(a1 + 16);
LABEL_28:
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
  if ( v12 != v20 )
  {
    v20 &= v12;
    if ( v12 == -1 )
      v20 = -1;
  }
  v21 = *(_QWORD *)(a1 + 864);
  *(_QWORD *)(a1 + 896) = v20;
  *(_BYTE *)(v21 + 41) = 0;
  return 1;
}

