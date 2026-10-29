// Alternative name is '_ZN5boost10wrapexceptISt12out_of_rangeED1Ev'
void __fastcall boost::wrapexcept<std::out_of_range>::~wrapexcept(__m128i *a1)
{
  __int64 v2; // rdi

  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444B58, (__m128i)(unsigned __int64)off_444B88);
  a1[1].m128i_i64[1] = (__int64)&off_444598;
  v2 = a1[2].m128i_i64[0];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::out_of_range::~out_of_range((std::out_of_range *)&a1->m128i_u64[1]);
}

