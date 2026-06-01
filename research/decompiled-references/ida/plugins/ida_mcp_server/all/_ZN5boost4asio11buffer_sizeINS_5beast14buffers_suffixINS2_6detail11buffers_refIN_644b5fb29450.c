__int64 __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>>(
        __int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  __int64 *v4; // r14
  __int64 v5; // rdi
  unsigned __int8 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int8 *v9; // rdx
  unsigned __int64 v10; // rdx
  bool v11; // al
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  _BYTE v15[16]; // [rsp+30h] [rbp-A0h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-90h]
  __int64 v17; // [rsp+48h] [rbp-88h]
  char v18; // [rsp+50h] [rbp-80h]
  char v19; // [rsp+58h] [rbp-78h]
  __int64 *v20; // [rsp+60h] [rbp-70h]
  __int64 v21; // [rsp+68h] [rbp-68h] BYREF
  __int128 v22; // [rsp+70h] [rbp-60h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-50h]
  unsigned __int64 v24; // [rsp+90h] [rbp-40h]

  v1 = 0;
  v24 = __readfsqword(0x28u);
  v22 = 0;
  v18 = 0;
  BYTE8(v22) = 6;
  v19 = 6;
  v3 = *a1;
  v20 = a1;
  v4 = a1;
  v17 = v3;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  v5 = *((unsigned __int8 *)a1 + 24);
  BYTE8(v22) = 0;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v5,
    (__int64)&v22,
    v6);
  v15[8] = 0;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    BYTE8(v22),
    (__int64)v15,
    (unsigned __int8 *)&v22);
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  v21 = v7;
  BYTE8(v22) = 0;
  v16 = a1;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v8,
    (__int64)&v22,
    v9);
  v23 = a1;
  while ( a1 != v4
       || !(unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
  {
    if ( v21 != v4[1] || *((_BYTE *)v4 + 24) != BYTE8(v22) )
      goto LABEL_2;
    switch ( BYTE8(v22) )
    {
      case 0:
      case 6:
        goto LABEL_10;
      case 1:
      case 2:
      case 3:
      case 5:
        v11 = v4[2] == (_QWORD)v22;
        break;
      case 4:
        v11 = (_QWORD)v22 == v4[2];
        break;
    }
    if ( v11 )
    {
LABEL_10:
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
        BYTE8(v22),
        (__int64)&v21);
      if ( v13 > v12 )
        v13 = v12;
      v10 = v12 - v13;
    }
    else
    {
LABEL_2:
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
        BYTE8(v22),
        (__int64)&v21);
    }
    v1 += v10;
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
    v4 = v23;
  }
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  return v1;
}

