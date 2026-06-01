__int64 __fastcall boost::wrapexcept<boost::asio::invalid_service_owner>::clone(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __m128i v4; // xmm0

  v2 = operator new(0x40u);
  *(_QWORD *)v2 = &off_4445B8;
  std::logic_error::logic_error((std::logic_error *)(v2 + 8), (const std::logic_error *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 32) = v3;
  *(_QWORD *)(v2 + 8) = off_4446D0;
  *(_QWORD *)(v2 + 24) = &off_444598;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  *(_QWORD *)(v2 + 56) = *(_QWORD *)(a1 + 56);
  *(__m128i *)(v2 + 40) = v4;
  *(_QWORD *)(v2 + 24) = off_444AC0;
  *(__m128i *)v2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444A68, (__m128i)(unsigned __int64)off_444A98);
  boost::exception_detail::copy_boost_exception(
    (boost::exception_detail *)(v2 + 24),
    (exception *)(a1 + 24),
    (const exception *)off_444A98);
  return v2;
}

