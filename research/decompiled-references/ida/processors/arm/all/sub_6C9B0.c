__int64 __fastcall sub_6C9B0(__int64 a1)
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
  int v12; // eax
  int v13; // edx
  __int16 v14; // r13
  int v15; // ecx
  __int16 v16; // r12
  char v17; // dl
  __int16 v18; // ax

  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v1 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v1 )
    return 0;
  v4 = *(_BYTE *)(v3 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v5 >= v4 && v4 > 0xF9u )
      goto LABEL_16;
  }
  else if ( v5 >= v4 || v4 > 0xF9u || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_16;
  }
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
LABEL_16:
  if ( *(_WORD *)(a1 + 40) != 30 )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 3 )
    return 0;
  if ( *(_BYTE *)(a1 + 129) )
    return 0;
  if ( *(_QWORD *)(a1 + 104) )
    return 0;
  v12 = *(_DWORD *)(a1 + 44);
  if ( (v12 & 0xB0) != 0 )
    return 0;
  if ( (v12 & 0x1000) == 0 )
  {
    if ( (v12 & 0x800) == 0 )
      return 0;
    **(_DWORD **)(a1 + 376) |= 0x2000u;
  }
  **(_DWORD **)(a1 + 376) &= 0xFFFFFBFB;
  v13 = *(unsigned __int16 *)(a1 + 62);
  v14 = *(_WORD *)(a1 + 102);
  v15 = *(unsigned __int8 *)(a1 + 128);
  v16 = *(_WORD *)(a1 + 62);
  if ( v14 == (_WORD)v13 )
  {
    v14 = (unsigned __int8)v15;
  }
  else if ( v15 != v13 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 50) & 4) != 0 || (v18 = getinf(3), v17 = 2, (v18 & 0x1006) == 0x1002) )
    v17 = 7;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 81LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 86LL) = v16;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 85LL) = v17;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v14;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v17;
  return v1;
}
