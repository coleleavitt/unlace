void __fastcall boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment::next<2ul>(
        __int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __guard *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  void *i; // rax
  __int64 v15; // rax
  void *v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v2 = (_QWORD *)(*(_QWORD *)a1 + 8LL);
  v3 = **(_QWORD **)a1 + 32LL;
  if ( v3 == v1 )
  {
LABEL_6:
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
    *(_QWORD *)(v5 + 8) = v4;
    *(_BYTE *)(v5 + 16) = 3;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    v7 = (_QWORD *)(*(_QWORD *)a1 + 8LL);
    v8 = **(_QWORD **)a1 + 48LL;
    if ( v6 == v8 )
    {
LABEL_7:
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      *(_BYTE *)(v9 + 16) = 4;
      *(_QWORD *)(v9 + 8) = v10;
      if ( *(_QWORD *)(**(_QWORD **)a1 + 56LL) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v12 + 16) = 5;
        *(_QWORD *)(v12 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
        v13 = *(_QWORD *)a1 + 8LL;
        for ( i = *(void **)v13; ; *(_QWORD *)v13 = i )
        {
          if ( !*(_BYTE *)v11 )
          {
            v17 = v13;
            v16 = i;
            boost::beast::http::chunk_crlf::begin();
            v13 = v17;
            v11 = &`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
            i = v16;
          }
          if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) )
            return;
          i = (void *)(*(_QWORD *)v13 + 16LL);
        }
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v15 + 8) = 0;
        *(_BYTE *)(v15 + 16) = 6;
      }
    }
    else
    {
      while ( !*(_QWORD *)(v6 + 8) )
      {
        v6 += 16;
        *v7 = v6;
        if ( v6 == v8 )
          goto LABEL_7;
      }
    }
  }
  else
  {
    while ( !*(_QWORD *)(v1 + 8) )
    {
      v1 += 16;
      *v2 = v1;
      if ( v1 == v3 )
        goto LABEL_6;
    }
  }
}

