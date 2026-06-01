void __fastcall __noreturn boost::wrapexcept<boost::system::system_error>::rethrow(__int64 a1)
{
  char *exception; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int128 v5; // xmm0

  exception = (char *)__cxa_allocate_exception(0x58u);
  *(_QWORD *)exception = &off_4445B8;
  std::runtime_error::runtime_error((std::runtime_error *)(exception + 8), (const std::runtime_error *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 56);
  *(_OWORD *)(exception + 24) = *(_OWORD *)(a1 + 24);
  *((_QWORD *)exception + 1) = off_444638;
  v4 = *(_QWORD *)(a1 + 40);
  *((_QWORD *)exception + 7) = v3;
  *((_QWORD *)exception + 5) = v4;
  *((_QWORD *)exception + 6) = &off_444598;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v5 = *(_OWORD *)(a1 + 64);
  *((_QWORD *)exception + 10) = *(_QWORD *)(a1 + 80);
  *((_OWORD *)exception + 4) = v5;
  *((_QWORD *)exception + 6) = off_444A48;
  *(__m128i *)exception = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)&off_4449F0,
                            (__m128i)(unsigned __int64)off_444A20);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::system::system_error>,
    (void (*)(void *))boost::wrapexcept<boost::system::system_error>::~wrapexcept);
}

