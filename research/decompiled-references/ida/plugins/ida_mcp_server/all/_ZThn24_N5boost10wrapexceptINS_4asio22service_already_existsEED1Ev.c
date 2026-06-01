void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(_QWORD *a1)
{
  __int64 v2; // rdi

  *(__m128i *)(a1 - 3) = _mm_unpacklo_epi64(
                           (__m128i)(unsigned __int64)&off_444AE0,
                           (__m128i)(unsigned __int64)off_444B10);
  *a1 = &off_444598;
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  *(a1 - 2) = off_4446A8;
  std::logic_error::~logic_error((std::logic_error *)(a1 - 2));
}

