__int64 __fastcall sub_C170(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  char v4; // al
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rcx
  bool v6; // al
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  bool v9; // r13
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  bool v12; // dl
  bool v13; // cc
  bool v14; // al

  if ( *(_WORD *)(a1 + 40) != 3 || *(_BYTE *)(a1 + 57) != 5 )
    return 0;
  v2 = a1 + 136;
  if ( !*(_BYTE *)(a1 + 137) )
    v2 = a1 + 96;
  v3 = *(_QWORD *)(a1 + 864);
  v4 = *(_BYTE *)(v3 + 1);
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v5 == sub_B220 )
  {
    if ( v4 != *(_BYTE *)(v2 + 1) )
      return 0;
    if ( v4 != 99 )
    {
      if ( v4 == 100 )
      {
        v6 = *(_QWORD *)(v2 + 8) == *(_QWORD *)(v3 + 8);
      }
      else
      {
        if ( v4 != 1 )
          return 0;
        v6 = *(_WORD *)(v2 + 6) == *(_WORD *)(v3 + 6);
      }
      if ( !v6 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v5(a1, v2, v3) )
  {
    return 0;
  }
  v7 = *(_BYTE *)(v3 + 5);
  v8 = *(_BYTE *)(v2 + 5);
  v9 = v7 <= 0xF9u;
  if ( v8 > 0xF9u )
  {
    if ( v7 > 0xF9u && v8 >= v7 )
      goto LABEL_25;
  }
  else if ( v7 > 0xF9u || v8 >= v7 || *(_BYTE *)(a1 + 8) && v8 == 2 )
  {
    goto LABEL_25;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v10 == sub_B280 )
    return 0;
  v11 = v10(a1, v2);
  v12 = v9 || v11 < v7;
  v13 = v11 <= 0xF9u;
  v14 = v9 && v11 < v7;
  if ( !v13 )
    v14 = v12;
  if ( v14 )
    return 0;
LABEL_25:
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = -*(_QWORD *)(a1 + 64);
  return 1;
}

