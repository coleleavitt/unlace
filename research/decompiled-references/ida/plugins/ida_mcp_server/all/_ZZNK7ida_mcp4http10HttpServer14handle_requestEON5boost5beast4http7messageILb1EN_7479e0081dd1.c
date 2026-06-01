void __fastcall __noreturn ida_mcp::http::HttpServer::handle_request(boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> &&)const::{lambda(boost::beast::http::status,std::string)#1}::operator()()
{
  struct _Unwind_Exception *v0; // rbp

  std::string::_M_dispose();
  boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields();
  _Unwind_Resume(v0);
}

