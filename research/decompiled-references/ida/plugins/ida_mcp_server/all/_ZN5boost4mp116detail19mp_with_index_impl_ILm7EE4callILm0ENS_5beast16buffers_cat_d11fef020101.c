void __fastcall boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // r14
  __int64 v3; // rcx
  __int64 ii; // rax
  __int64 *v5; // rax
  _QWORD *v6; // r14
  void *jj; // rbx
  __int64 *v8; // rax
  _QWORD *v9; // r14
  void *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // r14
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rax
  _QWORD **v26; // r14
  _QWORD *i; // rbx
  __int64 v28; // rax
  __int64 *v29; // r14
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 *v32; // rax
  _QWORD *v33; // r14
  void *m; // rbx
  __int64 v35; // rax
  __int64 *v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 *v40; // rax
  void *v41; // rbx
  _QWORD *n; // r14
  __int64 *v43; // rax
  _QWORD **v44; // r14
  _QWORD *j; // rbx
  __int64 *v46; // rax
  _QWORD *v47; // r14
  void *kk; // rbx
  __int64 v49; // rax
  __int64 *v50; // r14
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 *v54; // rax
  _QWORD *v55; // rbx
  _QWORD **k; // r14

  switch ( a1 )
  {
    case 0LL:
    case 5LL:
      v25 = *a2;
      v25[1] += 16;
      v26 = (_QWORD **)(v25 + 1);
      for ( i = (_QWORD *)v25[1]; ; *v26 = i )
      {
        if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        {
          if ( i == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_41;
        }
        else
        {
          boost::beast::http::chunk_crlf::begin();
          if ( i == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_41;
        }
        if ( (*v26)[1] )
          break;
        i = *v26 + 2;
      }
      return;
    case 1LL:
      v16 = *a2;
      v17 = (_QWORD *)**a2;
      v16[1] += 16;
      v18 = (_QWORD *)v16[1];
      v19 = *v17 + 16LL;
      if ( (_QWORD *)v19 == v18 )
      {
LABEL_27:
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v20 + 16) = 2;
        v21 = *a2;
        *(_QWORD *)(v20 + 8) = v22;
        v23 = v21[1];
        v24 = *v21 + 32;
        if ( v24 == v23 )
        {
LABEL_67:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *((_BYTE *)v21 + 16) = 3;
          v43 = *a2;
          v21[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
          v44 = (_QWORD **)(v43 + 1);
          for ( j = (_QWORD *)v43[1]; ; *v44 = j )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
              && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
            {
              unk_448FA8 = 2;
              boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
              __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
            }
            if ( j == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              break;
            if ( (*v44)[1] )
              return;
            j = *v44 + 2;
          }
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v49 + 16) = 4;
          v50 = *a2;
          *(_QWORD *)(v49 + 8) = v51 + 40;
          v52 = v50[1];
          v53 = *v50 + 56;
          if ( v53 == v52 )
          {
LABEL_90:
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
              boost::beast::http::chunk_crlf::begin();
            boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            *((_BYTE *)v50 + 16) = 5;
            v54 = *a2;
            v50[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
            v55 = (_QWORD *)v54[1];
            for ( k = (_QWORD **)(v54 + 1); ; *k = v55 )
            {
              if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
                boost::beast::http::chunk_crlf::begin();
              if ( v55 == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                goto LABEL_41;
              if ( (*k)[1] )
                break;
              v55 = *k + 2;
            }
          }
          else
          {
            while ( !*(_QWORD *)(v52 + 8) )
            {
              v52 += 16;
              v50[1] = v52;
              if ( v52 == v53 )
                goto LABEL_90;
            }
          }
        }
        else
        {
          while ( !*(_QWORD *)(v23 + 8) )
          {
            v23 += 16;
            v21[1] = v23;
            if ( v23 == v24 )
              goto LABEL_67;
          }
        }
      }
      else
      {
        while ( !v18[1] )
        {
          v18 += 2;
          v16[1] = (__int64)v18;
          if ( v18 == (_QWORD *)v19 )
            goto LABEL_27;
        }
      }
      return;
    case 2LL:
      v29 = *a2;
      v30 = **a2;
      v29[1] += 16;
      v31 = (_QWORD *)v29[1];
      if ( v31 == (_QWORD *)(v30 + 32) )
      {
LABEL_43:
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *((_BYTE *)v29 + 16) = 3;
        v32 = *a2;
        v29[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
        v33 = v32 + 1;
        for ( m = (void *)v32[1]; ; *v33 = m )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
            && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
          {
            unk_448FA8 = 2;
            boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
            __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
          }
          if ( m == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            break;
          if ( *(_QWORD *)(*v33 + 8LL) )
            return;
          m = (void *)(*v33 + 16LL);
        }
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v35 + 16) = 4;
        v36 = *a2;
        *(_QWORD *)(v35 + 8) = v37 + 40;
        v38 = v36[1];
        v39 = *v36 + 56;
        if ( v39 == v38 )
        {
LABEL_56:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *((_BYTE *)v36 + 16) = 5;
          v40 = *a2;
          v36[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
          v41 = (void *)v40[1];
          for ( n = v40 + 1; ; *n = v41 )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
              boost::beast::http::chunk_crlf::begin();
            if ( v41 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              goto LABEL_41;
            if ( *(_QWORD *)(*n + 8LL) )
              break;
            v41 = (void *)(*n + 16LL);
          }
        }
        else
        {
          while ( !*(_QWORD *)(v38 + 8) )
          {
            v38 += 16;
            v36[1] = v38;
            if ( v38 == v39 )
              goto LABEL_56;
          }
        }
      }
      else
      {
        while ( !v31[1] )
        {
          v31 += 2;
          v29[1] = (__int64)v31;
          if ( v31 == (_QWORD *)(v30 + 32) )
            goto LABEL_43;
        }
      }
      return;
    case 3LL:
      v8 = *a2;
      v8[1] += 16;
      v9 = v8 + 1;
      v10 = (void *)v8[1];
      break;
    case 4LL:
      v2 = *a2;
      v3 = **a2;
      v2[1] += 16;
      for ( ii = v2[1]; ii != v3 + 56; v2[1] = ii )
      {
        if ( *(_QWORD *)(ii + 8) )
          return;
        ii += 16;
      }
      if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        boost::beast::http::chunk_crlf::begin();
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      *((_BYTE *)v2 + 16) = 5;
      v5 = *a2;
      v2[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
      v6 = v5 + 1;
      for ( jj = (void *)v5[1]; ; *v6 = jj )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
          && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
        {
          unk_448FA8 = 2;
          boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
          __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
        }
        if ( jj == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
        {
LABEL_41:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v28 + 8) = 0;
          *(_BYTE *)(v28 + 16) = 6;
          return;
        }
        if ( *(_QWORD *)(*v6 + 8LL) )
          break;
        jj = (void *)(*v6 + 16LL);
      }
      return;
  }
  while ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
  {
    if ( v10 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
      goto LABEL_21;
LABEL_17:
    if ( *(_QWORD *)(*v9 + 8LL) )
      return;
    v10 = (void *)(*v9 + 16LL);
    *v9 = v10;
  }
  boost::beast::http::chunk_crlf::begin();
  if ( v10 != &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
    goto LABEL_17;
LABEL_21:
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  *(_BYTE *)(v11 + 16) = 4;
  v12 = *a2;
  *(_QWORD *)(v11 + 8) = v13 + 40;
  v14 = v12[1];
  v15 = *v12 + 56;
  if ( v15 == v14 )
  {
LABEL_76:
    if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
      boost::beast::http::chunk_crlf::begin();
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
    *((_BYTE *)v12 + 16) = 5;
    v46 = *a2;
    v12[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
    v47 = v46 + 1;
    for ( kk = (void *)v46[1]; ; *v47 = kk )
    {
      if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
        && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
      {
        unk_448FA8 = 2;
        boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
        __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
      }
      if ( kk == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
        goto LABEL_41;
      if ( *(_QWORD *)(*v47 + 8LL) )
        break;
      kk = (void *)(*v47 + 16LL);
    }
  }
  else
  {
    while ( !*(_QWORD *)(v14 + 8) )
    {
      v14 += 16;
      v12[1] = v14;
      if ( v14 == v15 )
        goto LABEL_76;
    }
  }
}

