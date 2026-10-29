void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<1ul>(
        __int64 *a1)
{
  _QWORD **v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // r12
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __guard *v17; // rdx
  _QWORD **v18; // rcx
  __int64 *v19; // r12
  __int64 v20; // rbx
  void *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  void *v24; // [rsp+8h] [rbp-50h]

  v2 = (_QWORD **)*a1;
  v3 = *(_QWORD **)*a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *a1 + 8;
  v6 = *(unsigned __int8 *)(*a1 + 24);
  if ( *v3 != v4 )
    goto LABEL_2;
  while ( 2 )
  {
    if ( (_BYTE)v6 != 6 )
    {
LABEL_2:
      switch ( v6 )
      {
        case 0LL:
        case 6LL:
          goto LABEL_4;
        case 1LL:
        case 2LL:
        case 3LL:
        case 5LL:
          if ( *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL) )
            return;
LABEL_4:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
          v2 = (_QWORD **)*a1;
          v6 = *(unsigned __int8 *)(v5 + 16);
          if ( **(_QWORD **)*a1 == *(_QWORD *)v5 )
            continue;
          goto LABEL_2;
        case 4LL:
          return;
      }
    }
    break;
  }
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v2 + 32));
  *(_BYTE *)(v7 + 32) = 2;
  v8 = (_QWORD *)*a1;
  *(_QWORD *)(v7 + 8) = v9;
  v10 = v8[1];
  v11 = *(_QWORD *)(*v8 + 8LL) + 16LL;
  if ( v11 == v10 )
  {
LABEL_11:
    boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v8 + 32));
    *(_BYTE *)(v12 + 32) = 3;
    v13 = (_QWORD *)*a1;
    *(_QWORD *)(v12 + 8) = v14;
    v15 = v13[1];
    v16 = *v13 + 40LL;
    if ( v16 == v15 )
    {
LABEL_16:
      if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        boost::beast::http::chunk_crlf::begin();
      boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v13 + 32));
      *((_BYTE *)v13 + 32) = 4;
      v18 = (_QWORD **)*a1;
      v13[1] = &boost::beast::http::chunk_crlf::begin(void)const::cb;
      v19 = (__int64 *)(v18 + 1);
      v20 = (__int64)v18[1];
      v21 = &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb;
      while ( 1 )
      {
        if ( !*(_BYTE *)v17 )
        {
          v24 = v21;
          boost::beast::http::chunk_crlf::begin();
          v17 = &`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
          v21 = v24;
        }
        if ( (void *)v20 == v21 )
          break;
        if ( *(_QWORD *)(*v19 + 8) )
          return;
        v20 = *v19 + 16;
        *v19 = v20;
      }
      boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*(unsigned __int8 *)(*a1 + 32));
      *(_BYTE *)(v23 + 32) = 5;
      *(_QWORD *)(v23 + 8) = v22 + 48;
      boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<5ul>(a1);
    }
    else
    {
      while ( !*(_QWORD *)(v15 + 8) )
      {
        v15 += 16;
        v13[1] = v15;
        if ( v15 == v16 )
          goto LABEL_16;
      }
    }
  }
  else
  {
    while ( !*(_QWORD *)(v10 + 8) )
    {
      v10 += 16;
      v8[1] = v10;
      if ( v10 == v11 )
        goto LABEL_11;
    }
  }
}

