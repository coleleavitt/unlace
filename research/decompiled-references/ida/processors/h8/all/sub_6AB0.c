__int64 __fastcall sub_6AB0(__int64 a1, __int16 a2, unsigned __int8 a3, char a4)
{
  __int16 v4; // si
  unsigned int v5; // edx
  __m128i v6; // xmm0
  int v7; // edx
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  int v10; // edx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  int v13; // edx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  int v16; // edx
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  int v19; // edx
  __m128i v20; // xmm0
  __m128i v22; // xmm0
  int v23; // edx
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  int v26; // edx
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  int v29; // edx
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  int v32; // edx
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  int v35; // edx
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  int v38; // edx
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  int v41; // edx
  __m128i v42; // xmm0

  v4 = a3 | (unsigned __int16)(a2 << 8);
  v5 = 0;
  if ( v4 == 4608 )
  {
    if ( (a4 & 1) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 68;
    goto LABEL_107;
  }
  if ( v4 > 4608 )
  {
    if ( v4 == 4992 )
    {
      if ( (a4 & 1) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 67;
      goto LABEL_107;
    }
    if ( v4 > 4992 )
    {
      if ( v4 == 5968 )
      {
        if ( (a4 & 2) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 46;
        goto LABEL_82;
      }
      if ( v4 > 5968 )
      {
        if ( v4 == 6064 )
        {
          if ( (a4 & 4) == 0 )
            return v5;
          *(_DWORD *)(a1 + 28) = 3;
          *(_WORD *)(a1 + 24) = 59;
          return 1;
        }
        if ( v4 > 6064 )
        {
          if ( v4 == 6112 )
          {
            if ( (a4 & 4) == 0 )
              return v5;
            *(_WORD *)(a1 + 24) = 45;
            goto LABEL_73;
          }
          if ( v4 != 6128 )
          {
            if ( v4 == 6096 && (a4 & 2) != 0 )
            {
              *(_WORD *)(a1 + 24) = 45;
              goto LABEL_82;
            }
            return v5;
          }
          if ( (a4 & 4) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 45;
        }
        else
        {
          if ( v4 == 6016 )
          {
            if ( (a4 & 1) == 0 )
              return v5;
            *(_DWORD *)(a1 + 28) = 1;
            *(_WORD *)(a1 + 24) = 59;
            return 1;
          }
          if ( v4 > 6016 )
          {
            if ( v4 == 6032 && (a4 & 2) != 0 )
            {
              *(_DWORD *)(a1 + 28) = 2;
              *(_WORD *)(a1 + 24) = 59;
              return 1;
            }
            return v5;
          }
          if ( v4 == 5984 )
          {
            if ( (a4 & 4) == 0 )
              return v5;
            *(_WORD *)(a1 + 24) = 46;
            goto LABEL_73;
          }
          if ( v4 != 6000 || (a4 & 4) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 46;
        }
        goto LABEL_27;
      }
      if ( v4 == 5104 )
      {
        if ( (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 67;
        goto LABEL_73;
      }
      if ( v4 > 5104 )
      {
        if ( v4 == 5904 )
        {
          if ( (a4 & 2) == 0 )
            return v5;
          *(_DWORD *)(a1 + 28) = 2;
          *(_WORD *)(a1 + 24) = 61;
          return 1;
        }
        if ( v4 == 5936 )
        {
          if ( (a4 & 4) == 0 )
            return v5;
          *(_DWORD *)(a1 + 28) = 3;
          *(_WORD *)(a1 + 24) = 61;
          return 1;
        }
        if ( v4 == 5888 && (a4 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 28) = 1;
          *(_WORD *)(a1 + 24) = 61;
          return 1;
        }
        return v5;
      }
      if ( v4 == 5056 )
      {
        if ( (a4 & 1) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 67;
        goto LABEL_97;
      }
      if ( v4 <= 5056 )
      {
        if ( v4 == 5008 )
        {
          if ( (a4 & 2) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 67;
          goto LABEL_82;
        }
        if ( v4 != 5040 || (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 67;
        goto LABEL_27;
      }
      if ( v4 != 5072 || (a4 & 2) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 67;
    }
    else
    {
      if ( v4 == 4800 )
      {
        if ( (a4 & 1) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 66;
        goto LABEL_97;
      }
      if ( v4 > 4800 )
      {
        if ( v4 != 4912 )
        {
          if ( v4 > 4912 )
          {
            if ( v4 == 4944 )
            {
              if ( (a4 & 2) == 0 )
                return v5;
              *(_WORD *)(a1 + 24) = 69;
              goto LABEL_89;
            }
            if ( v4 != 4976 )
            {
              if ( v4 != 4928 || (a4 & 1) == 0 )
                return v5;
              *(_WORD *)(a1 + 24) = 69;
              goto LABEL_97;
            }
            if ( (a4 & 4) == 0 )
              return v5;
            *(_WORD *)(a1 + 24) = 69;
          }
          else
          {
            if ( v4 == 4864 )
            {
              if ( (a4 & 1) == 0 )
                return v5;
              *(_WORD *)(a1 + 24) = 69;
              goto LABEL_107;
            }
            if ( v4 > 4864 )
            {
              if ( v4 == 4880 && (a4 & 2) != 0 )
              {
                *(_WORD *)(a1 + 24) = 69;
                goto LABEL_82;
              }
              return v5;
            }
            if ( v4 == 4816 )
            {
              if ( (a4 & 2) == 0 )
                return v5;
              *(_WORD *)(a1 + 24) = 66;
              goto LABEL_89;
            }
            if ( v4 != 4848 || (a4 & 4) == 0 )
              return v5;
            *(_WORD *)(a1 + 24) = 66;
          }
LABEL_73:
          v12 = _mm_loadu_si128((const __m128i *)(a1 + 40));
          v13 = *(_DWORD *)(a1 + 72);
          *(_DWORD *)(a1 + 28) = 3;
          *(_BYTE *)(a1 + 41) = 5;
          *(__m128i *)(a1 + 80) = v12;
          v14 = _mm_loadu_si128((const __m128i *)(a1 + 56));
          *(_DWORD *)(a1 + 112) = v13;
          *(_BYTE *)(a1 + 80) = 1;
          *(_BYTE *)(a1 + 45) = 2;
          *(_QWORD *)(a1 + 48) = 2;
          *(__m128i *)(a1 + 96) = v14;
          return 1;
        }
        if ( (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 69;
        goto LABEL_27;
      }
      if ( v4 == 4720 )
      {
        if ( (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 68;
        goto LABEL_73;
      }
      if ( v4 > 4720 )
      {
        if ( v4 == 4752 )
        {
          if ( (a4 & 2) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 66;
          goto LABEL_82;
        }
        if ( v4 != 4784 )
        {
          if ( v4 != 4736 || (a4 & 1) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 66;
          goto LABEL_107;
        }
        if ( (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 66;
        goto LABEL_27;
      }
      if ( v4 == 4672 )
      {
        if ( (a4 & 1) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 68;
        goto LABEL_97;
      }
      if ( v4 <= 4672 )
      {
        if ( v4 == 4624 )
        {
          if ( (a4 & 2) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 68;
          goto LABEL_82;
        }
        if ( v4 != 4656 || (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 68;
        goto LABEL_27;
      }
      if ( v4 != 4688 || (a4 & 2) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 68;
    }
LABEL_89:
    v18 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    v19 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 28) = 2;
    *(_BYTE *)(a1 + 41) = 5;
    *(__m128i *)(a1 + 80) = v18;
    v20 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    *(_DWORD *)(a1 + 112) = v19;
    *(_BYTE *)(a1 + 80) = 1;
    *(_BYTE *)(a1 + 45) = 1;
    *(_QWORD *)(a1 + 48) = 2;
    *(__m128i *)(a1 + 96) = v20;
    return 1;
  }
  if ( v4 == 4352 )
  {
    if ( (a4 & 1) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 75;
    goto LABEL_107;
  }
  if ( v4 <= 4352 )
  {
    if ( v4 != 4216 )
    {
      if ( v4 <= 4216 )
      {
        if ( v4 != 4152 )
        {
          if ( v4 <= 4152 )
          {
            if ( v4 != 4128 )
            {
              if ( v4 <= 4128 )
              {
                if ( v4 != 4096 )
                {
                  if ( v4 == 4112 && (a4 & 2) != 0 )
                  {
                    *(_WORD *)(a1 + 24) = 74;
LABEL_82:
                    v15 = _mm_loadu_si128((const __m128i *)(a1 + 40));
                    v16 = *(_DWORD *)(a1 + 72);
                    *(_DWORD *)(a1 + 28) = 2;
                    *(_BYTE *)(a1 + 44) &= ~8u;
                    *(__m128i *)(a1 + 80) = v15;
                    v17 = _mm_loadu_si128((const __m128i *)(a1 + 56));
                    *(_DWORD *)(a1 + 112) = v16;
                    *(_BYTE *)(a1 + 80) = 1;
                    *(_BYTE *)(a1 + 41) = 5;
                    *(_BYTE *)(a1 + 45) = 1;
                    *(_QWORD *)(a1 + 48) = 1;
                    *(__m128i *)(a1 + 96) = v17;
                    return 1;
                  }
                  return v5;
                }
                if ( (a4 & 1) == 0 )
                  return v5;
                *(_WORD *)(a1 + 24) = 74;
LABEL_107:
                v31 = _mm_loadu_si128((const __m128i *)(a1 + 40));
                v32 = *(_DWORD *)(a1 + 72);
                *(_DWORD *)(a1 + 28) = 1;
                *(_BYTE *)(a1 + 44) &= ~8u;
                *(__m128i *)(a1 + 80) = v31;
                v33 = _mm_loadu_si128((const __m128i *)(a1 + 56));
                *(_DWORD *)(a1 + 112) = v32;
                *(_BYTE *)(a1 + 80) = 1;
                *(_BYTE *)(a1 + 41) = 5;
                *(_BYTE *)(a1 + 45) = 0;
                *(_QWORD *)(a1 + 48) = 1;
                *(__m128i *)(a1 + 96) = v33;
                return 1;
              }
              if ( v4 != 4144 || (a4 & 4) == 0 )
                return v5;
              *(_WORD *)(a1 + 24) = 74;
              goto LABEL_27;
            }
            if ( (a4 & 2) == 0 )
              return v5;
            *(_WORD *)(a1 + 24) = 74;
LABEL_38:
            v9 = _mm_loadu_si128((const __m128i *)(a1 + 40));
            v10 = *(_DWORD *)(a1 + 72);
            *(_DWORD *)(a1 + 28) = 2;
            *(_BYTE *)(a1 + 41) = 5;
            *(__m128i *)(a1 + 80) = v9;
            v11 = _mm_loadu_si128((const __m128i *)(a1 + 56));
            *(_DWORD *)(a1 + 112) = v10;
            *(_BYTE *)(a1 + 80) = 1;
            *(_BYTE *)(a1 + 45) = 1;
            *(_QWORD *)(a1 + 48) = 4;
            *(__m128i *)(a1 + 96) = v11;
            return 1;
          }
          if ( v4 != 4192 )
          {
            if ( v4 <= 4192 )
            {
              if ( v4 != 4160 )
              {
                if ( v4 != 4176 || (a4 & 2) == 0 )
                  return v5;
                *(_WORD *)(a1 + 24) = 74;
                goto LABEL_89;
              }
              if ( (a4 & 1) == 0 )
                return v5;
              *(_WORD *)(a1 + 24) = 74;
LABEL_97:
              v25 = _mm_loadu_si128((const __m128i *)(a1 + 40));
              v26 = *(_DWORD *)(a1 + 72);
              *(_DWORD *)(a1 + 28) = 1;
              *(_BYTE *)(a1 + 41) = 5;
              *(__m128i *)(a1 + 80) = v25;
              v27 = _mm_loadu_si128((const __m128i *)(a1 + 56));
              *(_DWORD *)(a1 + 112) = v26;
              *(_BYTE *)(a1 + 80) = 1;
              *(_BYTE *)(a1 + 45) = 0;
              *(_QWORD *)(a1 + 48) = 2;
              *(__m128i *)(a1 + 96) = v27;
              return 1;
            }
            if ( v4 != 4208 || (a4 & 4) == 0 )
              return v5;
            *(_WORD *)(a1 + 24) = 74;
            goto LABEL_73;
          }
          if ( (a4 & 2) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 74;
LABEL_100:
          v28 = _mm_loadu_si128((const __m128i *)(a1 + 40));
          v29 = *(_DWORD *)(a1 + 72);
          *(_DWORD *)(a1 + 28) = 2;
          *(_BYTE *)(a1 + 41) = 5;
          *(__m128i *)(a1 + 80) = v28;
          v30 = _mm_loadu_si128((const __m128i *)(a1 + 56));
          *(_DWORD *)(a1 + 112) = v29;
          *(_BYTE *)(a1 + 80) = 1;
          *(_BYTE *)(a1 + 45) = 1;
          *(_QWORD *)(a1 + 48) = 8;
          *(__m128i *)(a1 + 96) = v30;
          return 1;
        }
        if ( (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 74;
LABEL_164:
        v34 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        v35 = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 28) = 3;
        *(_BYTE *)(a1 + 41) = 5;
        *(__m128i *)(a1 + 80) = v34;
        v36 = _mm_loadu_si128((const __m128i *)(a1 + 56));
        *(_DWORD *)(a1 + 112) = v35;
        *(_BYTE *)(a1 + 80) = 1;
        *(_BYTE *)(a1 + 45) = 2;
        *(_QWORD *)(a1 + 48) = 4;
        *(__m128i *)(a1 + 96) = v36;
        return 1;
      }
      if ( v4 == 4288 )
      {
        if ( (a4 & 1) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 72;
        goto LABEL_97;
      }
      if ( v4 <= 4288 )
      {
        if ( v4 != 4256 )
        {
          if ( v4 <= 4256 )
          {
            if ( v4 != 4224 )
            {
              if ( v4 == 4240 && (a4 & 2) != 0 )
              {
                *(_WORD *)(a1 + 24) = 72;
                goto LABEL_82;
              }
              return v5;
            }
            if ( (a4 & 1) == 0 )
              return v5;
            *(_WORD *)(a1 + 24) = 72;
            goto LABEL_107;
          }
          if ( v4 != 4272 || (a4 & 4) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 72;
          goto LABEL_27;
        }
        if ( (a4 & 1) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 74;
LABEL_94:
        v22 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        v23 = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 28) = 1;
        *(_BYTE *)(a1 + 41) = 5;
        *(__m128i *)(a1 + 80) = v22;
        v24 = _mm_loadu_si128((const __m128i *)(a1 + 56));
        *(_DWORD *)(a1 + 112) = v23;
        *(_BYTE *)(a1 + 80) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_QWORD *)(a1 + 48) = 4;
        *(__m128i *)(a1 + 96) = v24;
        return 1;
      }
      if ( v4 == 4336 )
      {
        if ( (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 72;
        goto LABEL_73;
      }
      if ( v4 != 4344 )
      {
        if ( v4 != 4304 || (a4 & 2) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 72;
        goto LABEL_89;
      }
      if ( (a4 & 4) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 74;
LABEL_199:
      v37 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      v38 = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 28) = 3;
      *(_BYTE *)(a1 + 41) = 5;
      *(__m128i *)(a1 + 80) = v37;
      v39 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      *(_DWORD *)(a1 + 112) = v38;
      *(_BYTE *)(a1 + 80) = 1;
      *(_BYTE *)(a1 + 45) = 2;
      *(_QWORD *)(a1 + 48) = 16;
      *(__m128i *)(a1 + 96) = v39;
      return 1;
    }
    if ( (a4 & 4) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 74;
LABEL_246:
    v40 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    v41 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 28) = 3;
    *(_BYTE *)(a1 + 41) = 5;
    *(__m128i *)(a1 + 80) = v40;
    v42 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    *(_DWORD *)(a1 + 112) = v41;
    *(_BYTE *)(a1 + 80) = 1;
    *(_BYTE *)(a1 + 45) = 2;
    *(_QWORD *)(a1 + 48) = 8;
    *(__m128i *)(a1 + 96) = v42;
    return 1;
  }
  if ( v4 == 4472 )
  {
    if ( (a4 & 4) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 75;
    goto LABEL_246;
  }
  if ( v4 <= 4472 )
  {
    if ( v4 == 4416 )
    {
      if ( (a4 & 1) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 75;
      goto LABEL_97;
    }
    if ( v4 <= 4416 )
    {
      if ( v4 != 4400 )
      {
        if ( v4 <= 4400 )
        {
          if ( v4 == 4368 )
          {
            if ( (a4 & 2) == 0 )
              return v5;
            *(_WORD *)(a1 + 24) = 75;
            goto LABEL_82;
          }
          if ( v4 != 4384 || (a4 & 2) == 0 )
            return v5;
          *(_WORD *)(a1 + 24) = 75;
          goto LABEL_38;
        }
        if ( v4 != 4408 || (a4 & 4) == 0 )
          return v5;
        *(_WORD *)(a1 + 24) = 75;
        goto LABEL_164;
      }
      if ( (a4 & 4) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 75;
LABEL_27:
      v6 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      v7 = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 28) = 3;
      *(_BYTE *)(a1 + 44) &= ~8u;
      *(__m128i *)(a1 + 80) = v6;
      v8 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      *(_DWORD *)(a1 + 112) = v7;
      *(_BYTE *)(a1 + 80) = 1;
      *(_BYTE *)(a1 + 41) = 5;
      *(_BYTE *)(a1 + 45) = 2;
      *(_QWORD *)(a1 + 48) = 1;
      *(__m128i *)(a1 + 96) = v8;
      return 1;
    }
    if ( v4 == 4448 )
    {
      if ( (a4 & 2) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 75;
      goto LABEL_100;
    }
    if ( v4 == 4464 )
    {
      if ( (a4 & 4) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 75;
      goto LABEL_73;
    }
    if ( v4 != 4432 || (a4 & 2) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 75;
    goto LABEL_89;
  }
  if ( v4 == 4544 )
  {
    if ( (a4 & 1) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 73;
    goto LABEL_97;
  }
  if ( v4 > 4544 )
  {
    if ( v4 == 4592 )
    {
      if ( (a4 & 4) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 73;
      goto LABEL_73;
    }
    if ( v4 == 4600 )
    {
      if ( (a4 & 4) == 0 )
        return v5;
      *(_WORD *)(a1 + 24) = 75;
      goto LABEL_199;
    }
    if ( v4 != 4560 || (a4 & 2) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 73;
    goto LABEL_89;
  }
  if ( v4 == 4512 )
  {
    if ( (a4 & 1) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 75;
    goto LABEL_94;
  }
  if ( v4 > 4512 )
  {
    if ( v4 != 4528 || (a4 & 4) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 73;
    goto LABEL_27;
  }
  if ( v4 == 4480 )
  {
    if ( (a4 & 1) == 0 )
      return v5;
    *(_WORD *)(a1 + 24) = 73;
    goto LABEL_107;
  }
  if ( v4 == 4496 && (a4 & 2) != 0 )
  {
    *(_WORD *)(a1 + 24) = 73;
    goto LABEL_82;
  }
  return v5;
}

