__int64 __fastcall sub_50160(__int64 a1, double a2, __m128i a3, __m128i a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  bool v9; // r13
  unsigned __int8 v10; // al
  bool v11; // dl
  __int16 v12; // ax
  char v13; // al
  __int16 v14; // dx

  if ( *(_BYTE *)(a1 + 57) != 1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v5 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v7 = *(_BYTE *)(v5 + 5);
  v8 = *(_BYTE *)(a1 + 61);
  v9 = v7 <= 0xF9u;
  if ( v8 > 0xF9u )
  {
    if ( v7 > 0xF9u && v8 >= v7 )
      goto LABEL_16;
  }
  else if ( v7 > 0xF9u || v8 >= v7 || *(_BYTE *)(a1 + 8) && v8 == 2 )
  {
    goto LABEL_16;
  }
  LOBYTE(v6) = v8 < v7;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v6);
  v11 = v9 || v10 < v7;
  if ( v10 <= 0xF9u )
    v11 = v9 && v10 < v7;
  if ( v11 )
    return 0;
LABEL_16:
  v12 = *(_WORD *)(a1 + 40);
  if ( v12 != 122 && v12 != 594 && (unsigned __int16)(v12 - 125) > 1u )
    return 0;
  v13 = *(_BYTE *)(a1 + 97);
  if ( (unsigned __int8)(v13 - 3) > 1u && (!*(_BYTE *)(a1 + 128) || v13 != 2) )
    return 0;
  result = sub_4FE40(a1, a1 + 96, 2, -1, 0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  if ( !(_BYTE)result )
    return 0;
  v14 = *(_WORD *)(a1 + 40);
  if ( v14 == 594 || v14 == 125 )
    **(_DWORD **)(a1 + 376) |= 0x2000u;
  return result;
}
