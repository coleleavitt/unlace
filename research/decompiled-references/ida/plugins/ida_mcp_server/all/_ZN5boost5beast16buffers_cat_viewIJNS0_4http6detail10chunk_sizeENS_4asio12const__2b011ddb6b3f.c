void __fastcall boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(
        __int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // r12
  void *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r12
  void *j; // rbx
  __int64 v22; // rax

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 8);
  v3 = (_QWORD *)(*a1 + 8);
  for ( i = *(_QWORD *)*a1 + 56LL; v2 != i; *v3 = v2 )
  {
    if ( *(_QWORD *)(v2 + 8) )
      return;
    v2 += 16;
  }
  if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
    boost::beast::http::chunk_crlf::begin();
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  *(_BYTE *)(v1 + 16) = 5;
  v5 = *a1;
  *(_QWORD *)(v1 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
  v6 = v5 + 8;
  v7 = *(void **)(v5 + 8);
  while ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
       || !__cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
  {
    if ( v7 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
      goto LABEL_15;
LABEL_10:
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) )
      return;
    v7 = (void *)(*(_QWORD *)v6 + 16LL);
    *(_QWORD *)v6 = v7;
  }
  unk_448FA8 = 2;
  boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
  __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
  if ( v7 != &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
    goto LABEL_10;
LABEL_15:
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  v9 = v8 + 64;
  *(_BYTE *)(v10 + 16) = 6;
  v11 = (_QWORD *)*a1;
  *(_QWORD *)(v10 + 8) = v9;
  v12 = v11[1];
  v13 = *v11 + 80LL;
  if ( v12 == v13 )
  {
LABEL_20:
    boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
    *(_BYTE *)(v14 + 16) = 7;
    v15 = *a1;
    *(_QWORD *)(v14 + 8) = v16;
    v17 = *(_QWORD *)(v15 + 8);
    v18 = *(_QWORD *)v15 + 96LL;
    if ( v18 == v17 )
    {
LABEL_25:
      if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        boost::beast::http::chunk_crlf::begin();
      boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      *(_BYTE *)(v15 + 16) = 8;
      v19 = *a1;
      *(_QWORD *)(v15 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
      v20 = v19 + 8;
      for ( j = *(void **)(v19 + 8); ; *(_QWORD *)v20 = j )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        {
          if ( __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
          {
            unk_448FA8 = 2;
            boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
            __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
          }
        }
        if ( j == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
          break;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) )
          return;
        j = (void *)(*(_QWORD *)v20 + 16LL);
      }
      boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      *(_BYTE *)(v22 + 8) = 0;
      *(_BYTE *)(v22 + 16) = 9;
    }
    else
    {
      while ( !*(_QWORD *)(v17 + 8) )
      {
        v17 += 16;
        *(_QWORD *)(v15 + 8) = v17;
        if ( v17 == v18 )
          goto LABEL_25;
      }
    }
  }
  else
  {
    while ( !*(_QWORD *)(v12 + 8) )
    {
      v12 += 16;
      v11[1] = v12;
      if ( v12 == v13 )
        goto LABEL_20;
    }
  }
}

