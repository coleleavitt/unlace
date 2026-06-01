__int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*(
        __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int8 v2; // al
  __int64 v3; // rcx
  char v5; // al
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_BYTE *)(a1 + 32);
  if ( *(_QWORD *)a1 != *(_QWORD *)(v1 + 24) || *(_BYTE *)(v1 + 56) != v2 )
  {
    if ( v2 != 2 )
    {
      if ( v2 <= 2u && v2 )
      {
        v3 = a1 + 8;
        return boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                 *(unsigned __int8 *)(v3 + 16),
                 v3);
      }
      return 0;
    }
    return **(_QWORD **)(a1 + 8);
  }
  if ( v2 != 2 )
  {
    if ( v2 <= 2u && v2 )
    {
      v5 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==();
      v3 = a1 + 8;
      if ( v5 )
      {
        v7 = boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
               *(unsigned __int8 *)(a1 + 24),
               a1 + 8);
        if ( v6 <= v8 )
          v8 = v6;
        return v8 + v7;
      }
      return boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
               *(unsigned __int8 *)(v3 + 16),
               v3);
    }
    return 0;
  }
  v9 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD **)(v1 + 32) != v9 )
    return **(_QWORD **)(a1 + 8);
  v10 = *(_QWORD *)(v1 + 64);
  if ( v9[1] <= v10 )
    v10 = v9[1];
  return v10 + *v9;
}

