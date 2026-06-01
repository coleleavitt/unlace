__int64 __fastcall sub_2340(__int64 a1, __int64 a2)
{
  unsigned __int16 wide_byte; // ax
  int v5; // esi
  unsigned __int16 v6; // di
  int v7; // r12d
  int v8; // edx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int16 v17; // r13
  unsigned int v18; // r8d
  unsigned __int16 v19; // dx
  __int64 v20; // rcx
  __int16 v21; // si
  unsigned int v22; // eax
  bool v23; // cf
  int v24; // r8d
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // r8d
  __int64 v28; // rdx
  unsigned __int16 v29; // dx
  _DWORD *v30; // rdi
  _DWORD *v31; // rsi
  __int64 i; // rcx
  _DWORD *v33; // rdi
  _DWORD *v34; // rsi
  __int64 j; // rcx
  _DWORD *v36; // rdi
  _DWORD *v37; // rsi
  __int64 k; // rcx
  _BYTE v39[88]; // [rsp+0h] [rbp-58h] BYREF

  *(_BYTE *)(a2 + 41) = 0;
  *(_BYTE *)(a2 + 81) = 0;
  *(_BYTE *)(a2 + 121) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  *(_WORD *)(a2 + 24) = 0;
  wide_byte = get_wide_byte();
  ++*(_WORD *)(a2 + 26);
  *(_DWORD *)(a1 + 120) = wide_byte;
  if ( (unsigned __int16)(wide_byte - 1) > 0xFFFDu )
    return 0;
  v5 = wide_byte >> 12;
  v6 = wide_byte & 0x3F;
  v7 = (wide_byte >> 9) & 7;
  v8 = (wide_byte >> 6) & 7;
  if ( !v8 && v7 == 7 )
  {
    if ( v5 == 15 )
    {
LABEL_123:
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 10;
      *(_WORD *)(a2 + 46) = 11;
      *(_BYTE *)(a2 + 121) = 5;
      *(_QWORD *)(a2 + 128) = v6;
    }
    else
    {
      v9 = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 45) = 9;
      *(_WORD *)(a2 + 24) = v5 + 37;
      LOWORD(result) = v9;
      v11 = *(_QWORD *)(a2 + 16) + v9;
      *(_BYTE *)(a2 + 41) = 7;
      *(_QWORD *)(a2 + 56) = v6 + v11;
    }
    return (unsigned __int16)result;
  }
  if ( v7 == 7 && v8 == 1 && v5 != 15 )
  {
    v14 = *(unsigned __int16 *)(a2 + 26);
    *(_BYTE *)(a2 + 45) = 9;
    *(_WORD *)(a2 + 24) = v5 + 37;
    LOWORD(result) = v14;
    v15 = *(_QWORD *)(a2 + 16) + v14;
    *(_BYTE *)(a2 + 41) = 7;
    *(_QWORD *)(a2 + 56) = v15 - v6;
    return (unsigned __int16)result;
  }
  v16 = wide_byte >> 3;
  v17 = wide_byte & 7;
  v18 = v16 & 7;
  switch ( v5 | (16 * v8) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
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
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 126) = 5;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 24) = v5 + 15;
      *(_WORD *)(a2 + 46) = v7;
      *(_BYTE *)(a2 + 121) = 4;
      *(_QWORD *)(a2 + 136) = v6;
      return (unsigned __int16)result;
    case 0xE:
      if ( v7 == 7 )
        goto LABEL_10;
      switch ( v16 & 7 )
      {
        case 0:
          *(_WORD *)(a2 + 24) = 74;
          break;
        case 1:
          *(_WORD *)(a2 + 24) = 54;
          goto LABEL_36;
        case 2:
          *(_WORD *)(a2 + 24) = 75;
          break;
        case 4:
          *(_WORD *)(a2 + 24) = 76;
          break;
        case 6:
          *(_WORD *)(a2 + 24) = 77;
          break;
        default:
          goto LABEL_10;
      }
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 46) = v7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = v17;
      return (unsigned __int16)result;
    case 0xF:
      if ( v7 == 7 )
        goto LABEL_123;
      switch ( v16 & 7 )
      {
        case 0:
        case 2:
        case 3:
          goto LABEL_10;
        case 1:
          *(_WORD *)(a2 + 24) = 53;
          goto LABEL_36;
        case 4:
          *(_WORD *)(a2 + 24) = 10;
          goto LABEL_87;
        case 5:
          *(_WORD *)(a2 + 24) = 14;
LABEL_87:
          *(_BYTE *)(a2 + 41) = 1;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_WORD *)(a2 + 46) = v17;
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = 11;
          return (unsigned __int16)result;
        case 6:
          *(_WORD *)(a2 + 24) = 10;
          goto LABEL_84;
        case 7:
          *(_WORD *)(a2 + 24) = 14;
LABEL_84:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 126) = 8;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_WORD *)(a2 + 46) = v17;
          *(_BYTE *)(a2 + 121) = 1;
          break;
      }
      return (unsigned __int16)result;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 24) = v5 + 15;
      *(_WORD *)(a2 + 46) = v7;
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 125) = 0;
      *(_QWORD *)(a2 + 128) = v6;
      return (unsigned __int16)result;
    case 0x1E:
      v26 = v16 & 6;
      if ( v26 == 4 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 76;
        goto LABEL_62;
      }
      if ( v26 <= 4 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        if ( v26 )
          *(_WORD *)(a2 + 24) = 75;
        else
          *(_WORD *)(a2 + 24) = 74;
        goto LABEL_62;
      }
      if ( v26 == 6 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 77;
        goto LABEL_62;
      }
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(v13) = *(_WORD *)(a2 + 24);
      goto LABEL_134;
    case 0x1F:
      if ( v7 )
        goto LABEL_10;
      *(_BYTE *)(a2 + 45) = 9;
      *(_WORD *)(a2 + 24) = 33;
      *(_BYTE *)(a2 + 41) = 7;
      goto LABEL_9;
    case 0x29:
      LOWORD(result) = *(_WORD *)(a2 + 26);
      if ( v7 != 5 || v17 )
        goto LABEL_67;
      if ( v18 == 2 )
      {
        *(_WORD *)(a2 + 24) = 29;
      }
      else if ( v18 == 3 )
      {
        *(_WORD *)(a2 + 24) = 30;
      }
      else
      {
LABEL_67:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 31;
        *(_WORD *)(a2 + 46) = v7 + 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = v7 + v18;
        *(_BYTE *)(a2 + 121) = 4;
        *(_WORD *)(a2 + 126) = v17;
        *(_QWORD *)(a2 + 128) = 0;
      }
      return (unsigned __int16)result;
    case 0x2D:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 32;
      *(_WORD *)(a2 + 46) = v7 + 1 - v18;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = v7;
      *(_BYTE *)(a2 + 121) = 4;
      *(_WORD *)(a2 + 126) = v17;
      *(_QWORD *)(a2 + 136) = 0;
      return (unsigned __int16)result;
    case 0x2E:
      if ( v7 == 7 )
        goto LABEL_10;
      *(_WORD *)(a2 + 24) = 54;
      goto LABEL_54;
    case 0x2F:
      LOWORD(result) = *(_WORD *)(a2 + 26);
      if ( v7 != 7 )
      {
        v23 = v18 == 0;
        v27 = v18 - 1;
        *(_BYTE *)(a2 + 41) = 1;
        if ( v23 )
          v27 = 15;
        *(_DWORD *)(a2 + 28) |= v27;
        *(_WORD *)(a2 + 24) = 53;
        *(_WORD *)(a2 + 46) = 9;
        *(_BYTE *)(a2 + 81) = 4;
        *(_WORD *)(a2 + 86) = v7;
        *(_QWORD *)(a2 + 96) = 0;
        *(_BYTE *)(a2 + 121) = 4;
        *(_WORD *)(a2 + 126) = v17;
        *(_QWORD *)(a2 + 136) = 0;
        return (unsigned __int16)result;
      }
      *(_BYTE *)(a2 + 45) = 9;
      *(_WORD *)(a2 + 24) = 34;
      *(_BYTE *)(a2 + 41) = 7;
LABEL_9:
      v12 = get_wide_byte();
      ++*(_WORD *)(a2 + 26);
      *(_QWORD *)(a2 + 56) = v12 | (v6 << 16);
LABEL_10:
      LOWORD(v13) = *(_WORD *)(a2 + 24);
      goto LABEL_11;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
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
      *(_BYTE *)(a2 + 41) = 1;
      *(_QWORD *)(a2 + 144) = v16 & 7;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 24) = v5 + 15;
      *(_WORD *)(a2 + 46) = v7;
      *(_BYTE *)(a2 + 121) = 8;
      *(_BYTE *)(a2 + 125) = 0;
      *(_WORD *)(a2 + 126) = v17;
      return (unsigned __int16)result;
    case 0x3F:
      if ( v7 != 7 )
        goto LABEL_10;
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 34;
      *(_WORD *)(a2 + 46) = 9;
      return (unsigned __int16)result;
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
      LOWORD(result) = *(_WORD *)(a2 + 26);
      if ( v18 == 3 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        *(_WORD *)(a2 + 24) = v5 + 1;
        *(_BYTE *)(a2 + 45) = 0;
        LOWORD(result) = get_wide_byte();
        *(_BYTE *)(a2 + 81) = 1;
        LOWORD(v13) = result;
        LOWORD(result) = *(_WORD *)(a2 + 26);
        *(_WORD *)(a2 + 86) = v17;
        *(_BYTE *)(a2 + 121) = 1;
        *(_QWORD *)(a2 + 56) = (unsigned __int16)v13;
        LOWORD(v13) = *(_WORD *)(a2 + 24);
        LOWORD(result) = result + 1;
        *(_WORD *)(a2 + 26) = result;
        *(_WORD *)(a2 + 126) = v7;
        if ( (_WORD)v13 == 14 )
        {
          v30 = v39;
          v31 = (_DWORD *)(a2 + 120);
          for ( i = 10; i; --i )
            *v30++ = *v31++;
          v33 = (_DWORD *)(a2 + 120);
          v34 = (_DWORD *)(a2 + 40);
          for ( j = 9; j; --j )
            *v33++ = *v34++;
          v36 = (_DWORD *)(a2 + 40);
          v37 = v39;
          for ( k = 9; k; --k )
            *v36++ = *v37++;
        }
        else
        {
          if ( (unsigned __int16)v13 > 0xEu )
            goto LABEL_45;
          if ( (_WORD)v13 != 10 )
          {
            if ( (unsigned __int16)v13 > 0xAu )
            {
              if ( (_WORD)v13 != 13 )
                goto LABEL_45;
            }
            else if ( (unsigned __int16)(v13 - 5) > 1u )
            {
              goto LABEL_11;
            }
          }
        }
      }
      else
      {
        if ( (v16 & 4) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = v5 + 15;
          *(_WORD *)(a2 + 46) = v7;
          *(_BYTE *)(a2 + 121) = 9;
          *(_WORD *)(a2 + 126) = v17;
          *(_QWORD *)(a2 + 144) = 0;
          *(_QWORD *)(a2 + 128) = v16 & 3;
          return (unsigned __int16)result;
        }
        if ( v18 == 1 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = v5 + 1;
          *(_WORD *)(a2 + 46) = v7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v17;
          *(_BYTE *)(a2 + 121) = 5;
          *(_BYTE *)(a2 + 125) = 0;
          v29 = get_wide_byte();
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_QWORD *)(a2 + 128) = v29;
          v13 = *(unsigned __int16 *)(a2 + 24);
          LOWORD(result) = result + 1;
          *(_WORD *)(a2 + 26) = result;
          if ( (unsigned __int16)v13 > 0xEu )
            goto LABEL_45;
        }
        else
        {
          if ( v18 != 2 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = v5 + 15;
            *(_WORD *)(a2 + 46) = v7;
            *(_BYTE *)(a2 + 121) = 1;
            *(_WORD *)(a2 + 126) = v17;
            return (unsigned __int16)result;
          }
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = v5 + 1;
          *(_WORD *)(a2 + 46) = v7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v17;
          *(_BYTE *)(a2 + 121) = 2;
          *(_BYTE *)(a2 + 125) = 0;
          v19 = get_wide_byte();
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_QWORD *)(a2 + 136) = v19;
          v13 = *(unsigned __int16 *)(a2 + 24);
          LOWORD(result) = result + 1;
          *(_WORD *)(a2 + 26) = result;
          if ( (unsigned __int16)v13 > 0xEu )
            goto LABEL_45;
        }
        v20 = 25696;
        if ( !_bittest64(&v20, v13) )
          goto LABEL_11;
      }
      if ( v7 == v17 )
        return (unsigned __int16)result;
LABEL_27:
      *(_WORD *)(a2 + 24) = 0;
      return 0;
    case 0x4E:
      if ( v18 == 5 )
      {
        *(_WORD *)(a2 + 24) = 68;
      }
      else if ( v18 > 5 )
      {
        if ( v18 != 7 )
          goto LABEL_127;
        *(_WORD *)(a2 + 24) = 69;
      }
      else if ( v18 == 1 )
      {
        *(_WORD *)(a2 + 24) = 66;
      }
      else
      {
        if ( v18 != 3 )
          goto LABEL_127;
        *(_WORD *)(a2 + 24) = 67;
      }
      goto LABEL_44;
    case 0x4F:
      if ( v7 == 7 || v18 != 1 )
        goto LABEL_10;
      *(_WORD *)(a2 + 24) = 52;
LABEL_36:
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 46) = 9;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = v7;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 126) = v17;
      return (unsigned __int16)result;
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
      v21 = v5 + 1;
      *(_WORD *)(a2 + 24) = v21;
      if ( v21 == 14 )
        goto LABEL_27;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = v7;
      *(_BYTE *)(a2 + 81) = 1;
      result = ((v16 & 4) != 0) + 1LL;
      *(_WORD *)(a2 + 86) = v7;
      *(_BYTE *)(a2 + 121) = 9;
      *(_WORD *)(a2 + 126) = v17;
LABEL_30:
      *(_QWORD *)(a2 + 144) = result;
      *(_QWORD *)(a2 + 128) = v16 & 3;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      return (unsigned __int16)result;
    case 0x5E:
      v22 = v16 & 6;
      if ( (v16 & 1) == 0 )
      {
        if ( v22 == 4 )
        {
          *(_WORD *)(a2 + 24) = 76;
        }
        else if ( v22 > 4 )
        {
          if ( v22 != 6 )
          {
            *(_BYTE *)(a2 + 41) = 8;
            LOWORD(v13) = *(_WORD *)(a2 + 24);
            *(_QWORD *)(a2 + 64) = 4;
            *(_WORD *)(a2 + 46) = v7;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = v17;
            goto LABEL_11;
          }
          *(_WORD *)(a2 + 24) = 77;
        }
        else if ( (v16 & 6) != 0 )
        {
          *(_WORD *)(a2 + 24) = 75;
        }
        else
        {
          *(_WORD *)(a2 + 24) = 74;
        }
        *(_BYTE *)(a2 + 41) = 8;
        *(_QWORD *)(a2 + 64) = 4;
        *(_WORD *)(a2 + 46) = v7;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = v17;
        goto LABEL_45;
      }
      if ( v22 == 4 )
      {
        *(_WORD *)(a2 + 24) = 72;
        goto LABEL_44;
      }
      if ( v22 <= 4 )
      {
        if ( (v16 & 6) != 0 )
          *(_WORD *)(a2 + 24) = 71;
        else
          *(_WORD *)(a2 + 24) = 70;
        goto LABEL_44;
      }
      if ( v22 == 6 )
      {
        *(_WORD *)(a2 + 24) = 73;
LABEL_44:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v7;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = v7;
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 126) = v17;
        goto LABEL_45;
      }
LABEL_127:
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(v13) = *(_WORD *)(a2 + 24);
      *(_WORD *)(a2 + 46) = v7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = v7;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 126) = v17;
      goto LABEL_11;
    case 0x5F:
      switch ( wide_byte & 0x3F )
      {
        case 0:
        case 1:
        case 2:
          *(_WORD *)(a2 + 24) = 57;
          *(_QWORD *)(a2 + 48) = wide_byte & 3;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 10;
          return (unsigned __int16)result;
        case 3:
          *(_WORD *)(a2 + 24) = 58;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 10;
          *(_QWORD *)(a2 + 48) = 1;
          *(_BYTE *)(a2 + 81) = 10;
          *(_QWORD *)(a2 + 88) = 2;
          return (unsigned __int16)result;
        case 4:
        case 5:
          *(_WORD *)(a2 + 24) = 59;
          v28 = 0;
          *(_BYTE *)(a2 + 41) = 10;
          if ( (wide_byte & 1) != 0 )
            goto LABEL_98;
          goto LABEL_99;
        case 6:
        case 7:
          *(_WORD *)(a2 + 24) = 60;
          v28 = 0;
          *(_BYTE *)(a2 + 41) = 10;
          if ( (wide_byte & 1) != 0 )
            goto LABEL_98;
          goto LABEL_99;
        case 8:
        case 9:
          *(_WORD *)(a2 + 24) = 61;
          v28 = 0;
          *(_BYTE *)(a2 + 41) = 10;
          if ( (wide_byte & 1) != 0 )
            goto LABEL_98;
          goto LABEL_99;
        case 0xA:
        case 0xB:
          *(_WORD *)(a2 + 24) = 62;
          v28 = 0;
          *(_BYTE *)(a2 + 41) = 10;
          if ( (wide_byte & 1) != 0 )
            goto LABEL_98;
          goto LABEL_99;
        case 0xC:
        case 0xE:
          *(_WORD *)(a2 + 24) = 63;
          v28 = 0;
          *(_BYTE *)(a2 + 41) = 10;
          if ( (wide_byte & 2) != 0 )
            goto LABEL_98;
          goto LABEL_99;
        case 0xD:
        case 0xF:
          *(_WORD *)(a2 + 24) = 64;
          v28 = 0;
          *(_BYTE *)(a2 + 41) = 10;
          if ( (wide_byte & 2) != 0 )
LABEL_98:
            v28 = 3;
LABEL_99:
          *(_QWORD *)(a2 + 48) = v28;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          return (unsigned __int16)result;
        case 0x20:
          *(_WORD *)(a2 + 24) = 65;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          return (unsigned __int16)result;
        case 0x21:
          *(_WORD *)(a2 + 24) = 33;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = 9;
          return (unsigned __int16)result;
        case 0x22:
          *(_WORD *)(a2 + 24) = 55;
          goto LABEL_114;
        case 0x23:
          *(_WORD *)(a2 + 24) = 56;
LABEL_114:
          *(_BYTE *)(a2 + 41) = 1;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_WORD *)(a2 + 46) = 9;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = 2;
          break;
        case 0x24:
          *(_WORD *)(a2 + 24) = 36;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = 2;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = 4;
          return (unsigned __int16)result;
        case 0x25:
          *(_WORD *)(a2 + 24) = 35;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          return (unsigned __int16)result;
        default:
          goto LABEL_10;
      }
      return (unsigned __int16)result;
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = v5 + 15;
      *(_WORD *)(a2 + 46) = v7;
      result = ((v16 & 4) != 0) + 3LL;
      *(_BYTE *)(a2 + 121) = 9;
      *(_WORD *)(a2 + 126) = v17;
      goto LABEL_30;
    case 0x6F:
      if ( v7 == 7 )
        goto LABEL_10;
      *(_WORD *)(a2 + 24) = 52;
LABEL_54:
      v23 = v18 == 0;
      v24 = v18 - 1;
      *(_BYTE *)(a2 + 41) = 1;
      if ( v23 )
        v24 = 15;
      *(_WORD *)(a2 + 46) = 9;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_DWORD *)(a2 + 28) |= v24;
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 86) = v7;
      *(_QWORD *)(a2 + 96) = 0;
      *(_BYTE *)(a2 + 121) = 4;
      *(_WORD *)(a2 + 126) = v17;
      *(_QWORD *)(a2 + 136) = 0;
      return (unsigned __int16)result;
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7B:
    case 0x7C:
    case 0x7D:
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 24) = v5 + 15;
      *(_WORD *)(a2 + 46) = v7;
      *(_BYTE *)(a2 + 121) = 2;
      *(_BYTE *)(a2 + 125) = 0;
      *(_QWORD *)(a2 + 136) = v6;
      return (unsigned __int16)result;
    case 0x7E:
      v25 = v16 & 6;
      if ( v25 == 4 )
      {
        *(_WORD *)(a2 + 24) = 76;
        goto LABEL_61;
      }
      if ( v25 <= 4 )
      {
        if ( v25 )
          *(_WORD *)(a2 + 24) = 75;
        else
          *(_WORD *)(a2 + 24) = 74;
LABEL_61:
        *(_BYTE *)(a2 + 41) = 8;
        *(_QWORD *)(a2 + 64) = 4;
LABEL_62:
        *(_WORD *)(a2 + 46) = v7;
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = *(_DWORD *)(a1 + 120) & 0xF;
        goto LABEL_45;
      }
      if ( v25 == 6 )
      {
        *(_WORD *)(a2 + 24) = 77;
        goto LABEL_61;
      }
      *(_BYTE *)(a2 + 41) = 8;
      LOWORD(v13) = *(_WORD *)(a2 + 24);
      *(_QWORD *)(a2 + 64) = 4;
LABEL_134:
      *(_WORD *)(a2 + 46) = v7;
      *(_BYTE *)(a2 + 81) = 5;
      *(_QWORD *)(a2 + 88) = *(_DWORD *)(a1 + 120) & 0xF;
LABEL_11:
      if ( (_WORD)v13 )
      {
LABEL_45:
        LOWORD(result) = *(_WORD *)(a2 + 26);
        return (unsigned __int16)result;
      }
      return 0;
    default:
      goto LABEL_10;
  }
}

