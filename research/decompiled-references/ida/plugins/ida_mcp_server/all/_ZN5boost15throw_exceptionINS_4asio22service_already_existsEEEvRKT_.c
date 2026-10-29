void __fastcall __noreturn boost::throw_exception<boost::asio::service_already_exists>(std::logic_error *a1)
{
  char *exception; // rbx

  exception = (char *)__cxa_allocate_exception(0x40u);
  *(_QWORD *)exception = &off_4445B8;
  std::logic_error::logic_error((std::logic_error *)(exception + 8), a1);
  *((_QWORD *)exception + 7) = -1;
  *(__m128i *)exception = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)&off_444AE0,
                            (__m128i)(unsigned __int64)off_444B10);
  *(_OWORD *)(exception + 24) = (unsigned __int64)off_444B38;
  *(_OWORD *)(exception + 40) = 0;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::service_already_exists>,
    (void (*)(void *))boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept);
}

