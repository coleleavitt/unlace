__m128i *__fastcall boost::wrapexcept<std::bad_alloc>::clone(__int64 a1)
{
  __m128i *v2; // rax
  __int64 v3; // rdi
  __m128i *v4; // rbx
  __m128i v5; // xmm0
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  v7[0] = _mm_unpacklo_epi64(
            (__m128i)(unsigned __int64)&off_4445B8,
            (__m128i)((unsigned __int64)&`vtable for'std::bad_alloc + 16));
  v2 = (__m128i *)operator new(0x38u);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  *v2 = _mm_load_si128(v7);
  v2[1].m128i_i64[1] = v3;
  v2[1].m128i_i64[0] = (__int64)&off_444598;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v4[3].m128i_i64[0] = *(_QWORD *)(a1 + 48);
  v4[2] = v5;
  v4[1].m128i_i64[0] = (__int64)off_444958;
  *v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444900, (__m128i)(unsigned __int64)off_444930);
  boost::exception_detail::copy_boost_exception(
    (boost::exception_detail *)&v4[1],
    (exception *)(a1 + 16),
    (const exception *)off_444930);
  return v4;
}

