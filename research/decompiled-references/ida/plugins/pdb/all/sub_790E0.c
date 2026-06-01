__int64 __fastcall sub_790E0(__m128i *a1, const __m128i *a2, char a3, char a4)
{
  __int16 v7; // si
  unsigned int v8; // r14d
  unsigned __int32 v9; // esi
  unsigned __int32 v10; // edx
  unsigned int v11; // esi
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v18; // ecx
  __int64 *v19; // rax
  __int64 v20; // rdx

  v7 = a2[1].m128i_i16[4];
  if ( v7 == 523 )
  {
    v8 = 1;
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2] = _mm_loadu_si128(a2 + 2);
    a1[3] = _mm_loadu_si128(a2 + 3);
    a1[4] = _mm_loadu_si128(a2 + 4);
    a1[5] = _mm_loadu_si128(a2 + 5);
    a1[7] = _mm_loadu_si128(a2 + 8);
    a1[8] = _mm_loadu_si128(a2 + 9);
    a1[9] = _mm_loadu_si128(a2 + 10);
    a1[10] = _mm_loadu_si128(a2 + 11);
    a1[11] = _mm_loadu_si128(a2 + 12);
    a1[12] = _mm_loadu_si128(a2 + 13);
    a1[13] = _mm_loadu_si128(a2 + 14);
    a1[14] = _mm_loadu_si128(a2 + 15);
    a1[15].m128i_i64[0] = a2[16].m128i_i64[0];
    a1[6].m128i_i32[0] = a2[6].m128i_i64[0];
    a1[6].m128i_i32[1] = a2[6].m128i_i64[1];
    a1[6].m128i_i32[2] = a2[7].m128i_i64[0];
    a1[6].m128i_i32[3] = a2[7].m128i_i64[1];
  }
  else
  {
    if ( (unsigned __int16)v7 > 0x20Bu || (v8 = 1, ((v7 - 263) & 0xFFFB) != 0) && v7 )
    {
      if ( !a3 )
        sub_29830();
      v8 = 0;
    }
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2] = _mm_loadu_si128(a2 + 2);
    a1[3] = _mm_loadu_si128(a2 + 3);
    a1[4] = _mm_loadu_si128(a2 + 4);
    a1[5] = _mm_loadu_si128(a2 + 5);
    a1[6] = _mm_loadu_si128(a2 + 6);
    a1[7] = _mm_loadu_si128(a2 + 7);
    a1[8] = _mm_loadu_si128(a2 + 8);
    a1[9] = _mm_loadu_si128(a2 + 9);
    a1[10] = _mm_loadu_si128(a2 + 10);
    a1[11] = _mm_loadu_si128(a2 + 11);
    a1[12] = _mm_loadu_si128(a2 + 12);
    a1[13] = _mm_loadu_si128(a2 + 13);
    a1[14] = _mm_loadu_si128(a2 + 14);
    a1[15].m128i_i64[0] = a2[15].m128i_i64[0];
  }
  if ( (unsigned __int16)(a1[5].m128i_i16[6] - 10) > 3u
    && ((v9 = a1[3].m128i_u32[2], v10 = a1[3].m128i_u32[3], v9 < v10)
     || v10 && (v10 & (v10 - 1)) != 0
     || v9 && (v9 & (v9 - 1)) != 0) )
  {
    if ( !a3 )
    {
      sub_79010(
        (__int64)"Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
        v9,
        v10);
      v11 = a1[5].m128i_u32[0];
      if ( v11 > 0x77000000 || v11 < a1[5].m128i_i32[1] )
LABEL_32:
        sub_79010((__int64)"Invalid file: bad ImageSize value %x", v11);
    }
  }
  else
  {
    v11 = a1[5].m128i_u32[0];
    if ( (v11 > 0x77000000 || v11 < a1[5].m128i_i32[1]) && !a3 )
      goto LABEL_32;
  }
  if ( a4 )
  {
    v12 = a1[7].m128i_u32[1];
    if ( (unsigned int)(v12 - 1) <= 0xE )
    {
      v18 = 16 - v12;
      v19 = &a1[7].m128i_i64[v12 + 1];
      *v19 = 0;
      v20 = (unsigned int)(8 * v18);
      *(__int64 *)((char *)v19 + v20 - 8) = 0;
      memset(
        (void *)((unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v19 - (((_DWORD)v19 + 8) & 0xFFFFFFF8) + (unsigned int)v20) >> 3));
    }
    v13 = 248;
    if ( a1[1].m128i_i16[4] == 523 )
      v13 = 264;
    v14 = a1[1].m128i_u16[2] + 24LL;
    v15 = 128;
    if ( v14 >= 0x80 )
      v15 = a1[1].m128i_u16[2] + 24LL;
    if ( v15 < v13 )
    {
      v16 = 120;
      if ( v13 != 248 )
        v16 = 136;
      if ( v14 >= v16 )
      {
        if ( !a3 )
          sub_244A0();
        memset(&a1[7].m128i_u64[16 - ((v13 - v14 + 7) >> 3) + 1], 0, (v13 - v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
    }
  }
  return v8;
}

