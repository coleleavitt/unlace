void __fastcall boost::wrapexcept<boost::asio::ip::bad_address_cast>::~wrapexcept(__m128i *a1)
{
  __int64 v2; // rdi

  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444BD0, (__m128i)(unsigned __int64)off_444C00);
  a1[1].m128i_i64[0] = (__int64)&off_444598;
  v2 = a1[1].m128i_i64[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  a1->m128i_i64[1] = (__int64)off_444830;
  std::bad_cast::~bad_cast((std::bad_cast *)&a1->m128i_u64[1]);
  operator delete(a1, 0x38u);
}

