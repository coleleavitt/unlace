__int64 __fastcall sub_C2F0(__int64 a1)
{
  char v1; // al
  __int64 v3; // rbp
  char v4; // al
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rcx
  bool v6; // al
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  bool v9; // r12
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  bool v12; // dl
  bool v13; // cc
  bool v14; // al
  __int16 v15; // dx

  if ( *(_WORD *)(a1 + 40) != 68 )
    return 0;
  v1 = *(_BYTE *)(a1 + 57);
  if ( v1 == 4 )
  {
    if ( *(_QWORD *)(a1 + 72) )
      return 0;
  }
  else if ( v1 != 3 )
  {
    return 0;
  }
  if ( *(_BYTE *)(a1 + 88) )
    return 0;
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
    if ( v4 != *(_BYTE *)(a1 + 97) )
      return 0;
    if ( v4 != 99 )
    {
      if ( v4 == 100 )
      {
        v6 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v3 + 8);
      }
      else
      {
        if ( v4 != 1 )
          return 0;
        v6 = *(_WORD *)(a1 + 102) == *(_WORD *)(v3 + 6);
      }
      if ( !v6 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v5(a1, a1 + 96, v3) )
  {
    return 0;
  }
  v7 = *(_BYTE *)(v3 + 5);
  v8 = *(_BYTE *)(a1 + 101);
  v9 = v7 <= 0xF9u;
  if ( v8 > 0xF9u )
  {
    if ( v7 > 0xF9u && v8 >= v7 )
      goto LABEL_27;
  }
  else if ( v7 > 0xF9u || v8 >= v7 || v8 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_27;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v10 == sub_B280 )
    return 0;
  v11 = v10(a1, a1 + 96);
  v12 = v9 || v11 < v7;
  v13 = v11 <= 0xF9u;
  v14 = v9 && v11 < v7;
  if ( !v13 )
    v14 = v12;
  if ( v14 )
    return 0;
LABEL_27:
  v15 = *(_WORD *)(a1 + 62);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v15;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 1;
  return 1;
}

