void __fastcall __noreturn boost::wrapexcept<std::invalid_argument>::rethrow(__int64 a1)
{
  char *exception; // rbx
  __int64 v3; // rdi
  __int128 v4; // xmm0

  exception = (char *)__cxa_allocate_exception(0x40u);
  *(_QWORD *)exception = &off_4445B8;
  std::logic_error::logic_error((std::logic_error *)(exception + 8), (const std::logic_error *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 32);
  *((_QWORD *)exception + 4) = v3;
  *((_QWORD *)exception + 1) = (char *)&`vtable for'std::invalid_argument + 16;
  *((_QWORD *)exception + 3) = &off_444598;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v4 = *(_OWORD *)(a1 + 40);
  *((_QWORD *)exception + 7) = *(_QWORD *)(a1 + 56);
  *(_OWORD *)(exception + 40) = v4;
  *((_QWORD *)exception + 3) = off_444CA0;
  *(__m128i *)exception = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)&off_444C48,
                            (__m128i)(unsigned __int64)off_444C78);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::invalid_argument>,
    (void (*)(void *))boost::wrapexcept<std::invalid_argument>::~wrapexcept);
}

