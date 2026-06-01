void __fastcall `non-virtual thunk to'boost::wrapexcept<std::bad_alloc>::~wrapexcept(std::bad_alloc *this)
{
  __int64 v2; // rdi

  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&off_444900,
                                     (__m128i)(unsigned __int64)off_444930);
  *((_QWORD *)this + 1) = &off_444598;
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::bad_alloc::~bad_alloc(this);
}

