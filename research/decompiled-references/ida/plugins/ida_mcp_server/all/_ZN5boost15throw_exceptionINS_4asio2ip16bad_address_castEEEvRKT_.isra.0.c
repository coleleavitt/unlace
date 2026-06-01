void __noreturn boost::throw_exception<boost::asio::ip::bad_address_cast>()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(0x38u);
  exception[6] = -1;
  *(__m128i *)exception = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)&off_444BD0,
                            (__m128i)(unsigned __int64)off_444C00);
  *((_OWORD *)exception + 1) = (unsigned __int64)off_444C28;
  *((_OWORD *)exception + 2) = 0;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::ip::bad_address_cast>,
    (void (*)(void *))boost::wrapexcept<boost::asio::ip::bad_address_cast>::~wrapexcept);
}

