__int64 __fastcall sub_66510(__int64 a1)
{
  int v2; // edx
  char v4; // dl
  int v5; // edx
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // edi
  __int64 v9; // rcx
  __int16 v10; // dx
  __int64 v11; // rcx
  __int16 v12; // dx
  __int64 v13; // rcx
  __int16 v14; // dx
  __int64 v15; // rcx
  __int16 v16; // dx
  __int64 v17; // rcx
  __int16 v18; // dx
  __int64 v19; // rcx
  __int16 v20; // dx

  v2 = (*(_DWORD *)(a1 + 52) >> 8) & 3;
  switch ( v2 )
  {
    case 1:
      v4 = -109;
      break;
    case 2:
      v4 = -108;
      break;
    case 3:
      v4 = -107;
      break;
    default:
      return 0;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v4;
  v5 = (*(_DWORD *)(a1 + 52) >> 8) & 3;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 32);
  if ( v5 == 3 )
  {
    *(_BYTE *)(v6 + 41) = 1;
    *(_BYTE *)(v6 + 45) = 4;
    *(_WORD *)(v6 + 46) = (v7 | (16 * v8)) + 61;
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (*(_WORD *)(a1 + 16) | (16 * *(_WORD *)(a1 + 36))) + 61;
    *(_BYTE *)(v17 + 81) = 1;
    *(_WORD *)(v17 + 86) = v18;
    *(_BYTE *)(v17 + 85) = 4;
    v19 = *(_QWORD *)(a1 + 8);
    v20 = *(_WORD *)(a1 + 24) | (16 * *(_WORD *)(a1 + 44));
    *(_BYTE *)(v19 + 121) = 1;
    *(_WORD *)(v19 + 126) = v20 + 61;
    *(_BYTE *)(v19 + 125) = 4;
  }
  else
  {
    *(_BYTE *)(v6 + 41) = 1;
    *(_BYTE *)(v6 + 45) = 3;
    *(_WORD *)(v6 + 46) = (v8 | (2 * v7)) + 93;
    if ( v5 == 1 )
    {
      *(_BYTE *)(v6 + 45) = 18;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = (*(_WORD *)(a1 + 36) | (2 * *(_WORD *)(a1 + 16))) + 93;
      *(_BYTE *)(v9 + 81) = 1;
      *(_WORD *)(v9 + 86) = v10;
      *(_BYTE *)(v9 + 85) = 18;
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
      *(_BYTE *)(v11 + 121) = 1;
      *(_WORD *)(v11 + 126) = v12 + 93;
      *(_BYTE *)(v11 + 125) = 18;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = *(_WORD *)(a1 + 36) | (2 * *(_WORD *)(a1 + 16));
      *(_BYTE *)(v13 + 81) = 1;
      *(_BYTE *)(v13 + 85) = 3;
      *(_WORD *)(v13 + 86) = v14 + 93;
      v15 = *(_QWORD *)(a1 + 8);
      v16 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
      *(_BYTE *)(v15 + 121) = 1;
      *(_WORD *)(v15 + 126) = v16 + 93;
      *(_BYTE *)(v15 + 125) = 3;
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = ((*(_BYTE *)(a1 + 52) & 0x40) != 0) + 436;
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
}
