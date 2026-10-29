__int64 __fastcall sub_CC70(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int64 v4; // r8
  char v5; // r9
  __int16 v6; // ax
  __int64 result; // rax
  unsigned __int16 v8; // cx
  __int16 v9; // ax
  __int16 v10; // cx
  __int16 v12; // dx
  __int16 v13; // si
  __int16 v14; // di
  char v15; // al
  bool v16; // zf
  __int64 v17; // rsi
  __int16 v18; // cx
  unsigned __int16 v19; // ax
  __int16 v20; // cx
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 v23; // ax
  char v24; // al
  __int16 v25; // dx
  int v26; // edx
  __m128i v27; // xmm0
  int v28; // eax
  __m128i v29; // xmm0
  __int16 v30; // dx
  int v31; // edx
  __int16 v32; // ax

  v4 = a2;
  v5 = a4;
  switch ( a4 )
  {
    case 0:
      v10 = *(_WORD *)(a2 + 34) & 4;
      if ( v10 || (result = 0, (a3 & 0x1000) == 0) )
      {
        v12 = a3 >> 7;
        *(_BYTE *)(v4 + 121) = 5;
        v13 = a3 >> 2;
        *(_BYTE *)(v4 + 125) = 0;
        *(_BYTE *)(v4 + 41) = 1;
        *(_BYTE *)(v4 + 81) = 1;
        v14 = v12 & 0x1F;
        *(_QWORD *)(v4 + 128) = v13 & 0x1F | v12 & 0x20u;
        *(_WORD *)(v4 + 24) = 25;
        *(_WORD *)(v4 + 46) = v14;
        *(_WORD *)(v4 + 86) = v14;
        *(_BYTE *)(v4 + 45) = v10 == 0 ? 2 : 7;
        *(_BYTE *)(v4 + 85) = v10 == 0 ? 2 : 7;
        if ( (v12 & 0x1F) == 0 )
        {
          *(_BYTE *)(v4 + 84) &= ~8u;
          *(_BYTE *)(v4 + 28) = 1;
          if ( !(v13 & 0x1F | v12 & 0x20) )
          {
            *(_BYTE *)(v4 + 124) &= ~8u;
            *(_BYTE *)(v4 + 28) = 17;
          }
        }
        return *(unsigned __int16 *)(v4 + 26);
      }
      return result;
    case 1:
      result = 0;
      if ( (*(_BYTE *)(a1 + 468) & 8) == 0 )
      {
        *(_WORD *)(a2 + 24) = 117;
        v15 = *(_BYTE *)(a1 + 468);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 4;
        *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 32 * ((v15 & 8) == 0));
        sub_BF20(a1, a2 + 80, a3, 0x75u);
        return *(unsigned __int16 *)(v4 + 26);
      }
      return result;
    case 2:
      result = 0;
      if ( ((a3 >> 7) & 0x1F) != 0 )
      {
        v16 = (*(_BYTE *)(a2 + 34) & 4) == 0;
        *(_WORD *)(a2 + 24) = 13;
        v17 = a2 + 80;
        if ( !v16 )
          v5 = 7;
        *(_WORD *)(v4 + 46) = (a3 >> 7) & 0x1F;
        *(_BYTE *)(v4 + 41) = 1;
        *(_BYTE *)(v4 + 45) = v5;
        sub_BF20(a1, v17, a3, 0xDu);
        return *(unsigned __int16 *)(v4 + 26);
      }
      return result;
    case 3:
      if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
      {
        result = 0;
        if ( ((a3 >> 7) & 0x1F) != 0 )
        {
          v18 = (a3 >> 7) & 0x1F;
          v5 = 7;
          *(_WORD *)(a2 + 24) = 49;
          v19 = 49;
LABEL_33:
          *(_WORD *)(a2 + 46) = v18;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = v5;
          sub_BF20(a1, a2 + 80, a3, v19);
          return *(unsigned __int16 *)(v4 + 26);
        }
      }
      else
      {
        result = 0;
        if ( (*(_BYTE *)(a1 + 468) & 8) == 0 )
        {
          *(_WORD *)(a2 + 24) = 93;
          v19 = 93;
          v18 = (char)(((a3 >> 7) & 0x1F) + 32 * ((*(_BYTE *)(a1 + 468) & 8) == 0));
          goto LABEL_33;
        }
      }
      return result;
    case 4:
      v20 = (a3 >> 7) & 0x1F;
      v21 = (a3 >> 2) & 0x1F;
      if ( (a3 & 0x1000) != 0 )
      {
        if ( (_BYTE)v21 )
        {
          v30 = *(_WORD *)(a2 + 34);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (unsigned __int8)v20;
          *(_WORD *)(a2 + 24) = 28;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (unsigned __int8)v20;
          *(_BYTE *)(a2 + 121) = 1;
          v31 = (v30 & 4) == 0 ? 2 : 7;
          *(_WORD *)(a2 + 126) = (unsigned __int8)v21;
          *(_BYTE *)(a2 + 45) = v31;
          *(_BYTE *)(a2 + 85) = v31;
          *(_BYTE *)(a2 + 125) = v31;
          if ( !(_BYTE)v20 )
          {
            *(_BYTE *)(a2 + 124) &= ~8u;
            *(_BYTE *)(a2 + 28) = 1;
          }
        }
        else
        {
          if ( (_BYTE)v20 )
          {
            v32 = *(_WORD *)(a2 + 34);
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 4;
            *(_WORD *)(a2 + 46) = 1;
            v23 = v32 & 4;
LABEL_26:
            *(_BYTE *)(a2 + 81) = 4;
            *(_QWORD *)(a2 + 96) = 0;
            *(_WORD *)(a2 + 86) = (a3 >> 7) & 0x1F;
            *(_BYTE *)(a2 + 45) = v23 == 0 ? 2 : 7;
            return *(unsigned __int16 *)(v4 + 26);
          }
          *(_WORD *)(a2 + 24) = 40;
        }
      }
      else
      {
        if ( !(_BYTE)v21 )
        {
          result = 0;
          if ( !(_BYTE)v20 )
            return result;
          v22 = *(_WORD *)(a2 + 34);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 4;
          *(_WORD *)(a2 + 46) = 0;
          v23 = v22 & 4;
          goto LABEL_26;
        }
        v25 = *(_WORD *)(a2 + 34);
        *(_WORD *)(a2 + 24) = 28;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)v20;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = 0;
        v26 = (v25 & 4) == 0 ? 2 : 7;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 45) = v26;
        *(_BYTE *)(a2 + 85) = v26;
        *(_WORD *)(a2 + 126) = (unsigned __int8)v21;
        *(_BYTE *)(a2 + 125) = v26;
        if ( !(_BYTE)v20 )
        {
          v27 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_BYTE *)(a2 + 28) = 1;
          v28 = *(_DWORD *)(a2 + 152);
          *(_WORD *)(a2 + 24) = 123;
          *(__m128i *)(a2 + 80) = v27;
          v29 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = v28;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v29;
        }
      }
      return *(unsigned __int16 *)(v4 + 26);
    case 5:
      result = 0;
      if ( (*(_BYTE *)(a1 + 468) & 8) != 0 )
        return result;
      *(_WORD *)(a2 + 24) = 118;
      v24 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 4;
      *(_WORD *)(a2 + 46) = (char)(((a3 >> 2) & 0x1F) + 32 * ((v24 & 8) == 0));
      sub_BF20(a1, a2 + 80, a3, 0x76u);
      return *(unsigned __int16 *)(v4 + 26);
    case 6:
      v6 = *(_WORD *)(a2 + 34);
      *(_WORD *)(a2 + 24) = 18;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (a3 >> 2) & 0x1F;
      *(_BYTE *)(a2 + 45) = (v6 & 4) == 0 ? 2 : 7;
      sub_BF20(a1, a2 + 80, a3, 0x12u);
      return *(unsigned __int16 *)(v4 + 26);
    case 7:
      if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
      {
        *(_WORD *)(a2 + 24) = 50;
        v8 = 50;
        v9 = (a3 >> 2) & 0x1F;
LABEL_7:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v9;
        *(_BYTE *)(a2 + 45) = v5;
        sub_BF20(a1, a2 + 80, a3, v8);
        return *(unsigned __int16 *)(v4 + 26);
      }
      result = 0;
      if ( (*(_BYTE *)(a1 + 468) & 8) == 0 )
      {
        v5 = 3;
        *(_WORD *)(a2 + 24) = 94;
        v8 = 94;
        v9 = (char)(((a3 >> 2) & 0x1F) + 32 * ((*(_BYTE *)(a1 + 468) & 8) == 0));
        goto LABEL_7;
      }
      return result;
    default:
      return *(unsigned __int16 *)(a2 + 26);
  }
}

