__int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume(
        __guard *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __guard *v4; // r14
  unsigned __int64 v5; // r12
  __guard *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  void *k; // rbp
  __guard v11; // rcx
  __guard v12; // rax
  __guard v13; // rcx
  __guard *v14; // rcx
  __guard v15; // rax
  void *j; // rbp
  __guard v17; // rax
  void *i; // rbp
  __guard *v19; // [rsp+0h] [rbp-60h]
  __guard *v20; // [rsp+8h] [rbp-58h]
  unsigned __int64 v21; // [rsp+20h] [rbp-40h]

  v3 = (__int64)a1;
  v4 = a1;
  v5 = a2;
  v21 = __readfsqword(0x28u);
  v20 = a1;
  v19 = a1 + 6;
  if ( !a2 )
    return v21 - __readfsqword(0x28u);
  v6 = (__guard *)a1[5];
  v7 = *((unsigned __int8 *)a1 + 56);
  if ( v6 == a1 )
    goto LABEL_19;
  while ( 2 )
  {
    switch ( v7 )
    {
      case 0LL:
      case 4LL:
        v8 = v5 + v4[8];
        goto LABEL_5;
      case 1LL:
        v13 = v4[8];
        a1 = *(__guard **)(*v19 + 8);
        v8 = v13 + v5;
        if ( v5 < (unsigned __int64)a1 - v13 )
          goto LABEL_5;
        v4[8] = 0;
        v14 = v6 + 2;
        *v19 += 16LL;
        v5 = v8 - (_QWORD)a1;
        v15 = *v19;
        if ( (__guard *)*v19 == v6 + 2 )
          goto LABEL_43;
        do
        {
          if ( *(_QWORD *)(v15 + 8) )
            goto LABEL_17;
          v15 += 16LL;
          *v19 = v15;
        }
        while ( (__guard *)v15 != v14 );
LABEL_43:
        v4[6] = (__guard)v14;
        v3 = (__int64)(v6 + 4);
        *((_BYTE *)v4 + 56) = 2;
        v17 = *v19;
        if ( v6 + 4 != (__guard *)*v19 )
        {
          while ( !*(_QWORD *)(v17 + 8) )
          {
            v17 += 16LL;
            *v19 = v17;
            if ( v3 == v17 )
              goto LABEL_48;
          }
          goto LABEL_17;
        }
LABEL_48:
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        if ( *((_BYTE *)v4 + 56) <= 4u )
        {
          *((_BYTE *)v4 + 56) = 3;
          v4[6] = (__guard)&boost::beast::http::chunk_crlf::begin(void)const::cb;
          for ( i = (void *)*v19; ; *v19 = (__guard)i )
          {
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            {
              a1 = &`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
              if ( __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
              {
                a1 = &`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
                unk_448FA8 = 2;
                boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
                __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
              }
            }
            if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              break;
            if ( *(_QWORD *)(*v19 + 8) )
              goto LABEL_17;
            i = (void *)(*v19 + 16);
          }
LABEL_15:
          if ( *((_BYTE *)v4 + 56) <= 4u )
          {
            *((_BYTE *)v4 + 48) = 0;
            *((_BYTE *)v4 + 56) = 4;
LABEL_17:
            if ( !v5 )
              return v21 - __readfsqword(0x28u);
            v3 = (__int64)v20;
            v6 = (__guard *)v4[5];
            v7 = *((unsigned __int8 *)v4 + 56);
            if ( v6 == v20 )
            {
LABEL_19:
              v3 = 4;
              if ( (_BYTE)v7 == 4 )
                return v21 - __readfsqword(0x28u);
            }
            continue;
          }
        }
        return boost::beast::http::basic_parser<true>::parse_chunk_header(a1, v6, a3, v3);
      case 2LL:
        v11 = v4[8];
        a1 = *(__guard **)(*v19 + 8);
        v8 = v11 + v5;
        if ( v5 < (unsigned __int64)a1 - v11 )
          goto LABEL_5;
        v4[8] = 0;
        v3 = (__int64)(v6 + 4);
        *v19 += 16LL;
        v5 = v8 - (_QWORD)a1;
        v12 = *v19;
        if ( (__guard *)*v19 == v6 + 4 )
          goto LABEL_33;
        do
        {
          if ( *(_QWORD *)(v12 + 8) )
            goto LABEL_17;
          v12 += 16LL;
          *v19 = v12;
        }
        while ( v12 != v3 );
LABEL_33:
        if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          boost::beast::http::chunk_crlf::begin();
        if ( *((_BYTE *)v4 + 56) > 4u )
          return boost::beast::http::basic_parser<true>::parse_chunk_header(a1, v6, a3, v3);
        *((_BYTE *)v4 + 56) = 3;
        v4[6] = (__guard)&boost::beast::http::chunk_crlf::begin(void)const::cb;
        for ( j = (void *)*v19; ; *v19 = (__guard)j )
        {
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
          {
            a1 = &`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
            if ( __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
            {
              a1 = &`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
              unk_448FA8 = 2;
              boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
              __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
            }
          }
          if ( j == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            break;
          if ( *(_QWORD *)(*v19 + 8) )
            goto LABEL_17;
          j = (void *)(*v19 + 16);
        }
        goto LABEL_15;
      case 3LL:
        v3 = v4[8];
        v6 = *(__guard **)(*v19 + 8);
        v8 = v3 + v5;
        a1 = (__guard *)((char *)v6 - v3);
        if ( v5 >= (unsigned __int64)v6 - v3 )
        {
          v4[8] = 0;
          *v19 += 16LL;
          v5 = v8 - (_QWORD)v6;
          for ( k = (void *)*v19; ; *v19 = (__guard)k )
          {
            if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
              || (a1 = &`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb,
                  !__cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb)) )
            {
              if ( k == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                goto LABEL_15;
            }
            else
            {
              a1 = &`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
              unk_448FA8 = 2;
              boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
              __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
              if ( k == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                goto LABEL_15;
            }
            if ( *(_QWORD *)(*v19 + 8) )
              goto LABEL_17;
            k = (void *)(*v19 + 16);
          }
        }
LABEL_5:
        v4[8] = v8;
        return v21 - __readfsqword(0x28u);
      default:
        return boost::beast::http::basic_parser<true>::parse_chunk_header(a1, v6, a3, v3);
    }
  }
}

