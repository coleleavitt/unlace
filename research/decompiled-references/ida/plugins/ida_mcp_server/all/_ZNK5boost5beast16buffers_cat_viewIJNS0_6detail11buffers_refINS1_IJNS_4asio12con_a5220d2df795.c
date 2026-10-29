char __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
        __int64 a1,
        __int64 a2)
{
  char result; // al
  unsigned __int8 v3; // dl

  result = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
  {
    v3 = *(_BYTE *)(a1 + 32);
    if ( v3 == *(_BYTE *)(a2 + 32) )
    {
      if ( v3 == 2 )
      {
        return *(_QWORD *)(a2 + 8) == *(_QWORD *)(a1 + 8);
      }
      else if ( v3 <= 2u && v3 )
      {
        return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==();
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}

