__int64 __fastcall boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        unsigned __int64 a1,
        __int64 *a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 *v5; // r8
  __int64 result; // rax
  char v7; // dl
  __int64 v8; // rdx

  if ( a1 == 2 )
  {
    result = *a2;
    v8 = *(_QWORD *)a2[1];
    *(_BYTE *)(result + 24) = 2;
    *(_QWORD *)result = v8;
  }
  else if ( a1 > 2 )
  {
    result = *a2;
    v7 = *(_BYTE *)a2[1];
    *(_BYTE *)(result + 24) = 3;
    *(_BYTE *)result = v7;
  }
  else if ( a1 )
  {
    v2 = (unsigned __int8 *)a2[1];
    v3 = *a2 + 8;
    v4 = *(_QWORD *)v2;
    *(_BYTE *)(v3 + 8) = 0;
    *(_QWORD *)(v3 - 8) = v4;
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      v2[16],
      v3,
      v2 + 8);
    result = *v5;
    *(_BYTE *)(*v5 + 24) = 1;
  }
  return result;
}

