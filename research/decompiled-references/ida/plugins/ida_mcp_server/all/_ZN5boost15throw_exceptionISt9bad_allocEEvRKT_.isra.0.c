void __noreturn boost::throw_exception<std::bad_alloc>()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(0x38u);
  exception[6] = -1;
  *(__m128i *)exception = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)&off_444900,
                            (__m128i)(unsigned __int64)off_444930);
  *((_OWORD *)exception + 1) = (unsigned __int64)off_444958;
  *((_OWORD *)exception + 2) = 0;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::bad_alloc>,
    (void (*)(void *))boost::wrapexcept<std::bad_alloc>::~wrapexcept);
}

