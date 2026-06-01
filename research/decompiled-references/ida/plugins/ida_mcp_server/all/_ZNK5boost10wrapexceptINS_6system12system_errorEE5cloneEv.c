__int64 __fastcall boost::wrapexcept<boost::system::system_error>::clone(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  __m128i v5; // xmm0

  v2 = operator new(0x58u);
  *(_QWORD *)v2 = &off_4445B8;
  std::runtime_error::runtime_error((std::runtime_error *)(v2 + 8), (const std::runtime_error *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 56);
  *(__m128i *)(v2 + 24) = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(v2 + 8) = off_444638;
  v4 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v2 + 56) = v3;
  *(_QWORD *)(v2 + 40) = v4;
  *(_QWORD *)(v2 + 48) = &off_444598;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  *(_QWORD *)(v2 + 80) = *(_QWORD *)(a1 + 80);
  *(__m128i *)(v2 + 64) = v5;
  *(_QWORD *)(v2 + 48) = off_444A48;
  *(__m128i *)v2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4449F0, (__m128i)(unsigned __int64)off_444A20);
  boost::exception_detail::copy_boost_exception(
    (boost::exception_detail *)(v2 + 48),
    (exception *)(a1 + 48),
    (const exception *)off_444A20);
  return v2;
}

