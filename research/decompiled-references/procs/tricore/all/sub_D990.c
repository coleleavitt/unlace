bool __fastcall sub_D990(__int64 a1, int a2)
{
  __int64 v2; // rbp
  bool result; // al
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  char v7; // dl
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl

  v2 = *(_QWORD *)(a1 + 864) + 40LL * a2;
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v2) )
    return 0;
  v4 = *(_BYTE *)(v2 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 > 0xF9u && v5 >= v4 )
      goto LABEL_10;
  }
  else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_10;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_A190 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v6 || v9 < v4;
  if ( v9 <= 0xF9u )
    v10 = v6 && v9 < v4;
  if ( v10 )
    return 0;
LABEL_10:
  result = *(_BYTE *)(a1 + 49) == 0 && *(_WORD *)(a1 + 40) == 5 && *(_WORD *)(a1 + 42) == 2;
  if ( !result )
    return 0;
  v7 = *(_BYTE *)(a1 + 97);
  if ( v7 == 1 )
  {
    if ( *(_BYTE *)(a1 + 137) != 5 )
      return 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = -*(_QWORD *)(a1 + 144);
  }
  else
  {
    if ( v7 != 5 || *(_BYTE *)(a1 + 137) )
      return 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = -*(_QWORD *)(a1 + 104);
  }
  return result;
}
