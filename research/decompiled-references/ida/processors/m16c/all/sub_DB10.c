__int64 __fastcall sub_DB10(__int64 a1, __int64 a2)
{
  char next_byte; // al
  int v3; // ebx
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // al
  unsigned __int8 v6; // dl
  _BOOL4 v7; // esi
  unsigned int v8; // esi
  char v10; // al
  char v11; // bl
  char v12; // al
  char v13; // di
  char v14; // dl
  _BOOL4 v15; // esi
  int v16; // esi
  int v17; // ecx
  unsigned __int8 v18; // cl
  _BOOL4 v19; // esi
  _BOOL4 v20; // esi
  char v21; // cl
  char v22; // dl
  _BOOL4 v23; // esi
  char v24; // al
  _BOOL4 v25; // esi
  char v26; // dl
  _BOOL4 v27; // esi
  int v28; // ecx
  char v29; // dl
  int v30; // esi
  char v31; // r14
  char v32; // r13
  char v33; // r12
  char v34; // al
  _BOOL4 v35; // esi
  unsigned __int8 v36; // r12
  char v37; // al
  unsigned __int8 v38; // al
  char v39; // si
  char v40; // di
  __int64 *v41; // rdx
  unsigned __int8 v42; // al
  unsigned __int8 v43; // al
  char v44; // di
  unsigned __int8 v45; // al
  int v46; // edx
  unsigned __int8 v47; // al

  next_byte = insn_get_next_byte();
  v3 = next_byte;
  switch ( next_byte )
  {
    case '_':
      *(_BYTE *)(a2 + 29) = 2;
      break;
    case 'o':
      *(_BYTE *)(a2 + 29) = 1;
      break;
    case 'O':
      *(_BYTE *)(a2 + 29) = 3;
      break;
    default:
      if ( !*(_BYTE *)(a2 + 29) )
      {
        if ( next_byte == 63 )
          goto LABEL_6;
        goto LABEL_17;
      }
      break;
  }
  v10 = insn_get_next_byte();
  v3 = v10;
  if ( v10 == 63 )
  {
LABEL_6:
    v4 = insn_get_next_byte();
    v5 = insn_get_next_byte();
    if ( (v4 & 3) != 3 )
    {
      v6 = v4 & 0xE0;
      if ( (v4 & 0xE0) == 0x80 )
      {
        v8 = 90;
        v28 = v5 | (v4 << 8);
        if ( v28 == 33800 )
          return v8;
        v8 = 168;
        if ( v28 == 34056 )
          return v8;
        v29 = v4 & 0x1C | v5 & 0xE0;
        if ( v29 == -124 )
          return 0;
        if ( (v4 & 0x1C | v5 & 0xE0u) > 0x84 )
        {
          v8 = 12;
          if ( v29 == -108 )
            return v8;
        }
        else
        {
          v8 = 70;
          if ( v29 == 4 )
            return v8;
          if ( v29 == 20 )
          {
            v8 = 40;
            if ( (v5 & 0x1F) == 8 )
              return 88;
            return v8;
          }
        }
        v35 = (v5 & 0x1B) != 8;
        if ( (v4 & 0x10) != 0 )
          return (unsigned int)(v35 + 36);
        else
          return (unsigned int)(v35 + 38);
      }
      if ( (v4 & 0xE0u) > 0x80 )
      {
        switch ( v6 )
        {
          case 0xC0:
            v26 = v4 & 0x1C | v5 & 0xE0;
            if ( v26 == -124 )
              return 27;
            if ( (v4 & 0x1C | v5 & 0xE0u) > 0x84 )
            {
              v8 = 17;
              if ( v26 == -108 )
                return v8;
            }
            else
            {
              v8 = 142;
              if ( v26 == 4 )
                return v8;
              v8 = 143;
              if ( v26 == 20 )
                return v8;
            }
            v27 = (v5 & 0x1B) != 8;
            if ( (v4 & 0x10) != 0 )
              return (unsigned int)(v27 + 49);
            else
              return (unsigned int)(v27 + 51);
          case 0xE0:
            switch ( v4 & 0x1C )
            {
              case 0:
                v8 = 183;
                break;
              case 4:
                v8 = 156;
                break;
              case 8:
                v8 = 87;
                break;
              case 0xC:
                v8 = 145;
                break;
              case 0x14:
                v8 = 154;
                break;
              case 0x18:
                v8 = 166;
                if ( (v4 & 3) != 2 )
                  return (unsigned int)-1;
                break;
              default:
                return (unsigned int)-1;
            }
            return v8;
          case 0xA0:
            v17 = v5 | (v4 << 8);
            BYTE1(v17) &= ~1u;
            if ( v17 != 41992 )
            {
              v8 = 89;
              v18 = v5 & 0xE0;
              if ( (v5 & 0xE0 | v4 & 0x1F) != 6 )
              {
                v8 = 167;
                if ( (v5 & 0xE0 | v4 & 0x1F) != 22 )
                {
                  v8 = 98;
                  if ( (v18 | v4 & 0x1C) != -124 )
                  {
                    v8 = 99;
                    if ( (v18 | v4 & 0x1C) != -108 )
                    {
                      v19 = (v5 & 0x1B) != 8;
                      if ( (v4 & 0x10) != 0 )
                        return (unsigned int)(v19 + 62);
                      else
                        return (unsigned int)(v19 + 184);
                    }
                  }
                }
              }
              return v8;
            }
            v31 = insn_get_next_byte();
            v32 = insn_get_next_byte();
            v33 = insn_get_next_byte();
            v34 = insn_get_next_byte();
            if ( v31 == -62 && v32 == 16 && v33 == 6 && !v34 )
              return (v4 & 1) == 0 ? 170 : 182;
            break;
        }
      }
      else
      {
        if ( v6 == 64 )
        {
          v25 = (v5 & 0x1B) != 8;
          if ( (v4 & 0x10) != 0 )
            return (unsigned int)(v25 + 119);
          else
            return (unsigned int)(v25 + 115);
        }
        if ( v6 <= 0x40u )
        {
          if ( v6 )
          {
            v7 = (v5 & 0x1B) != 8;
            if ( (v4 & 0x10) != 0 )
              return (unsigned int)(v7 + 64);
            else
              return (unsigned int)(v7 + 47);
          }
          else
          {
            v20 = (v5 & 0x1B) != 8;
            if ( (v4 & 0x10) != 0 )
              return (unsigned int)(v20 + 45);
            else
              return (unsigned int)(v20 + 41);
          }
        }
        if ( v6 == 96 )
          return *((unsigned int *)qword_1AB20 + (v4 & 0x1C));
      }
    }
    return (unsigned int)-1;
  }
LABEL_17:
  if ( (_BYTE)v3 == 127 )
  {
    v11 = insn_get_next_byte();
    v12 = insn_get_next_byte();
    v13 = v11 & 3;
    if ( (v11 & 3) != 3 )
    {
      v14 = v11 & 0xE0;
      if ( (v11 & 0xE0) == 0x60 )
      {
        switch ( v11 & 0x1C )
        {
          case 0:
            v8 = 19;
            goto LABEL_62;
          case 1:
          case 2:
          case 3:
          case 5:
          case 6:
          case 7:
          case 9:
          case 0xA:
          case 0xB:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x19:
          case 0x1A:
          case 0x1B:
            v8 = -1;
            goto LABEL_62;
          case 4:
            v8 = 25;
            goto LABEL_62;
          case 8:
            return 121;
          case 0xC:
          case 0x18:
          case 0x1C:
            return (unsigned int)-1;
          case 0x10:
            v8 = 18;
            goto LABEL_62;
          case 0x14:
            v8 = 26;
LABEL_62:
            if ( v13 )
              return (unsigned int)-1;
            return v8;
        }
      }
      if ( (v11 & 0xE0u) <= 0x60 )
      {
        if ( v14 != 32 )
        {
          if ( v14 == 64 )
          {
            v23 = (v12 & 0x1B) != 8;
            if ( (v11 & 0x10) != 0 )
              return (unsigned int)(v23 + 92);
            else
              return (unsigned int)(v23 + 94);
          }
          if ( !v14 )
          {
            v15 = (v12 & 0x1B) != 8;
            if ( (v11 & 0x10) != 0 )
              return (unsigned int)(v15 + 149);
            else
              return (unsigned int)(v15 + 1);
          }
          return (unsigned int)-1;
        }
        v24 = v12 & 0x1B;
        if ( (v11 & 0x10) == 0 )
          return (unsigned int)(v24 != 8) + 179;
        v8 = 34;
        if ( v24 != 8 )
        {
          if ( v13 == 2 )
            return 35;
          return (unsigned int)-1;
        }
        return v8;
      }
      switch ( v14 )
      {
        case -96:
          v21 = v12 & 0xE0 | v11 & 0x1F;
          if ( v21 == -123 )
            return 85;
          if ( (v12 & 0xE0 | v11 & 0x1Fu) > 0x85 )
          {
            v8 = 86;
            if ( v21 == -122 )
              return v8;
          }
          else
          {
            v8 = 81;
            if ( v21 == 5 )
              return v8;
            v8 = 82;
            if ( v21 == 6 )
              return v8;
          }
          v8 = 171;
          v22 = v11 & 0x1C | v12 & 0xE0;
          if ( v22 == 20 )
            return v8;
          v8 = 169;
          if ( v22 == -108 )
            return v8;
          if ( (v12 & 0x1B) == 8 )
            return (v11 & 0x10) == 0 ? 32 : 146;
          if ( v13 == 2 )
            return (v11 & 0x10) == 0 ? 33 : 147;
          return (unsigned int)-1;
        case -64:
          if ( (v12 & 0x60 | v11 & 0xC) != 4 )
          {
            if ( (v12 & 0x1B) == 8 )
              return (v11 & 0x10) == 0 ? 117 : 43;
            if ( v13 == 2 )
              return (v11 & 0x10) == 0 ? 118 : 44;
            return (unsigned int)-1;
          }
          return sub_AC90(v11, v12);
        case -128:
          if ( (v12 & 0x60 | v11 & 0xC) != 4 )
          {
            if ( (v12 & 0x1B) == 8 )
            {
              v30 = -((v11 & 0x10) == 0);
              LOBYTE(v30) = v30 & 0x5B;
              return (unsigned int)(v30 + 175);
            }
            if ( v13 != 2 )
              return (unsigned int)-1;
            v16 = -((v11 & 0x10) == 0);
            LOBYTE(v16) = v16 & 0x5B;
            return (unsigned int)(v16 + 176);
          }
          return sub_AC90(v11, v12);
      }
    }
    return (unsigned int)-1;
  }
  v8 = 20;
  if ( !(_BYTE)v3 )
    return v8;
  if ( (v3 & 0xBC) == 0 )
  {
    v37 = v3 & 3 | ((unsigned __int8)v3 >> 4) & 0xC;
    if ( !v37 )
    {
      v8 = 134;
      if ( (_BYTE)v3 == 11 )
        return v8;
      v8 = 58;
      if ( (_BYTE)v3 == 27 )
        return v8;
      return (v3 & 0x10) == 0 ? 102 : 105;
    }
    v8 = 8;
    if ( (~v37 & 3) != 0 )
      return v8;
    v8 = 76;
    v36 = v3 & 0xF;
    if ( (v3 & 0xF) == 3 )
      return v8;
    if ( (v3 & 0xE0) != 0x40 )
    {
LABEL_156:
      if ( (_BYTE)v3 == 11 )
        return 134;
      if ( (_BYTE)v3 == 27 )
        return 58;
      if ( (~(_BYTE)v3 & 3) == 0 )
        return (unsigned int)-1;
      return (v3 & 0x10) == 0 ? 102 : 105;
    }
    if ( (v3 & 0x12) != 0 )
    {
LABEL_200:
      v8 = 103;
      if ( (v3 & 0x10) != 0 )
        return v8;
      v8 = 104;
      if ( (v3 & 3) == 2 )
        return v8;
      return (unsigned int)-1;
    }
LABEL_204:
    v47 = insn_get_next_byte();
    switch ( v36 | (unsigned __int8)(16 * ((v47 & 0x1F) == 8)) )
    {
      case 4:
      case 20:
        v8 = 16;
        break;
      case 5:
        v8 = 66;
        break;
      case 8:
        v8 = 23;
        break;
      case 9:
        v8 = 106;
        break;
      case 12:
        v8 = 22;
        break;
      case 13:
        v8 = 137;
        if ( v47 > 0x1Fu )
          return (unsigned int)-1;
        break;
      case 21:
        v8 = 91;
        break;
      case 24:
        v8 = 138;
        break;
      case 25:
        v8 = 128;
        break;
      case 28:
        v8 = 67;
        break;
      case 29:
        v8 = 69;
        break;
      default:
        return (unsigned int)-1;
    }
    return v8;
  }
  v36 = v3 & 0xF;
  if ( (v3 & 0xF) == 3 )
  {
    v8 = 78;
    if ( (_BYTE)v3 != 115 )
      return 2 * (unsigned int)((_BYTE)v3 != 0xF3) + 74;
    return v8;
  }
  if ( v36 == 7 )
    return ((v3 >> 31) & 0x35u) + 24;
  v38 = v3 & 0xE0;
  if ( (v3 & 0xE0) != 0x80 )
  {
    if ( (v3 & 0xE0u) > 0x80 )
    {
      if ( v38 == 0xC0 )
      {
        if ( (_BYTE)v3 == 0xDB )
          return 59;
        if ( (unsigned __int8)v3 > 0xDBu )
        {
          v8 = 148;
          if ( (_BYTE)v3 == 0xDF )
            return v8;
          v43 = insn_get_next_byte();
          v44 = v3;
        }
        else
        {
          v8 = 133;
          if ( (_BYTE)v3 == 0xCB )
            return v8;
          v8 = 140;
          if ( (_BYTE)v3 == 0xCF )
            return v8;
          v43 = insn_get_next_byte();
          v44 = v3;
          v8 = 161;
          if ( (v43 | ((unsigned __int8)v3 << 8)) == 0xD688 )
            return v8;
        }
        if ( (~(_BYTE)v3 & 3) != 0 )
        {
          v8 = sub_ABA0(v44, v43, (unsigned int *)qword_1AC20);
          if ( v8 != 162 || (v3 & 2) == 0 )
            return v8;
        }
        return (unsigned int)-1;
      }
      if ( v38 == 0xE0 )
      {
        if ( (_BYTE)v3 == 0xFB )
          return 84;
        if ( (unsigned __int8)v3 > 0xFBu )
        {
          v8 = 181;
          if ( (_BYTE)v3 == 0xFF )
            return v8;
          insn_get_next_byte();
        }
        else
        {
          v8 = 80;
          if ( (_BYTE)v3 == 0xEB )
            return v8;
          v8 = 60;
          if ( (_BYTE)v3 == 0xEF )
            return v8;
          insn_get_next_byte();
          if ( (~(_BYTE)v3 & 3) == 0 )
            return (unsigned int)-1;
          v8 = 7;
          v42 = v3 & 0x18;
          if ( (v3 & 0x18) == 0x10 )
            return v8;
          if ( v42 <= 0x10u )
            return v42 == 0 ? 30 : 157;
          if ( v42 != 24 )
            return (unsigned int)-1;
        }
        return 100;
      }
      if ( v38 != 0xA0 )
        return (unsigned int)-1;
      if ( (_BYTE)v3 == 0xBB )
        return 83;
      if ( (unsigned __int8)v3 > 0xBBu )
      {
        v8 = 21;
        if ( (_BYTE)v3 == 0xBF )
          return v8;
      }
      else
      {
        if ( (_BYTE)v3 == 0xAB )
          return 79;
        v8 = 75;
        if ( (_BYTE)v3 == 0xAF )
          return v8;
      }
      v39 = insn_get_next_byte();
      if ( (~(_BYTE)v3 & 3) == 0 )
        return (unsigned int)-1;
      v40 = v3;
      v41 = qword_1AC60;
      return sub_ABA0(v40, v39, (unsigned int *)v41);
    }
    if ( v38 != 64 )
    {
      if ( v38 > 0x40u )
      {
        if ( v38 == 96 )
        {
          if ( v36 == 11 )
            return 129;
          if ( (~(_BYTE)v3 & 3) != 0 )
            return (v3 & 0x10) == 0 ? 15 : 9;
        }
        return (unsigned int)-1;
      }
      if ( v38 )
      {
        v8 = 131;
        if ( (v3 & 0x1F) == 0xB )
          return v8;
        v8 = 135;
        if ( (v3 & 0x1F) == 0x1B )
          return v8;
        if ( (~(_BYTE)v3 & 3) != 0 )
          return (v3 & 0x10) == 0 ? 101 : 31;
        return (unsigned int)-1;
      }
      goto LABEL_156;
    }
    if ( (v3 & 0x12) != 0 )
    {
      if ( v36 == 11 )
        return 139;
      goto LABEL_200;
    }
    goto LABEL_204;
  }
  if ( (_BYTE)v3 == 0x9B )
    return 136;
  if ( (unsigned __int8)v3 > 0x9Bu )
  {
    v8 = 123;
    if ( (_BYTE)v3 == 0x9F )
      return v8;
    v40 = v3;
    v45 = insn_get_next_byte();
  }
  else
  {
    if ( (_BYTE)v3 == 0x8B )
      return 132;
    v8 = 68;
    if ( (_BYTE)v3 == 0x8F )
      return v8;
    v40 = v3;
    v45 = insn_get_next_byte();
    v46 = v45 | ((unsigned __int8)v3 << 8);
    if ( v46 == 38280 )
      return 152;
    if ( v46 > 38280 )
    {
      v8 = 165;
      if ( v46 == 38536 )
        return v8;
    }
    else
    {
      if ( v46 == 37896 )
        return 61;
      if ( v46 == 38024 )
        return 152;
    }
    if ( (~(_BYTE)v3 & 3) == 0 )
      return (unsigned int)-1;
  }
  v41 = qword_1ACA0;
  v39 = v45;
  return sub_ABA0(v40, v39, (unsigned int *)v41);
}

