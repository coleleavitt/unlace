__int64 __fastcall sub_6FE0(__int64 a1, __int64 a2, char a3, double a4)
{
  __int64 result; // rax
  void *v6; // rcx
  void *v7; // rdx
  int v8; // esi
  __int16 v9; // dx
  int v10; // edx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  unsigned __int8 next_byte; // al
  int v18; // edx
  char v19; // al
  __int16 v20; // ax
  unsigned __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // ax
  char v26; // cl
  __int64 v27; // rdx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  __int16 v33; // dx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  __int16 v38; // cx
  int v39; // eax

  result = *(unsigned int *)(a1 + 224);
  if ( (result & 0x20) != 0 )
    return result;
  if ( (result & 0x10) != 0 )
  {
    if ( a3 )
    {
      v6 = &unk_10AE0;
      v7 = &unk_10C60;
    }
    else
    {
      v6 = &unk_105C0;
      v7 = &unk_10720;
    }
    return sub_6F60(a1, a2, (__int64)v7, (__int64)v6, a4);
  }
  *(_BYTE *)(a1 + 234) = a3;
  result = insn_get_next_byte();
  v8 = (unsigned __int8)result;
  *(_DWORD *)(a1 + 228) = (unsigned __int8)result;
  switch ( (int)(unsigned __int8)result >> 4 )
  {
    case 0:
    case 1:
      result &= 0xFu;
      goto LABEL_23;
    case 2:
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 85) = 1;
      v23 = *(_DWORD *)(a1 + 228);
      if ( (v23 & 4) != 0 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        v24 = v23 & 8;
        if ( *(_BYTE *)(a1 + 234) )
          v25 = (v24 == 0) + 19;
        else
          v25 = (v24 == 0) + 21;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        v25 = 14 - *(unsigned __int8 *)(a1 + 234);
      }
      *(_WORD *)(a2 + 46) = v25;
      result = *(_DWORD *)(a1 + 228) & 0xF;
      switch ( *(_DWORD *)(a1 + 228) & 0xF )
      {
        case 1:
          *(_BYTE *)(a2 + 81) = 5;
          *(_WORD *)(a2 + 24) = 42;
          result = (unsigned __int16)insn_get_next_word();
          *(_QWORD *)(a2 + 88) = (unsigned __int16)result;
          break;
        case 2:
          *(_BYTE *)(a2 + 41) = 2;
          *(_WORD *)(a2 + 24) = 43;
          *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word();
          goto LABEL_12;
        case 3:
          *(_WORD *)(a2 + 24) = 29;
          break;
        case 4:
        case 0xC:
          *(_WORD *)(a2 + 24) = 28;
          break;
        case 5:
        case 0xD:
          *(_WORD *)(a2 + 24) = 22;
          break;
        case 6:
        case 0xE:
          *(_WORD *)(a2 + 24) = 44;
          goto LABEL_70;
        case 9:
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 24) = 3;
          v32 = *(unsigned __int8 *)(a1 + 234);
          result = (unsigned int)(14 - v32);
          *(_WORD *)(a2 + 86) = 14 - v32;
          break;
        case 0xA:
          *(_BYTE *)(a2 + 81) = 2;
          *(_WORD *)(a2 + 24) = 43;
          result = (unsigned __int16)insn_get_next_word();
          *(_QWORD *)(a2 + 96) = (unsigned __int16)result;
          break;
        case 0xB:
          *(_WORD *)(a2 + 24) = 23;
          break;
        default:
          return result;
      }
      return result;
    case 3:
      result &= 0xFu;
      if ( (_BYTE)result == 6 )
      {
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 24) = 44;
        *(_WORD *)(a2 + 46) = 14 - *(unsigned __int8 *)(a1 + 234);
        *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
LABEL_70:
        *(_BYTE *)(a2 + 81) = 5;
        result = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(a2 + 88) = (unsigned __int8)result;
      }
      else if ( (unsigned __int8)result > 6u )
      {
LABEL_23:
        if ( (_BYTE)result == 9 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 3;
          v13 = *(unsigned __int8 *)(a1 + 234);
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = 14 - v13;
          v14 = *(_DWORD *)(a1 + 228);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 1;
          result = (v14 >> 4) & 3;
          *(_WORD *)(a2 + 86) = result + 8;
          if ( (_WORD)result == 3 )
          {
            *(_WORD *)(a2 + 86) = 12;
            return 12;
          }
        }
      }
      else
      {
        if ( (_BYTE)result == 4 )
        {
          *(_WORD *)(a2 + 24) = 28;
        }
        else
        {
          if ( (_BYTE)result != 5 )
            return result;
          *(_WORD *)(a2 + 24) = 22;
        }
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 46) = 14 - *(unsigned __int8 *)(a1 + 234);
        result = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(a2 + 56) = (unsigned __int8)result;
      }
      return result;
    case 4:
    case 5:
      if ( (result & 6) == 4 )
      {
        *(_WORD *)(a2 + 24) = 43;
        sub_6E50(a1, a2 + 40);
        v34 = *(_DWORD *)(a1 + 228);
        *(_BYTE *)(a2 + 81) = 1;
        v35 = v34 & 1;
        if ( *(_BYTE *)(a1 + 234) )
          result = (unsigned int)(20 - v35);
        else
          result = (unsigned int)(22 - v35);
        *(_WORD *)(a2 + 86) = result;
        return result;
      }
      result &= 7u;
      if ( (_BYTE)result != 6 )
        return result;
      *(_BYTE *)(a2 + 41) = 1;
      v15 = (v8 >> 3) & 7;
      goto LABEL_29;
    case 6:
      if ( (result & 6) == 4 )
        return result;
      if ( (result & 7) != 6 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        v19 = result & 8;
        if ( *(_BYTE *)(a1 + 234) )
          v20 = (v19 == 0) + 19;
        else
          v20 = (v19 == 0) + 21;
        *(_WORD *)(a2 + 46) = v20;
        result = *(_DWORD *)(a1 + 228) & 7;
        if ( (_DWORD)result == 6 )
        {
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = 10;
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 1;
          if ( (_DWORD)result == 4 )
          {
            result = 22;
            if ( *(_BYTE *)(a1 + 234) )
              result = 20;
          }
          else if ( (_DWORD)result == 5 )
          {
            result = 21;
            if ( *(_BYTE *)(a1 + 234) )
              result = 19;
          }
          *(_WORD *)(a2 + 86) = result;
        }
        goto LABEL_46;
      }
      if ( (result & 0x38) == 0x20 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        LOWORD(v15) = 22;
        if ( *(_BYTE *)(a1 + 234) )
          LOWORD(v15) = 20;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        LOWORD(v15) = 21;
        if ( *(_BYTE *)(a1 + 234) )
          LOWORD(v15) = 19;
      }
LABEL_29:
      *(_WORD *)(a2 + 46) = v15;
      v16 = *(_DWORD *)(a1 + 228);
      if ( v16 == 102 )
      {
        *(_WORD *)(a2 + 46) = 4;
        v16 = *(_DWORD *)(a1 + 228);
      }
      if ( v16 == 110 )
        *(_WORD *)(a2 + 46) = 5;
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 86) = 14 - *(unsigned __int8 *)(a1 + 234);
      *(_QWORD *)(a2 + 96) = (unsigned __int8)insn_get_next_byte();
      *(_WORD *)(a2 + 24) = 43;
      return 43;
    case 7:
      v21 = result & 0xF;
      if ( (unsigned __int8)v21 > 0xDu )
      {
        if ( (_BYTE)v21 == 14 )
        {
          *(_BYTE *)(a2 + 81) = 4;
          *(_WORD *)(a2 + 86) = 14 - *(unsigned __int8 *)(a1 + 234);
          LOBYTE(result) = insn_get_next_byte();
          *(_BYTE *)(a2 + 44) &= ~8u;
          result = (unsigned __int8)result;
          *(_BYTE *)(a2 + 41) = 1;
          *(_QWORD *)(a2 + 96) = (unsigned __int8)result;
          *(_WORD *)(a2 + 46) = 7;
LABEL_46:
          *(_WORD *)(a2 + 24) = 43;
        }
      }
      else if ( (unsigned __int8)v21 > 0xBu )
      {
        *(_BYTE *)(a2 + 81) = 1;
        result &= 1u;
        if ( *(_BYTE *)(a1 + 234) )
          v33 = 20 - result;
        else
          v33 = 22 - result;
        *(_WORD *)(a2 + 86) = v33;
        *(_BYTE *)(a2 + 44) &= ~8u;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 7;
        *(_WORD *)(a2 + 24) = 43;
      }
      else
      {
        result = -192;
        if ( !_bittest64(&result, v21) )
        {
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 14 - *(unsigned __int8 *)(a1 + 234);
          *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
          v22 = *(_DWORD *)(a1 + 228) & 7;
          if ( v22 == 6 )
          {
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = 10;
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 1;
            if ( v22 == 4 )
            {
              LOWORD(v22) = 22;
              if ( *(_BYTE *)(a1 + 234) )
                LOWORD(v22) = 20;
            }
            else if ( v22 == 5 )
            {
              LOWORD(v22) = 21;
              if ( *(_BYTE *)(a1 + 234) )
                LOWORD(v22) = 19;
            }
            *(_WORD *)(a2 + 86) = v22;
            *(_WORD *)(a2 + 24) = 43;
          }
          result = *(unsigned int *)(a1 + 228);
          if ( (_DWORD)result == 116 )
          {
            *(_WORD *)(a2 + 86) = 4;
            result = *(unsigned int *)(a1 + 228);
          }
          if ( (_DWORD)result == 117 )
            *(_WORD *)(a2 + 86) = 5;
        }
      }
      return result;
    case 8:
    case 9:
    case 10:
    case 11:
      if ( (result & 4) != 0 )
      {
        result = (unsigned int)~(_DWORD)result;
        if ( (result & 7) != 0 )
        {
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = word_110D0[(v8 >> 3) & 7];
          *(_WORD *)(a2 + 46) = 7;
          v11 = *(_DWORD *)(a1 + 228);
          if ( (v11 & 7) == 6 )
          {
            *(_BYTE *)(a2 + 81) = 4;
            *(_WORD *)(a2 + 86) = 14 - *(unsigned __int8 *)(a1 + 234);
            result = (unsigned __int8)insn_get_next_byte();
            *(_QWORD *)(a2 + 96) = (unsigned __int8)result;
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 1;
            result = v11 & 1;
            if ( *(_BYTE *)(a1 + 234) )
              v12 = 20 - result;
            else
              v12 = 22 - result;
            *(_WORD *)(a2 + 86) = v12;
          }
        }
      }
      return result;
    case 12:
      if ( (unsigned __int8)result == 203 )
      {
        *(_BYTE *)(a2 + 81) = 4;
        *(_WORD *)(a2 + 86) = 14 - *(unsigned __int8 *)(a1 + 234);
        *(_QWORD *)(a2 + 96) = (unsigned __int8)insn_get_next_byte();
        next_byte = insn_get_next_byte();
        v18 = next_byte;
        result = next_byte & 7;
        *(_DWORD *)(a1 + 228) = v18;
        if ( (_BYTE)result == 6 )
        {
          if ( v18 >> 6 )
          {
            *(_BYTE *)(a2 + 41) = 5;
            *(_WORD *)(a2 + 24) = word_11048[v18 >> 6];
            result = (*(int *)(a1 + 228) >> 3) & 7;
            *(_QWORD *)(a2 + 48) = result;
          }
          else
          {
            *(_BYTE *)(a2 + 44) &= ~8u;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = aYW[v18 >> 3];
            *(_WORD *)(a2 + 46) = 7;
            return 7;
          }
        }
      }
      return result;
    case 13:
      return result;
    case 14:
      LODWORD(result) = result & 0xF;
      switch ( (char)result )
      {
        case 1:
          *(_WORD *)(a2 + 24) = 50;
          goto LABEL_8;
        case 3:
          *(_BYTE *)(a2 + 41) = 3;
          *(_WORD *)(a2 + 24) = 93;
          *(_WORD *)(a2 + 46) = 12;
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 81) = 1;
          v31 = *(unsigned __int8 *)(a1 + 234);
          *(_BYTE *)(a2 + 85) = 1;
          result = (unsigned int)(14 - v31);
          *(_WORD *)(a2 + 86) = 14 - v31;
          v8 = *(_DWORD *)(a1 + 228);
          goto LABEL_10;
        case 5:
          *(_WORD *)(a2 + 24) = 51;
LABEL_8:
          *(_BYTE *)(a2 + 41) = 1;
          v9 = *(unsigned __int8 *)(a1 + 234);
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = 14 - v9;
          JUMPOUT(0x7079);
        case 9:
          *(_BYTE *)(a2 + 41) = 8;
          *(_WORD *)(a2 + 24) = 102;
          *(_WORD *)(a2 + 46) = 8;
          *(_BYTE *)(a2 + 81) = 3;
          v30 = *(unsigned __int8 *)(a1 + 234);
          *(_BYTE *)(a2 + 85) = 9;
          result = (unsigned int)(14 - v30);
          *(_WORD *)(a2 + 86) = 14 - v30;
          v8 = *(_DWORD *)(a1 + 228);
          goto LABEL_10;
        case 13:
          result = insn_get_next_byte();
          v8 = (unsigned __int8)result;
          v26 = result - 66;
          *(_DWORD *)(a1 + 228) = (unsigned __int8)result;
          if ( (unsigned __int8)(result - 66) > 0x38u )
            goto LABEL_10;
          v27 = 1LL << v26;
          if ( ((1LL << v26) & 0x101010101010101LL) == 0 )
          {
            if ( (v27 & 0x8080000000LL) == 0 )
            {
              result = 0x4040000000LL;
              if ( (v27 & 0x4040000000LL) == 0 )
                return result;
              *(_WORD *)(a2 + 24) = 27;
              v28 = *(_DWORD *)(a1 + 228);
              *(_BYTE *)(a2 + 41) = 1;
              v29 = v28 & 8;
              if ( *(_BYTE *)(a1 + 234) )
              {
                result = 20;
                if ( v29 )
                  result = 19;
              }
              else
              {
                result = 22;
                if ( v29 )
                  result = 21;
              }
              *(_WORD *)(a2 + 46) = result;
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = 1;
              v8 = *(_DWORD *)(a1 + 228);
              goto LABEL_10;
            }
            *(_BYTE *)(a2 + 41) = 3;
            *(_WORD *)(a2 + 24) = 48;
            *(_WORD *)(a2 + 46) = 1;
            v36 = *(_DWORD *)(a1 + 228);
            *(_BYTE *)(a2 + 81) = 1;
            v37 = v36 & 8;
            if ( *(_BYTE *)(a1 + 234) )
            {
              result = 20;
              if ( v37 )
                result = 19;
            }
            else
            {
              result = 22;
              if ( v37 )
                result = 21;
            }
            *(_WORD *)(a2 + 86) = result;
            goto LABEL_123;
          }
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = (result & 8) == 0 ? 130 : 2;
          v38 = *(unsigned __int8 *)(a1 + 234);
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = 14 - v38;
          v39 = *(_DWORD *)(a1 + 228);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 1;
          result = (v39 >> 4) & 3;
          if ( (_WORD)result == 3 )
          {
            *(_WORD *)(a2 + 86) = 12;
            goto LABEL_123;
          }
          result = (unsigned int)(result + 8);
          *(_WORD *)(a2 + 86) = result;
          if ( (_WORD)result != 10 )
          {
LABEL_123:
            v8 = *(_DWORD *)(a1 + 228);
            goto LABEL_10;
          }
          result = *(unsigned __int8 *)(a1 + 234);
          *(_WORD *)(a2 + 86) = 14 - result;
          v8 = *(_DWORD *)(a1 + 228);
LABEL_10:
          if ( v8 == 249 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 43;
            *(_WORD *)(a2 + 46) = 12;
            *(_BYTE *)(a2 + 45) = 1;
LABEL_12:
            *(_BYTE *)(a2 + 81) = 1;
            v10 = *(unsigned __int8 *)(a1 + 234);
            *(_BYTE *)(a2 + 85) = 1;
            result = (unsigned int)(14 - v10);
            *(_WORD *)(a2 + 86) = 14 - v10;
          }
          return result;
        default:
          return (unsigned int)result;
      }
    case 15:
      goto LABEL_10;
  }
}

