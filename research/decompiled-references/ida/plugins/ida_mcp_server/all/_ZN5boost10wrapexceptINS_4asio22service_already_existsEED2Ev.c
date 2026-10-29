// Alternative name is '_ZN5boost10wrapexceptINS_4asio22service_already_existsEED1Ev'
void __fastcall boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(__m128i *a1)
{
  __int64 v2; // rdi

  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444AE0, (__m128i)(unsigned __int64)off_444B10);
  a1[1].m128i_i64[1] = (__int64)&off_444598;
  v2 = a1[2].m128i_i64[0];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  a1->m128i_i64[1] = (__int64)off_4446A8;
  std::logic_error::~logic_error((std::logic_error *)&a1->m128i_u64[1]);
}

