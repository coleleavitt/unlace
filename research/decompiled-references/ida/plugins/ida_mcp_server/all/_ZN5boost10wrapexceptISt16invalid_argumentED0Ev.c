void __fastcall boost::wrapexcept<std::invalid_argument>::~wrapexcept(__m128i *a1)
{
  __int64 v2; // rdi

  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444C48, (__m128i)(unsigned __int64)off_444C78);
  a1[1].m128i_i64[1] = (__int64)&off_444598;
  v2 = a1[2].m128i_i64[0];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)&a1->m128i_u64[1]);
  operator delete(a1, 0x40u);
}

