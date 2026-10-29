unsigned __int64 __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  bool v17; // cc
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v25; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-D0h]
  __int64 v27; // [rsp+20h] [rbp-C8h]
  _BYTE *v28; // [rsp+28h] [rbp-C0h]
  __m128i v29; // [rsp+30h] [rbp-B8h]
  __int64 v30; // [rsp+40h] [rbp-A8h]
  _BYTE v31[24]; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int8 v32; // [rsp+60h] [rbp-88h]
  __int64 v33; // [rsp+68h] [rbp-80h]
  __int64 v34; // [rsp+70h] [rbp-78h] BYREF
  __int128 v35; // [rsp+78h] [rbp-70h] BYREF
  __int128 v36; // [rsp+88h] [rbp-60h]
  __int64 v37; // [rsp+98h] [rbp-50h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-40h]

  v3 = *a1;
  v38 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 1) = 0;
  v5 = *(_QWORD *)(v3 + 112);
  v28 = v31;
  v30 = v5;
  v29.m128i_i64[1] = v3 + 120;
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v35, (__m128i)(unsigned __int64)v31);
  v32 = 0;
  v29.m128i_i64[0] = (__int64)v31;
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
  v6 = _mm_load_si128(&v25);
  BYTE8(v36) = 0;
  v29 = v6;
  v34 = v30;
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
  v37 = v3;
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v32);
  v7 = *((unsigned __int8 *)a1 + 56);
  a1[3] = v34;
  v27 = (__int64)(a1 + 4);
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v7);
  *((_BYTE *)a1 + 56) = 0;
  v29.m128i_i64[0] = v8;
  v29.m128i_i64[1] = (__int64)&v35;
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
  v9 = BYTE8(v36);
  a1[8] = v37;
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v9);
  v10 = *a1;
  v36 = 0;
  v26 = v10;
  v34 = v10;
  BYTE8(v36) = 10;
  v30 = v10;
  v31[0] = 0;
  v32 = 10;
  v33 = v10;
  v35 = 0;
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(10);
  v25.m128i_i64[0] = v12;
  while ( v26 != v11
       || !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
  {
    v23 = a1[3];
    BYTE8(v36) = 0;
    v29.m128i_i64[0] = (__int64)&v35;
    v34 = v23;
    v29.m128i_i64[1] = v27;
    boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
    v37 = a1[8];
    v29.m128i_i64[0] = v25.m128i_i64[0];
    boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
    if ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
    {
      switch ( BYTE8(v36) )
      {
        case 0:
        case 0xA:
          v19 = 0;
          goto LABEL_5;
        case 1:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
            (unsigned __int8)v36,
            (__int64)&v35);
          goto LABEL_15;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          v20 = a1[1];
          v19 = *(_QWORD *)(v35 + 8);
          v21 = a2 - v19;
          if ( v19 >= a2 )
            goto LABEL_11;
          goto LABEL_6;
      }
    }
    boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
      BYTE8(v36),
      (__int64)&v34);
    v15 = v14;
    v17 = v16 <= v14;
    v18 = v16;
    if ( !v17 )
      v18 = v15;
    v19 = v15 - v18;
    if ( v13 == 1 )
LABEL_15:
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
LABEL_5:
    v20 = a1[1];
    v21 = a2 - v19;
    if ( v19 >= a2 )
    {
LABEL_11:
      a1[2] = v21;
      a1[1] = a2 + v20;
      break;
    }
LABEL_6:
    v22 = v19 + v20;
    v11 = a1[8];
    a2 = v21;
    a1[1] = v22;
  }
  boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(10);
  return v38 - __readfsqword(0x28u);
}

