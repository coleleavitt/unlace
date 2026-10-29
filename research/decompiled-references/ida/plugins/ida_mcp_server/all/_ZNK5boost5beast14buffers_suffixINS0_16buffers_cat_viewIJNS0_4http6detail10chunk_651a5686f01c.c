__int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned __int8 *)(a1 + 16);
  if ( *(_QWORD *)a1 != *(_QWORD *)(v1 + 104) || *(_BYTE *)(v1 + 120) != (_BYTE)v3 )
    return boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
             v3,
             a1);
  switch ( v3 )
  {
    case 0LL:
    case 9LL:
      break;
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
      if ( *(_QWORD *)(v1 + 112) != *(_QWORD *)(a1 + 8) )
        return boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                 v3,
                 a1);
      break;
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
      if ( *(_QWORD *)(v1 + 112) != *(_QWORD *)(a1 + 8) )
        return boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                 v3,
                 a1);
      break;
  }
  v5 = boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
         v3,
         a1);
  if ( v7 > v6 )
    v7 = v6;
  return v7 + v5;
}

