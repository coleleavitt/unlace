__int64 __fastcall sub_4A540(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v2; // ebp
  __int64 v4; // rdx
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // al
  bool v7; // r12
  unsigned __int8 v8; // al
  bool v9; // cl
  bool v10; // r12
  __int16 v11; // ax
  __int16 v12; // ax
  int v13; // esi
  char v14; // dl
  __int64 v15; // rax

  if ( *(int *)(a1 + 952) <= 0 )
    return 0;
  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v2 )
    return 0;
  v5 = *(_BYTE *)(v1 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_15;
  }
  else if ( v5 > 0xF9u || v6 >= v5 || v6 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_15;
  }
  LOBYTE(v4) = v6 < v5;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v4);
  v9 = v8 < v5 && v7;
  v10 = v8 < v5 || v7;
  if ( v8 <= 0xF9u )
    v10 = v9;
  if ( v10 )
    return 0;
LABEL_15:
  v11 = *(_WORD *)(a1 + 40);
  if ( v11 == 92 )
  {
    if ( *(_BYTE *)(a1 + 97) != 2
      || !*(_BYTE *)(a1 + 128)
      || *(_QWORD *)(a1 + 112)
      || *(_DWORD *)(a1 + 952) != *(_BYTE *)(a1 + 129) >> 6 )
    {
      return 0;
    }
    v12 = (*(char *)(a1 + 129) >> 3) & 7;
    v13 = *(_DWORD *)(a1 + 44) & 0x1018;
    if ( (*(_DWORD *)(a1 + 44) & 0x10) == 0 )
      goto LABEL_29;
    if ( (*(_BYTE *)(a1 + 49) & 2) != 0 )
      v12 = (*(char *)(a1 + 129) >> 3) & 7 | 8;
    v14 = 7;
    if ( v13 != 4112 )
LABEL_29:
      v14 = 2 - (v13 == 8 || v13 == 4096);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v12;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v14;
  }
  else if ( v11 == 164 )
  {
    if ( *(_BYTE *)(a1 + 97) != 5 || *(_DWORD *)(a1 + 952) != *(_QWORD *)(a1 + 104) )
      return 0;
  }
  else if ( v11 != 6
         || *(_DWORD *)(a1 + 952) != 1
         || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, a1 + 96) )
  {
    return 0;
  }
  v15 = *(_QWORD *)(a1 + 864);
  *(_DWORD *)(a1 + 964) = 4;
  if ( *(_BYTE *)(v15 + 1) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 376) + 64LL) = *(unsigned __int16 *)(v15 + 6);
    *(_BYTE *)(*(_QWORD *)(a1 + 376) + 68LL) = *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL);
  }
  *(_BYTE *)(a1 + 969) = 0;
  return v2;
}
