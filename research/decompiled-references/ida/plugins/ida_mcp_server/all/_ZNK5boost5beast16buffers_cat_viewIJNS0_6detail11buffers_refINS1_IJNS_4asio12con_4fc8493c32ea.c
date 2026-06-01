char __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
        __int64 a1,
        __int64 a2)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 && *(_BYTE *)(a1 + 32) == *(_BYTE *)(a2 + 32) )
  {
    switch ( *(_BYTE *)(a1 + 32) )
    {
      case 0:
      case 0xA:
        result = 1;
        break;
      case 1:
        result = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==();
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        result = *(_QWORD *)(a2 + 8) == *(_QWORD *)(a1 + 8);
        break;
    }
  }
  return result;
}

