__int64 __fastcall sub_DF40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r12
  char v9; // al
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rcx
  char v12; // al
  unsigned __int8 v13; // r12
  unsigned __int8 v14; // al
  bool v15; // r14
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  unsigned __int8 v17; // al
  bool v18; // dl
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
  v6 = a1 + 56;
  v7 = a1 + 96;
  if ( *(_WORD *)(a1 + 904) == 14 )
  {
    v7 = a1 + 56;
    v6 = a1 + 96;
  }
  v8 = *(_QWORD *)(a1 + 864);
  v9 = *(_BYTE *)(v8 + 1);
  if ( !v9 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v11 != sub_B220 )
  {
    v12 = v11(a1, v6, *(_QWORD *)(a1 + 864));
LABEL_13:
    if ( !v12 )
      return 0;
    goto LABEL_14;
  }
  if ( v9 != *(_BYTE *)(v6 + 1) )
    return 0;
  if ( v9 != 99 )
  {
    if ( v9 == 100 )
    {
      v12 = *(_QWORD *)(v6 + 8) == *(_QWORD *)(v8 + 8);
    }
    else
    {
      if ( v9 != 1 )
        return 0;
      v12 = *(_WORD *)(v6 + 6) == *(_WORD *)(v8 + 6);
    }
    goto LABEL_13;
  }
LABEL_14:
  v13 = *(_BYTE *)(v8 + 5);
  v14 = *(_BYTE *)(v6 + 5);
  v15 = v13 <= 0xF9u;
  if ( v14 > 0xF9u )
  {
    if ( v13 > 0xF9u && v14 >= v13 )
      goto LABEL_23;
  }
  else if ( v13 > 0xF9u || v14 >= v13 || *(_BYTE *)(a1 + 8) && v14 == 2 )
  {
    goto LABEL_23;
  }
  v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v16 == sub_B280 )
    return 0;
  v17 = v16(a1, v6);
  v18 = v15 || v17 < v13;
  if ( v17 <= 0xF9u )
    v18 = v15 && v17 < v13;
  if ( v18 )
    return 0;
LABEL_23:
  v19 = *(_BYTE *)(v7 + 1);
  if ( v19 == 5 )
  {
    v21 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    if ( v19 != 1 )
      return 0;
    v20 = *(unsigned __int16 *)(v7 + 6);
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
  v23 = *(unsigned __int16 *)(v6 + 6);
  *(_BYTE *)(v22 + 68) = *(_BYTE *)(v6 + 5);
  *(_DWORD *)(v22 + 64) = v23;
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v21 + 1;
  return 1;
}

