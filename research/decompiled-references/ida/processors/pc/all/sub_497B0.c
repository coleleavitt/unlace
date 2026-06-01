__int64 __fastcall sub_497B0(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // r12
  __int64 v5; // rdx
  unsigned __int8 v6; // r14
  unsigned __int8 v7; // al
  bool v8; // r12
  unsigned __int8 v9; // al
  bool v10; // cl
  bool v11; // r12
  bool v12; // cc
  bool v13; // al
  unsigned __int16 v14; // dx
  int v15; // r12d
  __int16 v16; // ax
  char v17; // dl
  __int64 v18; // rdi

  if ( *(_WORD *)(a1 + 40) != 92
    || *(_BYTE *)(a1 + 97) != 2
    || !*(_BYTE *)(a1 + 128)
    || *(_QWORD *)(a1 + 112)
    || *(_BYTE *)(a1 + 129) >> 6 != 2 )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 864);
  if ( *(_BYTE *)(v4 + 1) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
    if ( !(_BYTE)v2 )
      return 0;
    v6 = *(_BYTE *)(v4 + 5);
    v7 = *(_BYTE *)(a1 + 61);
    v8 = v6 <= 0xF9u;
    if ( v7 > 0xF9u )
    {
      if ( v6 > 0xF9u && v7 >= v6 )
        goto LABEL_19;
    }
    else if ( v6 > 0xF9u || v7 >= v6 || *(_BYTE *)(a1 + 8) && v7 == 2 )
    {
      goto LABEL_19;
    }
    LOBYTE(v5) = v7 < v6;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v5);
    v10 = v9 < v6 && v8;
    v11 = v9 < v6 || v8;
    v12 = v9 <= 0xF9u;
    v13 = v10;
    if ( !v12 )
      v13 = v11;
    if ( v13 )
      return 0;
LABEL_19:
    v14 = *(_WORD *)(a1 + 40);
    v15 = *(_DWORD *)(a1 + 44) & 0x1018;
    v16 = (*(char *)(a1 + 129) >> 3) & 7;
    if ( (*(_DWORD *)(a1 + 44) & 0x10) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 49) & 2) != 0 )
        v16 = (*(char *)(a1 + 129) >> 3) & 7 | 8;
      if ( v14 > 0x5C0u )
      {
        if ( v14 > 0x5F1u )
        {
          if ( (unsigned __int16)(v14 - 1532) > 0xFu )
            goto LABEL_26;
        }
        else if ( v14 <= 0x5EDu )
        {
          goto LABEL_26;
        }
      }
      else if ( v14 <= 0x5BCu )
      {
        if ( v14 > 0x378u )
        {
          if ( (unsigned __int16)(v14 - 993) > 3u )
            goto LABEL_26;
        }
        else if ( v14 <= 0x374u )
        {
          goto LABEL_26;
        }
      }
    }
    else if ( v14 > 0x5C0u )
    {
      if ( v14 > 0x5F1u )
      {
        if ( (unsigned __int16)(v14 - 1532) > 0xFu )
          goto LABEL_27;
      }
      else if ( v14 <= 0x5EDu )
      {
        goto LABEL_27;
      }
    }
    else if ( v14 <= 0x5BCu )
    {
      if ( v14 > 0x378u )
      {
        if ( (unsigned __int16)(v14 - 993) > 3u )
          goto LABEL_27;
      }
      else if ( v14 <= 0x374u )
      {
        goto LABEL_27;
      }
    }
    v18 = a1 + 16;
    if ( (*(_BYTE *)(a1 + 289) & 0x10) != 0 )
      v16 |= 0x10u;
    v16 = sub_22710(v18, v16);
LABEL_26:
    v17 = 7;
    if ( v15 == 4112 )
    {
LABEL_28:
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v16;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v17;
      return v2;
    }
LABEL_27:
    v17 = 2 - (v15 == 8 || v15 == 4096);
    goto LABEL_28;
  }
  *(_BYTE *)(a1 + 792) = 1;
  return 0;
}
