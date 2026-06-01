__int64 __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  void *v11; // rax
  void *v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  void *j; // rbp
  __int64 v27; // rax
  void *i; // rbp
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v35[16]; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+18h] [rbp-90h]
  __int64 v37; // [rsp+20h] [rbp-88h]
  __int64 v38; // [rsp+28h] [rbp-80h]
  char v39; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+40h] [rbp-68h]
  __int128 v42; // [rsp+48h] [rbp-60h]
  __int64 v43; // [rsp+58h] [rbp-50h]
  unsigned __int64 v44; // [rsp+68h] [rbp-40h]
  __int64 v45; // [rsp+80h] [rbp-28h]

  v45 = v2;
  v4 = (__int64)(a1 + 4);
  v5 = *a1;
  v44 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 1) = 0;
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
  *((_BYTE *)a1 + 40) = 0;
  v7 = v35[8];
  a1[3] = v34;
  boost::mp11::detail::mp_with_index_impl_<5ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v7,
    v4,
    v35);
  v9 = v36;
  a1[6] = v36;
  if ( (unsigned __int8)v7 > 4u )
    return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>();
  v37 = v5;
  v10 = *((_BYTE *)a1 + 40);
  v42 = 0;
  LOBYTE(v38) = 0;
  BYTE8(v42) = 4;
  v39 = 4;
  v40 = v5;
  if ( v5 == v9 )
    goto LABEL_19;
  while ( 1 )
  {
    v41 = v8;
    if ( v10 == 2 )
      break;
    if ( v10 > 2u )
    {
LABEL_5:
      v11 = *(void **)v4;
      BYTE8(v42) = 3;
      *(_QWORD *)v4 += 16LL;
      v12 = *(void **)v4;
      *(_QWORD *)&v42 = v11;
      v43 = v9;
      while ( 1 )
      {
        if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
          || !__cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
        {
          if ( v12 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_12;
        }
        else
        {
          unk_448FA8 = 2;
          boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
          __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
          if ( v12 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_12;
        }
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) )
          goto LABEL_14;
        v12 = (void *)(*(_QWORD *)v4 + 16LL);
        *(_QWORD *)v4 = v12;
      }
    }
    while ( 2 )
    {
      v18 = *(_QWORD *)v4;
      *(_QWORD *)v4 += 16LL;
      v19 = v8 + 16;
      BYTE8(v42) = 1;
      *(_QWORD *)&v42 = v18;
      v20 = *(_QWORD *)v4;
      v43 = v9;
      if ( v8 + 16 == v20 )
      {
LABEL_53:
        if ( *((_BYTE *)a1 + 40) > 4u )
          return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>();
        a1[4] = v19;
        *((_BYTE *)a1 + 40) = 2;
        v27 = *(_QWORD *)v4;
        if ( v8 + 32 == *(_QWORD *)v4 )
        {
LABEL_59:
          if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            boost::beast::http::chunk_crlf::begin();
          if ( *((_BYTE *)a1 + 40) > 4u )
            return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>();
          *((_BYTE *)a1 + 40) = 3;
          a1[4] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
          for ( i = *(void **)v4; ; *(_QWORD *)v4 = i )
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
            if ( i == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              break;
            if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) )
              goto LABEL_14;
            i = (void *)(*(_QWORD *)v4 + 16LL);
          }
          goto LABEL_12;
        }
        while ( !*(_QWORD *)(v27 + 8) )
        {
          v27 += 16;
          *(_QWORD *)v4 = v27;
          if ( v27 == v8 + 32 )
            goto LABEL_59;
        }
      }
      else
      {
        while ( !*(_QWORD *)(v20 + 8) )
        {
          v20 += 16;
          *(_QWORD *)v4 = v20;
          if ( v20 == v19 )
            goto LABEL_53;
        }
      }
      if ( *(_QWORD *)(v9 + 40) == v8 )
      {
        v21 = (_QWORD *)(v9 + 48);
        if ( *(_BYTE *)(v9 + 56) == 1 )
        {
LABEL_77:
          v25 = v42;
          if ( *v21 == (_QWORD)v42 )
          {
            v32 = *(_QWORD *)(v42 + 8);
            v33 = *(_QWORD *)(v9 + 64);
            if ( v33 > v32 )
              v33 = *(_QWORD *)(v42 + 8);
            v13 = v32 - v33;
            goto LABEL_17;
          }
          goto LABEL_42;
        }
      }
LABEL_30:
      v14 = a1[1];
      v13 = *(_QWORD *)(v42 + 8);
      v15 = a2 - v13;
      if ( v13 >= a2 )
      {
LABEL_31:
        a1[2] = v15;
        a1[1] = v14 + a2;
        return v44 - __readfsqword(0x28u);
      }
LABEL_18:
      v16 = v14 + v13;
      v17 = v40;
      v9 = a1[6];
      a2 = v15;
      a1[1] = v16;
      v8 = a1[3];
      v10 = *((_BYTE *)a1 + 40);
      if ( v17 == v9 )
      {
LABEL_19:
        if ( v37 == v8 && v39 == v10 )
        {
          switch ( v39 )
          {
            case 0:
            case 4:
              return v44 - __readfsqword(0x28u);
            case 1:
              if ( *(_QWORD *)v4 == v38 )
                return v44 - __readfsqword(0x28u);
              v41 = v8;
              continue;
            case 2:
              if ( v38 == *(_QWORD *)v4 )
                return v44 - __readfsqword(0x28u);
              v41 = v8;
              goto LABEL_35;
            case 3:
              if ( v38 == *(_QWORD *)v4 )
                return v44 - __readfsqword(0x28u);
              v41 = v8;
              goto LABEL_5;
            default:
              return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>();
          }
        }
      }
      break;
    }
  }
LABEL_35:
  v23 = *(_QWORD *)v4;
  *(_QWORD *)v4 += 16LL;
  BYTE8(v42) = 2;
  *(_QWORD *)&v42 = v23;
  v24 = *(_QWORD *)v4;
  v43 = v9;
  if ( v24 != v8 + 32 )
  {
    while ( !*(_QWORD *)(v24 + 8) )
    {
      v24 += 16;
      *(_QWORD *)v4 = v24;
      if ( v8 + 32 == v24 )
        goto LABEL_43;
    }
    if ( *(_QWORD *)(v9 + 40) == v8 )
    {
      v21 = (_QWORD *)(v9 + 48);
      if ( *(_BYTE *)(v9 + 56) == 2 )
      {
LABEL_71:
        v29 = v42;
        if ( *v21 == (_QWORD)v42 )
        {
LABEL_74:
          v30 = *(_QWORD *)(v29 + 8);
          v31 = *(_QWORD *)(v9 + 64);
          if ( v30 <= v31 )
            v31 = *(_QWORD *)(v29 + 8);
          v13 = v30 - v31;
LABEL_17:
          v14 = a1[1];
          v15 = a2 - v13;
          if ( v13 >= a2 )
            goto LABEL_31;
          goto LABEL_18;
        }
      }
    }
LABEL_41:
    v25 = v42;
LABEL_42:
    v13 = *(_QWORD *)(v25 + 8);
    goto LABEL_17;
  }
LABEL_43:
  if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
    boost::beast::http::chunk_crlf::begin();
  if ( *((_BYTE *)a1 + 40) > 4u )
    return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>();
  *((_BYTE *)a1 + 40) = 3;
  a1[4] = (__int64)&boost::beast::http::chunk_crlf::begin(void)const::cb;
  for ( j = *(void **)v4; ; *(_QWORD *)v4 = j )
  {
    if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
      && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
    {
      unk_448FA8 = 2;
      boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
      __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
    }
    if ( j == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
      break;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) )
      goto LABEL_14;
    j = (void *)(*(_QWORD *)v4 + 16LL);
  }
LABEL_12:
  if ( *((_BYTE *)a1 + 40) <= 4u )
  {
    *((_BYTE *)a1 + 32) = 0;
    *((_BYTE *)a1 + 40) = 4;
LABEL_14:
    v9 = v43;
    if ( v41 == *(_QWORD *)(v43 + 40) && BYTE8(v42) == *(_BYTE *)(v43 + 56) )
    {
      v21 = (_QWORD *)(v43 + 48);
      switch ( BYTE8(v42) )
      {
        case 0:
        case 4:
          goto LABEL_16;
        case 1:
          goto LABEL_77;
        case 2:
          goto LABEL_71;
        case 3:
          v29 = v42;
          if ( (_QWORD)v42 == *v21 )
            goto LABEL_74;
          goto LABEL_41;
        default:
          return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>();
      }
    }
    switch ( BYTE8(v42) )
    {
      case 0:
      case 4:
LABEL_16:
        v13 = 0;
        goto LABEL_17;
      case 1:
        goto LABEL_30;
      case 2:
      case 3:
        goto LABEL_41;
      default:
        return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>();
    }
  }
  return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>();
}

