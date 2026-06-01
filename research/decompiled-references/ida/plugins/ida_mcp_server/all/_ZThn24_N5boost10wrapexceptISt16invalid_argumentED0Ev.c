void __fastcall `non-virtual thunk to'boost::wrapexcept<std::invalid_argument>::~wrapexcept(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi

  v1 = a1 - 3;
  *(__m128i *)(a1 - 3) = _mm_unpacklo_epi64(
                           (__m128i)(unsigned __int64)&off_444C48,
                           (__m128i)(unsigned __int64)off_444C78);
  *a1 = &off_444598;
  v3 = a1[1];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)(a1 - 2));
  operator delete(v1, 0x40u);
}

