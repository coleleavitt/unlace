void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::setup(
        __int64 *a1,
        unsigned __int64 a2)
{
  _QWORD *v3; // r15
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r9
  unsigned __int8 v9; // al
  unsigned __int8 *v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v18[8]; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int8 v19; // [rsp+40h] [rbp-78h]
  __int64 v20; // [rsp+48h] [rbp-70h]
  __int64 v21; // [rsp+50h] [rbp-68h] BYREF
  __int128 v22; // [rsp+58h] [rbp-60h] BYREF
  __int64 v23; // [rsp+68h] [rbp-50h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v3 = a1 + 4;
  v4 = *a1;
  v24 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 1) = 0;
  v6 = *(unsigned __int8 *)(v4 + 24);
  v19 = 0;
  v7 = v4;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v6,
    (__int64)v18,
    (unsigned __int8 *)(v4 + 16));
  BYTE8(v22) = 0;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v19,
    (__int64)&v22,
    v18);
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  a1[3] = v8;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  *((_BYTE *)a1 + 40) = 0;
  v23 = v4;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v9,
    (__int64)v3,
    v10);
  a1[6] = v4;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  v22 = 0;
  v18[0] = 0;
  BYTE8(v22) = 6;
  v19 = 6;
  v20 = v4;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
LABEL_9:
  if ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
  {
    while ( 1 )
    {
      v11 = *((unsigned __int8 *)a1 + 40);
      v21 = a1[3];
      switch ( v11 )
      {
        case 0LL:
          v17 = 0;
          break;
        case 1LL:
          v17 = 1;
          *(_QWORD *)&v22 = *v3;
          break;
        case 2LL:
          v17 = 2;
          *(_QWORD *)&v22 = *v3;
          break;
        case 3LL:
          v17 = 3;
          *(_QWORD *)&v22 = *v3;
          break;
        case 4LL:
          v17 = 4;
          *(_QWORD *)&v22 = *v3;
          break;
        case 5LL:
          v17 = 5;
          *(_QWORD *)&v22 = *v3;
          break;
        case 6LL:
          v17 = 6;
          LOBYTE(v22) = *(_BYTE *)v3;
          break;
      }
      v23 = v7;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
      BYTE8(v22) = v11;
      if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
      {
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
          v17,
          (__int64)&v21);
        v14 = a1[1];
        if ( v13 > v12 )
          v13 = v12;
        v15 = v12 - v13;
        v16 = a2 - v15;
        if ( v15 >= a2 )
        {
LABEL_18:
          a1[2] = v16;
          a1[1] = a2 + v14;
          break;
        }
      }
      else
      {
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
          v17,
          (__int64)&v21);
        v14 = a1[1];
        v16 = a2 - v15;
        if ( v15 >= a2 )
          goto LABEL_18;
      }
      v7 = a1[6];
      a2 = v16;
      a1[1] = v14 + v15;
      if ( v4 == v7 )
        goto LABEL_9;
    }
  }
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
}

