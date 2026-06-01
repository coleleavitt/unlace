void __fastcall boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<7ul>(
        __int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r12
  void *i; // rbx
  __int64 v8; // rax

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 8);
  v3 = (_QWORD *)(*a1 + 8);
  v4 = *(_QWORD *)*a1 + 96LL;
  if ( v2 == v4 )
  {
LABEL_6:
    if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
      boost::beast::http::chunk_crlf::begin();
    boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
    *(_BYTE *)(v1 + 16) = 8;
    v5 = *a1;
    *(_QWORD *)(v1 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
    v6 = v5 + 8;
    for ( i = *(void **)(v5 + 8); ; *(_QWORD *)v6 = i )
    {
      if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
        || !__cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
      {
        if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
          goto LABEL_15;
      }
      else
      {
        unk_448FA8 = 2;
        boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
        __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
        if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
        {
LABEL_15:
          boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v8 + 8) = 0;
          *(_BYTE *)(v8 + 16) = 9;
          return;
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) )
        return;
      i = (void *)(*(_QWORD *)v6 + 16LL);
    }
  }
  while ( !*(_QWORD *)(v2 + 8) )
  {
    v2 += 16;
    *v3 = v2;
    if ( v2 == v4 )
      goto LABEL_6;
  }
}

