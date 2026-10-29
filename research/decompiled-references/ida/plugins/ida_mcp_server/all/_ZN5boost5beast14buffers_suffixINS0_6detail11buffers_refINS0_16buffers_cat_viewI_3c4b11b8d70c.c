void __fastcall boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::consume(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( a2 )
  {
    v2 = *a1;
    v3 = a2;
    while ( v2 != a1[1] || *((_BYTE *)a1 + 24) != 6 )
    {
      switch ( *((_BYTE *)a1 + 24) )
      {
        case 0:
        case 6:
          v4 = 0;
          break;
        case 1:
        case 2:
        case 3:
        case 5:
          v4 = *(_QWORD *)(a1[2] + 8);
          break;
        case 4:
          v4 = *(unsigned __int16 *)(a1[2] + 48) + (unsigned __int64)*(unsigned __int16 *)(a1[2] + 50) + 2;
          break;
      }
      v5 = a1[4];
      v6 = v5 + v3;
      if ( v3 < v4 - v5 )
      {
        a1[4] = v6;
        break;
      }
      a1[4] = 0;
      v3 = v6 - v4;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
      if ( !v3 )
        break;
    }
  }
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
}

