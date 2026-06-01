char __fastcall sub_E410(__int64 a1)
{
  char result; // al
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int8 v4; // bl
  __int64 v5; // rdx
  bool v6; // r12
  unsigned __int8 v7; // al
  bool v8; // dl
  bool v9; // cc
  bool v10; // al

  if ( *(_WORD *)(a1 + 40) != 75 || *(_BYTE *)(a1 + 57) != 5 || *(_QWORD *)(a1 + 64) != 1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, v2);
  if ( !result )
    return 0;
  v4 = *(_BYTE *)(v2 + 5);
  v5 = *(unsigned __int8 *)(a1 + 101);
  v6 = v4 <= 0xF9u;
  if ( (unsigned __int8)v5 > 0xF9u )
  {
    if ( (unsigned __int8)v5 >= v4 && v4 > 0xF9u )
      return result;
  }
  else
  {
    if ( (unsigned __int8)v5 >= v4 )
      return result;
    if ( v4 > 0xF9u )
      return result;
    result = *(_BYTE *)(a1 + 8) & ((_BYTE)v5 == 2);
    if ( result )
      return result;
  }
  LOBYTE(v3) = (unsigned __int8)v5 < v4;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96, v5, v3);
  v8 = v6 || v7 < v4;
  v9 = v7 <= 0xF9u;
  v10 = v6 && v7 < v4;
  if ( !v9 )
    v10 = v8;
  return !v10;
}

