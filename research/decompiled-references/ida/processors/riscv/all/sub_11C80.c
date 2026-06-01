__int64 __fastcall sub_11C80(__int64 a1, __int64 a2, unsigned __int16 a3, int a4)
{
  unsigned __int16 v5; // si
  unsigned int v6; // ecx
  __int16 v7; // dx
  __int16 v8; // r8
  int v9; // r10d
  int v11; // edx
  int v12; // esi
  __int64 v13; // rdx
  int v14; // edx
  unsigned int v15; // esi
  __int64 v16; // rdx
  int v17; // edx
  unsigned int v18; // esi
  __int64 v19; // rdx

  v5 = a4;
  v6 = a3 | (a4 << 16);
  v7 = (a3 >> 7) & 0x1F;
  v8 = *(_WORD *)(a2 + 34) & 4;
  v9 = (v6 >> 12) & 7;
  switch ( v9 )
  {
    case 0:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 536;
      *(_WORD *)(a2 + 46) = (v5 >> 4) & 0x1F;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 45) = v8 == 0 ? 2 : 7;
      v11 = v6 & 0x18000 | (v6 >> 20) & 0x7E0 | (v6 >> 7) & 0x1E;
      v12 = (16 * (_WORD)v6) & 0x800;
      goto LABEL_6;
    case 1:
      *(_WORD *)(a2 + 24) = 530;
      goto LABEL_5;
    case 2:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v7;
      if ( v8 )
        LOBYTE(v9) = 7;
      *(_WORD *)(a2 + 24) = 532;
      *(_BYTE *)(a2 + 45) = v9;
      goto LABEL_13;
    case 3:
      if ( !v8 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v7;
      *(_WORD *)(a2 + 24) = 534;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 5;
      v17 = (v6 >> 5) & 0x7000 | v6 & 0x18000 | (v6 >> 9) & 0x800 | (v6 >> 20) & 0x7F8;
      v18 = v6 >> 4;
      goto LABEL_19;
    case 4:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 537;
      *(_WORD *)(a2 + 46) = (v5 >> 4) & 0x1F;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 45) = v8 == 0 ? 2 : 7;
      v14 = (v6 >> 5) & 0x7000 | (16 * (_WORD)v6) & 0x800 | v6 & 0x18000 | (v6 >> 20) & 0x7E0 | (v6 >> 7) & 0x1C;
      v15 = v6 << 9;
      goto LABEL_14;
    case 5:
      *(_WORD *)(a2 + 24) = 531;
LABEL_5:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v7;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 45) = v8 == 0 ? 2 : 7;
      v11 = (v6 >> 9) & 0x800 | (v6 >> 20) & 0x7FE;
      v12 = v6 & 0x18000;
LABEL_6:
      *(_BYTE *)(a2 + 85) = 1;
      v13 = (v6 >> 5) & 0x7000 | v12 | v11;
      if ( (v6 & 0x80000000) != 0 )
        v13 |= 0xFFFFFFFFFFFE0000LL;
      *(_QWORD *)(a2 + 88) = v13;
      return 4;
    case 6:
      if ( !v8 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 533;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v7;
      *(_BYTE *)(a2 + 45) = 7;
LABEL_13:
      *(_BYTE *)(a2 + 81) = 5;
      v14 = (v6 >> 5) & 0x7000 | v6 & 0x18000 | (v6 >> 9) & 0x800 | (v6 >> 20) & 0x7FC;
      v15 = v6 >> 4;
LABEL_14:
      *(_BYTE *)(a2 + 85) = 2;
      v16 = v15 & 0x20000 | v14;
      if ( (v6 & 0x80000000) != 0 )
        v16 |= 0xFFFFFFFFFFFC0000LL;
      *(_QWORD *)(a2 + 88) = v16;
      return 4;
    case 7:
      if ( !v8 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 538;
      *(_WORD *)(a2 + 46) = (v5 >> 4) & 0x1F;
      *(_BYTE *)(a2 + 45) = 7;
      *(_BYTE *)(a2 + 81) = 5;
      v17 = (v6 >> 5) & 0x7000 | (16 * (_WORD)v6) & 0x800 | v6 & 0x18000 | (v6 >> 20) & 0x7E0 | (v6 >> 7) & 0x18;
      v18 = v6 << 9;
LABEL_19:
      *(_BYTE *)(a2 + 85) = 7;
      v19 = v18 & 0x60000 | v17;
      if ( (v6 & 0x80000000) != 0 )
        v19 |= 0xFFFFFFFFFFF80000LL;
      *(_QWORD *)(a2 + 88) = v19;
      return 4;
  }
}

