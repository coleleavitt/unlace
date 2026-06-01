void __fastcall __noreturn ida_mcp::http::HttpServer::bind(
        ida_mcp::http::HttpServer *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16)
{
  struct _Unwind_Exception *v16; // rbx
  int v17; // r13d

  a16 = v17;
  boost::asio::detail::socket_holder::~socket_holder((boost::asio::detail::socket_holder *)&a16);
  _Unwind_Resume(v16);
}

