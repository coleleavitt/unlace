__int64 __fastcall boost::asio::error::make_error_code(__int64 a1, int a2)
{
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 2 - ((a2 == 0) - 1LL);
  *(_QWORD *)(a1 + 8) = &boost::system::detail::system_cat_holder<void>::instance;
  return a1;
}

