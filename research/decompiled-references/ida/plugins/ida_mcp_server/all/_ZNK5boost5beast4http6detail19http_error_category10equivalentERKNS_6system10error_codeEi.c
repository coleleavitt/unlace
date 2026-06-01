bool __fastcall boost::beast::http::detail::http_error_category::equivalent(
        __int64 (__fastcall ***a1)(boost::system::detail::interop_error_category *__hidden this),
        __int64 a2,
        int a3)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v5)(boost::system::detail::system_error_category *__hidden); // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 == 1 )
  {
    if ( a3 != *(_DWORD *)a2 + 1000 * (*(_QWORD *)(a2 + 8) % 0x1FFFF7uLL) )
      return 0;
    return a1 == &boost::system::detail::interop_cat_holder<void>::instance;
  }
  else
  {
    if ( *(_DWORD *)a2 != a3 )
      return 0;
    if ( v3 )
      v5 = *(__int64 (__fastcall ****)(boost::system::detail::system_error_category *__hidden))(a2 + 8);
    else
      v5 = &boost::system::detail::system_cat_holder<void>::instance;
    return a1 == v5;
  }
}

