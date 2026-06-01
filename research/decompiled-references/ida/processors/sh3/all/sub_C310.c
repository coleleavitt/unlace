__int64 __fastcall sub_C310(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // r12
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  unsigned __int16 v13; // r12
  __int64 v14; // rdx
  int v15; // ecx
  int *v16; // rax
  int v17; // edi
  unsigned int v18; // esi
  _QWORD v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 45) > 2u
    || *(_BYTE *)(a1 + 57) != 3
    || *(_BYTE *)(a1 + 88) != 3
    || *(_QWORD *)(a1 + 400) != -1 && *(_BYTE *)(a1 + 916) != *(_BYTE *)(a1 + 61) )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v2 )
    return 0;
  v5 = *(_BYTE *)(v4 + 5);
  v6 = *(_BYTE *)(a1 + 101);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_20;
  }
  else if ( v5 > 0xF9u || v6 >= v5 || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_20;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_8490 )
    return 0;
  v9 = v8(a1, a1 + 96);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v7 && v9 < v5;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_20:
  v13 = *(_WORD *)(a1 + 62);
  if ( !(unsigned __int8)sub_C080(*(_QWORD *)(a1 + 888), (char *)v19, (__int64 *)(a1 + 896), (const void *)(a1 + 16), 0) )
  {
    if ( !(unsigned __int8)sub_C080(
                             *(_QWORD *)(a1 + 888),
                             (char *)v19,
                             (__int64 *)(a1 + 896),
                             (const void *)(a1 + 16),
                             v13) )
      return 0;
    v13 = 0;
  }
  v14 = v19[0];
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v13;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v14;
  v15 = *(unsigned __int8 *)(a1 + 61);
  v16 = *(int **)(a1 + 376);
  *(_DWORD *)(a1 + 912) = v15;
  v17 = *v16;
  v18 = *v16 & 0xFFFFFBFB;
  *v16 = v18;
  if ( v15 == 2 )
  {
    *v16 = v18 | 4;
    goto LABEL_27;
  }
  if ( 1 << v15 > 4 )
  {
    if ( v15 == 3 )
    {
      *v16 = v17 | 0x404;
      goto LABEL_27;
    }
    goto LABEL_37;
  }
  if ( !v15 )
  {
    *v16 = v18 | 0x400;
    goto LABEL_27;
  }
  if ( v15 != 1 )
  {
LABEL_37:
    if ( !under_debugger )
      interr(1297);
    BUG();
  }
LABEL_27:
  if ( !*(_DWORD *)(a1 + 912) )
    *(_BYTE *)(a1 + 516) = 1;
  **(_DWORD **)(a1 + 376) |= 0x2000u;
  return v2;
}

