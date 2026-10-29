int sub_1D420()
{
  qword_18C2F8 = 0;
  qword_18C318 = 0;
  qword_18C2F0 = (__int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\bm64_u16\bm64_u32";
  xmmword_18C2E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181930),
                               (__m128i)(unsigned __int64)&unk_97190);
  qword_18C310 = (__int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm128_u8\tm128_u16\tm128_u32";
  qword_18C338 = 0;
  xmmword_18C300 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181938),
                               (__m128i)(unsigned __int64)&unk_97110);
  qword_18C330 = (__int64)"\nm128d_f64";
  qword_18C358 = 0;
  xmmword_18C320 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181940),
                               (__m128i)(unsigned __int64)&unk_9709B);
  qword_18C350 = (__int64)"\tm128i_i8\nm128i_i16\nm128i_i32\nm128i_i64\tm128i_u8\nm128i_u16\nm128i_u32\nm128i_u64";
  qword_18C378 = 0;
  xmmword_18C340 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181948),
                               (__m128i)(unsigned __int64)&unk_97070);
  qword_18C370 = (__int64)"\tm256_f32";
  qword_18C398 = 0;
  xmmword_18C360 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181950),
                               (__m128i)(unsigned __int64)&unk_97012);
  qword_18C390 = (__int64)"\nm256d_f64";
  qword_18C3B8 = 0;
  xmmword_18C380 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181958),
                               (__m128i)(unsigned __int64)&unk_96FFB);
  qword_18C3B0 = (__int64)"\tm256i_i8\nm256i_i16\nm256i_i32\nm256i_i64\tm256i_u8\nm256i_u16\nm256i_u32\nm256i_u64";
  qword_18C3D8 = 0;
  xmmword_18C3A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181960),
                               (__m128i)(unsigned __int64)&unk_96FD0);
  qword_18C3D0 = (__int64)"\tm512_f32";
  xmmword_18C3C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181968),
                               (__m128i)(unsigned __int64)&unk_96F72);
  qword_18C3F0 = (__int64)"\nm512d_f64";
  qword_18C3F8 = 0;
  xmmword_18C3E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_181970),
                               (__m128i)(unsigned __int64)&unk_96F5B);
  qword_18C410 = (__int64)"\tm512i_i8\nm512i_i16\nm512i_i32\nm512i_i64\tm512i_u8\nm512i_u16\nm512i_u32\nm512i_u64";
  qword_18C418 = 0;
  xmmword_18C400 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_181978),
                               (__m128i)(unsigned __int64)&unk_96F30);
  return __cxa_atexit(func, nullptr, &off_1809E0);
}

