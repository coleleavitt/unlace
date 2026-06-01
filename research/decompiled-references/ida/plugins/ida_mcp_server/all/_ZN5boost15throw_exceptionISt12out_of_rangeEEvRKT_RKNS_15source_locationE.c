void __fastcall __noreturn boost::throw_exception<std::out_of_range>(std::logic_error *a1, __int64 a2)
{
  char *exception; // rbx
  __int64 v3; // rax
  __m128d v4; // xmm0

  exception = (char *)__cxa_allocate_exception(0x40u);
  *(_QWORD *)exception = &off_4445B8;
  std::logic_error::logic_error((std::logic_error *)(exception + 8), a1);
  *(__m128i *)exception = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)&off_444B58,
                            (__m128i)(unsigned __int64)off_444B88);
  v3 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(exception + 24) = (unsigned __int64)off_444BB0;
  v4 = *(__m128d *)a2;
  *((_QWORD *)exception + 7) = v3;
  *(__m128d *)(exception + 40) = _mm_shuffle_pd(v4, v4, 1);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::out_of_range>,
    (void (*)(void *))boost::wrapexcept<std::out_of_range>::~wrapexcept);
}

