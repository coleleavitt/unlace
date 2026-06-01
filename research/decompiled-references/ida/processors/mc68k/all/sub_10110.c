__int64 __fastcall sub_10110(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v4; // r12
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // cl
  bool v7; // r14
  unsigned __int8 v8; // al
  bool v9; // dl
  int v10; // edi
  int v11; // eax
  char v12; // cl
  int v13; // eax
  char v14; // dl
  int v15; // edx
  int *v16; // rax
  int v17; // ecx
  int v18; // r8d
  unsigned int v19; // edi
  bool v20; // zf
  char v21; // al

  if ( *(_WORD *)(a1 + 40) != 125
    || !(unsigned __int8)sub_FF80((_QWORD *)a1, (__int64 *)(*(_QWORD *)(a1 + 376) + 8LL), (_QWORD *)(a1 + 896), a1 + 56) )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v1 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v1 )
    return 0;
  v5 = *(_BYTE *)(v4 + 5);
  v6 = *(_BYTE *)(a1 + 101);
  v7 = v5 <= 0xF9u;
  if ( v6 <= 0xF9u )
  {
    if ( v5 > 0xF9u || v6 >= v5 )
      goto LABEL_15;
    if ( *(_BYTE *)(a1 + 8) && v6 == 2 )
    {
      v6 = 2;
      goto LABEL_15;
    }
  }
  else if ( v5 > 0xF9u && v6 >= v5 )
  {
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96);
  v9 = v7 || v8 < v5;
  if ( v8 <= 0xF9u )
    v9 = v7 && v8 < v5;
  if ( v9 )
    return 0;
  v6 = *(_BYTE *)(a1 + 101);
LABEL_15:
  v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 864) + 5LL);
  v11 = 1 << v6;
  v12 = *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL);
  *(_DWORD *)(a1 + 908) = v10;
  v13 = v11 - (1 << v12);
  v14 = *(_BYTE *)(a1 + 89);
  *(_DWORD *)(a1 + 904) = v13;
  v15 = v14 & 3;
  if ( v10 < v15 )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) += v13;
  v16 = *(int **)(a1 + 376);
  v17 = *(_DWORD *)(a1 + 908);
  v18 = *v16;
  v19 = *v16 & 0xFFFFFBFB;
  *v16 = v19;
  if ( v17 == 2 )
  {
    *v16 = v19 | 4;
    goto LABEL_20;
  }
  if ( 1 << v17 > 4 )
  {
    if ( v17 == 3 )
    {
      *v16 = v18 | 0x404;
      goto LABEL_20;
    }
  }
  else
  {
    if ( !v17 )
    {
      *v16 = v19 | 0x400;
      goto LABEL_20;
    }
    if ( v17 == 1 )
    {
LABEL_20:
      v20 = *(_DWORD *)(a1 + 908) == v15;
      *(_DWORD *)(a1 + 908) -= v15;
      if ( v20 )
        *(_WORD *)(a1 + 514) = 257;
      v21 = *(_BYTE *)(a1 + 88);
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v21 & 0xF;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = ((v21 & 0x10) == 0) + 1;
      return v1;
    }
  }
  if ( under_debugger )
    BUG();
  interr(1297);
  return 0;
}

