void __fastcall `non-virtual thunk to'boost::wrapexcept<std::invalid_argument>::~wrapexcept(_QWORD *a1)
{
  __int64 v2; // rdi

  *(__m128i *)(a1 - 3) = _mm_unpacklo_epi64(
                           (__m128i)(unsigned __int64)&off_444C48,
                           (__m128i)(unsigned __int64)off_444C78);
  *a1 = &off_444598;
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)(a1 - 2));
}

