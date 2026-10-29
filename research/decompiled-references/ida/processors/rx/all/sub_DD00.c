__int64 __fastcall sub_DD00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  char v8; // al
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rcx
  char v10; // al
  unsigned __int8 v11; // bp
  unsigned __int8 v12; // al
  bool v13; // r12
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  unsigned __int8 v15; // al
  bool v16; // dl
  bool v17; // cc
  bool v18; // al
  int v19; // edx
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // r9
  int v23; // eax
  unsigned int *v24; // rdx
  char v25; // cl
  unsigned int v26; // eax
  __int64 *v27; // r8
  __int64 v28[45]; // [rsp-198h] [rbp-198h] BYREF

  if ( *(_WORD *)(a1 + 40) != 68 )
    return 0;
  if ( *(_BYTE *)(a1 + 57) != 3 || *(_BYTE *)(a1 + 88) != 46 )
    return 0;
  v7 = *(_QWORD *)(a1 + 864);
  v8 = *(_BYTE *)(v7 + 1);
  if ( !v8 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v9 != sub_B220 )
  {
    v10 = v9(a1, a1 + 96, *(_QWORD *)(a1 + 864));
LABEL_15:
    if ( !v10 )
      return 0;
    goto LABEL_16;
  }
  if ( v8 != *(_BYTE *)(a1 + 97) )
    return 0;
  if ( v8 != 99 )
  {
    if ( v8 == 100 )
    {
      v10 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v7 + 8);
    }
    else
    {
      if ( v8 != 1 )
        return 0;
      v10 = *(_WORD *)(a1 + 102) == *(_WORD *)(v7 + 6);
    }
    goto LABEL_15;
  }
LABEL_16:
  v11 = *(_BYTE *)(v7 + 5);
  v12 = *(_BYTE *)(a1 + 101);
  v13 = v11 <= 0xF9u;
  if ( v12 > 0xF9u )
  {
    if ( v11 > 0xF9u && v12 >= v11 )
      goto LABEL_25;
  }
  else if ( v11 > 0xF9u || v12 >= v11 || v12 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_25;
  }
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v14 == sub_B280 )
    return 0;
  v15 = v14(a1, a1 + 96);
  v16 = v13 || v15 < v11;
  v17 = v15 <= 0xF9u;
  v18 = v13 && v15 < v11;
  if ( !v17 )
    v18 = v16;
  if ( v18 )
    return 0;
LABEL_25:
  v19 = *(char *)(a1 + 89);
  v20 = *(_QWORD *)(a1 + 376);
  qmemcpy(v28, (const void *)(a1 + 16), sizeof(v28));
  v21 = sub_D790(
          *(_QWORD *)(a1 + 888),
          (__int64 *)(v20 + 8),
          (_QWORD *)(a1 + 896),
          v19,
          a5,
          a6,
          v28[0],
          v28[1],
          v28[2],
          v28[3],
          v28[4],
          v28[5],
          v28[6],
          v28[7],
          v28[8],
          v28[9],
          v28[10]);
  v23 = *(unsigned __int16 *)(a1 + 62);
  if ( !v21 )
  {
    v27 = (__int64 *)(*(_QWORD *)(a1 + 376) + 8LL);
    qmemcpy(v28, (const void *)(a1 + 16), sizeof(v28));
    if ( !(unsigned __int8)sub_D790(
                             *(_QWORD *)(a1 + 888),
                             v27,
                             (_QWORD *)(a1 + 896),
                             v23,
                             (__int64)v27,
                             v22,
                             v28[0],
                             v28[1],
                             v28[2],
                             v28[3],
                             v28[4],
                             v28[5],
                             v28[6],
                             v28[7],
                             v28[8],
                             v28[9],
                             v28[10]) )
      return 0;
    LOWORD(v23) = *(char *)(a1 + 89);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v23;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 1;
  v24 = *(unsigned int **)(a1 + 376);
  v25 = *(_BYTE *)(a1 + 49);
  v26 = *v24 & 0xFFFFFBFB;
  if ( v25 != 2 )
  {
    v26 |= 4u;
    if ( v25 != 3 )
      v26 = *v24 & 0xFFFFFBFB | 0x400;
  }
  *v24 = v26;
  return 1;
}

