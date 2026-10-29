__int64 __fastcall sub_2D7C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  int v4; // ecx
  int v5; // r9d
  unsigned __int8 *i; // rdx
  int v7; // esi
  __int16 v8; // dx
  __m128i v9; // xmm0
  int v10; // edx
  __m128i v11; // xmm0
  int v12; // edx
  __m128i v13; // xmm0
  __int16 v14; // si
  int v15; // r8d
  __m128i v16; // xmm0
  int v17; // r8d
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  unsigned __int16 v21; // dx

  v2 = *(_QWORD *)(a2 + 48);
  result = a2;
  v4 = 0;
  v5 = *(_WORD *)(a2 + 86) & 3;
  for ( i = (unsigned __int8 *)word_6AA20; ; i += 4 )
  {
    if ( *i == (_DWORD)v2 )
    {
      v7 = i[1];
      if ( (_BYTE)v7 == 0xFF )
      {
        v14 = *((_WORD *)i + 1);
        v15 = *(_DWORD *)(result + 112);
        *(__m128i *)(result + 40) = _mm_loadu_si128((const __m128i *)(result + 80));
        v16 = _mm_loadu_si128((const __m128i *)(result + 96));
        *(_DWORD *)(result + 72) = v15;
        v17 = *(_DWORD *)(result + 152);
        *(__m128i *)(result + 56) = v16;
        v18 = _mm_loadu_si128((const __m128i *)(result + 120));
        *(_WORD *)(result + 24) = v14;
        *(__m128i *)(result + 80) = v18;
        v19 = _mm_loadu_si128((const __m128i *)(result + 136));
        *(_BYTE *)(result + 40) = 0;
        *(_DWORD *)(result + 112) = v17;
        *(_BYTE *)(result + 80) = 1;
        *(_BYTE *)(result + 121) = 0;
        *(__m128i *)(result + 96) = v19;
        if ( v14 == 326 || v14 == 323 )
        {
          v20 = _mm_loadu_si128((const __m128i *)(result + 80));
          *(_DWORD *)(result + 72) = v17;
          *(_BYTE *)(result + 81) = 0;
          *(__m128i *)(result + 40) = v20;
          *(_BYTE *)(result + 40) = 0;
          *(__m128i *)(result + 56) = v19;
        }
        goto LABEL_10;
      }
      if ( v7 == v5 )
        break;
    }
LABEL_10:
    if ( ++v4 == 12 )
      return result;
  }
  v8 = word_6AA20[2 * v4 + 1];
  *(__m128i *)(result + 40) = _mm_loadu_si128((const __m128i *)(result + 80));
  v9 = _mm_loadu_si128((const __m128i *)(result + 96));
  *(_WORD *)(result + 24) = v8;
  v10 = *(_DWORD *)(result + 112);
  *(__m128i *)(result + 56) = v9;
  v11 = _mm_loadu_si128((const __m128i *)(result + 120));
  *(_DWORD *)(result + 72) = v10;
  v12 = *(_DWORD *)(result + 152);
  *(__m128i *)(result + 80) = v11;
  v13 = _mm_loadu_si128((const __m128i *)(result + 136));
  *(_DWORD *)(result + 112) = v12;
  *(_BYTE *)(result + 80) = 1;
  *(_BYTE *)(result + 121) = 0;
  *(_WORD *)(result + 40) = 2816;
  *(__m128i *)(result + 96) = v13;
  if ( (unsigned int)v2 > 1 || (v21 = *(_WORD *)(result + 46), *(_WORD *)(result + 46) = v21 >> 2, v21 <= 3u) )
    *(_BYTE *)(result + 44) &= ~8u;
  return result;
}

