void __fastcall `non-virtual thunk to'boost::wrapexcept<std::out_of_range>::~wrapexcept(std::out_of_range *this)
{
  char *v1; // rbp
  __int64 v3; // rdi

  v1 = (char *)this - 8;
  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_444B58,
                                     (__m128i)(unsigned __int64)off_444B88);
  *((_QWORD *)this + 2) = &off_444598;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  std::out_of_range::~out_of_range(this);
  operator delete(v1, 0x40u);
}

