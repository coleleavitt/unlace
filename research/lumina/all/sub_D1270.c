__int64 __fastcall sub_D1270(unsigned __int8 *a1, int *a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // edx
  int v6; // r10d
  __int64 v7; // r8
  int v8; // edx
  int v9; // ecx
  int v10; // r10d
  __int64 v11; // r8
  unsigned __int8 v12; // al
  unsigned __int8 v13; // dl
  __int64 v14; // rdx
  unsigned __int8 *v15; // r8
  __int64 v16; // r8
  unsigned __int8 *v17; // rdx
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  unsigned __int8 *v23; // rdx
  __int64 v24; // r9
  unsigned __int8 i; // dl
  int v26; // edx
  int v27; // edx
  int v28; // edx
  unsigned __int8 v29; // cl
  unsigned int v30; // [rsp+0h] [rbp-4h]

  v2 = *a1;
  switch ( *a1 )
  {
    case 0u:
      *a2 = 184;
      return 0;
    case 9u:
    case 0xAu:
    case 0xCu:
    case 0xDu:
    case 0x20u:
      result = 1;
      if ( (byte_1BEF00[a1[1]] & 1) != 0 )
      {
        do
          result = (unsigned int)(result + 1);
        while ( (byte_1BEF00[a1[(int)result]] & 1) != 0 );
      }
      goto LABEL_57;
    case 0x21u:
      if ( a1[1] == 61 )
        goto LABEL_101;
      goto LABEL_6;
    case 0x22u:
    case 0x27u:
    case 0x60u:
      v9 = a1[1];
      v10 = 1;
      v11 = 1;
      if ( !a1[1] )
        goto LABEL_113;
      while ( 2 )
      {
        result = (unsigned int)(v10 + 1);
        if ( v2 != v9 )
          goto LABEL_24;
        if ( (_BYTE)v2 == a1[v11 + 1] )
        {
          result = (unsigned int)(v10 + 2);
LABEL_24:
          v11 = (int)result;
          v10 = result;
          v9 = a1[(int)result];
          if ( !a1[(int)result] )
            goto LABEL_114;
          continue;
        }
        break;
      }
      if ( v2 == 39 )
        *a2 = 117;
      else
LABEL_5:
        *a2 = 59;
      return result;
    case 0x23u:
    case 0x24u:
    case 0x3Au:
    case 0x40u:
      *a2 = 156;
      v5 = a1[1];
      if ( !a1[1] )
      {
LABEL_113:
        result = 1;
        goto LABEL_114;
      }
      v6 = 0;
      result = 1;
      v7 = 1;
      while ( (byte_1BEF00[v5] & 0x46) != 0 )
      {
        ++v6;
LABEL_10:
        result = (unsigned int)(result + 1);
        v7 = (int)result;
        v5 = a1[(int)result];
        if ( !a1[(int)result] )
          goto LABEL_115;
      }
      if ( v5 != 40 || v6 <= 0 )
      {
        if ( v5 == 58 && a1[v7 + 1] == 58 )
        {
          LODWORD(result) = result + 1;
          goto LABEL_10;
        }
LABEL_115:
        if ( v6 )
          return result;
LABEL_114:
        *a2 = 184;
        return result;
      }
      while ( 1 )
      {
        v8 = a1[(int)result + 1];
        if ( !a1[(int)result + 1] )
          goto LABEL_21;
        if ( (byte_1BEF00[a1[(int)result + 1]] & 1) != 0 )
          break;
        if ( v8 == 41 )
          return (unsigned int)(result + 2);
        LODWORD(result) = result + 1;
      }
      if ( v8 != 41 )
      {
LABEL_21:
        *a2 = 184;
        return (unsigned int)(result + 1);
      }
      return (unsigned int)(result + 2);
    case 0x25u:
      *a2 = 110;
      return 1;
    case 0x26u:
      *a2 = 102;
      return 1;
    case 0x28u:
      *a2 = 22;
      return 1;
    case 0x29u:
      *a2 = 23;
      return 1;
    case 0x2Au:
      *a2 = 108;
      return 1;
    case 0x2Bu:
      *a2 = 106;
      return 1;
    case 0x2Cu:
      *a2 = 25;
      return 1;
    case 0x2Du:
      v12 = a1[1];
      if ( v12 == 45 )
      {
        if ( a1[2] == 10 || !a1[2] )
        {
          result = 2;
        }
        else
        {
          LODWORD(result) = 2;
          do
            result = (unsigned int)(result + 1);
          while ( a1[(int)result] != 10 && a1[(int)result] );
        }
        goto LABEL_57;
      }
      if ( v12 != 62 )
      {
        *a2 = 107;
        return 1;
      }
      *a2 = 112;
      if ( a1[2] == 62 )
        return 3;
      return 2;
    case 0x2Eu:
      if ( (byte_1BEF00[a1[1]] & 4) != 0 )
        goto LABEL_37;
      *a2 = 141;
      return 1;
    case 0x2Fu:
      if ( a1[1] != 42 || (v28 = a1[2], result = 3, !(_BYTE)v28) )
      {
        *a2 = 109;
        return 1;
      }
      while ( 1 )
      {
        v29 = a1[(int)result];
        if ( v28 == 42 && v29 == 47 )
          break;
        v28 = v29;
        if ( !v29 )
          goto LABEL_57;
        result = (unsigned int)(result + 1);
      }
      result = (unsigned int)(result + 1);
LABEL_57:
      *a2 = 183;
      return result;
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
LABEL_37:
      *a2 = 155;
      v13 = *a1;
      if ( *a1 == 48 )
      {
        if ( (a1[1] & 0xDF) == 0x58 && (byte_1BEF00[a1[2]] & 8) != 0 )
        {
          if ( (byte_1BEF00[a1[3]] & 8) == 0 )
            return 3;
          LODWORD(result) = 3;
          do
            result = (unsigned int)(result + 1);
          while ( (byte_1BEF00[a1[(int)result]] & 8) != 0 );
          return result;
        }
        LODWORD(result) = 0;
      }
      else
      {
        result = 0;
        if ( (byte_1BEF00[v13] & 4) == 0 )
        {
LABEL_40:
          if ( v13 == 46 )
          {
            do
            {
              result = (unsigned int)(result + 1);
              v14 = (int)result;
              v15 = &a1[(int)result];
            }
            while ( (byte_1BEF00[*v15] & 4) != 0 );
            *a2 = 153;
          }
          else
          {
            v14 = (int)result;
            v15 = &a1[(int)result];
          }
          v16 = *v15;
          if ( (v16 & 0xDF) == 0x45
            && ((byte_1BEF00[a1[v14 + 1]] & 4) != 0
             || ((a1[v14 + 1] - 43) & 0xFD) == 0 && (byte_1BEF00[a1[v14 + 2]] & 4) != 0) )
          {
            for ( result = (unsigned int)(result + 2); ; result = (unsigned int)(result + 1) )
            {
              v17 = &a1[(int)result];
              if ( (byte_1BEF00[*v17] & 4) == 0 )
                break;
            }
            *a2 = 153;
            v16 = *v17;
          }
          if ( (byte_1BEF00[v16] & 0x46) != 0 )
          {
            do
            {
              result = (unsigned int)(result + 1);
              *a2 = 184;
            }
            while ( (byte_1BEF00[a1[(int)result]] & 0x46) != 0 );
          }
          return result;
        }
      }
      do
      {
        result = (unsigned int)(result + 1);
        v13 = a1[(int)result];
      }
      while ( (byte_1BEF00[v13] & 4) != 0 );
      goto LABEL_40;
    case 0x3Bu:
      *a2 = 1;
      return 1;
    case 0x3Cu:
      v22 = a1[1];
      switch ( v22 )
      {
        case '=':
          *a2 = 55;
          return 2;
        case '>':
LABEL_101:
          *a2 = 52;
          return 2;
        case '<':
          *a2 = 104;
          return 2;
        default:
          *a2 = 56;
          return 1;
      }
    case 0x3Du:
      *a2 = 53;
      if ( a1[1] != 61 )
        return 1;
      return 2;
    case 0x3Eu:
      v21 = a1[1];
      if ( v21 == 61 )
      {
        *a2 = 57;
        return 2;
      }
      else if ( v21 == 62 )
      {
        *a2 = 105;
        return 2;
      }
      else
      {
        *a2 = 54;
        return 1;
      }
    case 0x3Fu:
      *a2 = 156;
      if ( (byte_1BEF00[a1[1]] & 4) == 0 )
        return 1;
      LODWORD(result) = 1;
      do
        result = (unsigned int)(result + 1);
      while ( (byte_1BEF00[a1[(int)result]] & 4) != 0 );
      return result;
    case 0x41u:
    case 0x42u:
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x49u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x53u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
    case 0x61u:
    case 0x62u:
    case 0x63u:
    case 0x64u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Cu:
    case 0x6Du:
    case 0x6Eu:
    case 0x6Fu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x74u:
    case 0x75u:
    case 0x76u:
    case 0x77u:
      v18 = a1[1];
      v19 = 1;
      if ( byte_1BB560[v18] <= 2u )
      {
        while ( 1 )
        {
          result = (unsigned int)(v19 + 1);
          v20 = a1[(int)result];
          if ( byte_1BB560[v20] > 2u )
            break;
          ++v19;
        }
        if ( (byte_1BEF00[v20] & 0x46) != 0 )
        {
          result = (unsigned int)(v19 + 2);
          v3 = (int)result;
          goto LABEL_4;
        }
        *a2 = 59;
        if ( (int)result > 1 )
        {
          v30 = v19 + 1;
          sub_D0F40(a1, result, a2);
          return v30;
        }
      }
      else
      {
        if ( (byte_1BEF00[v18] & 0x46) != 0 )
        {
          v3 = 2;
          result = 2;
          goto LABEL_4;
        }
        *a2 = 59;
        return 1;
      }
      return result;
    case 0x58u:
    case 0x78u:
      if ( a1[1] != 39 )
        goto LABEL_2;
      *a2 = 154;
      if ( (byte_1BEF00[a1[2]] & 8) != 0 )
      {
        LODWORD(result) = 2;
        do
        {
          result = (unsigned int)(result + 1);
          v23 = &a1[(int)result];
          v24 = *v23;
        }
        while ( (byte_1BEF00[v24] & 8) != 0 );
        if ( (_BYTE)v24 == 39 && (result & 1) == 0 )
          return (unsigned int)(result + 1);
      }
      else
      {
        v23 = a1 + 2;
        result = 2;
        if ( a1[2] == 39 )
          return (unsigned int)(result + 1);
      }
      *a2 = 184;
      for ( i = *v23; i; i = a1[(int)result] )
      {
        if ( i == 39 )
          break;
        result = (unsigned int)(result + 1);
      }
      if ( !i )
        return result;
      return (unsigned int)(result + 1);
    case 0x59u:
    case 0x5Au:
    case 0x5Fu:
    case 0x79u:
    case 0x7Au:
    case 0x80u:
    case 0x81u:
    case 0x82u:
    case 0x83u:
    case 0x84u:
    case 0x85u:
    case 0x86u:
    case 0x87u:
    case 0x88u:
    case 0x89u:
    case 0x8Au:
    case 0x8Bu:
    case 0x8Cu:
    case 0x8Du:
    case 0x8Eu:
    case 0x8Fu:
    case 0x90u:
    case 0x91u:
    case 0x92u:
    case 0x93u:
    case 0x94u:
    case 0x95u:
    case 0x96u:
    case 0x97u:
    case 0x98u:
    case 0x99u:
    case 0x9Au:
    case 0x9Bu:
    case 0x9Cu:
    case 0x9Du:
    case 0x9Eu:
    case 0x9Fu:
    case 0xA0u:
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
    case 0xA4u:
    case 0xA5u:
    case 0xA6u:
    case 0xA7u:
    case 0xA8u:
    case 0xA9u:
    case 0xAAu:
    case 0xABu:
    case 0xACu:
    case 0xADu:
    case 0xAEu:
    case 0xAFu:
    case 0xB0u:
    case 0xB1u:
    case 0xB2u:
    case 0xB3u:
    case 0xB4u:
    case 0xB5u:
    case 0xB6u:
    case 0xB7u:
    case 0xB8u:
    case 0xB9u:
    case 0xBAu:
    case 0xBBu:
    case 0xBCu:
    case 0xBDu:
    case 0xBEu:
    case 0xBFu:
    case 0xC0u:
    case 0xC1u:
    case 0xC2u:
    case 0xC3u:
    case 0xC4u:
    case 0xC5u:
    case 0xC6u:
    case 0xC7u:
    case 0xC8u:
    case 0xC9u:
    case 0xCAu:
    case 0xCBu:
    case 0xCCu:
    case 0xCDu:
    case 0xCEu:
    case 0xCFu:
    case 0xD0u:
    case 0xD1u:
    case 0xD2u:
    case 0xD3u:
    case 0xD4u:
    case 0xD5u:
    case 0xD6u:
    case 0xD7u:
    case 0xD8u:
    case 0xD9u:
    case 0xDAu:
    case 0xDBu:
    case 0xDCu:
    case 0xDDu:
    case 0xDEu:
    case 0xDFu:
    case 0xE0u:
    case 0xE1u:
    case 0xE2u:
    case 0xE3u:
    case 0xE4u:
    case 0xE5u:
    case 0xE6u:
    case 0xE7u:
    case 0xE8u:
    case 0xE9u:
    case 0xEAu:
    case 0xEBu:
    case 0xECu:
    case 0xEDu:
    case 0xEEu:
    case 0xF0u:
    case 0xF1u:
    case 0xF2u:
    case 0xF3u:
    case 0xF4u:
    case 0xF5u:
    case 0xF6u:
    case 0xF7u:
    case 0xF8u:
    case 0xF9u:
    case 0xFAu:
    case 0xFBu:
    case 0xFCu:
    case 0xFDu:
    case 0xFEu:
    case 0xFFu:
      goto LABEL_2;
    case 0x5Bu:
      if ( v2 == 93 )
      {
        result = 1;
        v27 = 59;
      }
      else
      {
        v26 = a1[1];
        result = 1;
        if ( a1[1] )
        {
          do
          {
            result = (unsigned int)(result + 1);
            if ( v26 == 93 )
            {
              v27 = 59;
              goto LABEL_110;
            }
            v26 = a1[(int)result];
          }
          while ( a1[(int)result] );
        }
        v27 = 184;
      }
LABEL_110:
      *a2 = v27;
      return result;
    case 0x7Cu:
      if ( a1[1] == 124 )
      {
        *a2 = 111;
        return 2;
      }
      else
      {
        *a2 = 103;
        return 1;
      }
    case 0x7Eu:
      *a2 = 114;
      return 1;
    case 0xEFu:
      if ( a1[1] == 0xBB )
      {
        v3 = 1;
        result = 1;
        if ( a1[2] == 0xBF )
        {
          *a2 = 183;
          return 3;
        }
      }
      else
      {
LABEL_2:
        v3 = 1;
        result = 1;
      }
LABEL_4:
      while ( (byte_1BEF00[a1[v3]] & 0x46) != 0 )
      {
        result = (unsigned int)(result + 1);
        v3 = (int)result;
      }
      goto LABEL_5;
    default:
LABEL_6:
      *a2 = 184;
      return 1;
  }
}
