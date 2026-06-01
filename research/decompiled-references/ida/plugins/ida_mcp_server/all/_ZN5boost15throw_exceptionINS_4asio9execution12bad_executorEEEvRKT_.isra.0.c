void __noreturn boost::throw_exception<boost::asio::execution::bad_executor>()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(0x38u);
  exception[6] = -1;
  *(__m128i *)exception = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)&off_444978,
                            (__m128i)(unsigned __int64)off_4449A8);
  *((_OWORD *)exception + 1) = (unsigned __int64)off_4449D0;
  *((_OWORD *)exception + 2) = 0;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::execution::bad_executor>,
    (void (*)(void *))boost::wrapexcept<boost::asio::execution::bad_executor>::~wrapexcept);
}

