__int64 __fastcall sub_12B0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r12
  int v6; // r14d
  __int64 v7; // r13
  int v8; // eax
  int v9; // r15d
  int v10; // eax
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m128i *v18; // rsi
  __m128i si128; // xmm0
  _DWORD *v20; // rsi
  __int64 v21; // rax
  void *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  qlseek(a3, 0, 0);
  if ( qlread(a3, &v25, 13) == 13 )
  {
    v12 = _mm_cvtsi32_si128(v25.m128i_u32[0]);
    v25.m128i_i16[2] = __ROL2__(v25.m128i_i16[2], 8);
    v25.m128i_i32[0] = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi16(v12, 8u), _mm_slli_epi16(v12, 8u)));
    v13 = _mm_cvtsi32_si128(*(unsigned int *)((char *)&v25.m128i_u32[2] + 1));
    *(__int32 *)((char *)&v25.m128i_i32[2] + 1) = _mm_cvtsi128_si32(_mm_or_si128(_mm_slli_epi16(v13, 8u), _mm_srli_epi16(v13, 8u)));
    if ( (unsigned __int16)_mm_extract_epi16(v12, 0) == 0xCD87 )
    {
      v14 = _mm_loadl_epi64(&v25);
      v15 = _mm_shuffle_epi32(_mm_unpacklo_epi8(v14, (__m128i)0LL), 78);
      v16 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(v14, (__m128i)0LL), (__m128i)0LL);
      v17 = _mm_xor_si128(
              _mm_xor_si128(
                _mm_unpacklo_epi16(v15, (__m128i)0LL),
                _mm_shuffle_epi32(_mm_unpacklo_epi16(v15, (__m128i)0LL), 78)),
              _mm_xor_si128(v16, _mm_shuffle_epi32(v16, 78)));
      if ( (unsigned __int8)~_mm_cvtsi128_si32(_mm_xor_si128(v17, _mm_srli_epi64(v17, 0x20u))) == v25.m128i_i8[8]
        && (v25.m128i_i8[6] & 0xF) == 1 )
      {
        v18 = (__m128i *)*a1;
        if ( (unsigned __int64)a1[2] <= 0x18 )
        {
          v24 = qvector_reserve(a1, v18, 25, 1);
          *a1 = v24;
          v18 = (__m128i *)v24;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_21D0);
        a1[1] = 25;
        v18[1].m128i_i64[0] = 0x3930383620726F66LL;
        *v18 = si128;
        *(_BYTE *)(*a1 + 24) = 0;
        goto LABEL_24;
      }
    }
  }
  qlseek(a3, 0, 0);
  v5 = qlsize(a3);
  if ( v5 < 0 )
    return 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    qlseek(a3, v7, 0);
    v8 = qlgetc(a3);
    if ( v8 == -1 )
      break;
    if ( v7 )
    {
      if ( v8 != 2 )
      {
        if ( v8 == 22 )
        {
          v7 += 3;
        }
        else
        {
          if ( v8 )
            return 0;
          ++v7;
        }
        goto LABEL_15;
      }
    }
    else if ( v8 != 2 )
    {
      return 0;
    }
    v9 = qlgetc(a3);
    if ( ((unsigned int)qlgetc(a3) | (v9 << 8)) == 0xFFFFFFFF )
      return 0;
    v10 = qlgetc(a3);
    if ( (unsigned int)(v10 + 1) <= 1 )
      return 0;
    ++v6;
    v7 += v10 + 4;
LABEL_15:
    if ( v5 < v7 )
      return 0;
  }
  if ( !v6 )
    return 0;
  v22 = (void *)*a1;
  if ( (unsigned __int64)a1[2] <= 0xD )
  {
    v23 = qvector_reserve(a1, v22, 14, 1);
    *a1 = v23;
    v22 = (void *)v23;
  }
  a1[1] = 14;
  qmemcpy(v22, "FLEX STX file", 13);
  *(_BYTE *)(*a1 + 13) = 0;
LABEL_24:
  v20 = (_DWORD *)*a2;
  if ( (unsigned __int64)a2[2] <= 4 )
  {
    v21 = qvector_reserve(a2, v20, 5, 1);
    *a2 = v21;
    v20 = (_DWORD *)v21;
  }
  a2[1] = 5;
  *v20 = 959461430;
  *(_BYTE *)(*a2 + 4) = 0;
  return 1;
}

