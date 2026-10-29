__int64 __fastcall sub_66730(__int64 a1)
{
  unsigned int v1; // edx
  int v3; // ecx
  char v5; // si
  __int64 v6; // rdi
  int v7; // r10d
  int v8; // esi
  char v9; // r8
  int v10; // ecx
  char v11; // r9
  __int64 v12; // rsi
  int v13; // edi
  int v14; // r10d
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int16 v18; // cx
  __int64 v19; // rsi
  __int16 v20; // cx
  __int64 v21; // rsi
  __int16 v22; // cx

  v1 = *(_DWORD *)(a1 + 52);
  v3 = (v1 >> 8) & 3;
  switch ( v3 )
  {
    case 1:
      v5 = -109;
      break;
    case 2:
      v5 = -108;
      break;
    case 3:
      v5 = -107;
      break;
    default:
      return 0;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v5;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_BYTE *)(v6 + 33) & 0x7F;
  if ( *(char *)(v6 + 33) >= 0 )
    v9 = 0;
  v10 = (*(_DWORD *)(a1 + 52) >> 8) & 3;
  if ( (v1 & 0x40000) == 0 )
  {
    if ( !v10 )
      goto LABEL_19;
    if ( v10 == 3 )
    {
      *(_BYTE *)(v6 + 41) = 1;
      *(_BYTE *)(v6 + 45) = 4;
      *(_WORD *)(v6 + 46) = (v8 | (16 * v7)) + 61;
      v21 = *(_QWORD *)(a1 + 8);
      v22 = *(_WORD *)(a1 + 24) | (16 * *(_WORD *)(a1 + 44));
      *(_BYTE *)(v21 + 81) = 1;
      *(_WORD *)(v21 + 86) = v22 + 61;
      *(_BYTE *)(v21 + 85) = 4;
      v6 = *(_QWORD *)(a1 + 8);
      goto LABEL_19;
    }
    *(_BYTE *)(v6 + 41) = 1;
    *(_BYTE *)(v6 + 45) = 3;
    *(_WORD *)(v6 + 46) = (v7 | (2 * v8)) + 93;
    if ( v10 != 1 )
    {
      v19 = *(_QWORD *)(a1 + 8);
      v20 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
      *(_BYTE *)(v19 + 81) = 1;
      *(_BYTE *)(v19 + 85) = 3;
      *(_WORD *)(v19 + 86) = v20 + 93;
      v6 = *(_QWORD *)(a1 + 8);
      goto LABEL_19;
    }
    *(_BYTE *)(v6 + 45) = 18;
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
    *(_BYTE *)(v17 + 81) = 1;
    *(_WORD *)(v17 + 86) = v18 + 93;
    *(_BYTE *)(v17 + 85) = 18;
    goto LABEL_28;
  }
  v11 = -117;
  if ( *(_DWORD *)(a1 + 36) )
    v11 = -121;
  *(_BYTE *)(v6 + 41) = 1;
  *(_BYTE *)(v6 + 45) = 3;
  *(_WORD *)(v6 + 46) = (v7 | (2 * v8)) + 93;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v10 )
  {
    v13 = *(_DWORD *)(a1 + 24);
    v14 = *(_DWORD *)(a1 + 44);
    if ( v10 == 3 )
    {
      *(_BYTE *)(v12 + 81) = 1;
      *(_BYTE *)(v12 + 85) = 4;
      *(_WORD *)(v12 + 86) = (v13 | (16 * v14)) + 61;
      v12 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      *(_BYTE *)(v12 + 81) = 1;
      *(_BYTE *)(v12 + 85) = 3;
      *(_WORD *)(v12 + 86) = (v14 | (2 * v13)) + 93;
      if ( v10 == 1 )
        *(_BYTE *)(v12 + 85) = 18;
      v12 = *(_QWORD *)(a1 + 8);
    }
  }
  *(_BYTE *)(v12 + 45) = 2;
  v15 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8)(v9 - 1) > 0x14u )
  {
    *(_BYTE *)(v15 + 85) = 7;
    v16 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v16 + 33) = v11;
    if ( v9 )
      goto LABEL_18;
LABEL_28:
    v6 = *(_QWORD *)(a1 + 8);
    goto LABEL_19;
  }
  *(_BYTE *)(v15 + 85) = byte_8DB20[(unsigned __int8)(v9 - 1)];
  v16 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v16 + 33) = v11;
LABEL_18:
  *(_BYTE *)(v16 + 72) = v9;
  v6 = *(_QWORD *)(a1 + 8);
LABEL_19:
  *(_WORD *)(v6 + 24) = dword_8DC80[HIWORD(v1) & 7];
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
}
