unsigned __int64 __fastcall boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::increment>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( a1 == 1 )
  {
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
    v2 = *a2;
    v3 = (__int64)(*a2 + 1);
    while ( 1 )
    {
      v5 = *(unsigned __int8 *)(v3 + 16);
      if ( *(_QWORD *)*v2 == *(_QWORD *)v3 && (_BYTE)v5 == 6 )
        break;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
        v5,
        v3);
      if ( v4 )
        return v15 - __readfsqword(0x28u);
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
      v2 = *a2;
    }
    boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v2 + 32));
    *(_BYTE *)(v6 + 32) = 2;
    v7 = *a2;
    *(_QWORD *)(v6 + 8) = v8;
    v9 = v7[1];
    v10 = *v7 + 24;
    if ( v10 == v9 )
      goto LABEL_13;
    while ( !*(_QWORD *)(v9 + 8) )
    {
      v9 += 16;
      v7[1] = v9;
      if ( v10 == v9 )
        goto LABEL_13;
    }
  }
  else
  {
    v7 = *a2;
    v12 = **a2;
    v7[1] += 16;
    v13 = v7[1];
    if ( v13 == v12 + 24 )
    {
LABEL_13:
      boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v7 + 32));
      *(_BYTE *)(v14 + 8) = 0;
      *(_BYTE *)(v14 + 32) = 3;
      return v15 - __readfsqword(0x28u);
    }
    while ( !*(_QWORD *)(v13 + 8) )
    {
      v13 += 16;
      v7[1] = v13;
      if ( v13 == v12 + 24 )
        goto LABEL_13;
    }
  }
  return v15 - __readfsqword(0x28u);
}

