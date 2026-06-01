bool __fastcall sub_32F30(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // al
  bool v5; // r13
  __int64 v6; // rbp
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  bool v9; // r13
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  bool v12; // dl
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  unsigned __int8 v14; // al
  bool v15; // dl

  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 81) )
    goto LABEL_2;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v1 + 80) )
    return 0;
  v3 = *(_BYTE *)(v1 + 85);
  v4 = *(_BYTE *)(a1 + 61);
  v5 = v3 <= 0xF9u;
  if ( v4 > 0xF9u )
  {
    if ( v3 > 0xF9u && v4 >= v3 )
      goto LABEL_10;
  }
  else if ( v3 > 0xF9u || v4 >= v3 || *(_BYTE *)(a1 + 8) && v4 == 2 )
  {
    goto LABEL_10;
  }
  v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v13 == sub_313C0 )
    return 0;
  v14 = v13(a1, a1 + 56);
  v15 = v5 || v14 < v3;
  if ( v14 <= 0xF9u )
    v15 = v5 && v14 < v3;
  if ( v15 )
    return 0;
LABEL_10:
  v6 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v6 + 1) )
  {
LABEL_2:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 96,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v7 = *(_BYTE *)(v6 + 5);
  v8 = *(_BYTE *)(a1 + 101);
  v9 = v7 <= 0xF9u;
  if ( v8 > 0xF9u )
  {
    if ( v7 > 0xF9u && v8 >= v7 )
      goto LABEL_21;
  }
  else if ( v7 > 0xF9u || v8 >= v7 || v8 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_21;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v10 == sub_313C0 )
    return 0;
  v11 = v10(a1, a1 + 96);
  v12 = v9 || v11 < v7;
  if ( v11 <= 0xF9u )
    v12 = v9 && v11 < v7;
  if ( v12 )
    return 0;
LABEL_21:
  if ( *(_WORD *)(a1 + 40) != 338 || *(unsigned __int16 *)(a1 + 142) != *(_DWORD *)(a1 + 960) )
    return 0;
  return *(char *)(a1 + 168) == *(_DWORD *)(a1 + 964);
}

