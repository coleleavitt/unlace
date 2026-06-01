__int64 __fastcall boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
    case 9LL:
      result = 0;
      break;
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
      result = **(_QWORD **)(a2 + 8);
      break;
  }
  return result;
}

