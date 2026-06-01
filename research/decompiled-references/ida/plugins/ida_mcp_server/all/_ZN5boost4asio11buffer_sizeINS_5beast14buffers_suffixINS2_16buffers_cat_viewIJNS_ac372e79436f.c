__int64 __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>(
        __int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // rsi
  __int64 v7; // rax
  void *v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v22[16]; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+18h] [rbp-90h]
  __int64 v24; // [rsp+20h] [rbp-88h]
  __int64 v25; // [rsp+28h] [rbp-80h]
  char v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  __int128 v29; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v1 = a1;
  v24 = a1;
  v27 = a1;
  v29 = 0;
  LOBYTE(v25) = 0;
  v26 = 4;
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
  BYTE8(v29) = 0;
  v28 = v21;
  boost::mp11::detail::mp_with_index_impl_<5ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v22[8],
    (__int64)&v29,
    v22);
  v3 = v23;
  v4 = BYTE8(v29);
  v30 = v23;
  if ( a1 == v23 && v2 == a1 && BYTE8(v29) == 4 )
    return 0;
  v5 = 0;
LABEL_3:
  if ( v2 != *(_QWORD *)(v3 + 40) || *(_BYTE *)(v3 + 56) != (_BYTE)v4 )
    goto LABEL_4;
  v6 = (_QWORD *)(v3 + 48);
  switch ( v4 )
  {
    case 1LL:
LABEL_70:
      if ( *v6 == (_QWORD)v29 )
      {
        v13 = *(_QWORD *)(v29 + 8);
        v14 = *(_QWORD *)(v3 + 64);
        v15 = v13 + v5;
        if ( v14 > v13 )
          v14 = *(_QWORD *)(v29 + 8);
        v5 = v15 - v14;
      }
      else
      {
        v5 += *(_QWORD *)(v29 + 8);
      }
      goto LABEL_9;
    case 2LL:
LABEL_36:
      if ( (_QWORD)v29 == *v6 )
      {
        v19 = *(_QWORD *)(v29 + 8);
        v20 = v19 + v5;
        if ( v19 > *(_QWORD *)(v3 + 64) )
          v19 = *(_QWORD *)(v3 + 64);
        v5 = v20 - v19;
      }
      else
      {
LABEL_37:
        v5 += *(_QWORD *)(v29 + 8);
      }
      *(_QWORD *)&v29 = v29 + 16;
      v9 = v29;
      if ( v2 + 32 == (_QWORD)v29 )
        goto LABEL_45;
      do
      {
        if ( *(_QWORD *)(v9 + 8) )
          goto LABEL_13;
        v9 += 16;
        *(_QWORD *)&v29 = v9;
      }
      while ( v9 != v2 + 32 );
LABEL_45:
      if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
        boost::beast::http::chunk_crlf::begin();
      BYTE8(v29) = 3;
      *(_QWORD *)&v29 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
      v10 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
      while ( 1 )
      {
        if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
          || !__cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
        {
          if ( v10 == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
          {
            while ( 1 )
            {
LABEL_54:
              LOBYTE(v29) = 0;
              v3 = v30;
              v4 = 4;
              v1 = v27;
              v2 = v28;
              BYTE8(v29) = 4;
LABEL_14:
              if ( v1 != v3 || v2 != v24 || (_BYTE)v4 != v26 )
                goto LABEL_3;
              switch ( v4 )
              {
                case 0LL:
                  return v5;
                case 1LL:
                  if ( v25 == (_QWORD)v29 )
                    return v5;
                  if ( v2 == *(_QWORD *)(v3 + 40) )
                  {
                    v6 = (_QWORD *)(v3 + 48);
                    if ( *(_BYTE *)(v3 + 56) == 1 )
                      goto LABEL_70;
                  }
LABEL_8:
                  v5 += *(_QWORD *)(v29 + 8);
                  break;
                case 2LL:
                  if ( v25 == (_QWORD)v29 )
                    return v5;
                  if ( v2 == *(_QWORD *)(v3 + 40) )
                  {
                    v6 = (_QWORD *)(v3 + 48);
                    if ( *(_BYTE *)(v3 + 56) == 2 )
                      goto LABEL_36;
                  }
                  goto LABEL_37;
                case 3LL:
                  if ( v25 == (_QWORD)v29 )
                    return v5;
                  if ( v2 == *(_QWORD *)(v3 + 40) )
                  {
                    v6 = (_QWORD *)(v3 + 48);
                    if ( *(_BYTE *)(v3 + 56) == 3 )
                      goto LABEL_21;
                  }
                  goto LABEL_22;
                default:
                  goto LABEL_32;
              }
LABEL_9:
              *(_QWORD *)&v29 = v29 + 16;
              v7 = v29;
              if ( (_QWORD)v29 != v2 + 16 )
              {
                while ( !*(_QWORD *)(v7 + 8) )
                {
                  v7 += 16;
                  *(_QWORD *)&v29 = v7;
                  if ( v7 == v2 + 16 )
                    goto LABEL_55;
                }
                goto LABEL_13;
              }
LABEL_55:
              *(_QWORD *)&v29 = v2 + 16;
              v11 = v2 + 16;
              BYTE8(v29) = 2;
              if ( v2 + 32 != v2 + 16 )
                break;
LABEL_60:
              if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
                boost::beast::http::chunk_crlf::begin();
              BYTE8(v29) = 3;
              *(_QWORD *)&v29 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
              v12 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
              while ( 1 )
              {
                if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
                  && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
                {
                  unk_448FA8 = 2;
                  boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
                  __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
                }
                if ( v12 == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                  break;
                if ( *(_QWORD *)(v29 + 8) )
                  goto LABEL_32;
                v12 = (_QWORD *)(v29 + 16);
                *(_QWORD *)&v29 = v29 + 16;
              }
            }
            while ( !*(_QWORD *)(v11 + 8) )
            {
              v11 += 16;
              *(_QWORD *)&v29 = v11;
              if ( v11 == v2 + 32 )
                goto LABEL_60;
            }
LABEL_13:
            v4 = BYTE8(v29);
            goto LABEL_14;
          }
        }
        else
        {
          unk_448FA8 = 2;
          boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
          __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
          if ( v10 == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_54;
        }
        if ( *(_QWORD *)(v29 + 8) )
          goto LABEL_32;
        v10 = (_QWORD *)(v29 + 16);
        *(_QWORD *)&v29 = v29 + 16;
      }
    case 3LL:
LABEL_21:
      if ( *v6 == (_QWORD)v29 )
      {
        v16 = *(_QWORD *)(v29 + 8);
        v17 = v16 + v5;
        if ( v16 > *(_QWORD *)(v3 + 64) )
          v16 = *(_QWORD *)(v3 + 64);
        v5 = v17 - v16;
      }
      else
      {
LABEL_22:
        v5 += *(_QWORD *)(v29 + 8);
      }
      *(_QWORD *)&v29 = v29 + 16;
      v8 = (void *)v29;
      while ( 2 )
      {
        if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
          || !__cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
        {
          if ( v8 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
            goto LABEL_30;
LABEL_25:
          if ( !*(_QWORD *)(v29 + 8) )
          {
            v8 = (void *)(v29 + 16);
            *(_QWORD *)&v29 = v29 + 16;
            continue;
          }
          goto LABEL_32;
        }
        break;
      }
      unk_448FA8 = 2;
      boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
      __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
      if ( v8 != &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
        goto LABEL_25;
LABEL_30:
      v3 = v30;
      v1 = v27;
      LOBYTE(v29) = 0;
      BYTE8(v29) = 4;
      v2 = v28;
      if ( v27 != v30 )
      {
        v4 = 4;
        if ( v28 != *(_QWORD *)(v30 + 40) )
        {
LABEL_32:
          v3 = v30;
          v1 = v27;
          v2 = v28;
          v4 = BYTE8(v29);
          goto LABEL_14;
        }
LABEL_4:
        switch ( v4 )
        {
          case 1LL:
            goto LABEL_8;
          case 2LL:
            goto LABEL_37;
          case 3LL:
            goto LABEL_22;
          default:
            goto LABEL_32;
        }
      }
      if ( v28 != v24 || v26 != 4 )
      {
        v4 = 4;
        if ( v28 != *(_QWORD *)(v27 + 40) )
          goto LABEL_32;
        goto LABEL_4;
      }
      return v5;
    default:
      goto LABEL_32;
  }
}

