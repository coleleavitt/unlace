bool __fastcall boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
        __int64 a1,
        __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 && *(_BYTE *)(a1 + 16) == *(_BYTE *)(a2 + 16) )
  {
    switch ( *(_BYTE *)(a1 + 16) )
    {
      case 0:
      case 6:
        result = 1;
        break;
      case 1:
      case 2:
      case 3:
      case 5:
        result = *(_QWORD *)(a2 + 8) == *(_QWORD *)(a1 + 8);
        break;
      case 4:
        result = *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
        break;
    }
  }
  return result;
}

