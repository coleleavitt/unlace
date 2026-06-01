void __fastcall boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rbx
  __int64 k; // r12
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // r12
  void *i; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdx
  void *v34; // rbx
  __int64 m; // r12
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  void *v40; // rbx
  __int64 j; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx

  switch ( a1 )
  {
    case 0LL:
    case 5LL:
      v21 = (_QWORD *)*a2;
      v21[1] += 16LL;
      v22 = v21 + 1;
      for ( i = (void *)v21[1]; ; *v22 = i )
      {
        if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        {
          if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_32;
        }
        else
        {
          boost::beast::http::chunk_crlf::begin();
          if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_32;
        }
        if ( *(_QWORD *)(*v22 + 8LL) )
          break;
        i = (void *)(*v22 + 16LL);
      }
      break;
    case 1LL:
      v13 = *a2;
      v14 = *(_QWORD *)*a2;
      *(_QWORD *)(v13 + 8) += 16LL;
      v15 = *(_QWORD *)(v13 + 8);
      if ( v14 + 16 == v15 )
      {
LABEL_18:
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_QWORD *)(v17 + 8) = v16;
        *(_BYTE *)(v17 + 16) = 2;
        v18 = *(_QWORD *)(*a2 + 8);
        v19 = (_QWORD *)(*a2 + 8);
        v20 = *(_QWORD *)*a2 + 32LL;
        if ( v18 == v20 )
        {
LABEL_59:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_QWORD *)(v43 + 8) = v42;
          *(_BYTE *)(v43 + 16) = 3;
          v44 = *(_QWORD *)(*a2 + 8);
          v45 = (_QWORD *)(*a2 + 8);
          v46 = *(_QWORD *)*a2 + 48LL;
          if ( v46 == v44 )
          {
LABEL_60:
            boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            *(_QWORD *)(v48 + 8) = v47;
            *(_BYTE *)(v48 + 16) = 4;
            boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(a2);
          }
          else
          {
            while ( !*(_QWORD *)(v44 + 8) )
            {
              v44 += 16;
              *v45 = v44;
              if ( v44 == v46 )
                goto LABEL_60;
            }
          }
        }
        else
        {
          while ( !*(_QWORD *)(v18 + 8) )
          {
            v18 += 16;
            *v19 = v18;
            if ( v18 == v20 )
              goto LABEL_59;
          }
        }
      }
      else
      {
        while ( !*(_QWORD *)(v15 + 8) )
        {
          v15 += 16;
          *(_QWORD *)(v13 + 8) = v15;
          if ( v15 == v14 + 16 )
            goto LABEL_18;
        }
      }
      break;
    case 2LL:
      v25 = *a2;
      v26 = *(_QWORD *)*a2;
      *(_QWORD *)(v25 + 8) += 16LL;
      v27 = *(_QWORD *)(v25 + 8);
      if ( v26 + 32 == v27 )
      {
LABEL_34:
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_QWORD *)(v29 + 8) = v28;
        *(_BYTE *)(v29 + 16) = 3;
        v30 = *(_QWORD *)(*a2 + 8);
        v31 = (_QWORD *)(*a2 + 8);
        v32 = *(_QWORD *)*a2 + 48LL;
        if ( v32 == v30 )
        {
LABEL_50:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v36 + 16) = 4;
          v37 = *a2;
          *(_QWORD *)(v36 + 8) = v38;
          if ( *(_QWORD *)(*(_QWORD *)v37 + 56LL) == *(_QWORD *)(v37 + 8) )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
              boost::beast::http::chunk_crlf::begin();
            boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            *(_BYTE *)(v37 + 16) = 5;
            v39 = *a2;
            *(_QWORD *)(v37 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
            v40 = *(void **)(v39 + 8);
            for ( j = v39 + 8; ; *(_QWORD *)j = v40 )
            {
              if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
                boost::beast::http::chunk_crlf::begin();
              if ( v40 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                goto LABEL_32;
              if ( *(_QWORD *)(*(_QWORD *)j + 8LL) )
                break;
              v40 = (void *)(*(_QWORD *)j + 16LL);
            }
          }
        }
        else
        {
          while ( !*(_QWORD *)(v30 + 8) )
          {
            v30 += 16;
            *v31 = v30;
            if ( v30 == v32 )
              goto LABEL_50;
          }
        }
      }
      else
      {
        while ( !*(_QWORD *)(v27 + 8) )
        {
          v27 += 16;
          *(_QWORD *)(v25 + 8) = v27;
          if ( v27 == v26 + 32 )
            goto LABEL_34;
        }
      }
      break;
    case 3LL:
      v4 = *a2;
      v5 = *(_QWORD *)*a2;
      *(_QWORD *)(v4 + 8) += 16LL;
      v6 = *(_QWORD *)(v4 + 8);
      if ( v6 == v5 + 48 )
      {
LABEL_5:
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v7 + 16) = 4;
        v8 = *a2;
        *(_QWORD *)(v7 + 8) = v9;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 56LL) == *(_QWORD *)(v8 + 8) )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v8 + 16) = 5;
          v10 = *a2;
          *(_QWORD *)(v8 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
          v11 = *(void **)(v10 + 8);
          for ( k = v10 + 8; ; *(_QWORD *)k = v11 )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
              boost::beast::http::chunk_crlf::begin();
            if ( v11 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              goto LABEL_32;
            if ( *(_QWORD *)(*(_QWORD *)k + 8LL) )
              break;
            v11 = (void *)(*(_QWORD *)k + 16LL);
          }
        }
      }
      else
      {
        while ( !*(_QWORD *)(v6 + 8) )
        {
          v6 += 16;
          *(_QWORD *)(v4 + 8) = v6;
          if ( v6 == v5 + 48 )
            goto LABEL_5;
        }
      }
      break;
    case 4LL:
      v3 = *a2;
      *(_QWORD *)(v3 + 8) = **(_QWORD **)(*a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v3 + 56LL) == *(_QWORD *)(v3 + 8) )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v3 + 16) = 5;
        v33 = *a2;
        *(_QWORD *)(v3 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
        v34 = *(void **)(v33 + 8);
        for ( m = v33 + 8; ; *(_QWORD *)m = v34 )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          if ( v34 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            break;
          if ( *(_QWORD *)(*(_QWORD *)m + 8LL) )
            return;
          v34 = (void *)(*(_QWORD *)m + 16LL);
        }
LABEL_32:
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v24 + 8) = 0;
        *(_BYTE *)(v24 + 16) = 6;
      }
      break;
  }
}

