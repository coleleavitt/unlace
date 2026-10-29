char __fastcall sub_10A60(__int64 a1)
{
  char result; // al
  __int64 v2; // rbp
  unsigned __int8 v3; // r13
  unsigned __int8 v4; // cl
  bool v5; // bp
  bool v6; // dl
  bool v7; // dl
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al

  if ( *(_WORD *)(a1 + 40) != 5 || *(_BYTE *)(a1 + 97) != 5 || *(_QWORD *)(a1 + 104) != 1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v2);
  if ( !result )
    return 0;
  v3 = *(_BYTE *)(v2 + 5);
  v4 = *(_BYTE *)(a1 + 61);
  v5 = v3 <= 0xF9u;
  v6 = v4 < v3;
  if ( v4 > 0xF9u )
  {
    v7 = v5 || v6;
    if ( !v7 )
      return result;
  }
  else
  {
    v7 = v5 && v6;
    if ( !v7 )
      return result;
    result = *(_BYTE *)(a1 + 8) & (v4 == 2);
    if ( result )
      return result;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 != sub_10110 )
  {
    v9 = v8(a1, a1 + 56);
    v7 = v5 || v9 < v3;
    if ( v9 <= 0xF9u )
      v7 = v5 && v9 < v3;
  }
  return !v7;
}

