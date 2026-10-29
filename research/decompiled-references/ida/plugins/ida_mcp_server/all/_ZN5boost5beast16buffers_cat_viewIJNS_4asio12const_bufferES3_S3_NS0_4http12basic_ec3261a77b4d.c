void __fastcall boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  void *i; // rbx
  __int64 v5; // rax

  v1 = *a1;
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 56LL) == *(_QWORD *)(*a1 + 8) )
  {
    if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
      boost::beast::http::chunk_crlf::begin();
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
    *(_BYTE *)(v1 + 16) = 5;
    v2 = *a1;
    *(_QWORD *)(v1 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
    v3 = v2 + 8;
    for ( i = *(void **)(v2 + 8); ; *(_QWORD *)v3 = i )
    {
      if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
        || !__cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
      {
        if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
          goto LABEL_12;
      }
      else
      {
        unk_448FA8 = 2;
        boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
        __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
        if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
        {
LABEL_12:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v5 + 8) = 0;
          *(_BYTE *)(v5 + 16) = 6;
          return;
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) )
        return;
      i = (void *)(*(_QWORD *)v3 + 16LL);
    }
  }
}

