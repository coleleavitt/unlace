void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int8 *v9; // r10
  __int64 v10; // r9
  unsigned __int8 v11; // al
  __int64 v12; // r8
  unsigned __int8 *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 *v16; // r15
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int8 *v27; // [rsp+8h] [rbp-B0h]
  _BYTE v28[8]; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int8 v29; // [rsp+40h] [rbp-78h]
  __int64 v30; // [rsp+48h] [rbp-70h]
  __int64 v31; // [rsp+50h] [rbp-68h] BYREF
  __int128 v32; // [rsp+58h] [rbp-60h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]
  __int64 v35; // [rsp+90h] [rbp-28h]

  v4 = (__int64)(a1 + 4);
  v35 = v2;
  v5 = *a1;
  v34 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 1) = 0;
  v7 = *(unsigned __int8 *)(v5 + 120);
  v29 = 0;
  v8 = v5;
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v7,
    (__int64)v28,
    (unsigned __int8 *)(v5 + 112));
  BYTE8(v32) = 0;
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v29,
    (__int64)&v32,
    v9);
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  a1[3] = v10;
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  *((_BYTE *)a1 + 40) = 0;
  v33 = v12;
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v11,
    v4,
    v13);
  a1[6] = v14;
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  v32 = 0;
  BYTE8(v32) = 9;
  v28[0] = 0;
  v29 = 9;
  v30 = v15;
  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  v27 = (unsigned __int8 *)v4;
  v16 = a1;
  v18 = v17;
  if ( v8 == v17 )
    goto LABEL_9;
  while ( 2 )
  {
    v19 = v16[3];
    v20 = *((unsigned __int8 *)v16 + 40);
    BYTE8(v32) = 0;
    v31 = v19;
    boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      v20,
      (__int64)&v32,
      v27);
    v33 = v18;
    boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
    if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
    {
      v21 = *(_QWORD *)(v18 + 128);
      switch ( BYTE8(v32) )
      {
        case 0:
        case 9:
          goto LABEL_11;
        case 1:
        case 2:
          v26 = *(_QWORD *)(v32 + 8);
          if ( v26 <= v21 )
            v21 = *(_QWORD *)(v32 + 8);
          v23 = v26 - v21;
          goto LABEL_7;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          v22 = *(_QWORD *)(v32 + 8);
          if ( v21 > v22 )
            v21 = *(_QWORD *)(v32 + 8);
          v23 = v22 - v21;
          goto LABEL_7;
      }
    }
    switch ( BYTE8(v32) )
    {
      case 0:
      case 9:
LABEL_11:
        v23 = 0;
        v24 = v16[1];
        v25 = a2;
        if ( !a2 )
          goto LABEL_12;
        goto LABEL_8;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        v23 = *(_QWORD *)(v32 + 8);
LABEL_7:
        v24 = v16[1];
        v25 = a2 - v23;
        if ( v23 < a2 )
        {
LABEL_8:
          v18 = v16[6];
          a2 = v25;
          v16[1] = v23 + v24;
          if ( v8 == v18 )
          {
LABEL_9:
            if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
              goto LABEL_10;
          }
          continue;
        }
LABEL_12:
        v16[2] = v25;
        v16[1] = a2 + v24;
LABEL_10:
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        return;
      default:
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
          &v31,
          v18 + 104,
          0.0);
        return;
    }
  }
}

