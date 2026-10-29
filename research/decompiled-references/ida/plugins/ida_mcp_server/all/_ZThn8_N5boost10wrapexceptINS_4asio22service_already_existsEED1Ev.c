void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(
        std::logic_error *this)
{
  __int64 v2; // rdi

  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_444AE0,
                                     (__m128i)(unsigned __int64)off_444B10);
  *((_QWORD *)this + 2) = &off_444598;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  *(_QWORD *)this = off_4446A8;
  std::logic_error::~logic_error(this);
}

