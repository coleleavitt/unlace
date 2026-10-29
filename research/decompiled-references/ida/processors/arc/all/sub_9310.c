__int64 __fastcall sub_9310(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edx
  int v5; // r15d
  int v7; // r12d
  int v8; // r14d
  int v9; // r8d
  int v10; // r9d
  int v11; // esi
  bool v12; // cl
  bool v13; // r13
  bool v14; // r10
  bool v15; // al
  int v16; // r10d
  int v17; // r10d
  __int16 v18; // di
  __int64 result; // rax
  int next_dword; // eax
  int v22; // [rsp+8h] [rbp-50h]
  unsigned int v23; // [rsp+Ch] [rbp-4Ch]
  int v24; // [rsp+10h] [rbp-48h]
  int v25; // [rsp+14h] [rbp-44h]
  bool v26; // [rsp+1Bh] [rbp-3Dh]

  v4 = a3 >> 27;
  v5 = (a3 >> 21) & 0x3F;
  v7 = (a3 >> 15) & 0x3F;
  v8 = (a3 >> 9) & 0x3F;
  v9 = v5;
  v10 = a3 & 0x1FF;
  v11 = v8;
  if ( (a3 & 0x100) != 0 )
    v10 = a3 | 0xFFFFFE00;
  v22 = (a3 >> 15) & 0x3F;
  *(_DWORD *)(a2 + 28) = a3 & 0x11F;
  switch ( v4 )
  {
    case 0u:
      *(_WORD *)(a2 + 24) = 1;
      *(_DWORD *)(a2 + 28) = a3 & 0x13F;
      goto LABEL_5;
    case 1u:
      if ( (a3 & 0x2000) != 0 )
      {
        *(_WORD *)(a2 + 24) = 2;
LABEL_5:
        v12 = v5 == 61;
        v13 = v5 == 61 || v7 == 61;
        if ( v13 )
        {
          v13 = v8 == 63;
          v14 = v8 == 62;
LABEL_7:
          *(_DWORD *)(a2 + 28) = 256;
          goto LABEL_8;
        }
        if ( v8 == 61 )
        {
          v14 = 0;
          v12 = 0;
          v11 = 61;
          goto LABEL_7;
        }
        v13 = v8 == 63;
        v14 = v8 == 62;
        v12 = 0;
      }
      else
      {
        v12 = v5 == 61;
        *(_WORD *)(a2 + 24) = 1;
        v14 = 0;
        v13 = v5 == 61 || v7 == 61;
        if ( v13 )
        {
          v13 = 0;
          goto LABEL_7;
        }
LABEL_107:
        v12 = 0;
      }
LABEL_8:
      v15 = v14 || v7 == 62;
      v16 = 0;
      if ( !v13 && v7 != 63 )
      {
        v16 = *(_DWORD *)(a2 + 28);
        v13 = 0;
      }
      *(_DWORD *)(a2 + 28) = v16;
      v17 = 0;
      if ( v15 )
      {
        v26 = v12;
        v25 = v9;
        v24 = v10;
        v23 = v4;
        next_dword = insn_get_next_dword(a2);
        v12 = v26;
        v9 = v25;
        v10 = v24;
        v17 = next_dword;
        v4 = v23;
      }
      v18 = *(_WORD *)(a2 + 24);
      switch ( v18 )
      {
        case 5:
          if ( !v4 )
          {
            v22 = -1;
            goto LABEL_24;
          }
          v22 = -1;
          if ( v4 - 1 > 1 )
            goto LABEL_17;
          goto LABEL_31;
        case 19:
          result = 0;
          if ( v7 == v11 )
          {
            if ( v11 <= 60 )
            {
              *(_WORD *)(a2 + 24) = 29;
            }
            else
            {
              v10 *= 2;
              v17 *= 2;
              *(_WORD *)(a2 + 24) = 27;
            }
            result = 1;
          }
          goto LABEL_42;
        case 20:
          result = 0;
          if ( v7 == v11 )
          {
            *(_WORD *)(a2 + 24) = 30;
            result = 1;
          }
          goto LABEL_42;
        case 23:
        case 24:
          result = 0;
          if ( v7 == v11 )
          {
            *(_WORD *)(a2 + 24) = 27;
            result = 1;
          }
          goto LABEL_42;
        case 26:
          result = 0;
          if ( a3 == 0x7FFFFFFF )
          {
            *(_DWORD *)(a2 + 28) = 0;
            *(_WORD *)(a2 + 24) = 28;
            return result;
          }
LABEL_42:
          if ( !v4 )
          {
LABEL_24:
            *(_BYTE *)(a2 + 45) = 2;
            if ( v9 == 63 || v12 )
            {
              *(_BYTE *)(a2 + 41) = 5;
              *(_QWORD *)(a2 + 48) = v10;
            }
            else if ( v9 == 62 )
            {
              *(_QWORD *)(a2 + 48) = v17;
              *(_WORD *)(a2 + 41) = 1029;
            }
            else
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = v9;
            }
            return sub_90D0(a1, a2, v22, v11, a2 + 80, v10, v17, 0);
          }
          if ( v4 - 1 <= 1 )
          {
            v18 = *(_WORD *)(a2 + 24);
LABEL_31:
            if ( v18 != 1 )
            {
              if ( v18 == 3 )
              {
                v8 = (a3 >> 21) & 0x3F;
                v9 = v11;
              }
              else
              {
                v8 = 0;
                if ( v18 == 4 )
                  v9 = v11;
              }
            }
            *(_DWORD *)(a2 + 28) = v8;
            *(_BYTE *)(a2 + 45) = 2;
            if ( (v9 & 0xFFFFFFFD) == 0x3D )
            {
              *(_BYTE *)(a2 + 41) = 5;
              *(_QWORD *)(a2 + 48) = v10;
            }
            else if ( v9 == 62 )
            {
              *(_QWORD *)(a2 + 48) = v17;
              *(_WORD *)(a2 + 41) = 1029;
            }
            else
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = v9;
            }
            return sub_90D0(a1, a2, v22, 63, a2 + 80, v10, v17, ((v18 - 2) & 0xFFFD) == 0);
          }
          if ( v4 == 7 )
          {
LABEL_66:
            *(_BYTE *)(a2 + 45) = 2;
            result = v22 & 0xFFFFFFFD;
            if ( (_DWORD)result == 61 )
            {
              *(_BYTE *)(a2 + 41) = 7;
              *(_QWORD *)(a2 + 56) = 4 * v10;
            }
            else if ( v22 == 62 )
            {
              result = (4 * v17) & 0x7FFFFFC;
              *(_WORD *)(a2 + 41) = 1031;
              *(_QWORD *)(a2 + 56) = result;
            }
            else
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = v22;
              return (unsigned __int16)v22;
            }
            return result;
          }
LABEL_19:
          *(_BYTE *)(a2 + 45) = 2;
          if ( v9 == 63 || v12 )
          {
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = 0;
          }
          else if ( v9 == 62 )
          {
            *(_QWORD *)(a2 + 48) = v17;
            *(_WORD *)(a2 + 41) = 1029;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = v9;
          }
          if ( v22 != -1 )
          {
            *(_BYTE *)(a2 + 85) = 2;
            if ( (v22 & 0xFFFFFFFD) == 0x3D )
            {
              *(_BYTE *)(a2 + 81) = 5;
              *(_QWORD *)(a2 + 88) = v10;
            }
            else if ( v22 == 62 )
            {
              *(_QWORD *)(a2 + 88) = v17;
              *(_WORD *)(a2 + 81) = 1029;
            }
            else
            {
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = v22;
            }
          }
          break;
        default:
          if ( !v4 )
            goto LABEL_24;
          if ( v4 - 1 <= 1 )
            goto LABEL_31;
LABEL_17:
          if ( v4 == 7 )
            goto LABEL_66;
          result = 0;
          goto LABEL_19;
      }
LABEL_49:
      if ( v11 != -1 && !(_DWORD)result )
      {
        *(_BYTE *)(a2 + 125) = 2;
        if ( v11 == 61 || v13 )
        {
          *(_BYTE *)(a2 + 121) = 5;
          *(_QWORD *)(a2 + 128) = v10;
        }
        else if ( v11 == 62 )
        {
          *(_QWORD *)(a2 + 128) = v17;
          *(_WORD *)(a2 + 121) = 1029;
          return 1029;
        }
        else
        {
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = v11;
        }
      }
      return result;
    case 2u:
      if ( (a3 & 0x2000000) != 0 )
      {
        *(_WORD *)(a2 + 24) = 4;
      }
      else
      {
        *(_WORD *)(a2 + 24) = 3;
        *(_DWORD *)(a2 + 28) = (a3 >> 20) & 0x3E;
      }
      goto LABEL_5;
    case 3u:
      switch ( v8 )
      {
        case 0:
          *(_WORD *)(a2 + 24) = 5;
          if ( v7 != 61 )
          {
            v9 = (a3 >> 15) & 0x3F;
            v14 = 0;
            v13 = 0;
            v11 = -1;
            v12 = 0;
            goto LABEL_8;
          }
          v14 = 0;
          v13 = 0;
          v11 = -1;
          v12 = 1;
          v9 = 61;
          goto LABEL_7;
        case 1:
          *(_WORD *)(a2 + 24) = 6;
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
          goto LABEL_105;
        case 2:
          *(_WORD *)(a2 + 24) = 7;
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
          goto LABEL_105;
        case 3:
          *(_WORD *)(a2 + 24) = 12;
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
          goto LABEL_105;
        case 4:
          *(_WORD *)(a2 + 24) = 13;
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
          goto LABEL_105;
        case 5:
          *(_WORD *)(a2 + 24) = 8;
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
          goto LABEL_105;
        case 6:
          *(_WORD *)(a2 + 24) = 9;
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
          goto LABEL_105;
        case 7:
          *(_WORD *)(a2 + 24) = 10;
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
          goto LABEL_105;
        case 8:
          *(_WORD *)(a2 + 24) = 11;
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
          goto LABEL_105;
        case 9:
          *(_WORD *)(a2 + 24) = 39;
          goto LABEL_104;
        case 10:
          *(_WORD *)(a2 + 24) = 40;
          goto LABEL_104;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
LABEL_104:
          v12 = v5 == 61;
          if ( v7 == 61 )
            goto LABEL_111;
LABEL_105:
          if ( !v12 )
          {
            v14 = 0;
            v13 = 0;
            v11 = -1;
            goto LABEL_107;
          }
LABEL_111:
          v14 = 0;
          v13 = 0;
          v11 = -1;
          goto LABEL_7;
        case 63:
          if ( v10 == 1 )
          {
            LOWORD(result) = 32;
          }
          else if ( v10 == 2 )
          {
            LOWORD(result) = 33;
          }
          else
          {
            result = 31;
            if ( v10 )
              return result;
          }
          *(_WORD *)(a2 + 24) = result;
          *(_DWORD *)(a2 + 28) = 0;
          v13 = 0;
          v11 = -1;
          result = 0;
          v17 = 0;
          break;
      }
      goto LABEL_49;
    case 4u:
    case 5u:
    case 6u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
      goto LABEL_5;
    case 7u:
      *(_WORD *)(a2 + 24) = ((a3 & 0x200) != 0) + 17;
      *(_DWORD *)(a2 + 28) = a3 & 0x17F;
      goto LABEL_5;
    case 8u:
      *(_WORD *)(a2 + 24) = 19;
      goto LABEL_5;
    case 9u:
      *(_WORD *)(a2 + 24) = 20;
      goto LABEL_5;
    case 0xAu:
      *(_WORD *)(a2 + 24) = 21;
      goto LABEL_5;
    case 0xBu:
      *(_WORD *)(a2 + 24) = 22;
      goto LABEL_5;
    case 0xCu:
      *(_WORD *)(a2 + 24) = 23;
      goto LABEL_5;
    case 0xDu:
      *(_WORD *)(a2 + 24) = 24;
      goto LABEL_5;
    case 0xEu:
      *(_WORD *)(a2 + 24) = 25;
      goto LABEL_5;
    case 0xFu:
      *(_WORD *)(a2 + 24) = 26;
      goto LABEL_5;
    case 0x10u:
      *(_WORD *)(a2 + 24) = 34;
      goto LABEL_5;
    case 0x11u:
      *(_WORD *)(a2 + 24) = 7;
      goto LABEL_5;
    case 0x12u:
      *(_WORD *)(a2 + 24) = 6;
      goto LABEL_5;
    case 0x13u:
      *(_WORD *)(a2 + 24) = 12;
      goto LABEL_5;
    case 0x14u:
      *(_WORD *)(a2 + 24) = 35;
      goto LABEL_5;
    case 0x15u:
      *(_WORD *)(a2 + 24) = 36;
      goto LABEL_5;
    case 0x1Eu:
      *(_WORD *)(a2 + 24) = 37;
      goto LABEL_5;
    case 0x1Fu:
      *(_WORD *)(a2 + 24) = 38;
      goto LABEL_5;
  }
}

