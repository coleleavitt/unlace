unsigned __int64 __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::setup(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int8 *v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // r8
  __int64 v7; // r13
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // [rsp+0h] [rbp-100h]
  __int64 v27; // [rsp+18h] [rbp-E8h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int128 v29; // [rsp+90h] [rbp-70h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v32; // [rsp+C0h] [rbp-40h]

  v3 = (unsigned __int8 *)(a1 + 4);
  v32 = __readfsqword(0x28u);
  v4 = *a1;
  *(_OWORD *)(a1 + 1) = 0;
  v27 = v4;
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::begin();
  v5 = *((unsigned __int8 *)a1 + 56);
  a1[3] = v28;
  v25 = v28;
  boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v5);
  *((_BYTE *)a1 + 56) = 0;
  v6 = BYTE8(v30);
  if ( BYTE8(v30) == 2 )
  {
    v23 = v29;
    *((_BYTE *)a1 + 56) = 2;
    a1[4] = v23;
  }
  else if ( BYTE8(v30) > 2u )
  {
    v24 = v29;
    *((_BYTE *)a1 + 56) = 3;
    *((_BYTE *)a1 + 32) = v24;
  }
  else if ( BYTE8(v30) )
  {
    v21 = v29;
    *((_BYTE *)a1 + 48) = 0;
    a1[4] = v21;
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      (unsigned __int8)v30,
      (__int64)(a1 + 5),
      (unsigned __int8 *)&v29 + 8);
    *((_BYTE *)a1 + 56) = 1;
  }
  v7 = v31;
  a1[8] = v31;
  boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v6);
  v30 = 0;
  BYTE8(v30) = 3;
  v29 = 0;
  boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(3);
  while ( 1 )
  {
    v8 = *((_BYTE *)a1 + 56);
    if ( v27 == v7 )
      goto LABEL_9;
    if ( v8 == 2 )
    {
LABEL_28:
      v16 = *(_QWORD *)v3;
      v17 = a1[3];
      BYTE8(v30) = 2;
      *(_QWORD *)v3 += 16LL;
      *(_QWORD *)&v29 = v16;
      v18 = *(_QWORD *)v3;
      if ( v17 + 24 == *(_QWORD *)v3 )
      {
LABEL_35:
        boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)a1 + 56));
        *((_BYTE *)a1 + 32) = 0;
        *((_BYTE *)a1 + 56) = 3;
      }
      else
      {
        while ( !*(_QWORD *)(v18 + 8) )
        {
          v18 += 16;
          *(_QWORD *)v3 = v18;
          if ( v17 + 24 == v18 )
            goto LABEL_35;
        }
      }
      if ( v25 == *(_QWORD *)(v7 + 24) && *(_BYTE *)(v7 + 56) == 2 && (_QWORD)v29 == *(_QWORD *)(v7 + 32) )
      {
        v19 = *(_QWORD *)(v29 + 8);
        v20 = *(_QWORD *)(v7 + 64);
        if ( v19 <= v20 )
          v20 = *(_QWORD *)(v29 + 8);
        v11 = v19 - v20;
      }
      else
      {
        v11 = *(_QWORD *)(v29 + 8);
      }
    }
    else
    {
      if ( v8 == 3 )
      {
LABEL_9:
        while ( v27 != v25 )
        {
          if ( v8 != 3 )
            goto LABEL_11;
        }
        if ( v8 == 3 )
          goto LABEL_43;
LABEL_11:
        if ( v8 != 1 )
          goto LABEL_28;
      }
      v9 = *(_QWORD *)v3;
      v10 = v3[16];
      LOBYTE(v30) = 0;
      *(_QWORD *)&v29 = v9;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v10,
        (__int64)&v29 + 8,
        v3 + 8);
      BYTE8(v30) = 1;
      v31 = v7;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
      while ( 1 )
      {
        v8 = v3[16];
        if ( *(_QWORD *)a1[3] == *(_QWORD *)v3 && v8 == 6 )
          break;
        switch ( v8 )
        {
          case 0u:
          case 6u:
            break;
          case 1u:
          case 2u:
          case 3u:
          case 5u:
            if ( *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL) )
              goto LABEL_18;
            break;
          case 4u:
            goto LABEL_18;
          default:
            goto LABEL_9;
        }
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
      }
      boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)a1 + 56));
      a1[4] = v14;
      *((_BYTE *)a1 + 56) = 2;
      v15 = *(_QWORD *)v3;
      if ( *(_QWORD *)v3 == v13 )
      {
LABEL_17:
        boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)a1 + 56));
        *((_BYTE *)a1 + 32) = 0;
        *((_BYTE *)a1 + 56) = 3;
      }
      else
      {
        while ( !*(_QWORD *)(v15 + 8) )
        {
          v15 += 16;
          *(_QWORD *)v3 = v15;
          if ( v15 == v13 )
            goto LABEL_17;
        }
      }
LABEL_18:
      if ( *(_QWORD *)(v7 + 24) == v25 && *(_BYTE *)(v7 + 56) == 1 )
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==();
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
        (unsigned __int8)v30,
        (__int64)&v29);
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
    }
    v12 = a1[1];
    if ( v11 >= a2 )
      break;
    a2 -= v11;
    v7 = a1[8];
    a1[1] = v11 + v12;
    v25 = a1[3];
  }
  a1[2] = a2 - v11;
  a1[1] = a2 + v12;
LABEL_43:
  boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(3);
  return v32 - __readfsqword(0x28u);
}

