bool __fastcall boost::beast::http::detail::http_error_category::equivalent(
        __int64 (__fastcall ***a1)(boost::system::detail::generic_error_category *__hidden this),
        int a2,
        __int64 a3)
{
  bool result; // al
  __int64 (__fastcall ***v4)(boost::system::detail::generic_error_category *__hidden); // rax

  result = 0;
  if ( a2 == *(_DWORD *)a3 )
  {
    v4 = *(__int64 (__fastcall ****)(boost::system::detail::generic_error_category *__hidden))(a3 + 8);
    if ( !v4 )
      v4 = &boost::system::detail::generic_cat_holder<void>::instance;
    return a1 == v4;
  }
  return result;
}

