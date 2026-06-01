void __fastcall boost::wrapexcept<std::length_error>::~wrapexcept(__m128i *a1)
{
  __int64 v2; // rdi

  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444CC0, (__m128i)(unsigned __int64)off_444CF0);
  a1[1].m128i_i64[1] = (__int64)&off_444598;
  v2 = a1[2].m128i_i64[0];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::length_error::~length_error((std::length_error *)&a1->m128i_u64[1]);
  operator delete(a1, 0x40u);
}

