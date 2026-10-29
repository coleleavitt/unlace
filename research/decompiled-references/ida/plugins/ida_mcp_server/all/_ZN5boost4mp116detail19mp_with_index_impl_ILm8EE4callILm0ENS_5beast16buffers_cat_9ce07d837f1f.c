__int64 __fastcall boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
    case 7LL:
      result = 0;
      break;
    case 1LL:
      result = boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                 *(unsigned __int8 *)(a2 + 24),
                 a2 + 8);
      break;
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
      result = **(_QWORD **)(a2 + 8);
      break;
  }
  return result;
}

