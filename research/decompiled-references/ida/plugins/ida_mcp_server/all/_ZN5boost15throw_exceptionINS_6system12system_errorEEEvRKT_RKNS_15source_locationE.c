void __fastcall __noreturn boost::throw_exception<boost::system::system_error>(std::runtime_error *a1, __int64 a2)
{
  char *exception; // rbx
  __int128 v3; // xmm1
  __int64 v4; // rax
  __m128d v5; // xmm0

  exception = (char *)__cxa_allocate_exception(0x58u);
  *(_QWORD *)exception = &off_4445B8;
  std::runtime_error::runtime_error((std::runtime_error *)(exception + 8), a1);
  v3 = *((_OWORD *)a1 + 1);
  *((_QWORD *)exception + 5) = *((_QWORD *)a1 + 4);
  *(__m128i *)exception = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)&off_4449F0,
                            (__m128i)(unsigned __int64)off_444A20);
  v4 = *(_QWORD *)(a2 + 16);
  *((_OWORD *)exception + 3) = (unsigned __int64)off_444A48;
  v5 = *(__m128d *)a2;
  *((_QWORD *)exception + 10) = v4;
  *(_OWORD *)(exception + 24) = v3;
  *((__m128d *)exception + 4) = _mm_shuffle_pd(v5, v5, 1);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::system::system_error>,
    (void (*)(void *))boost::wrapexcept<boost::system::system_error>::~wrapexcept);
}

