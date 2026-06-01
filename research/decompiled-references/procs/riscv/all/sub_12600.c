unsigned __int64 __fastcall sub_12600(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // kr08_8
  __int64 v6; // rdx
  bool v7; // zf
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int16 v20; // ax
  __m128i v21; // xmm0
  int v22; // eax
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  int v31; // eax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  int v44; // eax
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  int v49; // eax
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  int v54; // eax
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  int v59; // eax
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  __m128i v71; // xmm0
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  __m128i v74; // xmm0
  __m128i v75; // xmm0
  int v76; // eax
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  unsigned __int64 v80; // rax
  __m128i v81; // xmm0
  __m128i v82; // xmm0
  __m128i v83; // xmm0
  __m128i v84; // xmm0
  _DWORD *v85; // rdi
  _DWORD *v86; // rsi
  __int64 i; // rcx
  __m128i v88; // xmm0
  __m128i v89; // xmm0
  __m128i v90; // xmm0
  __m128i v91; // xmm0
  int v92; // eax
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  __m128i v95; // xmm0
  __m128i v96; // xmm0
  _DWORD *v97; // rdi
  _DWORD *v98; // rsi
  __int64 j; // rcx
  _DWORD *v100; // rdi
  _DWORD *v101; // rsi
  __int64 k; // rcx
  _DWORD *v103; // rdi
  __int64 v104; // rcx
  _DWORD *v105; // rsi

  result = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)result > 0x11Eu )
  {
    if ( (unsigned __int16)result <= 0x1CFu )
    {
      if ( (unsigned __int16)result <= 0x1A8u )
      {
        if ( (_WORD)result != 385 || *(_WORD *)(a2 + 46) )
          return result;
      }
      else
      {
        v6 = 1LL << ((unsigned __int8)result + 87);
        if ( (v6 & 0x5555540000LL) != 0 )
        {
          *(_BYTE *)(a2 + 161) = 0;
          *(_QWORD *)(a2 + 128) <<= *(_QWORD *)(a2 + 168);
          return result;
        }
        if ( (_WORD)result == 430 )
        {
          if ( !*(_QWORD *)(a2 + 168) )
          {
            result = 28;
            *(_BYTE *)(a2 + 161) = 0;
            *(_WORD *)(a2 + 24) = 28;
LABEL_16:
            if ( *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) )
            {
              if ( *(_BYTE *)(a2 + 121) == 1 && !*(_WORD *)(a2 + 126) )
              {
                *(_BYTE *)(a2 + 121) = 0;
                if ( (*(_BYTE *)(a2 + 34) & 4) != 0 && *(_BYTE *)(a2 + 28) == 2 )
                {
                  *(_WORD *)(a2 + 24) = 374;
                  *(_BYTE *)(a2 + 29) = 4;
                }
                else
                {
                  *(_WORD *)(a2 + 24) = 123;
                }
              }
            }
            else
            {
              v83 = _mm_loadu_si128((const __m128i *)(a2 + 120));
              result = *(unsigned int *)(a2 + 152);
              *(_BYTE *)(a2 + 121) = 0;
              *(_WORD *)(a2 + 24) = 123;
              *(__m128i *)(a2 + 80) = v83;
              v84 = _mm_loadu_si128((const __m128i *)(a2 + 136));
              *(_DWORD *)(a2 + 112) = result;
              *(_BYTE *)(a2 + 80) = 1;
              *(__m128i *)(a2 + 96) = v84;
            }
          }
          return result;
        }
        if ( (v6 & 1) == 0 )
          return result;
        if ( *(_WORD *)(a2 + 86) )
          return result;
        v7 = *(_WORD *)(a2 + 46) == 0;
        *(_BYTE *)(a2 + 81) = 0;
        if ( !v7 )
          return result;
      }
      *(_BYTE *)(a2 + 41) = 0;
      return result;
    }
    if ( (_WORD)result == 539 && (*(_BYTE *)(a1 + 468) & 4) != 0 )
    {
      result = sub_1FA90(a1, *(_QWORD *)(a2 + 16));
      if ( result != -1 )
      {
        *(_BYTE *)(a2 + 81) = 2;
        v80 = *(_QWORD *)(a2 + 88) + result;
        *(_WORD *)(a2 + 24) = 162;
        result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v80;
        *(_QWORD *)(a2 + 96) = result;
      }
    }
  }
  else if ( (unsigned __int16)result > 2u )
  {
    LODWORD(result) = result - 3;
    v5 = (unsigned int)result;
    result = (unsigned __int16)result;
    switch ( (__int16)result )
    {
      case 0:
        result = *(unsigned __int16 *)(a2 + 46);
        if ( (_WORD)result )
        {
          if ( (_WORD)result == 1 )
            *(_BYTE *)(a2 + 44) &= ~8u;
        }
        else
        {
          v90 = _mm_loadu_si128((const __m128i *)(a2 + 80));
          *(_BYTE *)(a2 + 81) = 0;
          *(_WORD *)(a2 + 24) = 140;
          result = *(unsigned int *)(a2 + 112);
          *(__m128i *)(a2 + 40) = v90;
          v91 = _mm_loadu_si128((const __m128i *)(a2 + 96));
          *(_DWORD *)(a2 + 72) = result;
          *(_BYTE *)(a2 + 40) = 0;
          *(__m128i *)(a2 + 56) = v91;
        }
        return result;
      case 1:
        if ( !*(_QWORD *)(a2 + 96) )
        {
          result = *(unsigned __int16 *)(a2 + 46);
          if ( (_WORD)result )
          {
            if ( (_WORD)result == 1 )
            {
              v20 = *(_WORD *)(a2 + 34);
              *(_BYTE *)(a2 + 44) &= ~8u;
              *(_BYTE *)(a2 + 81) = 1;
              result = (v20 & 4) == 0 ? 2 : 7;
              *(_BYTE *)(a2 + 85) = result;
            }
          }
          else if ( *(_WORD *)(a2 + 86) == 1 )
          {
            *(_BYTE *)(a2 + 41) = 0;
            *(_WORD *)(a2 + 24) = 142;
            *(_BYTE *)(a2 + 81) = 0;
            return 142;
          }
          else
          {
            v92 = *(_DWORD *)(a2 + 112);
            v93 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            *(_WORD *)(a2 + 24) = 141;
            *(_DWORD *)(a2 + 72) = v92;
            LOWORD(v92) = *(_WORD *)(a2 + 34);
            *(__m128i *)(a2 + 40) = v93;
            v94 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_BYTE *)(a2 + 81) = 0;
            *(_WORD *)(a2 + 40) = 256;
            *(__m128i *)(a2 + 56) = v94;
            result = (v92 & 4) == 0 ? 2 : 7;
            *(_BYTE *)(a2 + 45) = result;
          }
        }
        return result;
      case 2:
        if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
        {
          v73 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 134;
          result = *(unsigned int *)(a2 + 152);
          *(__m128i *)(a2 + 80) = v73;
          v74 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v74;
        }
        return result;
      case 3:
        if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
        {
          v35 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          result = *(unsigned int *)(a2 + 152);
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 135;
          *(__m128i *)(a2 + 80) = v35;
          v36 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v36;
        }
        return result;
      case 4:
        if ( *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) )
        {
          if ( *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
          {
            v75 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            v76 = *(_DWORD *)(a2 + 112);
            *(_WORD *)(a2 + 24) = 139;
            *(__m128i *)(a2 + 40) = v75;
            v77 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_DWORD *)(a2 + 72) = v76;
            result = *(unsigned int *)(a2 + 152);
            *(__m128i *)(a2 + 56) = v77;
            v78 = _mm_loadu_si128((const __m128i *)(a2 + 120));
            *(_BYTE *)(a2 + 40) = 0;
            *(__m128i *)(a2 + 80) = v78;
            v79 = _mm_loadu_si128((const __m128i *)(a2 + 136));
            *(_DWORD *)(a2 + 112) = result;
            *(_BYTE *)(a2 + 80) = 1;
            *(_BYTE *)(a2 + 121) = 0;
            *(__m128i *)(a2 + 96) = v79;
          }
        }
        else
        {
          v81 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          result = *(unsigned int *)(a2 + 152);
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 138;
          *(__m128i *)(a2 + 80) = v81;
          v82 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v82;
        }
        return result;
      case 5:
        if ( *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) )
        {
          if ( *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
          {
            v21 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            v22 = *(_DWORD *)(a2 + 112);
            *(_WORD *)(a2 + 24) = 136;
            *(__m128i *)(a2 + 40) = v21;
            v23 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_DWORD *)(a2 + 72) = v22;
            result = *(unsigned int *)(a2 + 152);
            *(__m128i *)(a2 + 56) = v23;
            v24 = _mm_loadu_si128((const __m128i *)(a2 + 120));
            *(_BYTE *)(a2 + 40) = 0;
            *(__m128i *)(a2 + 80) = v24;
            v25 = _mm_loadu_si128((const __m128i *)(a2 + 136));
            *(_DWORD *)(a2 + 112) = result;
            *(_BYTE *)(a2 + 80) = 1;
            *(_BYTE *)(a2 + 121) = 0;
            *(__m128i *)(a2 + 96) = v25;
          }
        }
        else
        {
          v88 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 137;
          result = *(unsigned int *)(a2 + 152);
          *(__m128i *)(a2 + 80) = v88;
          v89 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v89;
        }
        return result;
      case 16:
        if ( *(_BYTE *)(a2 + 81) != 1 )
        {
          if ( *(_QWORD *)(a2 + 128) )
            return result;
          goto LABEL_90;
        }
        result = *(unsigned __int16 *)(a2 + 86);
        if ( (_WORD)result )
        {
          if ( !*(_QWORD *)(a2 + 128) )
          {
LABEL_90:
            *(_BYTE *)(a2 + 121) = 0;
            *(_WORD *)(a2 + 24) = 123;
            return result;
          }
          if ( (_WORD)result == 3
            && (*(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 3)
            && (*(_BYTE *)(a1 + 468) & 4) != 0 )
          {
            result = sub_1FA90(a1, *(_QWORD *)(a2 + 16));
            if ( result != -1 )
            {
              v85 = (_DWORD *)(a2 + 80);
              v86 = (_DWORD *)(a2 + 120);
              for ( i = 9; i; --i )
                *v85++ = *v86++;
              *(_BYTE *)(a2 + 121) = 0;
              *(_WORD *)(a2 + 80) = 513;
              *(_WORD *)(a2 + 24) = 162;
              result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(_QWORD *)(a2 + 128) + result);
              *(_QWORD *)(a2 + 96) = result;
            }
          }
        }
        else if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) )
        {
          v95 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          result = *(unsigned int *)(a2 + 152);
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 122;
          *(__m128i *)(a2 + 80) = v95;
          v96 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v96;
        }
        else
        {
          *(_WORD *)(a2 + 24) = 121;
          v103 = (_DWORD *)(a2 + 40);
          v104 = 9;
          v105 = (_DWORD *)(a2 + 120);
          while ( v104 )
          {
            *v103++ = *v105++;
            --v104;
          }
          *(_BYTE *)(a2 + 40) = 0;
          *(_BYTE *)(a2 + 121) = 0;
          v7 = *(_QWORD *)(a2 + 48) == 0;
          *(_BYTE *)(a2 + 81) = 0;
          if ( v7 )
            *(_BYTE *)(a2 + 44) &= ~8u;
        }
        return result;
      case 18:
        if ( *(_QWORD *)(a2 + 128) == 1 )
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 128;
        }
        return result;
      case 19:
        if ( *(_QWORD *)(a2 + 128) == -1 )
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 124;
        }
        return result;
      case 25:
        goto LABEL_16;
      case 26:
        if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
        {
          v37 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 125;
          result = *(unsigned int *)(a2 + 152);
          *(__m128i *)(a2 + 80) = v37;
          v38 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v38;
        }
        return result;
      case 28:
        if ( *(_BYTE *)(a2 + 121) != 1 || *(_WORD *)(a2 + 126) )
        {
          if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
          {
            v39 = _mm_loadu_si128((const __m128i *)(a2 + 120));
            result = *(unsigned int *)(a2 + 152);
            *(_BYTE *)(a2 + 121) = 0;
            *(_WORD *)(a2 + 24) = 131;
            *(__m128i *)(a2 + 80) = v39;
            v40 = _mm_loadu_si128((const __m128i *)(a2 + 136));
            *(_DWORD *)(a2 + 112) = result;
            *(_BYTE *)(a2 + 80) = 1;
            *(__m128i *)(a2 + 96) = v40;
          }
        }
        else
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 130;
        }
        return result;
      case 29:
        if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
        {
          v41 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          result = *(unsigned int *)(a2 + 152);
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 129;
          *(__m128i *)(a2 + 80) = v41;
          v42 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v42;
        }
        return result;
      case 35:
        if ( *(_QWORD *)(a2 + 48) == 15 && *(_QWORD *)(a2 + 88) == 15 )
        {
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_BYTE *)(a2 + 84) &= ~8u;
        }
        return result;
      case 48:
        if ( !*(_QWORD *)(a2 + 128) )
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 127;
          *(_WORD *)(a2 + 28) = 1026;
          return 1026;
        }
        return result;
      case 53:
        if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
        {
          v26 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 126;
          result = *(unsigned int *)(a2 + 152);
          *(__m128i *)(a2 + 80) = v26;
          v27 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v27;
        }
        return result;
      case 59:
        result = *(_QWORD *)(a2 + 88);
        switch ( result )
        {
          case 2uLL:
            *(_WORD *)(a2 + 24) = 159;
            break;
          case 3uLL:
            *(_WORD *)(a2 + 24) = 157;
            break;
          case 1uLL:
            *(_WORD *)(a2 + 24) = 161;
            break;
          default:
            goto LABEL_60;
        }
        v28 = _mm_loadu_si128((const __m128i *)(a2 + 120));
        result = *(unsigned int *)(a2 + 152);
        *(_BYTE *)(a2 + 121) = 0;
        *(__m128i *)(a2 + 80) = v28;
        v29 = _mm_loadu_si128((const __m128i *)(a2 + 136));
        *(_DWORD *)(a2 + 112) = result;
        *(_BYTE *)(a2 + 80) = 1;
        *(__m128i *)(a2 + 96) = v29;
LABEL_60:
        if ( *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
        {
          if ( *(_WORD *)(a2 + 24) == 62 )
          {
            *(_WORD *)(a2 + 24) = 150;
            v97 = (_DWORD *)(a2 + 40);
            v98 = (_DWORD *)(a2 + 80);
            for ( j = 9; j; --j )
              *v97++ = *v98++;
            *(_BYTE *)(a2 + 40) = 0;
            v100 = (_DWORD *)(a2 + 80);
            v101 = (_DWORD *)(a2 + 120);
            for ( k = 9; k; --k )
              *v100++ = *v101++;
            *(_BYTE *)(a2 + 80) = 1;
            *(_BYTE *)(a2 + 121) = 0;
          }
          else
          {
            *(_BYTE *)(a2 + 44) &= ~8u;
          }
        }
        return result;
      case 60:
        if ( *(_BYTE *)(a2 + 121) != 1 || *(_WORD *)(a2 + 126) )
        {
          if ( *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
          {
            v30 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            v31 = *(_DWORD *)(a2 + 112);
            *(_WORD *)(a2 + 24) = 151;
            *(__m128i *)(a2 + 40) = v30;
            v32 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_DWORD *)(a2 + 72) = v31;
            result = *(unsigned int *)(a2 + 152);
            *(__m128i *)(a2 + 56) = v32;
            v33 = _mm_loadu_si128((const __m128i *)(a2 + 120));
            *(_BYTE *)(a2 + 40) = 0;
            *(__m128i *)(a2 + 80) = v33;
            v34 = _mm_loadu_si128((const __m128i *)(a2 + 136));
            *(_DWORD *)(a2 + 112) = result;
            *(_BYTE *)(a2 + 80) = 1;
            *(_BYTE *)(a2 + 121) = 0;
            *(__m128i *)(a2 + 96) = v34;
          }
        }
        else
        {
          result = *(_QWORD *)(a2 + 88);
          *(_BYTE *)(a2 + 121) = 0;
          if ( result == 3073 )
          {
            *(_WORD *)(a2 + 24) = 145;
            *(_BYTE *)(a2 + 81) = 0;
            return result;
          }
          if ( result > 0xC01 )
          {
            if ( result == 3201 )
            {
              *(_WORD *)(a2 + 24) = 148;
              *(_BYTE *)(a2 + 81) = 0;
              return result;
            }
            if ( result > 0xC81 )
            {
              if ( result == 3202 )
              {
                *(_WORD *)(a2 + 24) = 146;
                *(_BYTE *)(a2 + 81) = 0;
                return result;
              }
            }
            else
            {
              if ( result == 3074 )
              {
                *(_WORD *)(a2 + 24) = 143;
                *(_BYTE *)(a2 + 81) = 0;
                return result;
              }
              if ( result == 3200 )
              {
                *(_WORD *)(a2 + 24) = 147;
                *(_BYTE *)(a2 + 81) = 0;
                return result;
              }
            }
            goto LABEL_197;
          }
          if ( result == 3 )
          {
            *(_WORD *)(a2 + 24) = 156;
            *(_BYTE *)(a2 + 81) = 0;
            return result;
          }
          if ( result > 3 )
          {
            if ( result == 3072 )
            {
              *(_WORD *)(a2 + 24) = 144;
              *(_BYTE *)(a2 + 81) = 0;
              return result;
            }
            goto LABEL_197;
          }
          if ( result != 1 )
          {
            if ( result == 2 )
            {
              *(_WORD *)(a2 + 24) = 158;
              *(_BYTE *)(a2 + 81) = 0;
              return result;
            }
LABEL_197:
            *(_WORD *)(a2 + 24) = 149;
            return result;
          }
          *(_WORD *)(a2 + 24) = 160;
          *(_BYTE *)(a2 + 81) = 0;
        }
        break;
      case 61:
        if ( *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
        {
          v43 = _mm_loadu_si128((const __m128i *)(a2 + 80));
          v44 = *(_DWORD *)(a2 + 112);
          *(_WORD *)(a2 + 24) = 152;
          *(__m128i *)(a2 + 40) = v43;
          v45 = _mm_loadu_si128((const __m128i *)(a2 + 96));
          *(_DWORD *)(a2 + 72) = v44;
          result = *(unsigned int *)(a2 + 152);
          *(__m128i *)(a2 + 56) = v45;
          v46 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 40) = 0;
          *(__m128i *)(a2 + 80) = v46;
          v47 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v47;
        }
        return result;
      case 62:
        if ( *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
        {
          v58 = _mm_loadu_si128((const __m128i *)(a2 + 80));
          *(_WORD *)(a2 + 24) = 153;
          v59 = *(_DWORD *)(a2 + 112);
          *(__m128i *)(a2 + 40) = v58;
          v60 = _mm_loadu_si128((const __m128i *)(a2 + 96));
          *(_DWORD *)(a2 + 72) = v59;
          result = *(unsigned int *)(a2 + 152);
          *(__m128i *)(a2 + 56) = v60;
          v61 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 40) = 0;
          *(__m128i *)(a2 + 80) = v61;
          v62 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v62;
        }
        return result;
      case 63:
        if ( *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
        {
          v48 = _mm_loadu_si128((const __m128i *)(a2 + 80));
          *(_WORD *)(a2 + 24) = 154;
          v49 = *(_DWORD *)(a2 + 112);
          *(__m128i *)(a2 + 40) = v48;
          v50 = _mm_loadu_si128((const __m128i *)(a2 + 96));
          *(_DWORD *)(a2 + 72) = v49;
          result = *(unsigned int *)(a2 + 152);
          *(__m128i *)(a2 + 56) = v50;
          v51 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 40) = 0;
          *(__m128i *)(a2 + 80) = v51;
          v52 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v52;
        }
        return result;
      case 64:
        if ( *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
        {
          v53 = _mm_loadu_si128((const __m128i *)(a2 + 80));
          *(_WORD *)(a2 + 24) = 155;
          v54 = *(_DWORD *)(a2 + 112);
          *(__m128i *)(a2 + 40) = v53;
          v55 = _mm_loadu_si128((const __m128i *)(a2 + 96));
          *(_DWORD *)(a2 + 72) = v54;
          result = *(unsigned int *)(a2 + 152);
          *(__m128i *)(a2 + 56) = v55;
          v56 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 40) = 0;
          *(__m128i *)(a2 + 80) = v56;
          v57 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v57;
        }
        return result;
      case 101:
        result = *(unsigned __int16 *)(a2 + 126);
        if ( *(_WORD *)(a2 + 86) == (_WORD)result )
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 112;
        }
        return result;
      case 102:
        result = *(unsigned __int16 *)(a2 + 126);
        if ( *(_WORD *)(a2 + 86) == (_WORD)result )
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 133;
        }
        return result;
      case 103:
        result = *(unsigned __int16 *)(a2 + 126);
        if ( *(_WORD *)(a2 + 86) == (_WORD)result )
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 132;
        }
        return result;
      case 170:
        if ( *(_BYTE *)(a2 + 121) == 1 && !*(_WORD *)(a2 + 126) )
        {
          result = *(unsigned int *)(a2 + 192);
          v71 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 28) &= 0xFu;
          *(__m128i *)(a2 + 120) = v71;
          v72 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_WORD *)(a2 + 24) = 328;
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(__m128i *)(a2 + 136) = v72;
        }
        return result;
      case 177:
        if ( *(_QWORD *)(a2 + 128) == -1 )
        {
          result = *(unsigned int *)(a2 + 192);
          v63 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 28) &= 0xFu;
          *(__m128i *)(a2 + 120) = v63;
          v64 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_WORD *)(a2 + 24) = 331;
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(__m128i *)(a2 + 136) = v64;
        }
        return result;
      case 207:
        if ( *(_BYTE *)(a2 + 121) == 1 && !*(_WORD *)(a2 + 126) )
        {
          result = *(unsigned int *)(a2 + 192);
          v65 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 28) = 0;
          *(_WORD *)(a2 + 24) = 332;
          *(__m128i *)(a2 + 120) = v65;
          v66 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(_BYTE *)(a2 + 161) = 0;
          *(__m128i *)(a2 + 136) = v66;
        }
        return result;
      case 239:
        result = *(unsigned __int16 *)(a2 + 126);
        if ( *(_WORD *)(a2 + 86) == (_WORD)result )
        {
          v67 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 28) = -27;
          *(_WORD *)(a2 + 24) = 335;
          result = *(unsigned int *)(a2 + 192);
          *(__m128i *)(a2 + 120) = v67;
          v68 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(_BYTE *)(a2 + 161) = 0;
          *(__m128i *)(a2 + 136) = v68;
        }
        return result;
      case 241:
        result = *(unsigned __int16 *)(a2 + 46);
        if ( (_WORD)result == *(_WORD *)(a2 + 86) && (_WORD)result == *(_WORD *)(a2 + 126) )
        {
          v69 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 28) = -27;
          *(_WORD *)(a2 + 24) = 336;
          result = *(unsigned int *)(a2 + 192);
          *(__m128i *)(a2 + 80) = v69;
          v70 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v70;
        }
        return result;
      case 243:
        result = *(unsigned __int16 *)(a2 + 126);
        if ( *(_WORD *)(a2 + 86) == (_WORD)result )
        {
          result = *(unsigned int *)(a2 + 192);
          v12 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 28) = -27;
          *(_WORD *)(a2 + 24) = 338;
          *(__m128i *)(a2 + 120) = v12;
          v13 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(_BYTE *)(a2 + 161) = 0;
          *(__m128i *)(a2 + 136) = v13;
        }
        return result;
      case 245:
        result = *(unsigned __int16 *)(a2 + 46);
        if ( (_WORD)result == *(_WORD *)(a2 + 86) && (_WORD)result == *(_WORD *)(a2 + 126) )
        {
          v14 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 28) = -27;
          *(_WORD *)(a2 + 24) = 337;
          result = *(unsigned int *)(a2 + 192);
          *(__m128i *)(a2 + 80) = v14;
          v15 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_DWORD *)(a2 + 112) = result;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v15;
        }
        return result;
      case 258:
        if ( *(_BYTE *)(a2 + 121) == 1 && !*(_WORD *)(a2 + 126) )
        {
          result = *(unsigned int *)(a2 + 192);
          v16 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 28) &= 0xFu;
          *(__m128i *)(a2 + 120) = v16;
          v17 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_WORD *)(a2 + 24) = 330;
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(__m128i *)(a2 + 136) = v17;
        }
        return result;
      case 259:
        if ( *(_BYTE *)(a2 + 121) == 1 && !*(_WORD *)(a2 + 126) )
        {
          result = *(unsigned int *)(a2 + 192);
          v18 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 28) &= 0xFu;
          *(__m128i *)(a2 + 120) = v18;
          v19 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_WORD *)(a2 + 24) = 329;
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(__m128i *)(a2 + 136) = v19;
        }
        return result;
      case 282:
        result = *(unsigned __int16 *)(a2 + 126);
        if ( *(_WORD *)(a2 + 86) == (_WORD)result )
        {
          result = *(unsigned int *)(a2 + 192);
          v8 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 28) &= 0xFu;
          *(__m128i *)(a2 + 120) = v8;
          v9 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_WORD *)(a2 + 24) = 333;
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(__m128i *)(a2 + 136) = v9;
        }
        return result;
      case 283:
        result = *(unsigned __int16 *)(a2 + 126);
        if ( *(_WORD *)(a2 + 86) == (_WORD)result )
        {
          result = *(unsigned int *)(a2 + 192);
          v10 = _mm_loadu_si128((const __m128i *)(a2 + 160));
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 28) &= 0xFu;
          *(__m128i *)(a2 + 120) = v10;
          v11 = _mm_loadu_si128((const __m128i *)(a2 + 176));
          *(_WORD *)(a2 + 24) = 334;
          *(_DWORD *)(a2 + 152) = result;
          *(_BYTE *)(a2 + 120) = 2;
          *(__m128i *)(a2 + 136) = v11;
        }
        return result;
      default:
        return v5;
    }
  }
  return result;
}
