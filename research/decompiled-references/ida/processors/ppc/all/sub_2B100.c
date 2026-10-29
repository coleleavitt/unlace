__int16 __fastcall sub_2B100(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  bool v4; // zf
  __m128i v5; // xmm0
  int v6; // eax
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int16 v9; // cx
  int v10; // edx
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int16 v15; // dx
  __int16 v16; // si
  int v17; // edx
  int v18; // edi
  int v19; // esi
  __int16 v20; // cx
  unsigned __int16 v21; // dx
  __int16 v22; // si
  int v23; // ecx
  __int64 v24; // rsi
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // dx
  int v27; // ecx
  int v28; // ecx
  __int16 v29; // dx
  char v30; // dl
  char v31; // dl
  int v32; // edi
  int v33; // ecx
  int v34; // r8d
  char v35; // si

  LOWORD(v3) = *(_WORD *)(a2 + 24);
  if ( (unsigned __int16)v3 > 0x167u )
  {
    if ( (unsigned __int16)v3 <= 0x485u )
    {
      if ( (unsigned __int16)v3 <= 0x46Fu )
      {
        if ( (unsigned __int16)v3 > 0x2EDu )
        {
          if ( (unsigned __int16)v3 > 0x3ACu )
          {
            if ( (unsigned __int16)(v3 - 1059) <= 1u && *(_WORD *)(a2 + 86) == *(_WORD *)(a2 + 126) )
            {
              *(_BYTE *)(a2 + 121) = 0;
              LOWORD(v3) = ((_WORD)v3 != 1059) + 1209;
              *(_WORD *)(a2 + 24) = v3;
            }
          }
          else if ( (unsigned __int16)v3 > 0x3AAu
                 && *(_BYTE *)(a2 + 81) == 1
                 && *(_WORD *)(a2 + 126) == *(_WORD *)(a2 + 86) )
          {
            *(_BYTE *)(a2 + 121) = 0;
            LOWORD(v3) = ((_WORD)v3 == 939) + 2200;
            *(_WORD *)(a2 + 24) = v3;
          }
        }
        else if ( (unsigned __int16)v3 > 0x2EBu )
        {
          if ( *(_BYTE *)(a2 + 121) == 1 && !*(_WORD *)(a2 + 126) )
          {
            *(_BYTE *)(a2 + 124) &= ~8u;
            if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
              *(_BYTE *)(a2 + 84) &= ~8u;
          }
          if ( *(_BYTE *)(a2 + 41) == 5 && !*(_QWORD *)(a2 + 48) )
          {
            *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
            v5 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_WORD *)(a2 + 24) = 3 * ((_WORD)v3 != 748) + 349;
            v6 = *(_DWORD *)(a2 + 112);
            *(__m128i *)(a2 + 56) = v5;
            v7 = _mm_loadu_si128((const __m128i *)(a2 + 120));
            *(_DWORD *)(a2 + 72) = v6;
            LODWORD(v3) = *(_DWORD *)(a2 + 152);
            *(__m128i *)(a2 + 80) = v7;
            v8 = _mm_loadu_si128((const __m128i *)(a2 + 136));
            *(_DWORD *)(a2 + 112) = v3;
            *(_BYTE *)(a2 + 121) = 0;
            *(__m128i *)(a2 + 96) = v8;
          }
        }
        else
        {
          switch ( (_WORD)v3 )
          {
            case 0x22A:
              if ( *(_BYTE *)(a2 + 121) == 1 )
              {
                LOWORD(v3) = *(_WORD *)(a2 + 126);
                if ( *(_WORD *)(a2 + 86) == (_WORD)v3 )
                {
                  LOWORD(v3) = 1207;
LABEL_181:
                  *(_WORD *)(a2 + 24) = v3;
                  *(_BYTE *)(a2 + 121) = 0;
                }
              }
              break;
            case 0x22B:
LABEL_187:
              if ( *(_BYTE *)(a2 + 121) == 1 )
              {
                LOWORD(v3) = *(_WORD *)(a2 + 126);
                if ( *(_WORD *)(a2 + 86) == (_WORD)v3 )
                {
                  LOWORD(v3) = 1206;
                  if ( *(_WORD *)(a2 + 24) == 154 )
                    LOWORD(v3) = 281;
                  *(_WORD *)(a2 + 24) = v3;
                  *(_BYTE *)(a2 + 121) = 0;
                }
              }
              break;
            case 0x194:
              LOWORD(v3) = *(_WORD *)(a2 + 166);
              if ( (unsigned __int16)v3 <= 2u )
              {
                LOWORD(v3) = v3 + 405;
                *(_BYTE *)(a2 + 161) = 0;
                *(_WORD *)(a2 + 24) = v3;
              }
              break;
          }
        }
      }
      else
      {
        switch ( *(_WORD *)(a2 + 24) )
        {
          case 0x470:
            v3 = *(_QWORD *)(a2 + 168);
            switch ( v3 )
            {
              case 2LL:
                LOWORD(v3) = *(_WORD *)(a2 + 126);
                if ( *(_WORD *)(a2 + 86) == (_WORD)v3 )
                {
                  *(_BYTE *)(a2 + 161) = 0;
                  *(_WORD *)(a2 + 24) = 1214;
                  *(_BYTE *)(a2 + 121) = 0;
                }
                break;
              case 3LL:
                if ( *(_WORD *)(a2 + 86) == *(_WORD *)(a2 + 126) )
                {
                  *(_BYTE *)(a2 + 121) = 5;
                  *(_WORD *)(a2 + 24) = 1211;
                  *(_BYTE *)(a2 + 125) = 0;
                  *(_QWORD *)(a2 + 128) = 1;
                  *(_BYTE *)(a2 + 161) = 0;
                  LOWORD(v3) = 1211;
                }
                else
                {
                  *(_BYTE *)(a2 + 161) = 0;
                  *(_WORD *)(a2 + 24) = 1213;
                  LOWORD(v3) = 1213;
                }
                break;
              case 0LL:
                if ( *(_WORD *)(a2 + 86) == *(_WORD *)(a2 + 126) )
                {
                  *(_BYTE *)(a2 + 121) = 5;
                  *(_WORD *)(a2 + 24) = 1211;
                  *(_BYTE *)(a2 + 125) = 0;
                  *(_QWORD *)(a2 + 128) = 0;
                  *(_BYTE *)(a2 + 161) = 0;
                  LOWORD(v3) = 1211;
                }
                else
                {
                  *(_BYTE *)(a2 + 161) = 0;
                  *(_WORD *)(a2 + 24) = 1212;
                  LOWORD(v3) = 1212;
                }
                break;
            }
            return v3;
          case 0x474:
            v3 = *(_QWORD *)(a2 + 48);
            if ( (unsigned __int64)v3 <= 2 )
            {
              if ( v3 == 1 )
              {
                *(_BYTE *)(a2 + 41) = 0;
                *(_WORD *)(a2 + 24) = 1204;
              }
              else
              {
                if ( v3 != 2 )
                  goto LABEL_9;
                *(_BYTE *)(a2 + 41) = 0;
                *(_WORD *)(a2 + 24) = 1205;
              }
            }
            return v3;
          case 0x475:
            if ( *(_QWORD *)(a2 + 88) )
            {
              *(_BYTE *)(a2 + 81) = 0;
              *(_WORD *)(a2 + 24) = 1142;
              *(_BYTE *)(a2 + 41) = 0;
            }
            else
            {
              *(_BYTE *)(a2 + 81) = 0;
            }
            return v3;
          case 0x477:
          case 0x479:
            if ( *(_QWORD *)(a2 + 168) == 1 )
            {
              LOWORD(v3) = 2 * ((_WORD)v3 != 1143) + 1144;
              *(_WORD *)(a2 + 24) = v3;
            }
            *(_BYTE *)(a2 + 161) = 0;
            return v3;
          case 0x483:
            v9 = 1182;
            goto LABEL_47;
          case 0x484:
            v9 = 1183;
            goto LABEL_47;
          case 0x485:
            v9 = 1184;
LABEL_47:
            LOWORD(v10) = 0;
LABEL_48:
            LOWORD(v3) = sub_2AA10(a1, a2, v10, v9);
            break;
          default:
            return v3;
        }
      }
      return v3;
    }
    if ( (_WORD)v3 == 2227 )
    {
      LOWORD(v3) = sub_2AE60(a1, a2);
      return v3;
    }
    if ( (unsigned __int16)v3 <= 0x8B3u )
    {
      if ( (_WORD)v3 == 2185 )
      {
        v3 = *(_QWORD *)(a2 + 48);
        if ( v3 )
        {
          if ( v3 == 1 )
          {
            *(_BYTE *)(a2 + 41) = 0;
            *(_WORD *)(a2 + 24) = 2202;
          }
          return v3;
        }
LABEL_9:
        *(_BYTE *)(a2 + 44) &= ~8u;
        return v3;
      }
      if ( (unsigned __int16)v3 <= 0x889u )
      {
        if ( (_WORD)v3 == 2082 )
        {
LABEL_45:
          LOWORD(v3) = sub_2AB20(a1, a2);
        }
        else if ( (_WORD)v3 == 2182 && !*(_QWORD *)(a2 + 168) )
        {
          *(_BYTE *)(a2 + 164) &= ~8u;
        }
        return v3;
      }
      if ( (_WORD)v3 == 2191 )
      {
        v3 = *(_QWORD *)(a2 + 48);
        if ( v3 )
        {
          if ( v3 == 1 )
          {
            *(_BYTE *)(a2 + 41) = 0;
            *(_WORD *)(a2 + 24) = 2204;
          }
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 0;
          *(_WORD *)(a2 + 24) = 2203;
        }
        return v3;
      }
      if ( (_WORD)v3 != 2193 )
        return v3;
    }
    else if ( (_WORD)v3 != 2287 )
    {
      if ( (unsigned __int16)v3 <= 0x8EFu )
      {
        if ( (_WORD)v3 == 2256 )
        {
          v3 = *(_QWORD *)(a2 + 88);
          if ( v3 )
          {
            if ( v3 < 0 )
            {
              v3 = -v3;
              *(_WORD *)(a2 + 24) = 2258;
              *(_QWORD *)(a2 + 88) = v3;
            }
          }
          else
          {
            *(_BYTE *)(a2 + 84) &= ~8u;
            *(_WORD *)(a2 + 24) = 2257;
          }
        }
        else if ( (_WORD)v3 == 2260 )
        {
          LOWORD(v3) = 2;
          if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
          {
            v30 = getinf_flag(3, 4);
            LOWORD(v3) = 7;
            if ( !v30 )
              LOWORD(v3) = 5 * ((*(_DWORD *)(a1 + 460) & 0xF) == 1) + 2;
          }
          *(_BYTE *)(a2 + 85) = v3;
          *(_BYTE *)(a2 + 125) = v3;
        }
        return v3;
      }
      if ( (_WORD)v3 != 2491 )
      {
        if ( (_WORD)v3 == 2492 && !*(_QWORD *)(a2 + 48) )
        {
          *(_BYTE *)(a2 + 44) &= ~8u;
          LOWORD(v3) = 2493;
          v4 = *(_WORD *)(a2 + 126) == 0;
          *(_WORD *)(a2 + 24) = 2493;
          if ( v4 )
            *(_BYTE *)(a2 + 124) &= ~8u;
        }
        return v3;
      }
      if ( !*(_QWORD *)(a2 + 128) )
      {
        *(_BYTE *)(a2 + 124) &= ~8u;
        if ( *(_WORD *)(a2 + 86) )
        {
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_WORD *)(a2 + 24) = 2489;
        }
        else
        {
          *(_BYTE *)(a2 + 84) &= ~8u;
          *(_WORD *)(a2 + 24) = 2490;
        }
        return v3;
      }
      goto LABEL_9;
    }
    if ( *(_QWORD *)(a2 + 48) )
      return v3;
    goto LABEL_9;
  }
  if ( (unsigned __int16)v3 <= 3u )
    return v3;
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 4:
      v9 = 282;
      v10 = (*(_DWORD *)(a2 + 28) & 0x2000) == 0 ? 0x11D : 0;
      goto LABEL_48;
    case 5:
      v9 = 283;
      goto LABEL_47;
    case 6:
      v9 = 284;
      v10 = (*(_DWORD *)(a2 + 28) & 0x2000) == 0 ? 0x11E : 0;
      goto LABEL_48;
    case 0xE:
    case 0xF:
    case 0x10:
      goto LABEL_45;
    case 0x11:
      LODWORD(v3) = *(_DWORD *)(a2 + 28);
      if ( (v3 & 0x2000) != 0 )
        return v3;
      if ( (v3 & 0x10) == 0 )
      {
        v4 = *(_WORD *)(a2 + 46) == 0;
        *(_WORD *)(a2 + 24) = 230;
        if ( v4 )
          goto LABEL_139;
        goto LABEL_140;
      }
      v4 = *(_WORD *)(a2 + 46) == 0;
      *(_WORD *)(a2 + 24) = 234;
      if ( !v4 )
        goto LABEL_258;
      goto LABEL_257;
    case 0x12:
      LODWORD(v3) = *(_DWORD *)(a2 + 28);
      if ( (v3 & 0x2000) != 0 )
        return v3;
      if ( (v3 & 0x10) == 0 )
      {
        v4 = *(_WORD *)(a2 + 46) == 0;
        *(_WORD *)(a2 + 24) = 229;
        if ( !v4 )
          goto LABEL_140;
        goto LABEL_139;
      }
      v4 = *(_WORD *)(a2 + 46) == 0;
      *(_WORD *)(a2 + 24) = 233;
      if ( !v4 )
        goto LABEL_258;
      goto LABEL_257;
    case 0x13:
      LODWORD(v3) = *(_DWORD *)(a2 + 28);
      if ( (v3 & 0x2000) != 0 )
        return v3;
      if ( (v3 & 0x10) == 0 )
      {
        v4 = *(_WORD *)(a2 + 46) == 0;
        *(_WORD *)(a2 + 24) = 232;
        if ( !v4 )
          goto LABEL_140;
        goto LABEL_139;
      }
      v4 = *(_WORD *)(a2 + 46) == 0;
      *(_WORD *)(a2 + 24) = 236;
      if ( !v4 )
        goto LABEL_258;
      goto LABEL_257;
    case 0x14:
      LODWORD(v3) = *(_DWORD *)(a2 + 28);
      if ( (v3 & 0x2000) != 0 )
        return v3;
      if ( (v3 & 0x10) != 0 )
      {
        v4 = *(_WORD *)(a2 + 46) == 0;
        *(_WORD *)(a2 + 24) = 235;
        if ( v4 )
LABEL_257:
          *(_BYTE *)(a2 + 44) &= ~8u;
LABEL_258:
        v31 = getinf_flag(3, 4);
        LOWORD(v3) = 7;
        if ( !v31 )
          LOWORD(v3) = 5 * ((*(_DWORD *)(a1 + 460) & 0xF) == 1) + 2;
      }
      else
      {
        v4 = *(_WORD *)(a2 + 46) == 0;
        *(_WORD *)(a2 + 24) = 231;
        if ( v4 )
LABEL_139:
          *(_BYTE *)(a2 + 44) &= ~8u;
LABEL_140:
        LOWORD(v3) = 2;
      }
      *(_BYTE *)(a2 + 85) = v3;
      *(_BYTE *)(a2 + 125) = v3;
      return v3;
    case 0x19:
      LOWORD(v3) = *(_WORD *)(a2 + 86);
      if ( *(_WORD *)(a2 + 46) == (_WORD)v3 && (_WORD)v3 == *(_WORD *)(a2 + 126) )
      {
        *(_BYTE *)(a2 + 121) = 0;
        *(_WORD *)(a2 + 24) = 287;
        *(_BYTE *)(a2 + 81) = 0;
        LOWORD(v3) = 287;
      }
      return v3;
    case 0x1B:
      LOWORD(v3) = *(_WORD *)(a2 + 126);
      if ( *(_WORD *)(a2 + 86) == (_WORD)v3 )
      {
        *(_BYTE *)(a2 + 121) = 0;
        *(_WORD *)(a2 + 24) = 288;
        LOWORD(v3) = 288;
      }
      return v3;
    case 0x1C:
      LOWORD(v3) = *(_WORD *)(a2 + 126);
      if ( *(_WORD *)(a2 + 86) == (_WORD)v3 )
      {
        *(_BYTE *)(a2 + 121) = 0;
        *(_WORD *)(a2 + 24) = 289;
        LOWORD(v3) = 289;
      }
      return v3;
    case 0x1E:
      LOWORD(v3) = *(_WORD *)(a2 + 86);
      if ( *(_WORD *)(a2 + 46) == (_WORD)v3 && (_WORD)v3 == *(_WORD *)(a2 + 126) )
      {
        *(_BYTE *)(a2 + 121) = 0;
        *(_WORD *)(a2 + 24) = 290;
        *(_BYTE *)(a2 + 81) = 0;
        LOWORD(v3) = 290;
      }
      return v3;
    case 0x20:
      v3 = *(_QWORD *)(a2 + 128);
      if ( (unsigned __int64)v3 > 1 && v3 != 3 )
        return v3;
      if ( v3 == 1 )
      {
        *(_BYTE *)(a2 + 121) = 0;
        *(_WORD *)(a2 + 24) = 1198;
        LOWORD(v3) = 1198;
      }
      else
      {
        if ( v3 != 3 )
          goto LABEL_64;
        *(_BYTE *)(a2 + 121) = 0;
        *(_WORD *)(a2 + 24) = 1199;
      }
      return v3;
    case 0x23:
    case 0x24:
      v11 = *(_QWORD *)(a2 + 128);
      if ( v11 == 16 )
      {
        *(_BYTE *)(a2 + 121) = 0;
        LOWORD(v3) = ((_WORD)v3 != 35) + 1200;
        *(_WORD *)(a2 + 24) = v3;
      }
      else if ( !v11 )
      {
LABEL_64:
        *(_BYTE *)(a2 + 124) &= ~8u;
      }
      return v3;
    case 0x25:
      v3 = *(_QWORD *)(a2 + 128);
      if ( !v3 )
        goto LABEL_64;
      if ( v3 == 1 )
      {
        *(_BYTE *)(a2 + 121) = 0;
        *(_WORD *)(a2 + 24) = 1215;
      }
      return v3;
    case 0x2C:
      if ( (*(_BYTE *)(a1 + 460) & 0x20) == 0 )
        *(_WORD *)(a2 + 24) = 745;
      if ( !*(_QWORD *)(a2 + 48) )
        *(_BYTE *)(a2 + 41) = 0;
      return v3;
    case 0x80:
      v14 = *(_QWORD *)(a2 + 88);
      if ( v14 == 287 )
      {
        *(_BYTE *)(a2 + 81) = 0;
        *(_WORD *)(a2 + 24) = 319;
        return v3;
      }
      v3 = 0;
      while ( v14 != dword_6AB60[v3] )
      {
        if ( ++v3 == 18 )
          return v3;
      }
      LOWORD(v3) = word_6AB20[v3];
      *(_BYTE *)(a2 + 84) &= ~8u;
      *(_WORD *)(a2 + 24) = v3;
      return v3;
    case 0x83:
      LOWORD(v3) = 318;
      if ( *(_QWORD *)(a2 + 88) == 268 )
        LOWORD(v3) = 317;
      *(_WORD *)(a2 + 24) = v3;
      *(_BYTE *)(a2 + 81) = 0;
      return v3;
    case 0x84:
      if ( *(_QWORD *)(a2 + 48) == 255 )
      {
        v12 = _mm_loadu_si128((const __m128i *)(a2 + 80));
        *(_BYTE *)(a2 + 81) = 0;
        *(_WORD *)(a2 + 24) = 1208;
        LODWORD(v3) = *(_DWORD *)(a2 + 112);
        *(__m128i *)(a2 + 40) = v12;
        v13 = _mm_loadu_si128((const __m128i *)(a2 + 96));
        *(_DWORD *)(a2 + 72) = v3;
        *(__m128i *)(a2 + 56) = v13;
      }
      return v3;
    case 0x87:
      if ( !*(_QWORD *)(a2 + 128) && !*(_QWORD *)(a2 + 168) )
      {
        *(_BYTE *)(a2 + 124) &= ~8u;
        *(_BYTE *)(a2 + 164) &= ~8u;
      }
      return v3;
    case 0x88:
      if ( *(_QWORD *)(a2 + 128) )
        return v3;
      goto LABEL_64;
    case 0x89:
      v3 = *(_QWORD *)(a2 + 88);
      goto LABEL_80;
    case 0x8A:
      v3 = *(_QWORD *)(a2 + 88);
      if ( v3 == 1 )
      {
        LODWORD(v3) = *(_DWORD *)(a1 + 460) & 0xF;
        if ( (_DWORD)v3 == 2 )
        {
          *(_BYTE *)(a2 + 84) &= ~8u;
          *(_WORD *)(a2 + 24) = 1216;
        }
      }
      else
      {
LABEL_80:
        if ( !v3 )
          *(_BYTE *)(a2 + 84) &= ~8u;
      }
      return v3;
    case 0x8B:
      v24 = *(_QWORD *)(a2 + 48);
      v3 = 0;
      while ( dword_6AB60[v3] != v24 )
      {
        if ( ++v3 == 18 )
          return v3;
      }
      LOWORD(v3) = word_6AAE0[v3];
      *(_BYTE *)(a2 + 44) &= ~8u;
      *(_WORD *)(a2 + 24) = v3;
      return v3;
    case 0x99:
      if ( *(_BYTE *)(a2 + 121) != 1 )
        return v3;
      LOWORD(v3) = *(_WORD *)(a2 + 126);
      if ( *(_WORD *)(a2 + 86) != (_WORD)v3 )
        return v3;
      LOWORD(v3) = 280;
      goto LABEL_181;
    case 0x9A:
      LOWORD(v3) = sub_2ADB0(a1, a2, *(unsigned __int16 *)(a2 + 46));
      if ( !(_BYTE)v3 )
        goto LABEL_187;
      *(_BYTE *)(a2 + 121) = 0;
      *(_BYTE *)(a2 + 81) = 0;
      *(_BYTE *)(a2 + 41) = 0;
      return v3;
    case 0x9C:
    case 0xE3:
      if ( *(_BYTE *)(a2 + 41) != 1
        || *(_WORD *)(a2 + 46)
        || *(_BYTE *)(a2 + 81) != 1
        || *(_WORD *)(a2 + 86)
        || *(_BYTE *)(a2 + 121) != 5
        || *(_QWORD *)(a2 + 128)
        || (*(_BYTE *)(a2 + 28) & 2) != 0 )
      {
        if ( (_WORD)v3 == 156 && !*(_QWORD *)(a2 + 128) && (*(_BYTE *)(a2 + 28) & 2) == 0 )
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 281;
          LOWORD(v3) = 281;
        }
      }
      else
      {
        v29 = 1196;
        if ( (_WORD)v3 == 156 )
          v29 = 279;
        *(_WORD *)(a2 + 24) = v29;
        *(_BYTE *)(a2 + 121) = 0;
        *(_BYTE *)(a2 + 81) = 0;
        *(_BYTE *)(a2 + 41) = 0;
      }
      return v3;
    case 0xA0:
      if ( !*(_BYTE *)(a2 + 152) )
      {
        *(_DWORD *)(a2 + 28) &= ~0x40u;
        *(_WORD *)(a2 + 24) = 1190;
      }
      return v3;
    case 0xA2:
      v27 = *(unsigned __int16 *)(a2 + 126);
      LODWORD(v3) = v27 + *(char *)(a2 + 152);
      if ( (int)v3 <= 63 )
      {
        *(_WORD *)(a2 + 126) = v3;
        *(_WORD *)(a2 + 24) = 1195;
        *(_BYTE *)(a2 + 152) = v27;
      }
      return v3;
    case 0xA3:
      v25 = *(_WORD *)(a2 + 126);
      LOWORD(v3) = *(char *)(a2 + 152);
      if ( v25 )
      {
        if ( 64 - v25 == (char)v3 )
        {
          *(_DWORD *)(a2 + 28) &= ~0x40u;
          *(_WORD *)(a2 + 24) = 1192;
          *(_WORD *)(a2 + 126) = v3;
        }
        else if ( (_BYTE)v3 )
        {
          if ( (char)v3 + v25 > 63 )
          {
            *(_WORD *)(a2 + 24) = 1186;
            *(_WORD *)(a2 + 126) = 64 - (char)v3;
            *(_BYTE *)(a2 + 152) = v3 + v25 - 64;
          }
        }
        else
        {
          LOWORD(v3) = 1188;
          if ( v25 > 0x1Fu )
          {
            *(_WORD *)(a2 + 126) = 64 - v25;
            LOWORD(v3) = 1189;
          }
          *(_DWORD *)(a2 + 28) &= ~0x40u;
          *(_WORD *)(a2 + 24) = v3;
        }
      }
      else
      {
        *(_DWORD *)(a2 + 28) &= ~0x40u;
        *(_WORD *)(a2 + 24) = 1193;
        *(_WORD *)(a2 + 126) = v3;
      }
      return v3;
    case 0xA4:
      v26 = *(_WORD *)(a2 + 126);
      LODWORD(v3) = *(char *)(a2 + 153);
      if ( v26 )
      {
        if ( v26 == 63 - (_DWORD)v3 )
        {
          *(_DWORD *)(a2 + 28) &= ~0x80u;
          *(_WORD *)(a2 + 24) = 1191;
        }
        else
        {
          LOWORD(v3) = v3 + 1;
          *(_BYTE *)(a2 + 153) = v26;
          *(_WORD *)(a2 + 24) = 1185;
          *(_WORD *)(a2 + 126) = v3;
        }
      }
      else
      {
        *(_DWORD *)(a2 + 28) &= ~0x80u;
        *(_WORD *)(a2 + 24) = 1194;
        *(_WORD *)(a2 + 126) = 63 - v3;
      }
      return v3;
    case 0xA5:
      v17 = *(unsigned __int16 *)(a2 + 126);
      LODWORD(v3) = *(char *)(a2 + 152);
      if ( (int)v3 + v17 <= 64 )
      {
        LOWORD(v3) = v17 + v3;
        *(_WORD *)(a2 + 24) = 1187;
        *(_WORD *)(a2 + 126) = 64 - v3;
      }
      return v3;
    case 0xA6:
      v18 = *(char *)(a2 + 152);
      v19 = *(unsigned __int16 *)(a2 + 126);
      LOWORD(v3) = *(char *)(a2 + 153);
      v20 = *(char *)(a2 + 152);
      if ( v19 == 32 - v18 )
      {
        if ( (char)v18 <= (char)v3 )
        {
          *(_DWORD *)(a2 + 28) &= ~0x80u;
          LOWORD(v3) = v3 + 1 - v18;
          *(_WORD *)(a2 + 24) = 339;
          *(_WORD *)(a2 + 126) = v3;
        }
      }
      else if ( 31 - (char)v3 == v19 && (char)v20 <= (char)v3 )
      {
        *(_DWORD *)(a2 + 28) &= ~0x80u;
        LOWORD(v3) = v3 + 1 - v20;
        *(_WORD *)(a2 + 24) = 340;
        *(_WORD *)(a2 + 126) = v3;
      }
      return v3;
    case 0xA7:
      v21 = *(_WORD *)(a2 + 126);
      if ( !v21 )
      {
        LODWORD(v3) = *(char *)(a2 + 153);
        v28 = *(char *)(a2 + 152);
        if ( *(_BYTE *)(a2 + 153) == 31 )
        {
          *(_DWORD *)(a2 + 28) &= 0xFFFFFF3F;
          *(_WORD *)(a2 + 24) = 346;
          *(_WORD *)(a2 + 126) = v28;
          return v3;
        }
        if ( !(_BYTE)v28 )
        {
          *(_DWORD *)(a2 + 28) &= 0xFFFFFF3F;
          *(_WORD *)(a2 + 24) = 347;
          *(_WORD *)(a2 + 126) = 31 - v3;
          return v3;
        }
        v32 = 0;
        if ( *(_WORD *)(a2 + 152) != 7936 )
        {
LABEL_262:
          v33 = v28 + 31 - v3;
          if ( v33 >= v32 && v33 <= 31 && (_DWORD)v3 == 31 - v32 )
          {
            *(_DWORD *)(a2 + 28) &= ~0x80u;
            *(_WORD *)(a2 + 24) = 348;
            *(_WORD *)(a2 + 126) = v33;
            *(_BYTE *)(a2 + 152) = v21;
          }
          return v3;
        }
        LOWORD(v3) = 341;
LABEL_281:
        *(_DWORD *)(a2 + 28) &= 0xFFFFFF3F;
        *(_WORD *)(a2 + 24) = v3;
        return v3;
      }
      if ( *(_WORD *)(a2 + 152) == 7936 )
      {
        LOWORD(v3) = 341;
        if ( v21 > 0xFu )
        {
          *(_WORD *)(a2 + 126) = 32 - v21;
          LOWORD(v3) = 342;
        }
        goto LABEL_281;
      }
      v22 = *(char *)(a2 + 152);
      LODWORD(v3) = *(char *)(a2 + 153);
      if ( (_BYTE)v22 )
      {
        v28 = (char)v22;
        v32 = v21;
        v34 = 32 - (char)v22;
        if ( v34 == v21 )
        {
          if ( (_BYTE)v3 == 31 )
          {
LABEL_294:
            *(_DWORD *)(a2 + 28) &= 0xFFFFFF3F;
            *(_WORD *)(a2 + 24) = 345;
            *(_WORD *)(a2 + 126) = v22;
            return v3;
          }
        }
        else if ( (_BYTE)v3 == 31 )
        {
          v35 = v22 + v21;
          if ( v28 + v21 > 31 )
          {
            *(_DWORD *)(a2 + 28) &= ~0x80u;
            *(_WORD *)(a2 + 24) = 338;
            *(_WORD *)(a2 + 126) = v34;
            *(_BYTE *)(a2 + 152) = v35 - 32;
            return v3;
          }
        }
        goto LABEL_262;
      }
      v23 = *(_DWORD *)(a2 + 28);
      if ( 31 - (char)v3 != v21 )
      {
        if ( v21 != 32 || (_BYTE)v3 != 31 )
        {
          LOWORD(v3) = v3 + 1;
          LOBYTE(v23) = v23 & 0x7F;
          *(_BYTE *)(a2 + 152) = v21;
          *(_WORD *)(a2 + 24) = 337;
          *(_WORD *)(a2 + 126) = v3;
          *(_DWORD *)(a2 + 28) = v23;
          return v3;
        }
        goto LABEL_294;
      }
      LOBYTE(v23) = v23 & 0x3F;
      *(_WORD *)(a2 + 24) = 344;
      *(_DWORD *)(a2 + 28) = v23;
      return v3;
    case 0xA8:
      if ( *(_WORD *)(a2 + 152) == 7936 )
      {
        *(_DWORD *)(a2 + 28) &= 0xFFFFFF3F;
        *(_WORD *)(a2 + 24) = 343;
      }
      return v3;
    case 0xDA:
      if ( !*(_QWORD *)(a2 + 88) )
      {
        v3 = *(_QWORD *)(a2 + 48);
        switch ( v3 )
        {
          case 1LL:
            *(_BYTE *)(a2 + 41) = 0;
            *(_WORD *)(a2 + 24) = 1202;
            *(_BYTE *)(a2 + 81) = 0;
            break;
          case 2LL:
            *(_BYTE *)(a2 + 41) = 0;
            *(_WORD *)(a2 + 24) = 1203;
            *(_BYTE *)(a2 + 81) = 0;
            break;
          case 0LL:
            *(_BYTE *)(a2 + 44) &= ~8u;
            *(_BYTE *)(a2 + 84) &= ~8u;
            break;
        }
      }
      return v3;
    case 0xDB:
      v15 = 237;
      v16 = 259;
      goto LABEL_105;
    case 0xDC:
      v15 = 0;
      v16 = 269;
      goto LABEL_105;
    case 0xE0:
      v15 = 237;
      v16 = 239;
      goto LABEL_105;
    case 0xE1:
      v15 = 0;
      v16 = 249;
LABEL_105:
      LOWORD(v3) = sub_2A3E0(a2, v16, v15);
      return v3;
    case 0x165:
      if ( !*(_WORD *)(a2 + 86) && !*(_QWORD *)(a2 + 128) )
      {
        LOWORD(v3) = *(_WORD *)(a2 + 46);
        if ( (v3 & 0xFFEF) == 0 )
        {
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_BYTE *)(a2 + 84) &= ~8u;
          *(_BYTE *)(a2 + 124) &= ~8u;
          if ( (_WORD)v3 == 16 )
            *(_WORD *)(a2 + 24) = 2494;
        }
      }
      return v3;
    case 0x167:
      LOWORD(v3) = *(_WORD *)(a2 + 46);
      if ( (_WORD)v3 )
      {
        if ( (_WORD)v3 == 16 && !*(_WORD *)(a2 + 86) && !*(_QWORD *)(a2 + 128) )
        {
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_BYTE *)(a2 + 84) &= ~8u;
          *(_BYTE *)(a2 + 124) &= ~8u;
          *(_WORD *)(a2 + 24) = 2495;
        }
      }
      else if ( !*(_WORD *)(a2 + 86) )
      {
        v3 = *(_QWORD *)(a2 + 128);
        if ( v3 )
        {
          *(_WORD *)(a2 + 46) = v3;
          *(_BYTE *)(a2 + 81) = 0;
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 415;
        }
        else
        {
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_BYTE *)(a2 + 84) &= ~8u;
          *(_BYTE *)(a2 + 124) &= ~8u;
        }
      }
      return v3;
    default:
      return v3;
  }
}

