unsigned __int64 __fastcall sub_D770(__int64 a1)
{
  int v1; // eax
  __int16 v3; // r14
  const char *v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 j; // rbx
  __int64 v11; // rbp
  size_t v12; // rax
  size_t v13; // r15
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  void *v19; // rdi
  size_t v20; // rdx
  __int64 v21; // rax
  __int64 i; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // [rsp+10h] [rbp-88h]
  __int64 v30; // [rsp+18h] [rbp-80h]
  __int64 v31; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  char v33; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+41h] [rbp-57h]
  __int16 v35; // [rsp+49h] [rbp-4Fh]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 4676);
  v36 = __readfsqword(0x28u);
  v33 = 0;
  if ( (v1 & 1) != 0 )
  {
    v3 = 0;
    v4 = "decimal";
  }
  else if ( (v1 & 2) != 0 )
  {
    v3 = 1;
    v4 = "hexadecimal";
  }
  else
  {
    if ( (v1 & 4) == 0 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v3 = 2;
    v4 = "binary";
  }
  sub_9BD0((__int64)"General register print style: %s\n", v4);
  *(_QWORD *)(a1 + 232) = "R0";
  *(_QWORD *)(a1 + 4632) = "dpr3";
  qmemcpy(
    (void *)((a1 + 240) & 0xFFFFFFFFFFFFFFF8LL),
    (char *)&off_169E0 - (a1 + 232 - ((a1 + 240) & 0xFFFFFFFFFFFFFFF8LL)),
    8LL * (((_DWORD)a1 + 232 - (((_DWORD)a1 + 240) & 0xFFFFFFF8) + 4408) >> 3));
  v5 = *(_QWORD *)(a1 + 4648);
  if ( v5 != 255 )
  {
    v31 = 0;
    v32 = 0;
    if ( v5 > 0xFF )
    {
      for ( i = 255; i != v5; ++i )
      {
        v24 = (_QWORD *)(*(_QWORD *)(a1 + 4640) + 24 * i);
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
        }
      }
      *(_QWORD *)(a1 + 4648) = 255;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 4640);
      v7 = *(_QWORD *)(a1 + 4656);
      if ( (unsigned __int64)&v31 < v6 || (unsigned __int64)&v31 >= v6 + 24 * v7 )
      {
        if ( v7 > 0xFE
          || (v27 = qvector_reserve(), v5 = *(_QWORD *)(a1 + 4648), *(_QWORD *)(a1 + 4640) = v27, v6 = v27, v5 <= 0xFE) )
        {
          v8 = 24 * v5;
          while ( 1 )
          {
            v9 = v6 + v8;
            v8 += 24;
            *(_QWORD *)v9 = 0;
            *(_OWORD *)(v9 + 8) = 0;
            if ( v8 == 6120 )
              break;
            v6 = *(_QWORD *)(a1 + 4640);
          }
        }
      }
      else if ( v7 > 0xFE
             || (v28 = qvector_reserve(), v5 = *(_QWORD *)(a1 + 4648),
                                          *(_QWORD *)(a1 + 4640) = v28,
                                          v6 = v28,
                                          v5 <= 0xFE) )
      {
        v25 = 24 * v5;
        while ( 1 )
        {
          v26 = v6 + v25;
          v25 += 24;
          *(_QWORD *)v26 = 0;
          *(_OWORD *)(v26 + 8) = 0;
          if ( v25 == 6120 )
            break;
          v6 = *(_QWORD *)(a1 + 4640);
        }
      }
      *(_QWORD *)(a1 + 4648) = 255;
    }
  }
  v30 = a1 + 232;
  for ( j = 0; j != 255; ++j )
  {
    if ( v3 != 1 && v3 == 2 )
    {
      v14 = _mm_shuffle_epi32(_mm_cvtsi32_si128((int)j + 1), 224);
      v33 = 82;
      v35 = 98;
      v15 = _mm_unpacklo_epi16(
              _mm_cmpeq_epi32(
                _mm_cmpeq_epi32(_mm_and_si128(_mm_loadl_epi64((const __m128i *)&qword_12E48), v14), (__m128i)0LL),
                (__m128i)0LL),
              _mm_cmpeq_epi32(
                _mm_cmpeq_epi32(_mm_and_si128(_mm_loadl_epi64((const __m128i *)&qword_12E50), v14), (__m128i)0LL),
                (__m128i)0LL));
      v16 = _mm_unpacklo_epi16(
              _mm_cmpeq_epi32(
                _mm_cmpeq_epi32(_mm_and_si128(_mm_loadl_epi64((const __m128i *)&qword_12E58), v14), (__m128i)0LL),
                (__m128i)0LL),
              _mm_cmpeq_epi32(
                _mm_cmpeq_epi32(_mm_and_si128(v14, _mm_loadl_epi64((const __m128i *)&qword_12E60)), (__m128i)0LL),
                (__m128i)0LL));
      v17 = _mm_loadl_epi64((const __m128i *)&qword_12E68);
      v18 = _mm_shuffle_epi32(
              _mm_packus_epi16(
                _mm_and_si128(_mm_unpacklo_epi16(v15, _mm_shuffle_epi32(v15, 78)), v17),
                _mm_and_si128(v17, _mm_unpacklo_epi16(v16, _mm_shuffle_epi32(v16, 78)))),
              8);
      v34 = _mm_or_si128(
              _mm_andnot_si128(v18, _mm_loadl_epi64((const __m128i *)&qword_12E78)),
              _mm_and_si128(_mm_loadl_epi64((const __m128i *)&qword_12E70), v18)).m128i_u64[0];
    }
    else
    {
      qsnprintf();
    }
    v11 = *(_QWORD *)(a1 + 4640) + 24 * j;
    v12 = strlen(&v33);
    v13 = v12;
    if ( v12 )
    {
      v19 = *(void **)v11;
      v20 = v12 + 1;
      if ( *(_QWORD *)(v11 + 16) < v12 + 1 )
      {
        v29 = v12 + 1;
        v21 = qvector_reserve();
        v20 = v29;
        *(_QWORD *)v11 = v21;
        v19 = (void *)v21;
      }
      *(_QWORD *)(v11 + 8) = v20;
      memmove(v19, &v33, v13);
      *(_BYTE *)(*(_QWORD *)v11 + v13) = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 8) = 0;
    }
    *(_QWORD *)(a1 + 8 * j + 240) = *(_QWORD *)(*(_QWORD *)(a1 + 4640) + 24 * j);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = v30;
  return v36 - __readfsqword(0x28u);
}

