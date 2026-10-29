void __fastcall __noreturn boost::wrapexcept<boost::asio::ip::bad_address_cast>::rethrow(__m128i *a1)
{
  __m128i *exception; // rax
  __int64 v3; // rdi
  __m128i *v4; // rbx
  __m128i v5; // xmm0

  exception = (__m128i *)__cxa_allocate_exception(0x38u);
  v3 = a1[1].m128i_i64[1];
  v4 = exception;
  *exception = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4445B8, (__m128i)(unsigned __int64)off_444830);
  exception[1].m128i_i64[1] = v3;
  exception[1].m128i_i64[0] = (__int64)&off_444598;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v5 = a1[2];
  v4[3].m128i_i64[0] = a1[3].m128i_i64[0];
  v4[2] = v5;
  v4[1].m128i_i64[0] = (__int64)off_444C28;
  *v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444BD0, (__m128i)(unsigned __int64)off_444C00);
  __cxa_throw(
    v4,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::ip::bad_address_cast>,
    (void (*)(void *))boost::wrapexcept<boost::asio::ip::bad_address_cast>::~wrapexcept);
}

