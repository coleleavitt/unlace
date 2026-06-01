__int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 32) = 10;
  *(_QWORD *)(a1 + 40) = a2;
  return a1;
}

