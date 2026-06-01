__int64 __fastcall sub_108C0(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r13
  unsigned __int8 v6; // r13
  int v7; // ecx
  bool v8; // r15
  unsigned __int8 v9; // al
  bool v10; // dl
  int *v11; // rdx
  int v12; // eax
  int v13; // esi
  int v14; // r8d
  unsigned int v15; // ecx
  char v16; // si
  unsigned __int16 v17; // ax
  char v18; // al
  _DWORD *v19; // rax

  if ( *(_WORD *)(a1 + 40) != 54 || *(_BYTE *)(a1 + 57) != 4 || *(_BYTE *)(a1 + 88) > 1u )
    return 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, v4);
  if ( !(_BYTE)v2 )
    return 0;
  v6 = *(_BYTE *)(v4 + 5);
  v7 = *(unsigned __int8 *)(a1 + 101);
  v8 = v6 <= 0xF9u;
  if ( (unsigned __int8)v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && (unsigned __int8)v7 >= v6 )
    {
      v19 = *(_DWORD **)(a1 + 376);
      *(_DWORD *)(a1 + 900) = v7;
      *v19 &= 0xFFFFFBFB;
      goto LABEL_35;
    }
  }
  else
  {
    if ( v6 > 0xF9u || (unsigned __int8)v7 >= v6 )
      goto LABEL_18;
    if ( *(_BYTE *)(a1 + 8) && (_BYTE)v7 == 2 )
    {
      v11 = *(int **)(a1 + 376);
      *(_DWORD *)(a1 + 900) = 2;
      v15 = *v11 & 0xFFFFFBFB;
      *v11 = v15;
      goto LABEL_41;
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96);
  v10 = v8 || v9 < v6;
  if ( v9 <= 0xF9u )
    v10 = v8 && v9 < v6;
  if ( v10 )
    return 0;
  LOBYTE(v7) = *(_BYTE *)(a1 + 101);
LABEL_18:
  v11 = *(int **)(a1 + 376);
  v12 = (unsigned __int8)v7;
  *(_DWORD *)(a1 + 900) = (unsigned __int8)v7;
  v13 = 1 << v7;
  v14 = *v11;
  v15 = *v11 & 0xFFFFFBFB;
  *v11 = v15;
  if ( v12 == 2 )
  {
LABEL_41:
    *v11 = v15 | 4;
    goto LABEL_22;
  }
  if ( v13 <= 4 )
  {
    if ( !v12 )
    {
LABEL_37:
      BYTE1(v15) |= 4u;
      *v11 = v15;
      goto LABEL_22;
    }
    if ( v12 == 1 )
      goto LABEL_22;
LABEL_35:
    if ( under_debugger )
      BUG();
    a1 = 1297;
    interr();
    goto LABEL_37;
  }
  if ( v12 != 3 )
    goto LABEL_35;
  *v11 = v14 | 0x404;
LABEL_22:
  if ( *(_BYTE *)(a1 + 88) == 1 )
  {
    *(_DWORD *)(a1 + 900) = 0;
    goto LABEL_29;
  }
  if ( !*(_DWORD *)(a1 + 900) )
LABEL_29:
    *(_BYTE *)(a1 + a2 + 512) = 1;
  v16 = 10;
  v17 = *(_WORD *)(a1 + 62);
  if ( v17 <= 0x27u )
    v16 = *((_BYTE *)&qword_181C8 + ((int)*(unsigned __int16 *)(a1 + 62) >> 3));
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v17;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v16;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 72);
  v18 = *(_BYTE *)(a1 + 89);
  if ( (v18 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 896) = 1;
  }
  else if ( (v18 & 0x40) != 0 )
  {
    *(_BYTE *)(a1 + 896) = 2;
  }
  return v2;
}

