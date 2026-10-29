void __fastcall boost::wrapexcept<boost::asio::execution::bad_executor>::~wrapexcept(__m128i *a1)
{
  __int64 v2; // rdi

  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444978, (__m128i)(unsigned __int64)off_4449A8);
  a1[1].m128i_i64[0] = (__int64)&off_444598;
  v2 = a1[1].m128i_i64[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  a1->m128i_i64[1] = (__int64)off_444610;
  std::exception::~exception((std::exception *)&a1->m128i_u64[1]);
  operator delete(a1, 0x38u);
}

