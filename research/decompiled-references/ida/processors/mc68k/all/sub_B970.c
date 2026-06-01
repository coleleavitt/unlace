__int64 __fastcall sub_B970(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebp
  __int64 v4; // r12
  __int64 v5; // rdx
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // al
  bool v8; // r14
  unsigned __int8 v9; // al
  bool v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rax

  v1 = *(_WORD *)(a1 + 40);
  if ( (unsigned __int16)(v1 - 176) > 1u && (unsigned __int16)(v1 - 4) > 1u || *(_BYTE *)(a1 + 57) != 5 )
    return 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v2 )
    return 0;
  v6 = *(_BYTE *)(v4 + 5);
  v7 = *(_BYTE *)(a1 + 101);
  v8 = v6 <= 0xF9u;
  if ( v7 <= 0xF9u )
  {
    if ( v7 >= v6 || v6 > 0xF9u || *(_BYTE *)(a1 + 8) && v7 == 2 )
      goto LABEL_15;
  }
  else if ( v7 >= v6 && v6 > 0xF9u )
  {
    goto LABEL_15;
  }
  LOBYTE(v5) = v7 < v6;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96, v5);
  v10 = v8 || v9 < v6;
  if ( v9 <= 0xF9u )
    v10 = v8 && v9 < v6;
  if ( v10 )
    return 0;
LABEL_15:
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = *(_QWORD *)(a1 + 64);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 4) <= 1u )
  {
    v11 = *(_QWORD *)(a1 + 376);
    v12 = *(_QWORD *)(v11 + 16);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 24LL) != 8 )
      v12 = (int)v12;
    *(_QWORD *)(v11 + 16) = -v12;
  }
  return v2;
}

