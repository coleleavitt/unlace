// Alternative name is '_ZN5boost10wrapexceptINS_4asio21invalid_service_ownerEED2Ev'
void __fastcall boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept(__m128i *a1)
{
  __int64 v2; // rdi

  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444A68, (__m128i)(unsigned __int64)off_444A98);
  a1[1].m128i_i64[1] = (__int64)&off_444598;
  v2 = a1[2].m128i_i64[0];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  a1->m128i_i64[1] = (__int64)off_4446D0;
  std::logic_error::~logic_error((std::logic_error *)&a1->m128i_u64[1]);
}

