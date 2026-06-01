void __fastcall `non-virtual thunk to'boost::wrapexcept<std::bad_alloc>::~wrapexcept(__m128i *a1)
{
  __int64 v2; // rdi

  a1[-1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444900, (__m128i)(unsigned __int64)off_444930);
  a1->m128i_i64[0] = (__int64)&off_444598;
  v2 = a1->m128i_i64[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::bad_alloc::~bad_alloc((std::bad_alloc *)&a1[-1].m128i_u64[1]);
}

