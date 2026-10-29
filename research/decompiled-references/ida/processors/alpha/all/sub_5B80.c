__int64 __fastcall sub_5B80(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned int next_dword; // r13d
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned int v9; // r8d
  unsigned __int64 v10; // rdx
  unsigned __int16 *v11; // rdi
  int v12; // eax
  int v13; // r9d
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int16 *v19; // rax
  int v20; // esi
  int v21; // edx
  __m128i v22; // xmm0
  int v23; // edx
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int16 v26; // cx
  _DWORD *v27; // rdi
  _DWORD *v28; // rsi
  __int64 j; // rcx
  __m128i v30; // xmm0
  int v31; // eax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  int v34; // eax
  __m128i v35; // xmm0
  __int16 v36; // ax
  __m128i v37; // xmm0
  int v38; // eax
  __m128i v39; // xmm0
  __int16 v40; // dx
  __int16 v41; // ax
  __m128i v42; // xmm0
  int v43; // eax
  __m128i v44; // xmm0
  __int16 v45; // ax
  bool v46; // zf
  int v47; // eax
  __m128i v48; // xmm0
  int v49; // eax
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  __int16 v52; // ax
  __m128i v53; // xmm0
  int v54; // eax
  __m128i v55; // xmm0
  __int16 v56; // dx
  unsigned __int64 v57; // rax
  _DWORD *v58; // rdi
  _DWORD *v59; // rsi
  __int64 i; // rcx

  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 8) & 3LL;
    if ( (*(_QWORD *)(a2 + 8) & 3) != 0 )
      return 0;
    getinf_flag();
    setinf_flag();
    next_dword = insn_get_next_dword();
    setinf_flag();
    v7 = 0;
    v8 = 52;
    v9 = next_dword >> 26;
LABEL_5:
    if ( v7 >= v8 )
      return 0;
    while ( 1 )
    {
      v10 = (v7 + v8) >> 1;
      v11 = (unsigned __int16 *)qword_CC80 + v10 + ((v7 + v8) & 0xFFFFFFFFFFFFFFFELL);
      v12 = *v11;
      v13 = v9 - v12;
      if ( (int)(v9 - v12) < 0 )
      {
        v8 = (v7 + v8) >> 1;
        goto LABEL_5;
      }
      if ( v9 == v12 )
        break;
      v7 = v10 + 1;
      if ( v10 + 1 >= v8 )
        return 0;
    }
    if ( !v11 )
      return 0;
    switch ( *((_BYTE *)v11 + 4) )
    {
      case 1:
      case 2:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (next_dword >> 21) & 0x1F;
        if ( *((_BYTE *)v11 + 4) == 2 )
          *(_WORD *)(a2 + 46) = ((next_dword >> 21) & 0x1F) + 32;
        *(_BYTE *)(a2 + 45) = 7;
        v13 = (unsigned __int16)next_dword;
        *(_BYTE *)(a2 + 81) = 4;
        *(_BYTE *)(a2 + 85) = 7;
        *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0x1F;
        *(_QWORD *)(a2 + 96) = (__int16)next_dword;
        goto LABEL_22;
      case 3:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 7;
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 46) = (next_dword >> 21) & 0x1F;
        *(_BYTE *)(a2 + 125) = 7;
        *(_WORD *)(a2 + 126) = next_dword & 0x1F;
        if ( (next_dword & 0x1000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 88) = (unsigned __int8)(next_dword >> 13);
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 7;
          *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0x1F;
          if ( (*(_BYTE *)(a1 + 216) & 1) != 0 && (next_dword & 0xE000) != 0 )
            return 0;
        }
        v13 = (next_dword >> 5) & 0x7F;
LABEL_22:
        v15 = v11[1];
        if ( (_WORD)v15 )
        {
LABEL_23:
          *(_WORD *)(a2 + 24) = v15;
          switch ( v15 )
          {
            case 9:
            case 48:
            case 49:
            case 50:
            case 149:
            case 150:
            case 163:
            case 164:
            case 193:
            case 194:
              if ( *(_WORD *)(a2 + 46) == 31 )
                goto LABEL_45;
              return 0;
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
            case 63:
            case 166:
            case 167:
            case 168:
            case 169:
              if ( *(_WORD *)(a2 + 46) != 63 )
                return 0;
LABEL_45:
              v21 = *(_DWORD *)(a2 + 112);
              *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
              v22 = _mm_loadu_si128((const __m128i *)(a2 + 96));
              *(_DWORD *)(a2 + 72) = v21;
              v23 = *(_DWORD *)(a2 + 152);
              *(__m128i *)(a2 + 56) = v22;
              v24 = _mm_loadu_si128((const __m128i *)(a2 + 120));
              *(_DWORD *)(a2 + 112) = v23;
              *(__m128i *)(a2 + 80) = v24;
              v25 = _mm_loadu_si128((const __m128i *)(a2 + 136));
              *(_BYTE *)(a2 + 121) = 0;
              *(__m128i *)(a2 + 96) = v25;
              if ( (*(_BYTE *)(a1 + 216) & 2) == 0 )
                return *(unsigned __int16 *)(a2 + 26);
              if ( (unsigned __int16)v15 <= 0x2Fu )
                goto LABEL_47;
              goto LABEL_105;
            case 68:
            case 90:
            case 91:
              v30 = _mm_loadu_si128((const __m128i *)(a2 + 80));
              v31 = *(_DWORD *)(a2 + 112);
              *(_BYTE *)(a2 + 81) = 0;
              *(__m128i *)(a2 + 40) = v30;
              v32 = _mm_loadu_si128((const __m128i *)(a2 + 96));
              *(_DWORD *)(a2 + 72) = v31;
              *(_BYTE *)(a2 + 41) = 3;
              *(__m128i *)(a2 + 56) = v32;
              return *(unsigned __int16 *)(a2 + 26);
            case 70:
            case 125:
            case 191:
            case 196:
              goto LABEL_54;
            case 92:
            case 93:
              if ( *(_WORD *)(a2 + 86) != 31 )
                return 0;
              *(_WORD *)(a2 + 46) += 32;
              goto LABEL_72;
            case 94:
              if ( *(_WORD *)(a2 + 46) != 31 || *(_BYTE *)(a2 + 81) != 5 || *(_QWORD *)(a2 + 88) != 1 )
                return 0;
              v37 = _mm_loadu_si128((const __m128i *)(a2 + 120));
              v38 = *(_DWORD *)(a2 + 152);
              *(_BYTE *)(a2 + 81) = 0;
              *(_BYTE *)(a2 + 121) = 0;
              *(__m128i *)(a2 + 40) = v37;
              v39 = _mm_loadu_si128((const __m128i *)(a2 + 136));
              *(_DWORD *)(a2 + 72) = v38;
              *(__m128i *)(a2 + 56) = v39;
              return *(unsigned __int16 *)(a2 + 26);
            case 102:
            case 103:
            case 104:
              if ( *(_WORD *)(a2 + 86) != 63 )
                return 0;
              *(_WORD *)(a2 + 46) -= 32;
              goto LABEL_72;
            case 110:
            case 172:
              *(_BYTE *)(a2 + 85) = 0;
              return *(unsigned __int16 *)(a2 + 26);
            case 111:
            case 182:
              *(_BYTE *)(a2 + 85) = 1;
              if ( (*(_BYTE *)(a1 + 216) & 2) != 0 )
                goto LABEL_57;
              return *(unsigned __int16 *)(a2 + 26);
            case 113:
            case 120:
            case 174:
            case 181:
              *(_BYTE *)(a2 + 85) = 4;
              return *(unsigned __int16 *)(a2 + 26);
            case 114:
            case 115:
            case 176:
            case 177:
              *(_BYTE *)(a2 + 85) = 2;
              if ( (*(_BYTE *)(a1 + 216) & 2) == 0 )
                return *(unsigned __int16 *)(a2 + 26);
LABEL_57:
              if ( (unsigned __int16)v15 > 0x93u )
                goto LABEL_58;
              goto LABEL_50;
            case 126:
            case 138:
              v36 = *(_WORD *)(a2 + 86);
              if ( *(_WORD *)(a2 + 46) == v36 && v36 == *(_WORD *)(a2 + 126) )
                goto LABEL_67;
              return 0;
            case 151:
            case 153:
            case 154:
              goto LABEL_55;
            default:
              if ( (*(_BYTE *)(a1 + 216) & 2) == 0 )
                return *(unsigned __int16 *)(a2 + 26);
              if ( (unsigned __int16)v15 <= 0x2Fu )
              {
                if ( (unsigned __int16)v15 > 2u )
                {
LABEL_47:
                  switch ( v15 )
                  {
                    case 3:
                      v52 = 218;
                      if ( *(_WORD *)(a2 + 46) == 31 )
                        goto LABEL_100;
                      return *(unsigned __int16 *)(a2 + 26);
                    case 14:
                      *(_WORD *)(a2 + 24) = 220;
                      return *(unsigned __int16 *)(a2 + 26);
                    case 15:
                      v45 = *(_WORD *)(a2 + 46);
                      if ( v45 == 31 )
                      {
                        v57 = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
                        *(_BYTE *)(a2 + 121) = 0;
                        if ( v57 == 0x1F000000000100LL )
                        {
                          v46 = *(_WORD *)(a2 + 126) == 31;
                          *(_BYTE *)(a2 + 81) = 0;
                          if ( v46 )
                          {
                            *(_WORD *)(a2 + 24) = 201;
                            *(_BYTE *)(a2 + 41) = 0;
                          }
                          else
                          {
                            *(_WORD *)(a2 + 24) = 203;
LABEL_122:
                            v58 = (_DWORD *)(a2 + 40);
                            v59 = (_DWORD *)(a2 + 120);
                            for ( i = 9; i; --i )
                              *v58++ = *v59++;
                            *(_BYTE *)(a2 + 41) = 1;
                          }
                          return *(unsigned __int16 *)(a2 + 26);
                        }
                      }
                      else
                      {
                        v46 = *(_BYTE *)(a2 + 81) == 1;
                        *(_WORD *)(a2 + 24) = 219;
                        if ( !v46 || v45 != *(_WORD *)(a2 + 86) )
                          return *(unsigned __int16 *)(a2 + 26);
                        *(_BYTE *)(a2 + 121) = 0;
                      }
                      *(_WORD *)(a2 + 24) = 208;
                      goto LABEL_97;
                    case 21:
                      if ( *(_WORD *)(a2 + 46) == 31 )
                      {
                        v42 = _mm_loadu_si128((const __m128i *)(a2 + 80));
                        v43 = *(_DWORD *)(a2 + 112);
                        *(_BYTE *)(a2 + 81) = 0;
                        *(_WORD *)(a2 + 24) = 222;
                        *(__m128i *)(a2 + 40) = v42;
                        v44 = _mm_loadu_si128((const __m128i *)(a2 + 96));
                        *(_DWORD *)(a2 + 72) = v43;
                        *(__m128i *)(a2 + 56) = v44;
                      }
                      return *(unsigned __int16 *)(a2 + 26);
                    case 45:
                      v40 = *(_WORD *)(a2 + 46);
                      v41 = *(_WORD *)(a2 + 86);
                      if ( v40 != 63 )
                      {
                        if ( v40 != v41 )
                          return *(unsigned __int16 *)(a2 + 26);
                        *(_WORD *)(a2 + 24) = 206;
                        goto LABEL_72;
                      }
                      *(_BYTE *)(a2 + 121) = 0;
                      if ( v41 == 63 )
                      {
                        v46 = *(_WORD *)(a2 + 126) == 63;
                        *(_BYTE *)(a2 + 81) = 0;
                        if ( !v46 )
                        {
                          *(_WORD *)(a2 + 24) = 205;
                          goto LABEL_122;
                        }
                        *(_WORD *)(a2 + 24) = 202;
                        *(_BYTE *)(a2 + 41) = 0;
                      }
                      else
                      {
                        *(_WORD *)(a2 + 24) = 204;
LABEL_97:
                        v47 = *(_DWORD *)(a2 + 112);
                        *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
                        v48 = _mm_loadu_si128((const __m128i *)(a2 + 96));
                        *(_DWORD *)(a2 + 72) = v47;
                        v49 = *(_DWORD *)(a2 + 152);
                        *(__m128i *)(a2 + 56) = v48;
                        v50 = _mm_loadu_si128((const __m128i *)(a2 + 120));
                        *(_DWORD *)(a2 + 112) = v49;
                        *(__m128i *)(a2 + 80) = v50;
                        v51 = _mm_loadu_si128((const __m128i *)(a2 + 136));
                        *(_BYTE *)(a2 + 81) = 1;
                        *(__m128i *)(a2 + 96) = v51;
                      }
                      return *(unsigned __int16 *)(a2 + 26);
                    case 47:
                      if ( *(_WORD *)(a2 + 46) != *(_WORD *)(a2 + 86) )
                        return *(unsigned __int16 *)(a2 + 26);
                      *(_WORD *)(a2 + 24) = 207;
                      goto LABEL_72;
                    default:
                      return *(unsigned __int16 *)(a2 + 26);
                  }
                }
                return *(unsigned __int16 *)(a2 + 26);
              }
              if ( (_WORD)v15 == 147 )
              {
                if ( *(_WORD *)(a2 + 46) == 31 )
                {
                  v52 = 217;
LABEL_100:
                  v53 = _mm_loadu_si128((const __m128i *)(a2 + 80));
                  *(_WORD *)(a2 + 24) = v52;
                  v54 = *(_DWORD *)(a2 + 112);
                  *(__m128i *)(a2 + 40) = v53;
                  v55 = _mm_loadu_si128((const __m128i *)(a2 + 96));
                  *(_DWORD *)(a2 + 72) = v54;
                  *(__m128i *)(a2 + 56) = v55;
LABEL_72:
                  v33 = _mm_loadu_si128((const __m128i *)(a2 + 120));
                  v34 = *(_DWORD *)(a2 + 152);
                  *(_BYTE *)(a2 + 121) = 0;
                  *(__m128i *)(a2 + 80) = v33;
                  v35 = _mm_loadu_si128((const __m128i *)(a2 + 136));
                  *(_DWORD *)(a2 + 112) = v34;
                  *(__m128i *)(a2 + 96) = v35;
                }
                return *(unsigned __int16 *)(a2 + 26);
              }
LABEL_105:
              if ( (unsigned __int16)v15 <= 0x93u )
              {
                if ( (_WORD)v15 == 69 )
                {
                  *(_WORD *)(a2 + 24) = 221;
                }
                else
                {
LABEL_50:
                  if ( (_WORD)v15 == 118 && *(_WORD *)(a2 + 46) == 31 && !*(_QWORD *)(a2 + 96) )
                  {
                    *(_WORD *)(a2 + 24) = 200;
LABEL_54:
                    *(_BYTE *)(a2 + 41) = 0;
LABEL_55:
                    *(_BYTE *)(a2 + 81) = 0;
                  }
                }
                return *(unsigned __int16 *)(a2 + 26);
              }
              if ( (unsigned __int16)v15 > 0xBCu )
              {
                if ( (unsigned __int16)(v15 - 189) > 1u )
                  return *(unsigned __int16 *)(a2 + 26);
              }
              else
              {
                if ( (unsigned __int16)v15 > 0xB8u )
                {
                  if ( *(_WORD *)(a2 + 46) != 31 || *(_WORD *)(a2 + 86) != *(_WORD *)(a2 + 126) )
                    return *(unsigned __int16 *)(a2 + 26);
                  v56 = 212;
                  if ( (_WORD)v15 != 188 )
                    v56 = v15 + 24;
                  *(_WORD *)(a2 + 24) = v56;
LABEL_64:
                  v27 = (_DWORD *)(a2 + 40);
                  v28 = (_DWORD *)(a2 + 80);
                  for ( j = 9; j; --j )
                    *v27++ = *v28++;
LABEL_67:
                  *(_BYTE *)(a2 + 81) = 0;
                  *(_BYTE *)(a2 + 121) = 0;
                  return *(unsigned __int16 *)(a2 + 26);
                }
LABEL_58:
                if ( (unsigned __int16)(v15 - 183) > 1u )
                  return *(unsigned __int16 *)(a2 + 26);
              }
              if ( *(_WORD *)(a2 + 46) != 63 || *(_WORD *)(a2 + 86) != *(_WORD *)(a2 + 126) )
                return *(unsigned __int16 *)(a2 + 26);
              v26 = 216;
              if ( (_WORD)v15 != 190 )
                v26 = *((_WORD *)qword_CC68 + (unsigned __int16)(v15 - 183));
              *(_WORD *)(a2 + 24) = v26;
              goto LABEL_64;
          }
        }
        v16 = 16LL * (int)(v9 - 16);
        v17 = *(unsigned __int64 *)((char *)&off_104C0 + v16 + 8);
LABEL_35:
        if ( v3 < v17 )
        {
          while ( 1 )
          {
            v18 = (v3 + v17) >> 1;
            v19 = *(unsigned __int16 **)((char *)&off_104C0 + v16) + v18 + ((v3 + v17) & 0xFFFFFFFFFFFFFFFELL);
            v20 = *v19;
            if ( v13 - v20 < 0 )
            {
              v17 = (v3 + v17) >> 1;
              goto LABEL_35;
            }
            if ( v13 == v20 )
              break;
            v3 = v18 + 1;
            if ( v18 + 1 >= v17 )
              return 0;
          }
          if ( v19 )
          {
            *(_DWORD *)(a2 + 28) = *((unsigned __int8 *)v19 + 4);
            v15 = v19[1];
            goto LABEL_23;
          }
        }
        return 0;
      case 4:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 3;
        *(_BYTE *)(a2 + 81) = 1;
        v13 = (unsigned __int16)next_dword >> 5;
        *(_BYTE *)(a2 + 85) = 3;
        *(_WORD *)(a2 + 46) = ((next_dword >> 21) & 0x1F) + 32;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 3;
        *(_WORD *)(a2 + 86) = (BYTE2(next_dword) & 0x1F) + 32;
        *(_WORD *)(a2 + 126) = (next_dword & 0x1F) + 32;
        goto LABEL_22;
      case 5:
      case 6:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = (next_dword >> 21) & 0x1F;
        if ( *((_BYTE *)v11 + 4) == 6 )
          *(_WORD *)(a2 + 46) = ((next_dword >> 21) & 0x1F) + 32;
        *(_BYTE *)(a2 + 81) = 7;
        v14 = next_dword & 0x1FFFFF;
        *(_BYTE *)(a2 + 85) = 9;
        if ( (next_dword & 0x100000) != 0 )
          v14 = next_dword | 0xFFFFFFFFFFE00000LL;
        *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26) + 4 * v14;
        goto LABEL_22;
      case 7:
        if ( !next_dword )
          return 0;
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = next_dword & 0x3FFFFFF;
        goto LABEL_22;
      case 8:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 7;
        *(_BYTE *)(a2 + 81) = 3;
        v13 = (unsigned __int16)next_dword >> 14;
        *(_WORD *)(a2 + 46) = (next_dword >> 21) & 0x1F;
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0x1F;
        *(_QWORD *)(a2 + 128) = 4LL * (next_dword & 0x3FFF);
        goto LABEL_22;
      default:
        if ( under_debugger )
          BUG();
        interr();
        return sub_6470(10132);
    }
  }
  return 0;
}

