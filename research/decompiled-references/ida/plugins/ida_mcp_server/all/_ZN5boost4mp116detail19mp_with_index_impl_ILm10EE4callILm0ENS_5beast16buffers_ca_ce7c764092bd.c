void __fastcall boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD **v6; // rax
  __int64 *v7; // rsi
  void *v8; // rcx
  __int64 i; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD **v14; // r8
  __int64 v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rsi
  void *v19; // rcx
  __int64 n; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  void *v23; // rcx
  __int64 ii; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 kk; // rdx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  _QWORD *v47; // rcx
  __int64 v48; // rsi
  __int64 k; // rdx
  int v50; // eax
  __int64 v51; // rcx
  _QWORD *v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rsi
  void *v60; // rcx
  __int64 j; // rax
  __int64 v62; // r8
  __int64 v63; // rsi
  void *v64; // rcx
  __int64 jj; // rax
  __int64 v66; // rax
  _QWORD *v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 *v75; // rsi
  __int64 m; // rax
  __int64 v77; // rax
  _QWORD *v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // [rsp+8h] [rbp-30h]
  __int64 v83; // [rsp+8h] [rbp-30h]
  __int64 v84; // [rsp+8h] [rbp-30h]
  __int64 v85; // [rsp+8h] [rbp-30h]
  __int64 v86; // [rsp+10h] [rbp-28h]
  __int64 v87; // [rsp+10h] [rbp-28h]
  __int64 v88; // [rsp+10h] [rbp-28h]
  __int64 v89; // [rsp+10h] [rbp-28h]
  void *v90; // [rsp+18h] [rbp-20h]
  void *v91; // [rsp+18h] [rbp-20h]
  void *v92; // [rsp+18h] [rbp-20h]
  _QWORD *v93; // [rsp+18h] [rbp-20h]
  _QWORD *v94; // [rsp+18h] [rbp-20h]
  void *v95; // [rsp+18h] [rbp-20h]
  void *v96; // [rsp+18h] [rbp-20h]
  __int64 v97; // [rsp+18h] [rbp-20h]

  switch ( a1 )
  {
    case 0LL:
    case 8LL:
      v6 = (_QWORD **)*a2;
      v6[1] += 2;
      v7 = (__int64 *)(v6 + 1);
      v8 = &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb;
      for ( i = (__int64)v6[1]; ; *v7 = i )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        {
          v90 = v8;
          v86 = i;
          boost::beast::http::chunk_crlf::begin();
          v8 = v90;
          i = v86;
        }
        if ( (void *)i == v8 )
          goto LABEL_42;
        if ( *(_QWORD *)(*v7 + 8) )
          break;
        i = *v7 + 16;
      }
      break;
    case 1LL:
      v10 = *a2;
      v11 = *(_QWORD **)*a2;
      *(_QWORD *)(v10 + 8) += 16LL;
      v12 = *(_QWORD *)(v10 + 8);
      v13 = *v11 + 16LL;
      if ( v13 == v12 )
      {
LABEL_52:
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v34 + 16) = 2;
        *(_QWORD *)(v34 + 8) = v35;
        v36 = *(_QWORD *)(*a2 + 8);
        v37 = (_QWORD *)(*a2 + 8);
        v38 = *(_QWORD *)*a2 + 32LL;
        if ( v38 == v36 )
        {
LABEL_78:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v58 + 16) = 3;
          v59 = *a2 + 8;
          *(_QWORD *)(v58 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
          v60 = &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb;
          for ( j = *(_QWORD *)v59; ; *(_QWORD *)v59 = j )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            {
              v95 = v60;
              v84 = j;
              boost::beast::http::chunk_crlf::begin();
              v60 = v95;
              j = v84;
            }
            if ( (void *)j == v60 )
              goto LABEL_62;
            if ( *(_QWORD *)(*(_QWORD *)v59 + 8LL) )
              break;
            j = *(_QWORD *)v59 + 16LL;
          }
        }
        else
        {
          while ( !*(_QWORD *)(v36 + 8) )
          {
            v36 += 16;
            *v37 = v36;
            if ( v36 == v38 )
              goto LABEL_78;
          }
        }
      }
      else
      {
        while ( !*(_QWORD *)(v12 + 8) )
        {
          v12 += 16;
          *(_QWORD *)(v10 + 8) = v12;
          if ( v12 == v13 )
            goto LABEL_52;
        }
      }
      break;
    case 2LL:
      v14 = (_QWORD **)*a2;
      v15 = *(_QWORD *)*a2;
      v14[1] += 2;
      v16 = v14[1];
      if ( (_QWORD *)(v15 + 32) == v16 )
      {
LABEL_63:
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v46 + 16) = 3;
        v47 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
        v48 = *a2 + 8;
        *(_QWORD *)(v46 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
        for ( k = *(_QWORD *)v48; ; *(_QWORD *)v48 = k )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          {
            v94 = v47;
            v83 = k;
            v50 = __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
            k = v83;
            v47 = v94;
            if ( v50 )
            {
              *v94 = "\r\n";
              v94[1] = 2;
              __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
              k = v83;
              v47 = v94;
            }
          }
          if ( (_QWORD *)k == v47 + 2 )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v48 + 8LL) )
            return;
          k = *(_QWORD *)v48 + 16LL;
        }
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v66 + 16) = 4;
        v67 = (_QWORD *)*a2;
        *(_QWORD *)(v66 + 8) = v68;
        v69 = v67[1];
        v70 = *v67 + 56LL;
        if ( v70 == v69 )
        {
LABEL_100:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v71 + 16) = 5;
          v72 = (_QWORD *)*a2;
          *(_QWORD *)(v71 + 8) = v73;
          v74 = v73 + 16;
          v75 = v72 + 1;
          for ( m = v72[1]; ; *v75 = m )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            {
              v97 = v74;
              v85 = m;
              boost::beast::http::chunk_crlf::begin();
              v74 = v97;
              m = v85;
            }
            if ( m == v74 )
              break;
            if ( *(_QWORD *)(*v75 + 8) )
              return;
            m = *v75 + 16;
          }
          boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v77 + 16) = 6;
          v78 = (_QWORD *)*a2;
          *(_QWORD *)(v77 + 8) = v79;
          v80 = v78[1];
          v81 = *v78 + 80LL;
          if ( v81 == v80 )
            goto LABEL_77;
          while ( !*(_QWORD *)(v80 + 8) )
          {
            v80 += 16;
            v78[1] = v80;
            if ( v80 == v81 )
              goto LABEL_77;
          }
        }
        else
        {
          while ( !*(_QWORD *)(v69 + 8) )
          {
            v69 += 16;
            v67[1] = v69;
            if ( v69 == v70 )
              goto LABEL_100;
          }
        }
      }
      else
      {
        while ( !v16[1] )
        {
          v16 += 2;
          v14[1] = v16;
          if ( v16 == (_QWORD *)(v15 + 32) )
            goto LABEL_63;
        }
      }
      break;
    case 3LL:
      v17 = (_QWORD *)*a2;
      v17[1] += 16LL;
      v18 = v17 + 1;
      v19 = &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb;
      for ( n = v17[1]; ; *v18 = n )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        {
          v91 = v19;
          v87 = n;
          boost::beast::http::chunk_crlf::begin();
          v19 = v91;
          n = v87;
        }
        if ( (void *)n == v19 )
        {
LABEL_62:
          boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_QWORD *)(v44 + 8) = v45;
          *(_BYTE *)(v44 + 16) = 4;
          goto LABEL_41;
        }
        if ( *(_QWORD *)(*v18 + 8) )
          break;
        n = *v18 + 16;
      }
      break;
    case 4LL:
      *(_QWORD *)(*a2 + 8) += 16LL;
LABEL_41:
      boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(a2);
      break;
    case 5LL:
      v21 = *a2;
      *(_QWORD *)(v21 + 8) += 16LL;
      v22 = v21 + 8;
      v23 = &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb;
      for ( ii = *(_QWORD *)(v21 + 8); ; *(_QWORD *)v22 = ii )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        {
          v92 = v23;
          v88 = ii;
          boost::beast::http::chunk_crlf::begin();
          v23 = v92;
          ii = v88;
        }
        if ( (void *)ii == v23 )
          break;
        if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) )
          return;
        ii = *(_QWORD *)v22 + 16LL;
      }
      v39 = *(_QWORD *)*a2;
      boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      *(_BYTE *)(v40 + 16) = 6;
      v41 = (_QWORD *)*a2;
      *(_QWORD *)(v40 + 8) = v39 + 64;
      v42 = v41[1];
      v43 = *v41 + 80LL;
      if ( v43 == v42 )
      {
LABEL_77:
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_QWORD *)(v57 + 8) = v56;
        *(_BYTE *)(v57 + 16) = 7;
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<7ul>(a2);
      }
      else
      {
        while ( !*(_QWORD *)(v42 + 8) )
        {
          v42 += 16;
          v41[1] = v42;
          if ( v42 == v43 )
            goto LABEL_77;
        }
      }
      break;
    case 6LL:
      v25 = *a2;
      v26 = *(_QWORD *)*a2;
      *(_QWORD *)(v25 + 8) += 16LL;
      v27 = *(_QWORD *)(v25 + 8);
      if ( v26 + 80 == v27 )
      {
LABEL_72:
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v51 + 16) = 7;
        v52 = (_QWORD *)*a2;
        *(_QWORD *)(v51 + 8) = v53;
        v54 = v52[1];
        v55 = *v52 + 96LL;
        if ( v54 == v55 )
        {
LABEL_86:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_BYTE *)(v62 + 16) = 8;
          v63 = *a2 + 8;
          *(_QWORD *)(v62 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
          v64 = &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb;
          for ( jj = *(_QWORD *)v63; ; *(_QWORD *)v63 = jj )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            {
              v96 = v64;
              v89 = jj;
              boost::beast::http::chunk_crlf::begin();
              v64 = v96;
              jj = v89;
            }
            if ( (void *)jj == v64 )
              goto LABEL_42;
            if ( *(_QWORD *)(*(_QWORD *)v63 + 8LL) )
              break;
            jj = *(_QWORD *)v63 + 16LL;
          }
        }
        else
        {
          while ( !*(_QWORD *)(v54 + 8) )
          {
            v54 += 16;
            v52[1] = v54;
            if ( v54 == v55 )
              goto LABEL_86;
          }
        }
      }
      else
      {
        while ( !*(_QWORD *)(v27 + 8) )
        {
          v27 += 16;
          *(_QWORD *)(v25 + 8) = v27;
          if ( v27 == v26 + 80 )
            goto LABEL_72;
        }
      }
      break;
    case 7LL:
      v3 = *a2;
      v4 = *(_QWORD *)*a2;
      *(_QWORD *)(v3 + 8) += 16LL;
      v5 = *(_QWORD *)(v3 + 8);
      if ( v4 + 96 == v5 )
      {
LABEL_43:
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v29 + 16) = 8;
        v30 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
        v31 = *a2 + 8;
        *(_QWORD *)(v29 + 8) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
        for ( kk = *(_QWORD *)v31; ; *(_QWORD *)v31 = kk )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          {
            v93 = v30;
            v82 = kk;
            v33 = __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
            kk = v82;
            v30 = v93;
            if ( v33 )
            {
              *v93 = "\r\n";
              v93[1] = 2;
              __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
              kk = v82;
              v30 = v93;
            }
          }
          if ( (_QWORD *)kk == v30 + 2 )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) )
            return;
          kk = *(_QWORD *)v31 + 16LL;
        }
LABEL_42:
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_BYTE *)(v28 + 8) = 0;
        *(_BYTE *)(v28 + 16) = 9;
      }
      else
      {
        while ( !*(_QWORD *)(v5 + 8) )
        {
          v5 += 16;
          *(_QWORD *)(v3 + 8) = v5;
          if ( v5 == v4 + 96 )
            goto LABEL_43;
        }
      }
      break;
  }
}

