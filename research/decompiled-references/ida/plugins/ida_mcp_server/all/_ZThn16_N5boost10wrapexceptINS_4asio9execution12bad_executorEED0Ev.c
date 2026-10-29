void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::execution::bad_executor>::~wrapexcept(__m128i *a1)
{
  __m128i *v1; // rbp
  __int64 v3; // rdi

  v1 = a1 - 1;
  a1[-1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444978, (__m128i)(unsigned __int64)off_4449A8);
  a1->m128i_i64[0] = (__int64)&off_444598;
  v3 = a1->m128i_i64[1];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  a1[-1].m128i_i64[1] = (__int64)off_444610;
  std::exception::~exception((std::exception *)&a1[-1].m128i_u64[1]);
  operator delete(v1, 0x38u);
}

