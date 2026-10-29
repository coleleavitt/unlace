__int64 __fastcall sub_DF00(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int16 v6; // di
  char v8; // r10
  int v9; // edi
  char v10; // di
  __int16 v11; // di
  __int16 v12; // di
  __int16 v13; // di
  __int16 v14; // di
  __int16 v15; // di

  switch ( a6 )
  {
    case 0u:
      v13 = word_2AE30[a5];
      goto LABEL_36;
    case 1u:
      v13 = aDefghijk[a5];
      goto LABEL_36;
    case 4u:
      if ( a5 != 4 )
      {
        if ( a5 == 7 )
        {
          *(_WORD *)(a2 + 24) = 392;
          v12 = *(_WORD *)(a2 + 34) & 4;
LABEL_15:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
          if ( v12 )
LABEL_16:
            v10 = 7;
          else
LABEL_10:
            v10 = 2;
          *(_BYTE *)(a2 + 45) = v10;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = v10;
          *(_WORD *)(a2 + 86) = ((2 * (_BYTE)a4) & 0x1E) + (a3 >> 15);
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = (a4 >> 4) & 0x1F;
          *(_BYTE *)(a2 + 125) = v10;
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      v12 = *(_WORD *)(a2 + 34) & 4;
      if ( ((a4 >> 4) & 0x1F) != 0 )
      {
        *(_WORD *)(a2 + 24) = 391;
        goto LABEL_15;
      }
      if ( v12 )
        return 0;
      *(_WORD *)(a2 + 24) = 374;
      *(_WORD *)(a2 + 28) = 514;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = ((2 * (_BYTE)a4) & 0x1E) + (a3 >> 15);
      *(_BYTE *)(a2 + 85) = 2;
      return *(unsigned __int16 *)(a2 + 26);
    case 5u:
      v13 = word_2AE10[a5];
      goto LABEL_36;
    case 0x10u:
      v14 = word_2AE00[a5];
      *(_WORD *)(a2 + 24) = v14;
      if ( !v14 )
        return 0;
      goto LABEL_37;
    case 0x11u:
    case 0x31u:
    case 0x51u:
    case 0x71u:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) != 0 )
        return 0;
      *(_BYTE *)(a2 + 28) = 41;
      *(_WORD *)(a2 + 24) = 386;
      goto LABEL_20;
    case 0x13u:
    case 0x33u:
    case 0x53u:
    case 0x73u:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) != 0 )
        return 0;
      *(_BYTE *)(a2 + 28) = 57;
      *(_WORD *)(a2 + 24) = 386;
      goto LABEL_20;
    case 0x14u:
      v6 = word_2ADF0[a5];
      *(_WORD *)(a2 + 24) = v6;
      if ( !v6 )
        return 0;
      goto LABEL_37;
    case 0x15u:
    case 0x35u:
    case 0x55u:
    case 0x75u:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) != 0 )
        return 0;
      *(_BYTE *)(a2 + 28) = 9;
      *(_WORD *)(a2 + 24) = 386;
      goto LABEL_20;
    case 0x17u:
    case 0x37u:
    case 0x57u:
    case 0x77u:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) != 0 )
        return 0;
      *(_BYTE *)(a2 + 28) = 25;
      *(_WORD *)(a2 + 24) = 386;
LABEL_20:
      *(_BYTE *)(a2 + 161) = 5;
      *(_BYTE *)(a2 + 165) = 0;
      *(_QWORD *)(a2 + 168) = a6 >> 5;
      goto LABEL_9;
    case 0x18u:
    case 0x38u:
    case 0x58u:
    case 0x78u:
      *(_BYTE *)(a2 + 28) = 105;
      *(_WORD *)(a2 + 24) = 397;
      goto LABEL_14;
    case 0x19u:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) == 0 )
        return 0;
      *(_BYTE *)(a2 + 28) = 41;
      *(_WORD *)(a2 + 24) = 386;
      goto LABEL_34;
    case 0x1Au:
    case 0x3Au:
    case 0x5Au:
    case 0x7Au:
      *(_BYTE *)(a2 + 28) = 121;
      *(_WORD *)(a2 + 24) = 397;
LABEL_14:
      v11 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 161) = 5;
      *(_BYTE *)(a2 + 165) = 0;
      *(_QWORD *)(a2 + 168) = a6 >> 5;
      v12 = v11 & 4;
      goto LABEL_15;
    case 0x1Bu:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) == 0 )
        return 0;
      *(_BYTE *)(a2 + 28) = 57;
      *(_WORD *)(a2 + 24) = 386;
      goto LABEL_34;
    case 0x1Du:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) == 0 )
        return 0;
      *(_BYTE *)(a2 + 28) = 9;
      *(_WORD *)(a2 + 24) = 386;
      goto LABEL_34;
    case 0x1Fu:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) == 0 )
        return 0;
      *(_BYTE *)(a2 + 28) = 25;
      *(_WORD *)(a2 + 24) = 386;
LABEL_34:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
      goto LABEL_16;
    case 0x20u:
      v13 = word_2ADE0[a5];
      goto LABEL_36;
    case 0x24u:
      v13 = word_2ADD0[a5];
      goto LABEL_36;
    case 0x28u:
    case 0x29u:
    case 0x2Au:
    case 0x2Bu:
    case 0x2Eu:
    case 0x2Fu:
      if ( a5 || (*(_BYTE *)(a2 + 34) & 4) != 0 )
        return 0;
      if ( (a6 & 2) != 0 )
      {
        v8 = -55;
        v9 = (a6 & 4) == 0 ? 4 : 2;
      }
      else
      {
        v8 = -39;
        LOBYTE(v9) = 6;
      }
      *(_BYTE *)(a2 + 28) = v8;
      *(_WORD *)(a2 + 24) = 395;
      *(_BYTE *)(a2 + 29) = a6 & 1 | v9;
LABEL_9:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
      goto LABEL_10;
    case 0x30u:
      v13 = word_2ADC0[a5];
LABEL_36:
      *(_WORD *)(a2 + 24) = v13;
      if ( !v13 )
        return 0;
LABEL_37:
      v12 = *(_WORD *)(a2 + 34) & 4;
      goto LABEL_15;
    case 0x34u:
      if ( a5 != 1 )
        return 0;
      *(_WORD *)(a2 + 24) = 344;
      v12 = *(_WORD *)(a2 + 34) & 4;
      goto LABEL_15;
    case 0x3Fu:
      if ( a5 )
        return 0;
      v15 = *(_WORD *)(a2 + 34);
      *(_WORD *)(a2 + 24) = 389;
      v12 = v15 & 4;
      goto LABEL_15;
    default:
      return 0;
  }
}

