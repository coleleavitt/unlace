__int64 __fastcall sub_6230(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int16 v3; // bp
  unsigned __int8 v5; // al
  char v6; // r12
  char v7; // bp
  unsigned __int8 next_byte; // r12
  unsigned __int8 v9; // al
  char v10; // dl
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  char v14; // dl
  unsigned __int8 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // cx
  __int16 v19; // dx
  unsigned __int8 v20; // dl
  __int16 v21; // ax
  __int16 v22; // cx
  char v23; // al
  __int16 v24; // ax
  unsigned __int8 v25; // dl
  char v26; // dl
  __int16 v27; // dx

  v3 = *(_WORD *)(a2 + 26);
  if ( a3 == 119 )
  {
    next_byte = insn_get_next_byte();
    if ( next_byte >> 4 == 8 )
    {
      v9 = insn_get_next_byte();
      v10 = v9 & 0xF;
      switch ( v9 & 0xF )
      {
        case 0:
        case 2:
        case 3:
          *(_BYTE *)(a2 + 41) = 1;
          v23 = v9 >> 4;
          *(_WORD *)(a2 + 24) = 160;
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = next_byte & 0xF;
          if ( v10 == 3 )
          {
            *(_BYTE *)(a2 + 33) = 7;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            *(_WORD *)(a2 + 86) = (unsigned __int8)(v23 + 48);
          }
          else
          {
            *(_BYTE *)(a2 + 33) = 3;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            if ( v10 == 2 )
              v24 = (unsigned __int8)(v23 + 48);
            else
              v24 = (unsigned __int8)(v23 + 64);
            *(_WORD *)(a2 + 86) = v24;
          }
          return 1;
        case 4:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 175;
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = next_byte & 0xF;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 4;
          *(_WORD *)(a2 + 86) = (unsigned __int8)(((v9 >> 4) & 3) + 80);
          return 1;
        case 9:
        case 0xA:
        case 0xD:
          v22 = 172;
          if ( v10 != 9 )
            v22 = 5 * (v10 != 10) + 171;
          *(_WORD *)(a2 + 24) = v22;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = next_byte & 0xF;
          goto LABEL_38;
        default:
          goto LABEL_6;
      }
    }
    goto LABEL_6;
  }
  if ( a3 > 0x77u )
  {
    if ( a3 != 0xF9 || (unsigned __int8)insn_get_next_byte() != 3 )
      goto LABEL_6;
    v5 = insn_get_next_byte();
    *(_WORD *)(a2 + 24) = 160;
    v6 = v5 & 0xF;
    v7 = v5 >> 4;
    if ( (v5 & 0xF) == 3 )
    {
      *(_BYTE *)(a2 + 33) = 7;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_QWORD *)(a2 + 48) = (unsigned int)insn_get_next_dword();
    }
    else
    {
      *(_BYTE *)(a2 + 33) = 3;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_QWORD *)(a2 + 48) = (unsigned int)insn_get_next_dword();
      if ( !v6 )
      {
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v7 + 64);
        return 1;
      }
    }
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 2;
    *(_WORD *)(a2 + 86) = (unsigned __int8)(v7 + 48);
    return 1;
  }
  if ( a3 == 117 )
  {
    v11 = insn_get_next_byte();
    if ( v11 >> 4 != 8 )
    {
      v12 = insn_get_next_byte();
      if ( v11 == 0xA8 )
      {
        v19 = 163;
      }
      else
      {
        if ( v11 > 0xA8u )
        {
          if ( (v11 & 0xF7) != 0xB0 )
            goto LABEL_6;
          *(_BYTE *)(a2 + 33) = 7;
          *(_BYTE *)(a2 + 45) = 4;
          *(_BYTE *)(a2 + 41) = 10;
          *(_WORD *)(a2 + 24) = (v11 == 0xB0) + 163;
          v25 = (v12 >> 4) + 32;
          *(_WORD *)(a2 + 46) = v25;
          *(_BYTE *)(a2 + 73) = v25 + (v12 & 0xF);
          return 1;
        }
        if ( v11 == 0x90 )
        {
          *(_WORD *)(a2 + 24) = 174;
          return 1;
        }
        v19 = 164;
        if ( v11 != 0xA0 )
          goto LABEL_6;
      }
      *(_WORD *)(a2 + 24) = v19;
      *(_BYTE *)(a2 + 33) = 3;
      *(_BYTE *)(a2 + 45) = 4;
      v20 = ((v12 >> 4) & 3) + 80;
      *(_BYTE *)(a2 + 41) = 10;
      *(_WORD *)(a2 + 46) = v20;
      *(_BYTE *)(a2 + 73) = v20 + (v12 & 3);
      return 1;
    }
    v13 = insn_get_next_byte();
    v14 = v13 & 0xF;
    if ( (v13 & 0xF) == 2 )
    {
      v21 = (unsigned __int8)((v13 >> 4) + 48);
    }
    else
    {
      if ( v14 == 4 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 173;
        *(_BYTE *)(a2 + 45) = 4;
        v21 = (unsigned __int8)(((v13 >> 4) & 3) + 80);
LABEL_34:
        *(_WORD *)(a2 + 46) = v21;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        *(_WORD *)(a2 + 86) = v11 & 0xF;
        return 1;
      }
      if ( v14 )
      {
        insn_get_next_byte();
        goto LABEL_6;
      }
      v21 = (unsigned __int8)((v13 >> 4) + 64);
    }
    *(_BYTE *)(a2 + 33) = 3;
    *(_WORD *)(a2 + 24) = 160;
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = 2;
    goto LABEL_34;
  }
  if ( a3 != 118 || (unsigned __int8)insn_get_next_byte() != 0x90 )
    goto LABEL_6;
  v15 = insn_get_next_byte();
  v9 = insn_get_next_byte();
  v16 = v15 & 0xF;
  if ( (_BYTE)v16 != 8 )
  {
    if ( (unsigned __int8)v16 > 8u )
    {
      if ( (unsigned __int8)(v16 - 12) <= 1u )
      {
        if ( (_BYTE)v16 != 12 || (v9 & 0xF) != 0 )
        {
          if ( (_BYTE)v16 != 13 || (v9 & 0xF) != 0 )
          {
            switch ( v9 & 0xF )
            {
              case 1:
                *(_WORD *)(a2 + 24) = 153;
                goto LABEL_51;
              case 2:
                *(_WORD *)(a2 + 24) = 162;
                goto LABEL_51;
              case 8:
                *(_WORD *)(a2 + 24) = 169;
                goto LABEL_51;
              case 9:
                *(_WORD *)(a2 + 24) = 170;
                goto LABEL_51;
              case 0xC:
                *(_WORD *)(a2 + 24) = 168;
                goto LABEL_51;
              case 0xD:
                *(_WORD *)(a2 + 24) = 165;
                goto LABEL_51;
              default:
                goto LABEL_6;
            }
          }
          *(_WORD *)(a2 + 24) = 166;
        }
        else
        {
          *(_BYTE *)(a2 + 33) = 7;
          *(_WORD *)(a2 + 24) = 160;
        }
LABEL_51:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 4;
        *(_WORD *)(a2 + 46) = (unsigned __int8)((v15 >> 4) + 32);
LABEL_38:
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 4;
        *(_WORD *)(a2 + 86) = (unsigned __int8)((v9 >> 4) + 32);
        return 1;
      }
    }
    else
    {
      v17 = -40;
      if ( !_bittest64(&v17, v16) )
      {
        v18 = 154;
        if ( (_BYTE)v16 )
        {
          v18 = 167;
          if ( (_BYTE)v16 != 1 )
            v18 = 2 * ((_BYTE)v16 == 2) + 159;
        }
        *(_WORD *)(a2 + 24) = v18;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 4;
        *(_WORD *)(a2 + 46) = (v9 & 0xF) + 32;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 4;
        *(_WORD *)(a2 + 86) = (unsigned __int8)((v15 >> 4) + 32);
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 4;
        *(_WORD *)(a2 + 126) = (unsigned __int8)((v9 >> 4) + 32);
        return 1;
      }
    }
LABEL_6:
    *(_WORD *)(a2 + 26) = v3;
    return 0;
  }
  v26 = v9 >> 4;
  if ( v9 >> 4 == 1 )
  {
    v27 = 155;
  }
  else
  {
    switch ( v26 )
    {
      case 2:
        v27 = 156;
        break;
      case 4:
        v27 = 157;
        break;
      case 6:
        v27 = 158;
        break;
      default:
        goto LABEL_6;
    }
  }
  *(_WORD *)(a2 + 24) = v27;
  *(_BYTE *)(a2 + 41) = 1;
  *(_WORD *)(a2 + 46) = (v9 & 0xF) + 32;
  *(_BYTE *)(a2 + 45) = 4;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 4;
  *(_WORD *)(a2 + 86) = (unsigned __int8)((v15 >> 4) + 32);
  return 1;
}

