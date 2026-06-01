void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::execution::bad_executor>::~wrapexcept(
        std::exception *this)
{
  char *v1; // rbp
  __int64 v3; // rdi

  v1 = (char *)this - 8;
  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_444978,
                                     (__m128i)(unsigned __int64)off_4449A8);
  *((_QWORD *)this + 1) = &off_444598;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  *(_QWORD *)this = off_444610;
  std::exception::~exception(this);
  operator delete(v1, 0x38u);
}

