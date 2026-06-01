void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::system::system_error>::~wrapexcept(
        std::runtime_error *this)
{
  __int64 v2; // rdi

  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_4449F0,
                                     (__m128i)(unsigned __int64)off_444A20);
  *((_QWORD *)this + 5) = &off_444598;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  *(_QWORD *)this = off_444638;
  std::runtime_error::~runtime_error(this);
}

