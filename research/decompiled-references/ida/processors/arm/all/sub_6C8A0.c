__int64 __fastcall sub_6C8A0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  bool v10; // cc
  bool v11; // al

  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 81) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v1 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v3 + 80);
  if ( !(_BYTE)v1 )
    return 0;
  v4 = *(_BYTE *)(v3 + 85);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 <= 0xF9u || v5 < v4 )
      goto LABEL_12;
  }
  else if ( v4 <= 0xF9u && v5 < v4 && (!*(_BYTE *)(a1 + 8) || v5 != 2) )
  {
LABEL_12:
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v7 == sub_6ACC0 )
      return 0;
    v8 = v7(a1, a1 + 56);
    v9 = v6 || v8 < v4;
    v10 = v8 <= 0xF9u;
    v11 = v6 && v8 < v4;
    if ( !v10 )
      v11 = v9;
    if ( v11 )
      return 0;
  }
  if ( *(_WORD *)(a1 + 40) == 44 && *(_BYTE *)(a1 + 97) == 5 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 104) + 16LL * *(_QWORD *)(a1 + 16);
    return v1;
  }
  return 0;
}
