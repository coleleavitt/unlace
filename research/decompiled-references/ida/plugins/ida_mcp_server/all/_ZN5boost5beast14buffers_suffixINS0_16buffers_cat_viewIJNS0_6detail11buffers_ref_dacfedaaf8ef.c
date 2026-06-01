unsigned __int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::consume(
        __int64 a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  unsigned __int64 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // cc
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // [rsp+50h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( !a2 )
    goto LABEL_20;
  v2 = *(_QWORD **)(a1 + 24);
  v4 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)(a1 + 56);
      if ( (_QWORD *)a1 == v2 )
        break;
      v6 = v5 <= 2u;
      if ( v5 != 2 )
        goto LABEL_5;
LABEL_25:
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
      v15 = *(_QWORD *)(a1 + 64);
      v13 = v4 + v15;
      if ( v4 < v14 - v15 )
        goto LABEL_22;
      *(_QWORD *)(a1 + 32) += 16LL;
      v16 = *(_QWORD **)(a1 + 32);
      v4 = v13 - v14;
      *(_QWORD *)(a1 + 64) = 0;
      if ( v2 + 3 == v16 )
      {
LABEL_31:
        if ( *(_BYTE *)(a1 + 56) == 1 )
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(a1 + 32) = 0;
        *(_BYTE *)(a1 + 56) = 3;
        if ( !v4 )
          goto LABEL_20;
      }
      else
      {
        while ( !v16[1] )
        {
          v16 += 2;
          *(_QWORD *)(a1 + 32) = v16;
          if ( v2 + 3 == v16 )
            goto LABEL_31;
        }
LABEL_19:
        if ( !v4 )
          goto LABEL_20;
      }
    }
    if ( v5 == 3 )
      goto LABEL_20;
    v6 = v5 <= 2u;
    if ( v5 == 2 )
      goto LABEL_25;
LABEL_5:
    if ( !v6 || !v5 )
    {
      v13 = v4 + *(_QWORD *)(a1 + 64);
      goto LABEL_22;
    }
    v7 = (_QWORD *)(a1 + 32);
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
      *(unsigned __int8 *)(a1 + 48),
      a1 + 32);
    v9 = *(_QWORD *)(a1 + 64);
    if ( v4 < v8 - v9 )
      break;
    *(_QWORD *)(a1 + 64) = 0;
    v4 += v9 - v8;
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
    v2 = *(_QWORD **)(a1 + 24);
    v10 = *(unsigned __int8 *)(a1 + 48);
    if ( *v2 == *v7 )
      goto LABEL_12;
    do
    {
      do
      {
        switch ( v10 )
        {
          case 0LL:
          case 6LL:
            break;
          case 1LL:
          case 2LL:
          case 3LL:
          case 5LL:
            if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
              goto LABEL_19;
            break;
          case 4LL:
            goto LABEL_19;
        }
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        v2 = *(_QWORD **)(a1 + 24);
        v10 = *(unsigned __int8 *)(a1 + 48);
      }
      while ( *v2 != *v7 );
LABEL_12:
      ;
    }
    while ( (_BYTE)v10 != 6 );
    if ( *(_BYTE *)(a1 + 56) == 1 )
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
    v11 = v2 + 1;
    *(_BYTE *)(a1 + 56) = 2;
    *(_QWORD *)(a1 + 32) = v2 + 1;
    if ( v2 + 3 != v2 + 1 )
    {
      while ( !v11[1] )
      {
        v11 += 2;
        *v7 = v11;
        if ( v11 == v2 + 3 )
        {
          v17 = *(unsigned __int8 *)(a1 + 56);
          goto LABEL_36;
        }
      }
      goto LABEL_19;
    }
    v17 = 2;
LABEL_36:
    boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v17);
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 56) = 3;
    if ( !v4 )
      goto LABEL_20;
  }
  v13 = v4 + v9;
LABEL_22:
  *(_QWORD *)(a1 + 64) = v13;
LABEL_20:
  boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(3);
  return v18 - __readfsqword(0x28u);
}

