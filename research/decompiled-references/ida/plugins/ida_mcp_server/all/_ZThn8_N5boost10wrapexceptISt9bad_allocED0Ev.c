void __fastcall `non-virtual thunk to'boost::wrapexcept<std::bad_alloc>::~wrapexcept(std::bad_alloc *this)
{
  char *v1; // rbp
  __int64 v3; // rdi

  v1 = (char *)this - 8;
  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_444900,
                                     (__m128i)(unsigned __int64)off_444930);
  *((_QWORD *)this + 1) = &off_444598;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  std::bad_alloc::~bad_alloc(this);
  operator delete(v1, 0x38u);
}

