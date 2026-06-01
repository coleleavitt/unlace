void __fastcall `non-virtual thunk to'boost::wrapexcept<std::out_of_range>::~wrapexcept(std::out_of_range *this)
{
  __int64 v2; // rdi

  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_444B58,
                                     (__m128i)(unsigned __int64)off_444B88);
  *((_QWORD *)this + 2) = &off_444598;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::out_of_range::~out_of_range(this);
}

