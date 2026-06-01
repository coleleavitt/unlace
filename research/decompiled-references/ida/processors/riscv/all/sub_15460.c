__int64 __fastcall sub_15460(__int64 a1)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  bool v10; // cc
  bool v11; // al

  if ( (*(_WORD *)(a1 + 40) & 0xFFDF) != 0x13 || *(_BYTE *)(a1 + 137) != 5 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v2);
  if ( !(_BYTE)v3 )
    return 0;
  v4 = *(_BYTE *)(v2 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 <= 0xF9u )
  {
    if ( v5 >= v4 || v4 > 0xF9u || *(_BYTE *)(a1 + 8) && v5 == 2 )
      goto LABEL_14;
  }
  else if ( v5 >= v4 && v4 > 0xF9u )
  {
    goto LABEL_14;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_14E20 )
    return 0;
  v8 = v7(a1, a1 + 56);
  v9 = v6 || v8 < v4;
  v10 = v8 <= 0xF9u;
  v11 = v6 && v8 < v4;
  if ( !v10 )
    v11 = v9;
  if ( v11 )
    return 0;
LABEL_14:
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = -*(_QWORD *)(a1 + 144);
  return v3;
}

