int sub_1C420()
{
  qword_1772F8 = 0;
  qword_177318 = 0;
  qword_1772F0 = (__int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\bm64_u16\bm64_u32";
  xmmword_1772E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16C9F0),
                               (__m128i)(unsigned __int64)&unk_96150);
  qword_177310 = (__int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm128_u8\tm128_u16\tm128_u32";
  qword_177338 = 0;
  xmmword_177300 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16C9F8),
                               (__m128i)(unsigned __int64)&unk_960D0);
  qword_177330 = (__int64)"\nm128d_f64";
  qword_177358 = 0;
  xmmword_177320 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16CA00),
                               (__m128i)(unsigned __int64)&unk_9605B);
  qword_177350 = (__int64)"\tm128i_i8\nm128i_i16\nm128i_i32\nm128i_i64\tm128i_u8\nm128i_u16\nm128i_u32\nm128i_u64";
  qword_177378 = 0;
  xmmword_177340 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16CA08),
                               (__m128i)(unsigned __int64)&unk_96030);
  qword_177370 = (__int64)"\tm256_f32";
  qword_177398 = 0;
  xmmword_177360 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16CA10),
                               (__m128i)(unsigned __int64)&unk_95FD2);
  qword_177390 = (__int64)"\nm256d_f64";
  qword_1773B8 = 0;
  xmmword_177380 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16CA18),
                               (__m128i)(unsigned __int64)&unk_95FBB);
  qword_1773B0 = (__int64)"\tm256i_i8\nm256i_i16\nm256i_i32\nm256i_i64\tm256i_u8\nm256i_u16\nm256i_u32\nm256i_u64";
  qword_1773D8 = 0;
  xmmword_1773A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16CA20),
                               (__m128i)(unsigned __int64)&unk_95F90);
  qword_1773D0 = (__int64)"\tm512_f32";
  xmmword_1773C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16CA28),
                               (__m128i)(unsigned __int64)&unk_95F32);
  qword_1773F0 = (__int64)"\nm512d_f64";
  qword_1773F8 = 0;
  xmmword_1773E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)off_16CA30),
                               (__m128i)(unsigned __int64)&unk_95F1B);
  qword_177410 = (__int64)"\tm512i_i8\nm512i_i16\nm512i_i32\nm512i_i64\tm512i_u8\nm512i_u16\nm512i_u32\nm512i_u64";
  qword_177418 = 0;
  xmmword_177400 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_16CA38),
                               (__m128i)(unsigned __int64)&unk_95EF0);
  return __cxa_atexit(func, 0, &off_16BAA0);
}
