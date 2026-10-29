void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 *v3; // r14
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // al
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v27[8]; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int8 v28; // [rsp+40h] [rbp-78h]
  __int64 v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+50h] [rbp-68h]
  __int128 v31; // [rsp+58h] [rbp-60h]
  __int64 v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v3 = a1 + 4;
  v4 = *a1;
  v33 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 1) = 0;
  v6 = *(unsigned __int8 *)(v4 + 80);
  v28 = 0;
  v7 = v4;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v6,
    (__int64)v27,
    (unsigned __int8 *)(v4 + 72));
  BYTE8(v31) = 0;
  v26 = v8;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v28,
    v8,
    v27);
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  a1[3] = v9;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  *((_BYTE *)a1 + 40) = 0;
  v32 = v4;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v10,
    (__int64)v3,
    v11);
  a1[6] = v4;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  v31 = 0;
  BYTE8(v31) = 6;
  v27[0] = 0;
  v28 = 6;
  v29 = v4;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
LABEL_10:
  if ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
  {
    while ( 1 )
    {
      v12 = a1[3];
      BYTE8(v31) = 0;
      v30 = v12;
      switch ( *((_BYTE *)a1 + 40) )
      {
        case 0:
          v32 = v7;
          goto LABEL_22;
        case 1:
          v24 = *v3;
          BYTE8(v31) = 1;
          v32 = v7;
          *(_QWORD *)&v31 = v24;
          goto LABEL_4;
        case 2:
          v23 = *v3;
          BYTE8(v31) = 2;
          v32 = v7;
          *(_QWORD *)&v31 = v23;
          goto LABEL_14;
        case 3:
          v20 = *v3;
          BYTE8(v31) = 3;
          v32 = v7;
          *(_QWORD *)&v31 = v20;
LABEL_14:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
          if ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
            goto LABEL_24;
          v21 = *(_QWORD *)(v7 + 88);
          v22 = *(_QWORD *)(*(_QWORD *)v26 + 8LL);
          if ( v21 > v22 )
            v21 = *(_QWORD *)(*(_QWORD *)v26 + 8LL);
          v16 = v22 - v21;
          v17 = a1[1];
          v18 = a2 - v16;
          if ( v16 >= a2 )
            goto LABEL_18;
          goto LABEL_9;
        case 4:
          v19 = *v3;
          BYTE8(v31) = 4;
          v32 = v7;
          *(_QWORD *)&v31 = v19;
          goto LABEL_4;
        case 5:
          v13 = *v3;
          BYTE8(v31) = 5;
          v32 = v7;
          *(_QWORD *)&v31 = v13;
LABEL_4:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
          if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
          {
            v14 = *(_QWORD *)(v7 + 88);
            v15 = *(_QWORD *)(*(_QWORD *)v26 + 8LL);
            if ( v15 <= v14 )
              v14 = *(_QWORD *)(*(_QWORD *)v26 + 8LL);
            v16 = v15 - v14;
          }
          else
          {
LABEL_24:
            v16 = *(_QWORD *)(*(_QWORD *)v26 + 8LL);
          }
          goto LABEL_8;
        case 6:
          v25 = *(_BYTE *)v3;
          BYTE8(v31) = 6;
          LOBYTE(v31) = v25;
          v32 = v7;
LABEL_22:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
          boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==();
          v16 = 0;
LABEL_8:
          v17 = a1[1];
          v18 = a2 - v16;
          if ( v16 >= a2 )
          {
LABEL_18:
            a1[2] = v18;
            a1[1] = a2 + v17;
            goto LABEL_11;
          }
LABEL_9:
          v7 = a1[6];
          a2 = v18;
          a1[1] = v16 + v17;
          if ( v4 == v7 )
            goto LABEL_10;
          break;
      }
    }
  }
LABEL_11:
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
}

