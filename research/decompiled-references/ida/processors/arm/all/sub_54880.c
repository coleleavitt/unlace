__int64 __fastcall sub_54880(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned __int16 v7; // dx
  unsigned int v8; // edi
  __int64 v10; // rax
  __int16 v11; // dx
  __int16 v12; // ax
  __m128i v13; // xmm0
  int v14; // eax
  __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int16 v18; // cx
  int v19; // edx
  __int16 v20; // cx
  __m128i v21; // xmm0
  int v22; // eax
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  char v25; // dl
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // r8
  char v31; // al
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // r9
  __int64 v35; // r8
  char v36; // al
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  bool v41; // zf
  __int64 v42; // rsi
  __int64 v43; // rax
  _DWORD *v44; // rdi
  _DWORD *v45; // rsi
  __int64 i; // rcx
  int v47; // r8d
  int v48; // r9d
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rax
  __int16 v52; // cx

  if ( (*(_BYTE *)(a2 + 8) & 3) != 0 || (v5 = sub_52170(a1, a2, a3)) == 0 )
  {
    v5 = 0;
  }
  else if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
  {
    v10 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)v10 > 0x213u )
    {
      if ( (_WORD)v10 != 897 )
        goto LABEL_3;
      v19 = *(_DWORD *)(a2 + 28);
      if ( (v19 & 1) == 0 || *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 160 )
        goto LABEL_3;
      v20 = 898;
      goto LABEL_48;
    }
    if ( (unsigned __int16)v10 > 0x1EDu )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0x1EE:
          v28 = *(_QWORD *)(a2 + 88);
          v27 = *(_QWORD *)(a2 + 104);
          if ( v28 )
          {
            v27 = v28 << v27;
            goto LABEL_59;
          }
          if ( !v27 )
          {
LABEL_59:
            v25 = *(_BYTE *)(a2 + 45);
            goto LABEL_56;
          }
          goto LABEL_3;
        case 0x1EF:
          v25 = *(_BYTE *)(a2 + 45);
          v26 = *(_QWORD *)(a2 + 88);
          if ( v25 == 7 )
          {
            if ( v26 )
            {
              v27 = ~(v26 << *(_QWORD *)(a2 + 104));
            }
            else
            {
              if ( *(_QWORD *)(a2 + 104) )
                goto LABEL_3;
              v27 = -1;
            }
LABEL_56:
            *(_BYTE *)(a2 + 81) = 5;
            *(_WORD *)(a2 + 24) = 23;
            *(_QWORD *)(a2 + 88) = v27;
            *(_BYTE *)(a2 + 113) = 0;
            *(_QWORD *)(a2 + 104) = 0;
            *(_BYTE *)(a2 + 85) = v25;
            goto LABEL_3;
          }
          if ( v26 == 0xFFFF )
            goto LABEL_3;
          if ( v26 )
          {
            v27 = ~(v26 << *(_QWORD *)(a2 + 104));
            goto LABEL_54;
          }
          if ( !*(_QWORD *)(a2 + 104) )
          {
            v27 = -1;
LABEL_54:
            if ( v25 == 2 )
              v27 = (unsigned int)v27;
            goto LABEL_56;
          }
          goto LABEL_3;
        case 0x1F2:
          v38 = *(_QWORD *)(a2 + 168);
          v39 = *(_QWORD *)(a2 + 128);
          v40 = v38 + 1;
          if ( v38 < v39 )
          {
            v41 = *(_BYTE *)(a2 + 45) == 2;
            v42 = 63;
            v43 = 64;
            *(_WORD *)(a2 + 24) = 272;
            if ( v41 )
            {
              v42 = 31;
              v43 = 32;
            }
            *(_QWORD *)(a2 + 168) = v40;
            *(_QWORD *)(a2 + 128) = v42 & (v43 - v39);
          }
          else
          {
            *(_WORD *)(a2 + 24) = 501;
            *(_QWORD *)(a2 + 168) = v40 - v39;
          }
          goto LABEL_3;
        case 0x1F3:
          v29 = *(_QWORD *)(a2 + 128);
          v30 = *(_QWORD *)(a2 + 168);
          v31 = *(_BYTE *)(a2 + 45);
          if ( v31 == 7 )
          {
            if ( (_DWORD)v30 != 63 )
            {
              if ( (unsigned int)v30 < (unsigned int)v29 )
              {
                v32 = (unsigned int)(64 - v29);
                goto LABEL_64;
              }
LABEL_100:
              if ( sub_4B2D0(v31 == 7, 0, (unsigned int)*(_QWORD *)(a2 + 168), *(_QWORD *)(a2 + 128)) )
              {
                *(_WORD *)(a2 + 24) = 270;
                *(_QWORD *)(a2 + 168) = (unsigned int)(v47 + 1 - v48);
              }
              else if ( !v48 )
              {
                switch ( v47 )
                {
                  case 7:
                    *(_WORD *)(a2 + 24) = 222;
                    *(_BYTE *)(a2 + 85) = 2;
                    *(_BYTE *)(a2 + 121) = 0;
                    *(_BYTE *)(a2 + 161) = 0;
                    break;
                  case 15:
                    *(_WORD *)(a2 + 24) = 226;
                    *(_BYTE *)(a2 + 85) = 2;
                    *(_BYTE *)(a2 + 121) = 0;
                    *(_BYTE *)(a2 + 161) = 0;
                    break;
                  case 31:
                    *(_WORD *)(a2 + 24) = 505;
                    *(_BYTE *)(a2 + 85) = 2;
                    *(_BYTE *)(a2 + 121) = 0;
                    *(_BYTE *)(a2 + 161) = 0;
                    break;
                }
              }
              goto LABEL_3;
            }
          }
          else if ( (_DWORD)v30 != 31 )
          {
            if ( (unsigned int)v30 < (unsigned int)v29 )
            {
              v32 = (unsigned int)(32 - v29);
LABEL_64:
              *(_QWORD *)(a2 + 128) = v32;
              *(_WORD *)(a2 + 24) = 502;
              *(_QWORD *)(a2 + 168) = (unsigned int)(v30 + 1);
              goto LABEL_3;
            }
            goto LABEL_100;
          }
          *(_BYTE *)(a2 + 161) = 0;
          *(_WORD *)(a2 + 24) = 5;
          goto LABEL_3;
        case 0x1F4:
          v34 = *(_QWORD *)(a2 + 128);
          v35 = *(_QWORD *)(a2 + 168);
          v36 = *(_BYTE *)(a2 + 45);
          if ( v36 == 7 )
          {
            if ( (_DWORD)v35 != 63 )
            {
              if ( (_DWORD)v34 - (_DWORD)v35 != 1 )
              {
                if ( (unsigned int)v35 < (unsigned int)v34 )
                {
                  v37 = (unsigned int)(64 - v34);
                  goto LABEL_74;
                }
LABEL_111:
                if ( sub_4B2D0(v36 == 7, 1, (unsigned int)*(_QWORD *)(a2 + 168), *(_QWORD *)(a2 + 128)) )
                {
                  *(_WORD *)(a2 + 24) = 271;
                  *(_QWORD *)(a2 + 168) = (unsigned int)(v49 + 1 - v50);
                }
                else if ( !v50 )
                {
                  if ( v49 == 7 )
                  {
                    *(_WORD *)(a2 + 24) = 251;
                    *(_BYTE *)(a2 + 85) = 2;
                    *(_BYTE *)(a2 + 121) = 0;
                    *(_BYTE *)(a2 + 161) = 0;
                  }
                  else if ( v49 == 15 )
                  {
                    *(_WORD *)(a2 + 24) = 255;
                    *(_BYTE *)(a2 + 85) = 2;
                    *(_BYTE *)(a2 + 121) = 0;
                    *(_BYTE *)(a2 + 161) = 0;
                  }
                }
                goto LABEL_3;
              }
              v51 = (unsigned int)(64 - v34);
LABEL_116:
              *(_QWORD *)(a2 + 128) = v51;
              *(_WORD *)(a2 + 24) = 6;
              *(_BYTE *)(a2 + 161) = 0;
              goto LABEL_3;
            }
          }
          else if ( (_DWORD)v35 != 31 )
          {
            if ( (_DWORD)v34 - (_DWORD)v35 != 1 )
            {
              if ( (unsigned int)v35 < (unsigned int)v34 )
              {
                v37 = (unsigned int)(32 - v34);
LABEL_74:
                *(_QWORD *)(a2 + 128) = v37;
                *(_WORD *)(a2 + 24) = 503;
                *(_QWORD *)(a2 + 168) = (unsigned int)(v35 + 1);
                goto LABEL_3;
              }
              goto LABEL_111;
            }
            v51 = (unsigned int)(32 - v34);
            goto LABEL_116;
          }
          *(_BYTE *)(a2 + 161) = 0;
          *(_WORD *)(a2 + 24) = 7;
          goto LABEL_3;
        case 0x1FC:
          *(_WORD *)(a2 + 24) = 25;
          goto LABEL_3;
        case 0x200:
        case 0x201:
        case 0x202:
          v15 = *(_WORD *)(a2 + 86);
          if ( v15 != *(_WORD *)(a2 + 126) )
            goto LABEL_3;
          v16 = *(_QWORD *)(a2 + 168);
          if ( (unsigned __int64)(v16 - 14) <= 1 )
            goto LABEL_3;
          v17 = v16 ^ 1;
          if ( (_WORD)v10 == 514 )
          {
            *(_WORD *)(a2 + 24) = 519;
            *(_BYTE *)(a2 + 121) = 14;
            *(_BYTE *)(a2 + 125) = 7;
            *(_QWORD *)(a2 + 128) = v17;
            *(_BYTE *)(a2 + 161) = 0;
          }
          else if ( v15 == 160 )
          {
            v52 = 516;
            if ( (_WORD)v10 == 512 )
              v52 = 515;
            *(_WORD *)(a2 + 24) = v52;
            *(_BYTE *)(a2 + 81) = 14;
            *(_BYTE *)(a2 + 85) = 7;
            *(_QWORD *)(a2 + 88) = v17;
            *(_BYTE *)(a2 + 121) = 0;
            *(_BYTE *)(a2 + 161) = 0;
          }
          else
          {
            v18 = 518;
            if ( (_WORD)v10 == 512 )
              v18 = 517;
            *(_WORD *)(a2 + 24) = v18;
            *(_BYTE *)(a2 + 121) = 14;
            *(_BYTE *)(a2 + 125) = 7;
            *(_QWORD *)(a2 + 128) = v17;
LABEL_38:
            *(_BYTE *)(a2 + 161) = 0;
          }
          goto LABEL_3;
        case 0x20B:
        case 0x20C:
        case 0x20E:
        case 0x20F:
        case 0x212:
        case 0x213:
          if ( *(_BYTE *)(a2 + 161) != 1 || *(_WORD *)(a2 + 166) != 160 )
            goto LABEL_3;
          LOWORD(v10) = v10 - 523;
          switch ( v10 )
          {
            case 0LL:
              *(_WORD *)(a2 + 24) = 28;
              break;
            case 1LL:
              *(_WORD *)(a2 + 24) = 525;
              break;
            case 3LL:
              *(_WORD *)(a2 + 24) = 37;
              break;
            case 4LL:
              *(_WORD *)(a2 + 24) = 528;
              break;
            case 7LL:
              *(_WORD *)(a2 + 24) = 39;
              break;
            case 8LL:
              *(_WORD *)(a2 + 24) = 532;
              break;
            default:
              goto LABEL_38;
          }
          goto LABEL_38;
        default:
          goto LABEL_3;
      }
    }
    if ( (unsigned __int16)v10 > 0x16u )
    {
      if ( (_WORD)v10 == 268 )
      {
LABEL_25:
        if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 160 )
        {
          v11 = *(_WORD *)(a2 + 24);
          v12 = 9;
          if ( v11 != 12 )
          {
            v12 = 25;
            if ( v11 != 268 )
              v12 = 520;
          }
          v13 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_WORD *)(a2 + 24) = v12;
          v14 = *(_DWORD *)(a2 + 152);
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 80) = v13;
          a4 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = v14;
          *(__m128 *)(a2 + 96) = a4;
        }
      }
    }
    else if ( (unsigned __int16)v10 > 9u )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0xA:
        case 0xC:
          v19 = *(_DWORD *)(a2 + 28);
          if ( (v19 & 1) == 0 || *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 160 )
            goto LABEL_41;
          v20 = 18;
          if ( (_WORD)v10 != 10 )
            v20 = 20;
          break;
        case 0xE:
          if ( *(_BYTE *)(a2 + 121) == 5
            && !*(_QWORD *)(a2 + 128)
            && (*(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 161
             || *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 161) )
          {
            goto LABEL_68;
          }
          v19 = *(_DWORD *)(a2 + 28);
          if ( (v19 & 1) == 0 || *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 160 )
            goto LABEL_3;
          v20 = 21;
          break;
        case 0x10:
          goto LABEL_25;
        case 0x16:
          v33 = *(_BYTE *)(a2 + 121);
          if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 160 )
          {
            if ( (v33 & 0xFB) == 1 )
            {
              *(_WORD *)(a2 + 24) = 23;
              v44 = (_DWORD *)(a2 + 80);
              v45 = (_DWORD *)(a2 + 120);
              for ( i = 9; i; --i )
                *v44++ = *v45++;
              *(_BYTE *)(a2 + 121) = 0;
            }
          }
          else if ( v33 == 1 && (unsigned __int8)sub_2A020(a2 + 80, a2 + 120) )
          {
LABEL_68:
            *(_BYTE *)(a2 + 121) = 0;
            *(_WORD *)(a2 + 24) = 23;
          }
          goto LABEL_3;
        default:
          goto LABEL_3;
      }
LABEL_48:
      v21 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      v22 = *(_DWORD *)(a2 + 112);
      *(_WORD *)(a2 + 24) = v20;
      *(_DWORD *)(a2 + 28) = v19 & 0xFFFFFFFE;
      *(__m128i *)(a2 + 40) = v21;
      v23 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(_DWORD *)(a2 + 72) = v22;
      LODWORD(v10) = *(_DWORD *)(a2 + 152);
      *(__m128i *)(a2 + 56) = v23;
      v24 = _mm_loadu_si128((const __m128i *)(a2 + 120));
      *(_DWORD *)(a2 + 112) = v10;
      LOWORD(v10) = v20;
      *(__m128i *)(a2 + 80) = v24;
      a4 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 136));
      *(_BYTE *)(a2 + 121) = 0;
      *(__m128 *)(a2 + 96) = a4;
LABEL_41:
      if ( (_WORD)v10 != 12 )
        goto LABEL_3;
      goto LABEL_25;
    }
  }
LABEL_3:
  v6 = a2 + 41;
  while ( *(_BYTE *)v6 )
  {
    if ( *(_BYTE *)v6 == 1 )
    {
      v7 = *(_WORD *)(v6 + 5);
      if ( (unsigned __int16)(v7 - 129) <= 0x41u )
      {
        v8 = *(char *)(v6 + 31);
        if ( v8 > 5 || (_BYTE)v8 && v7 <= 0xA2u )
        {
          v5 = 0;
          sub_4B610((__int64)"%a: bad instruction decoding", *(double *)a4.m128_u64);
          return v5;
        }
      }
    }
    v6 += 40;
    if ( v6 == a2 + 361 )
      return v5;
  }
  return v5;
}
