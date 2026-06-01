void __fastcall `non-virtual thunk to'boost::wrapexcept<std::length_error>::~wrapexcept(std::length_error *this)
{
  __int64 v2; // rdi

  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_444CC0,
                                     (__m128i)(unsigned __int64)off_444CF0);
  *((_QWORD *)this + 2) = &off_444598;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::length_error::~length_error(this);
}

