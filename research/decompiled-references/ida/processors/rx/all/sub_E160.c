__int64 __fastcall sub_E160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  char v19; // al
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24[45]; // [rsp-170h] [rbp-1A8h] BYREF
  __int64 v25[7]; // [rsp+0h] [rbp-38h] BYREF

  v25[1] = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 43 )
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
LABEL_11:
    if ( !v10 )
      return 0;
    goto LABEL_12;
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
    goto LABEL_11;
  }
LABEL_12:
  v11 = *(_BYTE *)(v7 + 5);
  v12 = *(_BYTE *)(a1 + 101);
  v13 = v11 <= 0xF9u;
  if ( v12 > 0xF9u )
  {
    if ( v11 > 0xF9u && v12 >= v11 )
      goto LABEL_21;
  }
  else if ( v11 > 0xF9u || v12 >= v11 || *(_BYTE *)(a1 + 8) && v12 == 2 )
  {
    goto LABEL_21;
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
LABEL_21:
  v19 = *(_BYTE *)(a1 + 57);
  if ( v19 == 5 )
  {
    v21 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    if ( v19 != 1 )
      return 0;
    v20 = *(unsigned __int16 *)(a1 + 62);
    qmemcpy(v24, (const void *)(a1 + 16), sizeof(v24));
    if ( !(unsigned __int8)sub_D790(
                             *(_QWORD *)(a1 + 888),
                             v25,
                             nullptr,
                             v20,
                             a5,
                             a6,
                             v24[0],
                             v24[1],
                             v24[2],
                             v24[3],
                             v24[4],
                             v24[5],
                             v24[6],
                             v24[7],
                             v24[8],
                             v24[9],
                             v24[10]) )
      return 0;
    LOWORD(v21) = v25[0];
  }
  v22 = *(_QWORD *)(a1 + 376);
  v23 = *(unsigned __int16 *)(a1 + 102);
  *(_BYTE *)(v22 + 68) = *(_BYTE *)(a1 + 101);
  *(_DWORD *)(v22 + 64) = v23;
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v21 + 1;
  return 1;
}

