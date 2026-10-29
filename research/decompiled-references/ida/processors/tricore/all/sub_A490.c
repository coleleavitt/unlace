bool __fastcall sub_A490(__int64 a1)
{
  __int64 v1; // rbp
  bool result; // al
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // al
  bool v5; // r13
  __int16 v6; // cx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl

  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v3 = *(_BYTE *)(v1 + 5);
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
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_A190 )
    return 0;
  v8 = v7(a1, a1 + 56);
  v9 = v5 || v8 < v3;
  if ( v8 <= 0xF9u )
    v9 = v5 && v8 < v3;
  if ( v9 )
    return 0;
LABEL_10:
  result = *(_BYTE *)(a1 + 49) == 1 && *(_WORD *)(a1 + 42) == 4 && *(_WORD *)(a1 + 40) == 84;
  if ( !result || *(_BYTE *)(a1 + 97) != 4 || (*(_BYTE *)(a1 + 128) & 0x20) == 0 )
    return 0;
  v6 = *(_WORD *)(a1 + 102);
  *(_QWORD *)(a1 + 896) = *(_QWORD *)(a1 + 112);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v6;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
  return result;
}

