bool __fastcall sub_10B50(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdx
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  unsigned __int8 v7; // al
  bool v8; // dl
  __int16 v9; // ax

  if ( *(int *)(a1 + 900) <= 0 )
    return 0;
  v1 = *(_QWORD *)(a1 + 864);
  if ( *(_BYTE *)(v1 + 1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
            a1,
            a1 + 96,
            *(_QWORD *)(a1 + 864)) )
      return 0;
    v4 = *(_BYTE *)(v1 + 5);
    v5 = *(_BYTE *)(a1 + 101);
    v6 = v4 <= 0xF9u;
    if ( v5 > 0xF9u )
    {
      if ( v4 > 0xF9u && v5 >= v4 )
        goto LABEL_15;
    }
    else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
    {
      goto LABEL_15;
    }
    LOBYTE(v3) = v5 < v4;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96, v3);
    v8 = v6 || v7 < v4;
    if ( v7 <= 0xF9u )
      v8 = v6 && v7 < v4;
    if ( v8 )
      return 0;
LABEL_15:
    v9 = *(_WORD *)(a1 + 40);
    if ( v9 == 74 )
    {
      if ( *(_BYTE *)(a1 + 57) == 5 )
        return *(int *)(a1 + 900) == *(_QWORD *)(a1 + 64);
    }
    else if ( v9 == 1 && *(_DWORD *)(a1 + 900) == 1 && *(_BYTE *)(a1 + 57) == 1 && *(_BYTE *)(a1 + 97) == 1 )
    {
      return *(_WORD *)(a1 + 62) == *(_WORD *)(a1 + 102);
    }
    return 0;
  }
  *(_BYTE *)(a1 + 792) = 1;
  return 0;
}

