__int64 __fastcall boost::wrapexcept<std::invalid_argument>::clone(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __m128i v4; // xmm0

  v2 = operator new(0x40u);
  *(_QWORD *)v2 = &off_4445B8;
  std::logic_error::logic_error((std::logic_error *)(v2 + 8), (const std::logic_error *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 32) = v3;
  *(_QWORD *)(v2 + 8) = (char *)&`vtable for'std::invalid_argument + 16;
  *(_QWORD *)(v2 + 24) = &off_444598;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  *(_QWORD *)(v2 + 56) = *(_QWORD *)(a1 + 56);
  *(__m128i *)(v2 + 40) = v4;
  *(_QWORD *)(v2 + 24) = off_444CA0;
  *(__m128i *)v2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444C48, (__m128i)(unsigned __int64)off_444C78);
  boost::exception_detail::copy_boost_exception(
    (boost::exception_detail *)(v2 + 24),
    (exception *)(a1 + 24),
    (const exception *)off_444C78);
  return v2;
}

