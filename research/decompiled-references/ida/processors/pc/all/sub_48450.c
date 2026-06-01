__int64 __fastcall sub_48450(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rdx
  unsigned int v4; // ebp
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  unsigned __int8 v8; // al
  bool v9; // dl
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v4 )
    return 0;
  v5 = *(_BYTE *)(v1 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 <= 0xF9u )
  {
    if ( v6 >= v5 || v5 > 0xF9u || *(_BYTE *)(a1 + 8) && v6 == 2 )
      goto LABEL_11;
  }
  else if ( v6 >= v5 && v5 > 0xF9u )
  {
    goto LABEL_11;
  }
  LOBYTE(v3) = v6 < v5;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v3);
  v9 = v7 || v8 < v5;
  if ( v8 <= 0xF9u )
    v9 = v7 && v8 < v5;
  if ( v9 )
    return 0;
LABEL_11:
  if ( *(_WORD *)(a1 + 40) != 6 )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 5 )
    return 0;
  v10 = *(_QWORD *)(a1 + 376);
  if ( *(_QWORD *)(v10 + 8) )
    return 0;
  *(_QWORD *)(v10 + 8) = *(_QWORD *)(a1 + 104) & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
  *(_DWORD *)(a1 + 956) = 3;
  *(_BYTE *)(a1 + 904) = 1;
  return v4;
}
