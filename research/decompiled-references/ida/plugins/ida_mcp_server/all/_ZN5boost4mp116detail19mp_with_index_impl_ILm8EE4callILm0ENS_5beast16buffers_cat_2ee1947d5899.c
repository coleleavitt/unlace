unsigned __int64 __fastcall boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // r13
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v6; // rax
  _QWORD *v7; // r13
  void *v8; // r14
  __int64 v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rax
  _QWORD *v25; // r13
  void *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rax
  _QWORD *v35; // r13
  void *v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // r13
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // rax
  _QWORD *v44; // r13
  void *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v48; // r13
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 *v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r14
  void *k; // r13
  __int64 *v59; // rax
  _QWORD *v60; // r14
  void *ii; // r13
  __int64 *v62; // rax
  void *v63; // r13
  _QWORD *n; // r14
  __int64 v65; // rax
  __int64 *v66; // r14
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r14
  void *i; // r13
  __int64 v72; // rax
  __int64 *v73; // r14
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 *v77; // rax
  _QWORD *v78; // r14
  void *m; // r13
  __int64 *v80; // rax
  _QWORD *v81; // r14
  void *j; // r13
  unsigned __int64 v83; // [rsp+28h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  switch ( a1 )
  {
    case 0LL:
    case 6LL:
      v6 = *a2;
      v6[1] += 16;
      v7 = v6 + 1;
      v8 = (void *)v6[1];
      while ( 1 )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        if ( v8 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
          goto LABEL_38;
        v9 = *v7;
        if ( *(_QWORD *)(*v7 + 8LL) )
          break;
        v8 = (void *)(v9 + 16);
        *v7 = v9 + 16;
      }
      break;
    case 1LL:
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
      v10 = *a2;
      v11 = (__int64)(*a2 + 1);
      while ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
      {
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
          *(unsigned __int8 *)(v11 + 16),
          v11);
        if ( v12 )
          return v83 - __readfsqword(0x28u);
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        v10 = *a2;
      }
      boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v10 + 32));
      *((_BYTE *)v10 + 32) = 2;
      v13 = *a2;
      v10[1] = v14;
      v15 = v13[1];
      v16 = *(_QWORD *)(*v13 + 8) + 16LL;
      if ( v16 == v15 )
      {
LABEL_67:
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v13 + 32));
        *(_BYTE *)(v47 + 32) = 3;
        v48 = *a2;
        *(_QWORD *)(v47 + 8) = v49;
        v50 = v48[1];
        v51 = *v48 + 40;
        if ( v51 == v50 )
        {
LABEL_107:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v48 + 32));
          *((_BYTE *)v48 + 32) = 4;
          v70 = (__int64)(*a2 + 1);
          v48[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
          for ( i = *(void **)v70; ; *(_QWORD *)v70 = i )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
              && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
            {
              unk_448FA8 = 2;
              boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
              __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
            }
            if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              break;
            if ( *(_QWORD *)(*(_QWORD *)v70 + 8LL) )
              return v83 - __readfsqword(0x28u);
            i = (void *)(*(_QWORD *)v70 + 16LL);
          }
          boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)*a2 + 32));
          *(_BYTE *)(v72 + 32) = 5;
          v73 = *a2;
          *(_QWORD *)(v72 + 8) = v74 + 48;
          v75 = v73[1];
          v76 = *v73 + 64;
          if ( v76 == v75 )
          {
LABEL_130:
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
              boost::beast::http::chunk_crlf::begin();
            boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v73 + 32));
            *((_BYTE *)v73 + 32) = 6;
            v80 = *a2;
            v73[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
            v81 = v80 + 1;
            for ( j = (void *)v80[1]; ; *v81 = j )
            {
              if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
                && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
              {
                unk_448FA8 = 2;
                boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
                __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
              }
              if ( j == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                goto LABEL_38;
              if ( *(_QWORD *)(*v81 + 8LL) )
                break;
              j = (void *)(*v81 + 16LL);
            }
          }
          else
          {
            while ( !*(_QWORD *)(v75 + 8) )
            {
              v75 += 16;
              v73[1] = v75;
              if ( v75 == v76 )
                goto LABEL_130;
            }
          }
        }
        else
        {
          while ( !*(_QWORD *)(v50 + 8) )
          {
            v50 += 16;
            v48[1] = v50;
            if ( v50 == v51 )
              goto LABEL_107;
          }
        }
      }
      else
      {
        while ( !*(_QWORD *)(v15 + 8) )
        {
          v15 += 16;
          v13[1] = v15;
          if ( v15 == v16 )
            goto LABEL_67;
        }
      }
      break;
    case 2LL:
      v17 = *a2;
      v18 = **a2;
      v17[1] += 16;
      v19 = v17[1];
      v20 = *(_QWORD *)(v18 + 8) + 16LL;
      if ( v20 == v19 )
      {
LABEL_53:
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v17 + 32));
        *(_BYTE *)(v38 + 32) = 3;
        v39 = *a2;
        *(_QWORD *)(v38 + 8) = v40;
        v41 = v39[1];
        v42 = *v39 + 40;
        if ( v42 == v41 )
        {
LABEL_77:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v39 + 32));
          *((_BYTE *)v39 + 32) = 4;
          v57 = (__int64)(*a2 + 1);
          v39[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
          for ( k = *(void **)v57; ; *(_QWORD *)v57 = k )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
              boost::beast::http::chunk_crlf::begin();
            if ( k == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              break;
            if ( *(_QWORD *)(*(_QWORD *)v57 + 8LL) )
              return v83 - __readfsqword(0x28u);
            k = (void *)(*(_QWORD *)v57 + 16LL);
          }
          boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)*a2 + 32));
          *(_BYTE *)(v65 + 32) = 5;
          v66 = *a2;
          *(_QWORD *)(v65 + 8) = v67 + 48;
          v68 = v66[1];
          v69 = *v66 + 64;
          if ( v69 == v68 )
          {
LABEL_121:
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
              boost::beast::http::chunk_crlf::begin();
            boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v66 + 32));
            *((_BYTE *)v66 + 32) = 6;
            v77 = *a2;
            v66[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
            v78 = v77 + 1;
            for ( m = (void *)v77[1]; ; *v78 = m )
            {
              if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
                && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
              {
                unk_448FA8 = 2;
                boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
                __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
              }
              if ( m == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                goto LABEL_38;
              if ( *(_QWORD *)(*v78 + 8LL) )
                break;
              m = (void *)(*v78 + 16LL);
            }
          }
          else
          {
            while ( !*(_QWORD *)(v68 + 8) )
            {
              v68 += 16;
              v66[1] = v68;
              if ( v68 == v69 )
                goto LABEL_121;
            }
          }
        }
        else
        {
          while ( !*(_QWORD *)(v41 + 8) )
          {
            v41 += 16;
            v39[1] = v41;
            if ( v41 == v42 )
              goto LABEL_77;
          }
        }
      }
      else
      {
        while ( !*(_QWORD *)(v19 + 8) )
        {
          v19 += 16;
          v17[1] = v19;
          if ( v19 == v20 )
            goto LABEL_53;
        }
      }
      break;
    case 3LL:
      v21 = *a2;
      v22 = **a2;
      v21[1] += 16;
      v23 = v21[1];
      if ( v23 == v22 + 40 )
      {
LABEL_58:
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v21 + 32));
        *((_BYTE *)v21 + 32) = 4;
        v43 = *a2;
        v21[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
        v44 = v43 + 1;
        v45 = (void *)v43[1];
        while ( 1 )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
            && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
          {
            unk_448FA8 = 2;
            boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
            __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
          }
          if ( v45 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            break;
          v46 = *v44;
          if ( *(_QWORD *)(*v44 + 8LL) )
            return v83 - __readfsqword(0x28u);
          v45 = (void *)(v46 + 16);
          *v44 = v46 + 16;
        }
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)*a2 + 32));
        *(_BYTE *)(v52 + 32) = 5;
        v53 = *a2;
        *(_QWORD *)(v52 + 8) = v54 + 48;
        v55 = v53[1];
        v56 = *v53 + 64;
        if ( v56 == v55 )
        {
LABEL_94:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v53 + 32));
          *((_BYTE *)v53 + 32) = 6;
          v62 = *a2;
          v53[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
          v63 = (void *)v62[1];
          for ( n = v62 + 1; ; *n = v63 )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
              boost::beast::http::chunk_crlf::begin();
            if ( v63 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              goto LABEL_38;
            if ( *(_QWORD *)(*n + 8LL) )
              break;
            v63 = (void *)(*n + 16LL);
          }
        }
        else
        {
          while ( !*(_QWORD *)(v55 + 8) )
          {
            v55 += 16;
            v53[1] = v55;
            if ( v55 == v56 )
              goto LABEL_94;
          }
        }
      }
      else
      {
        while ( !*(_QWORD *)(v23 + 8) )
        {
          v23 += 16;
          v21[1] = v23;
          if ( v23 == v22 + 40 )
            goto LABEL_58;
        }
      }
      break;
    case 4LL:
      v24 = *a2;
      v24[1] += 16;
      v25 = v24 + 1;
      v26 = (void *)v24[1];
      while ( 1 )
      {
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        if ( v26 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
          break;
        v27 = *v25;
        if ( *(_QWORD *)(*v25 + 8LL) )
          return v83 - __readfsqword(0x28u);
        v26 = (void *)(v27 + 16);
        *v25 = v27 + 16;
      }
      boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)*a2 + 32));
      *(_BYTE *)(v29 + 32) = 5;
      v30 = *a2;
      *(_QWORD *)(v29 + 8) = v31 + 48;
      v32 = v30[1];
      v33 = *v30 + 64;
      if ( v32 == v33 )
      {
LABEL_85:
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v30 + 32));
        *((_BYTE *)v30 + 32) = 6;
        v59 = *a2;
        v30[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
        v60 = v59 + 1;
        for ( ii = (void *)v59[1]; ; *v60 = ii )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
            && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
          {
            unk_448FA8 = 2;
            boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
            __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
          }
          if ( ii == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_38;
          if ( *(_QWORD *)(*v60 + 8LL) )
            break;
          ii = (void *)(*v60 + 16LL);
        }
      }
      else
      {
        while ( !*(_QWORD *)(v32 + 8) )
        {
          v32 += 16;
          v30[1] = v32;
          if ( v32 == v33 )
            goto LABEL_85;
        }
      }
      break;
    case 5LL:
      v2 = *a2;
      v3 = **a2;
      v2[1] += 16;
      v4 = v2[1];
      if ( v4 == v3 + 64 )
      {
LABEL_44:
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)v2 + 32));
        *((_BYTE *)v2 + 32) = 6;
        v34 = *a2;
        v2[1] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
        v35 = v34 + 1;
        v36 = (void *)v34[1];
        while ( 1 )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
            && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
          {
            unk_448FA8 = 2;
            boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
            __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
          }
          if ( v36 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            break;
          v37 = *v35;
          if ( *(_QWORD *)(*v35 + 8LL) )
            return v83 - __readfsqword(0x28u);
          v36 = (void *)(v37 + 16);
          *v35 = v37 + 16;
        }
LABEL_38:
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*((unsigned __int8 *)*a2 + 32));
        *(_BYTE *)(v28 + 8) = 0;
        *(_BYTE *)(v28 + 32) = 7;
      }
      else
      {
        while ( !*(_QWORD *)(v4 + 8) )
        {
          v4 += 16;
          v2[1] = v4;
          if ( v4 == v3 + 64 )
            goto LABEL_44;
        }
      }
      break;
  }
  return v83 - __readfsqword(0x28u);
}

