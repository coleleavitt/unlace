void __fastcall sub_CD00(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, int *a5)
{
  char v7; // dl
  char v8; // al
  char next_byte; // si
  char v11; // cl
  char v12; // r12
  char v13; // cl
  char v14; // cl
  unsigned __int8 v15; // si
  unsigned __int8 v16; // al
  unsigned __int8 v17; // dl
  char v18; // cl
  int v19; // eax
  unsigned __int8 v20; // al
  int v21; // eax

  v7 = a4 & 0xE;
  if ( (a4 & 0xE) == 0xA )
  {
    v12 = a3 & 0x71;
    if ( v12 == 49 )
    {
      *a5 = 88;
    }
    else if ( v12 != 113 )
    {
      *a5 = 86;
    }
  }
  else
  {
    if ( v7 == 12 )
    {
      *a5 = (a3 & 0x10) == 0 ? 8 : 115;
      return;
    }
    v8 = (a3 >> 4) & 3;
    if ( v8 == 2 )
    {
      if ( v7 == 14 )
      {
        *a5 = 152;
        return;
      }
      next_byte = insn_get_next_byte();
      v14 = a4 & 1;
      switch ( next_byte & 0x3F )
      {
        case 0:
        case 2:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0x10:
        case 0x12:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x20:
        case 0x22:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x30:
        case 0x32:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
          goto LABEL_19;
        case 1:
          if ( v14 )
            goto LABEL_19;
          *a5 = 155;
          return;
        case 3:
        case 0x13:
          if ( v14 )
            goto LABEL_19;
          *a5 = 76;
          return;
        case 0xE:
          *a5 = 74;
          return;
        case 0xF:
          *a5 = 124;
          return;
        case 0x11:
          if ( v14 )
            goto LABEL_19;
          *a5 = 47;
          return;
        case 0x1E:
          *a5 = 144;
          return;
        case 0x1F:
          *a5 = 0;
          return;
        case 0x21:
          if ( v14 )
            goto LABEL_19;
          *a5 = 172;
          return;
        case 0x23:
        case 0x33:
          if ( v14 )
            goto LABEL_19;
          *a5 = 82;
          return;
        case 0x2E:
          *a5 = 163;
          return;
        case 0x2F:
          *a5 = 142;
          return;
        case 0x31:
          if ( !v14 )
          {
            *a5 = 41;
            return;
          }
LABEL_19:
          if ( *a5 != -1 )
            return;
          v15 = next_byte & 0xF;
          break;
        case 0x3E:
          *a5 = 178;
          return;
        case 0x3F:
          *a5 = 165;
          return;
      }
      goto LABEL_21;
    }
    if ( v8 != 3 )
    {
      if ( v8 == 1 )
      {
        if ( a4 == 14 )
        {
          *a5 = 160;
        }
        else if ( a4 == 15 )
        {
          *a5 = 72;
        }
        else
        {
          next_byte = insn_get_next_byte();
          v13 = a4 & 1;
          switch ( next_byte & 0x3F )
          {
            case 0:
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0x10:
            case 0x12:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
            case 0x1C:
            case 0x1D:
            case 0x20:
            case 0x22:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2A:
            case 0x2B:
            case 0x2C:
            case 0x2D:
            case 0x30:
            case 0x32:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3A:
            case 0x3B:
            case 0x3C:
            case 0x3D:
              goto LABEL_19;
            case 1:
              if ( v13 )
                goto LABEL_19;
              *a5 = 97;
              break;
            case 3:
            case 0x13:
              if ( v13 )
                goto LABEL_19;
              *a5 = 80;
              break;
            case 0xE:
              *a5 = 207;
              break;
            case 0xF:
              *a5 = 192;
              break;
            case 0x11:
              if ( v13 )
                goto LABEL_19;
              *a5 = 199;
              break;
            case 0x1E:
              *a5 = 60;
              break;
            case 0x1F:
              *a5 = 191;
              break;
            case 0x21:
              if ( v13 )
                goto LABEL_19;
              *a5 = 177;
              break;
            case 0x23:
            case 0x33:
              if ( v13 )
                goto LABEL_19;
              *a5 = 78;
              break;
            case 0x2E:
              *a5 = 40;
              break;
            case 0x2F:
              *a5 = 111;
              break;
            case 0x31:
              if ( v13 )
                goto LABEL_19;
              *a5 = 195;
              break;
            case 0x3E:
              *a5 = 201;
              break;
            case 0x3F:
              *a5 = 193;
              break;
          }
        }
      }
      else if ( a4 == 14 )
      {
        *a5 = 151;
      }
      else if ( a4 == 15 )
      {
        *a5 = 159;
      }
      else
      {
        next_byte = insn_get_next_byte();
        v11 = a4 & 1;
        switch ( next_byte & 0x3F )
        {
          case 0:
          case 2:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0x10:
          case 0x12:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x20:
          case 0x22:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x30:
          case 0x32:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
            goto LABEL_19;
          case 1:
            if ( v11 )
              goto LABEL_19;
            *a5 = 92;
            break;
          case 3:
          case 0x13:
            if ( v11 )
              goto LABEL_19;
            *a5 = 75;
            break;
          case 0xE:
            *a5 = 57;
            break;
          case 0xF:
            *a5 = 139;
            break;
          case 0x11:
            if ( v11 )
              goto LABEL_19;
            *a5 = 14;
            break;
          case 0x1E:
            *a5 = 54;
            break;
          case 0x1F:
            *a5 = 135;
            break;
          case 0x21:
            if ( v11 || *(_DWORD *)(a1 + 4328) != 5 )
              goto LABEL_19;
            *a5 = 180;
            break;
          case 0x23:
          case 0x33:
            if ( v11 )
              goto LABEL_19;
            *a5 = 81;
            break;
          case 0x2E:
            *a5 = 4;
            break;
          case 0x2F:
            *a5 = 145;
            break;
          case 0x31:
            if ( v11 )
              goto LABEL_19;
            *a5 = 5;
            break;
          case 0x3E:
            *a5 = 194;
            break;
          case 0x3F:
            *a5 = 17;
            break;
        }
      }
      return;
    }
    if ( a4 == 14 )
    {
      *a5 = 84;
      return;
    }
    if ( a4 == 15 )
    {
      *a5 = 85;
      return;
    }
    v16 = insn_get_next_byte();
    v17 = v16 >> 4;
    v15 = v16 & 0xF;
    v18 = (v16 >> 4) & 3;
    if ( (v16 & 0xF) == 0xE )
    {
      if ( v18 == 2 )
      {
        *a5 = 162;
      }
      else if ( v18 == 3 )
      {
        *a5 = 173;
      }
      else
      {
        v19 = 3;
        if ( v18 != 1 )
          v19 = 52;
        *a5 = v19;
      }
    }
    else
    {
      if ( v15 == 15 )
      {
        if ( !v18 )
        {
          *a5 = 123;
          return;
        }
        if ( v18 == 2 )
        {
          *a5 = 148;
          return;
        }
        goto LABEL_21;
      }
      if ( v15 == 1 )
      {
        if ( (a4 & 1) != 0 )
        {
          v15 = a4 & 1;
        }
        else
        {
          switch ( v18 )
          {
            case 1:
              *a5 = 134;
              return;
            case 3:
              *a5 = 112;
              return;
            case 0:
              *a5 = 156;
              return;
          }
        }
        goto LABEL_21;
      }
      if ( v15 != 3 )
      {
LABEL_21:
        if ( a3 <= 0xCFu && (unsigned __int8)a4 <= 9u )
          sub_B580(a4, v15, a5);
        return;
      }
      if ( (v17 & 2) != 0 )
      {
        if ( (a4 & 1) == 0 )
        {
          *a5 = 79;
          return;
        }
        goto LABEL_21;
      }
      v20 = v16 >> 6;
      switch ( a4 )
      {
        case 0:
          if ( v20 == 1 )
          {
            *a5 = 53;
          }
          else if ( v20 == 2 )
          {
            *a5 = 183;
          }
          else
          {
            if ( v20 )
              goto LABEL_21;
            *a5 = 56;
          }
          return;
        case 2:
          if ( v17 > 5u )
          {
            if ( (unsigned __int8)(v17 - 8) > 1u )
              goto LABEL_21;
            *a5 = 181;
          }
          else if ( v17 > 3u )
          {
            *a5 = 59;
          }
          else
          {
            if ( v17 )
              goto LABEL_21;
            *a5 = 205;
          }
          break;
        case 4:
          if ( v20 != 2 )
            goto LABEL_21;
          *a5 = 185;
          return;
        case 6:
          v21 = *((_DWORD *)qword_1ACE0 + (v17 & 1 | (2 * v20)));
          *a5 = v21;
          if ( v21 == -1 )
            goto LABEL_21;
          return;
        case 8:
          switch ( v20 )
          {
            case 2u:
              *a5 = 184;
              break;
            case 3u:
              *a5 = 170;
              break;
            case 1u:
              *a5 = 161;
              break;
            default:
              *a5 = 186;
              break;
          }
          return;
        default:
          goto LABEL_21;
      }
    }
  }
}

