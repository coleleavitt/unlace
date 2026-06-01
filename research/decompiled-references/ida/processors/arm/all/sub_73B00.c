__int64 __fastcall sub_73B00(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  int v5; // ecx
  char v6; // r8
  char v8; // di
  int v9; // edx
  __int16 v10; // dx
  int v11; // r10d
  __int16 v12; // r11
  int v13; // eax
  __int16 v14; // dx
  int v15; // r10d
  __int16 v16; // dx
  int v17; // ecx
  int v18; // edx
  __int16 v19; // ax
  unsigned __int16 v20; // di
  int v22; // eax
  char v23; // r9
  unsigned __int16 v24; // ax
  __int16 v25; // dx
  int v26; // ecx
  char v27; // r8
  __int16 v28; // dx
  __int16 v29; // r9
  int v30; // ecx
  __int16 v31; // cx
  __int64 v32; // r9
  int v33; // r10d
  int v34; // r9d
  __int16 v35; // dx
  int v36; // eax
  int v37; // ecx
  unsigned __int16 v38; // ax
  __int16 v39; // cx
  __int16 v40; // dx
  __int16 v41; // r8
  __int16 v42; // cx
  int v43; // eax
  unsigned int v44; // edx
  __int16 v45; // dx
  __int16 v46; // ax
  unsigned int v47; // eax
  int v48; // ebx
  int v49; // eax
  __int16 v50; // ax
  __m128i v51; // xmm2
  __m128i v52; // xmm1
  __int16 v53; // dx
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // rdi
  __m128i v57; // xmm2
  __m128i v58; // xmm2
  __m128i v59; // xmm1
  __m128i v60; // xmm0
  __int64 v61; // rcx
  __int64 v62; // rax
  __m128i v63; // xmm2
  bool v64; // zf
  __int16 v65; // ax
  __m128i v66; // xmm0
  int v67; // eax
  __m128i v68; // xmm0

  if ( !*(_DWORD *)(a1 + 200) )
    return 0;
  v4 = a3 >> 8;
  v5 = BYTE1(a3) & 0xF;
  v6 = BYTE1(a3) & 0xF;
  if ( (unsigned int)(v5 - 10) > 1 )
    return 0;
  v8 = (v6 == 11) + 3;
  v9 = HIBYTE(a3) & 0xF;
  if ( v9 == 13 )
    goto LABEL_7;
  if ( v9 == 14 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      if ( (a3 & 0x70) != 0x10 )
        return 0;
      v35 = word_8ECC0[(a3 >> 20) & 0xE | v4 & 1];
      *(_WORD *)(a2 + 24) = v35;
      if ( !v35 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v8;
      v36 = HIWORD(a3) & 0xF;
      v37 = (a3 >> 7) & 1;
      if ( v6 == 11 )
      {
        v38 = (16 * v37) | v36;
        v39 = v38 + 61;
      }
      else
      {
        v38 = v37 | (2 * v36);
        v39 = v38 + 93;
      }
      *(_WORD *)(a2 + 46) = v39;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = (unsigned __int16)a3 >> 12;
      if ( v35 == 158 )
      {
        *(_WORD *)(a2 + 46) = v38;
        v45 = word_8EC80[v38 & 0x1F];
        if ( v45 == -1 )
        {
          if ( (v38 & 1) != 0 )
            return 0;
          *(_BYTE *)(a2 + 41) = 11;
          v45 = v38 >> 1;
        }
        *(_WORD *)(a2 + 46) = v45;
        if ( (a3 & 0x100000) != 0 )
        {
          v58 = _mm_loadu_si128((const __m128i *)(a2 + 80));
          v59 = _mm_loadu_si128((const __m128i *)(a2 + 40));
          v60 = _mm_loadu_si128((const __m128i *)(a2 + 56));
          v61 = *(_QWORD *)(a2 + 112);
          *(_WORD *)(a2 + 24) = 159;
          *(__m128i *)(a2 + 40) = v58;
          v62 = *(_QWORD *)(a2 + 72);
          v63 = _mm_loadu_si128((const __m128i *)(a2 + 96));
          v64 = *(_WORD *)(a2 + 46) == 15;
          *(_QWORD *)(a2 + 72) = v61;
          *(_QWORD *)(a2 + 112) = v62;
          *(__m128i *)(a2 + 56) = v63;
          *(__m128i *)(a2 + 80) = v59;
          *(__m128i *)(a2 + 96) = v60;
          if ( v64 && *(_WORD *)(a2 + 86) == 25 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) != 0 )
            {
              *(_WORD *)(a2 + 24) = 122;
              *(_BYTE *)(a2 + 41) = 0;
              *(_BYTE *)(a2 + 81) = 0;
            }
            else
            {
              *(_WORD *)(a2 + 24) = 354;
              *(_WORD *)(a2 + 46) = 31;
              *(_BYTE *)(a2 + 72) = 1;
            }
          }
          return 1;
        }
      }
      else
      {
        if ( (a3 & 0x100000) == 0 )
          return 1;
        v51 = _mm_loadu_si128((const __m128i *)(a2 + 80));
        v52 = _mm_loadu_si128((const __m128i *)(a2 + 40));
        v53 = v35 + 1;
        v54 = _mm_loadu_si128((const __m128i *)(a2 + 56));
        v55 = *(_QWORD *)(a2 + 72);
        *(_WORD *)(a2 + 24) = v53;
        v56 = *(_QWORD *)(a2 + 112);
        *(__m128i *)(a2 + 40) = v51;
        v57 = _mm_loadu_si128((const __m128i *)(a2 + 96));
        *(_QWORD *)(a2 + 72) = v56;
        *(_QWORD *)(a2 + 112) = v55;
        *(__m128i *)(a2 + 56) = v57;
        *(__m128i *)(a2 + 80) = v52;
        *(__m128i *)(a2 + 96) = v54;
        if ( v53 != 158 )
          return 1;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) == 0 )
        *(_WORD *)(a2 + 24) = 355;
      return 1;
    }
    v22 = (a3 >> 6) & 1 | (a3 >> 19) & 6 | (a3 >> 20) & 8;
    if ( v22 == 15 )
    {
      v44 = (a3 >> 7) & 1 | (a3 >> 15) & 0x1E;
      v24 = asc_8ECE0[v44];
      *(_WORD *)(a2 + 24) = v24;
      if ( v44 > 0x17 )
      {
        v23 = 3;
      }
      else
      {
        v23 = (v6 == 11) + 3;
        if ( v44 > 0xF )
        {
          v8 = 3;
        }
        else if ( v44 == 15 )
        {
          if ( v6 == 11 )
          {
            if ( !v24 )
              return 0;
            *(_WORD *)(a2 + 24) = --v24;
            v25 = (unsigned __int16)a3 >> 12;
            v26 = (a3 >> 22) & 1;
LABEL_33:
            v27 = 3;
            v28 = (v26 | (2 * (unsigned __int8)v25)) + 93;
LABEL_34:
            v29 = a3 & 0xF;
            v30 = (a3 >> 5) & 1;
            if ( v8 == 4 )
              v31 = (v29 | (16 * v30)) + 61;
            else
              v31 = (v30 | (2 * v29)) + 93;
            v32 = *(_QWORD *)(a1 + 16);
            v33 = *(_DWORD *)(v32 + 104);
            if ( v24 < v33 || v24 >= *(int *)(v32 + 108) )
            {
              *(_WORD *)(a2 + 86) = v31;
            }
            else
            {
              v34 = *(_DWORD *)(*(_QWORD *)(v32 + 112) + 16LL * (v24 - v33) + 8);
              if ( (v34 & 0x410) != 0 )
              {
                v47 = a3;
                v48 = (a3 >> 7) & 1;
                v49 = HIWORD(v47) & 0xF;
                if ( v8 == 4 )
                  v50 = ((16 * v48) | v49) + 61;
                else
                  v50 = (v48 | (2 * v49)) + 93;
                *(_WORD *)(a2 + 86) = v50;
                *(_WORD *)(a2 + 126) = v31;
                *(_BYTE *)(a2 + 121) = 1;
                *(_BYTE *)(a2 + 125) = v8;
              }
              else
              {
                *(_WORD *)(a2 + 86) = v31;
              }
              if ( (v34 & 0x208) != 0 )
              {
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = v8;
              }
            }
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = v27;
            *(_WORD *)(a2 + 46) = v28;
            return 1;
          }
          if ( !v24 )
            return 0;
          v25 = (unsigned __int16)a3 >> 12;
          v26 = (a3 >> 22) & 1;
LABEL_60:
          v27 = 4;
          v28 = ((unsigned __int8)v25 | (unsigned __int16)(16 * v26)) + 61;
          goto LABEL_34;
        }
      }
    }
    else
    {
      v23 = (v6 == 11) + 3;
      v24 = word_8ED20[v22];
      *(_WORD *)(a2 + 24) = v24;
    }
    if ( !v24 )
      return 0;
    if ( v6 == 11 )
      *(_WORD *)(a2 + 24) = --v24;
    v25 = (unsigned __int16)a3 >> 12;
    v26 = (a3 >> 22) & 1;
    if ( v23 != 4 )
      goto LABEL_33;
    goto LABEL_60;
  }
  if ( v9 != 12 )
    return 0;
  if ( (a3 & 0xFE00ED0) == 0xC400A10 )
  {
    v40 = a3 & 0xF;
    v41 = (unsigned __int16)a3 >> 12;
    v42 = BYTE2(a3) & 0xF;
    v43 = (a3 >> 5) & 1;
    if ( (a3 & 0x100000) != 0 )
    {
      *(_WORD *)(a2 + 46) = v41;
      if ( v8 == 4 )
      {
        *(_WORD *)(a2 + 24) = 163;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 86) = v42;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 4;
        *(_WORD *)(a2 + 126) = (v40 | (16 * v43)) + 61;
      }
      else
      {
        *(_WORD *)(a2 + 24) = 165;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 86) = v42;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 121) = 12;
        *(_WORD *)(a2 + 126) = (v43 | (2 * v40)) + 93;
        *(_QWORD *)(a2 + 128) = 2;
        *(_BYTE *)(a2 + 125) = 3;
      }
    }
    else
    {
      if ( v8 == 4 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 162;
        *(_BYTE *)(a2 + 45) = 4;
        *(_WORD *)(a2 + 46) = (v40 | (16 * v43)) + 61;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 12;
        *(_WORD *)(a2 + 24) = 164;
        *(_QWORD *)(a2 + 48) = 2;
        *(_WORD *)(a2 + 46) = (v43 | (2 * v40)) + 93;
        *(_BYTE *)(a2 + 45) = 3;
      }
      *(_WORD *)(a2 + 86) = v41;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 126) = v42;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 2;
    }
    return 1;
  }
LABEL_7:
  if ( (a3 & 0xE000000) != 0xC000000 || (a3 & 0x1800000) == 0 || (~a3 & 0x1A00000) == 0 )
    return 0;
  v10 = (unsigned __int16)a3 >> 12;
  v11 = (a3 >> 22) & 1;
  if ( (a3 & 0x1200000) != 0x1000000 )
  {
    v12 = aTtsu[a3 & 1 | (2 * (_BYTE)v5) & 2];
    if ( v6 == 11 )
    {
      v13 = (int)(unsigned __int8)a3 >> 1;
      v16 = (v10 | (16 * v11)) + 61;
      if ( v6 != 11 )
        v13 = (unsigned __int8)a3;
      v15 = 61;
      v17 = v16;
    }
    else
    {
      v13 = (int)(unsigned __int8)a3 >> 1;
      v14 = v11 | (2 * v10);
      v15 = 93;
      v16 = v14 + 93;
      if ( v6 != 11 )
        v13 = (unsigned __int8)a3;
      v17 = v16;
    }
    *(_WORD *)(a2 + 24) = v12;
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = 2;
    *(_WORD *)(a2 + 46) = BYTE2(a3) & 0xF;
    *(_BYTE *)(a2 + 81) = 12;
    *(_BYTE *)(a2 + 85) = v8;
    *(_WORD *)(a2 + 86) = v16;
    if ( v13 && v13 + v17 - v15 <= 32 )
    {
      *(_QWORD *)(a2 + 88) = v13;
      goto LABEL_18;
    }
    return 0;
  }
  if ( v6 == 11 )
    v46 = (v10 | (16 * v11)) + 61;
  else
    v46 = (v11 | (2 * v10)) + 93;
  *(_WORD *)(a2 + 46) = v46;
  *(_BYTE *)(a2 + 45) = v8;
  *(_BYTE *)(a2 + 85) = v8;
  *(_WORD *)(a2 + 24) = (v6 != 11) + 113;
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 81) = 4;
  *(_WORD *)(a2 + 86) = BYTE2(a3) & 0xF;
  *(_QWORD *)(a2 + 96) = (4 * (_WORD)a3) & 0x3FC;
  sub_1E470(a1, a2, a2 + 80, 1);
LABEL_18:
  if ( (a3 & 0x100000) == 0 )
    *(_WORD *)(a2 + 24) += 24;
  v18 = a3 & 0x200000;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) == 0 )
  {
    v19 = *(_WORD *)(a2 + 24);
    v20 = v19 - 115;
    if ( !v18 )
    {
      if ( v20 <= 1u )
      {
        *(_WORD *)(a2 + 24) = 343;
      }
      else if ( (unsigned __int16)(v19 - 139) <= 1u )
      {
        *(_WORD *)(a2 + 24) = 416;
      }
      return 1;
    }
    if ( (HIBYTE(a3) & 1) == (a3 & 0x100000) >> 20
      || ((a3 & 0x800000) != 0) != ((a3 & 0x100000) != 0)
      || *(_WORD *)(a2 + 46) != 13 )
    {
      if ( v20 <= 1u )
      {
        *(_WORD *)(a2 + 24) = 343;
      }
      else if ( (unsigned __int16)(v19 - 139) <= 1u )
      {
        *(_WORD *)(a2 + 24) = 416;
      }
      goto LABEL_75;
    }
    if ( v20 <= 1u )
    {
      v65 = 370;
      goto LABEL_107;
    }
    if ( (unsigned __int16)(v19 - 139) <= 1u )
    {
      v65 = 371;
LABEL_107:
      v66 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      *(_WORD *)(a2 + 24) = v65;
      v67 = *(_DWORD *)(a2 + 112);
      *(_BYTE *)(a2 + 81) = 0;
      *(__m128i *)(a2 + 40) = v66;
      v68 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(_DWORD *)(a2 + 72) = v67;
      *(__m128i *)(a2 + 56) = v68;
    }
LABEL_75:
    *(_DWORD *)(a2 + 28) |= 0x40u;
    return 1;
  }
  if ( v18 )
    goto LABEL_75;
  return 1;
}
