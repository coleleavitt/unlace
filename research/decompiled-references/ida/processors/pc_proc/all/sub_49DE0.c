char __fastcall sub_49DE0(__int64 a1)
{
  char result; // al
  __int64 v2; // rbp
  __int64 v3; // rcx
  unsigned __int8 v4; // r13
  __int64 v5; // rdx
  bool v6; // bp
  unsigned __int8 v7; // al
  bool v8; // dl
  bool v9; // bp
  bool v10; // cc
  bool v11; // al

  if ( (*(_WORD *)(a1 + 40) & 0xFFFB) != 0x7A || *(_BYTE *)(a1 + 97) != 1 || *(_WORD *)(a1 + 102) != 16 )
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
  v4 = *(_BYTE *)(v2 + 5);
  v5 = *(unsigned __int8 *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( (unsigned __int8)v5 > 0xF9u )
  {
    if ( v4 > 0xF9u && (unsigned __int8)v5 >= v4 )
      return result;
  }
  else
  {
    if ( v4 > 0xF9u )
      return result;
    if ( (unsigned __int8)v5 >= v4 )
      return result;
    result = *(_BYTE *)(a1 + 8) & ((_BYTE)v5 == 2);
    if ( result )
      return result;
  }
  LOBYTE(v3) = (unsigned __int8)v5 < v4;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v5, v3);
  v8 = v7 < v4 && v6;
  v9 = v7 < v4 || v6;
  v10 = v7 <= 0xF9u;
  v11 = v8;
  if ( !v10 )
    v11 = v9;
  return !v11;
}

