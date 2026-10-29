__int64 __fastcall boost::beast::http::make_error_code(__int64 a1, int a2)
{
  __int64 v2; // rdx
  int v4; // eax

  v2 = a1;
  if ( !LOBYTE(`guard variable for'boost::beast::http::make_error_code(boost::beast::http::error)::cat[0]) )
  {
    v4 = __cxa_guard_acquire(`guard variable for'boost::beast::http::make_error_code(boost::beast::http::error)::cat);
    v2 = a1;
    if ( v4 )
    {
      boost::beast::http::make_error_code(boost::beast::http::error)::cat[1] = 0x964627DA815BF210LL;
      LODWORD(boost::beast::http::make_error_code(boost::beast::http::error)::cat[6]) = 0;
      boost::beast::http::make_error_code(boost::beast::http::error)::cat[0] = &off_444858;
      *(_OWORD *)&boost::beast::http::make_error_code(boost::beast::http::error)::cat[2] = 0;
      *(_OWORD *)&boost::beast::http::make_error_code(boost::beast::http::error)::cat[4] = 0;
      __cxa_guard_release(`guard variable for'boost::beast::http::make_error_code(boost::beast::http::error)::cat);
      v2 = a1;
    }
  }
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)v2 = a2;
  *(_QWORD *)(v2 + 16) = 2 - ((a2 == 0) - 1LL);
  *(_QWORD *)(v2 + 8) = boost::beast::http::make_error_code(boost::beast::http::error)::cat;
  return v2;
}

