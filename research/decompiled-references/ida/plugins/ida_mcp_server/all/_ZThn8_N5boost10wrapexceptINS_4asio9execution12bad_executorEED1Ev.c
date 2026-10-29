void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::execution::bad_executor>::~wrapexcept(
        std::exception *this)
{
  __int64 v2; // rdi

  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_444978,
                                     (__m128i)(unsigned __int64)off_4449A8);
  *((_QWORD *)this + 1) = &off_444598;
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  *(_QWORD *)this = off_444610;
  std::exception::~exception(this);
}

