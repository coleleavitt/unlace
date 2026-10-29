__int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char v8; // al
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // [rsp+10h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  v3 = *(unsigned __int8 *)(a1 + 32);
  if ( *(_QWORD *)a1 != *(_QWORD *)(v1 + 72) || *(_BYTE *)(v1 + 104) != (_BYTE)v3 )
    return boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
             v3,
             v2);
  switch ( *(_BYTE *)(a1 + 32) )
  {
    case 0:
    case 7:
      v7 = 0;
      break;
    case 1:
      v14 = *(unsigned __int8 *)(a1 + 32);
      v8 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==();
      v3 = v14;
      v2 = a1;
      if ( !v8 )
        return boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                 v3,
                 v2);
      v10 = boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
              *(unsigned __int8 *)(a1 + 24),
              a1 + 8);
      if ( v11 > v9 )
        v11 = v9;
      v7 = v11 + v10;
      break;
    case 2:
    case 3:
      v5 = *(_QWORD **)(a1 + 8);
      if ( v5 != *(_QWORD **)(v1 + 80) )
        return boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                 v3,
                 v2);
      goto LABEL_6;
    case 4:
    case 5:
      v5 = *(_QWORD **)(a1 + 8);
      if ( v5 != *(_QWORD **)(v1 + 80) )
        return boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                 v3,
                 v2);
LABEL_6:
      v6 = *(_QWORD *)(v1 + 112);
      if ( v5[1] <= v6 )
        v6 = v5[1];
      v7 = v6 + *v5;
      break;
    case 6:
      v12 = *(_QWORD **)(a1 + 8);
      if ( v12 != *(_QWORD **)(v1 + 80) )
        return boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                 v3,
                 v2);
      v13 = *(_QWORD *)(v1 + 112);
      if ( v13 > v12[1] )
        v13 = v12[1];
      v7 = v13 + *v12;
      break;
  }
  return v7;
}

