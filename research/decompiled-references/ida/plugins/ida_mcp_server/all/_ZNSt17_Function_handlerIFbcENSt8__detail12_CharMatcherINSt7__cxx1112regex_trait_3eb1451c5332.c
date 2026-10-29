__int64 __fastcall std::_Function_handler<bool ()(char),std::__detail::_CharMatcher<std::regex_traits<char>,true,false>>::_M_manager(
        const __m128i **a1,
        const __m128i *a2,
        int a3)
{
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *a1 = a2;
    }
    else if ( a3 == 2 )
    {
      *(__m128i *)a1 = _mm_loadu_si128(a2);
    }
    return 0;
  }
  else
  {
    *a1 = (const __m128i *)&`typeinfo for'std::__detail::_CharMatcher<std::regex_traits<char>,true,false>;
    return 0;
  }
}

