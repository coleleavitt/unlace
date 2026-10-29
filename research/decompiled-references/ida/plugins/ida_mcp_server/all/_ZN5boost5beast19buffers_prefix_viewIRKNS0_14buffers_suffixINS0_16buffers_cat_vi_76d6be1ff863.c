unsigned __int64 __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-E0h]
  __m128i *v32; // [rsp+20h] [rbp-D8h]
  _BYTE *v33; // [rsp+28h] [rbp-D0h]
  __int64 *v34; // [rsp+30h] [rbp-C8h]
  char *v35; // [rsp+38h] [rbp-C0h]
  __m128i v36; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A8h]
  _BYTE v38[24]; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int8 v39; // [rsp+70h] [rbp-88h]
  __int64 v40; // [rsp+78h] [rbp-80h]
  __int64 v41; // [rsp+80h] [rbp-78h] BYREF
  __int128 v42; // [rsp+88h] [rbp-70h] BYREF
  __int128 v43; // [rsp+98h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-40h]

  v3 = *a1;
  v45 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 1) = 0;
  v5 = *(_QWORD *)(v3 + 72);
  v33 = v38;
  v36.m128i_i64[0] = (__int64)v38;
  v37 = v5;
  v36.m128i_i64[1] = v3 + 80;
  v32 = &v36;
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v42, (__m128i)(unsigned __int64)v38);
  v39 = 0;
  boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
  v6 = _mm_load_si128(&v30);
  BYTE8(v43) = 0;
  v36 = v6;
  v41 = v37;
  boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
  v44 = v3;
  v7 = a1 + 4;
  boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v39);
  v8 = *((unsigned __int8 *)a1 + 56);
  a1[3] = v41;
  boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v8);
  *((_BYTE *)a1 + 56) = 0;
  v36.m128i_i64[0] = (__int64)(a1 + 4);
  v36.m128i_i64[1] = (__int64)&v42;
  boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
  v9 = v44;
  v10 = BYTE8(v43);
  a1[8] = v44;
  boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v10);
  v11 = *a1;
  v43 = 0;
  v31 = v11;
  v41 = v11;
  v37 = v11;
  v40 = v11;
  BYTE8(v43) = 7;
  v38[0] = 0;
  v39 = 7;
  v42 = 0;
  boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(7);
  v30.m128i_i64[0] = v12;
  if ( v31 == v9 )
    goto LABEL_10;
  while ( 2 )
  {
    v13 = a1[3];
    BYTE8(v43) = 0;
    v41 = v13;
    switch ( *((_BYTE *)a1 + 56) )
    {
      case 0:
        LOBYTE(v34) = *((_BYTE *)a1 + 56);
        v44 = v9;
        v36.m128i_i64[0] = v30.m128i_i64[0];
        goto LABEL_15;
      case 1:
        v22 = *v7;
        v23 = *((unsigned __int8 *)a1 + 48);
        LOBYTE(v43) = 0;
        *(_QWORD *)&v42 = v22;
        v34 = &v41;
        v35 = (char *)&v42 + 8;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          v23,
          (__int64)&v42 + 8,
          (unsigned __int8 *)a1 + 40);
        BYTE8(v43) = 1;
        v44 = v9;
        v36.m128i_i64[0] = v30.m128i_i64[0];
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==();
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
          (unsigned __int8)v43,
          (__int64)&v42);
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        goto LABEL_8;
      case 2:
        v26 = *v7;
        BYTE8(v43) = 2;
        v44 = v9;
        *(_QWORD *)&v42 = v26;
        v36.m128i_i64[0] = v30.m128i_i64[0];
        goto LABEL_4;
      case 3:
        v25 = *v7;
        BYTE8(v43) = 3;
        v44 = v9;
        *(_QWORD *)&v42 = v25;
        v36.m128i_i64[0] = v30.m128i_i64[0];
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        if ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
          goto LABEL_19;
        v28 = *(_QWORD *)(v9 + 112);
        v29 = *(_QWORD *)(v42 + 8);
        if ( v29 <= v28 )
          v28 = *(_QWORD *)(v42 + 8);
        v17 = v29 - v28;
        goto LABEL_8;
      case 4:
        v27 = *v7;
        BYTE8(v43) = 4;
        v44 = v9;
        *(_QWORD *)&v42 = v27;
        v36.m128i_i64[0] = v30.m128i_i64[0];
        goto LABEL_4;
      case 5:
        v21 = *v7;
        BYTE8(v43) = 5;
        v44 = v9;
        *(_QWORD *)&v42 = v21;
        v36.m128i_i64[0] = v30.m128i_i64[0];
        goto LABEL_4;
      case 6:
        v14 = *v7;
        BYTE8(v43) = 6;
        v44 = v9;
        *(_QWORD *)&v42 = v14;
        v36.m128i_i64[0] = v30.m128i_i64[0];
LABEL_4:
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
        {
          v15 = *(_QWORD *)(v9 + 112);
          v16 = *(_QWORD *)(v42 + 8);
          if ( v15 > v16 )
            v15 = *(_QWORD *)(v42 + 8);
          v17 = v16 - v15;
        }
        else
        {
LABEL_19:
          v17 = *(_QWORD *)(v42 + 8);
        }
LABEL_8:
        v18 = a1[1];
        v19 = a2 - v17;
        if ( v17 < a2 )
          goto LABEL_9;
        goto LABEL_16;
      case 7:
        v24 = *(_BYTE *)v7;
        LOBYTE(v34) = *((_BYTE *)a1 + 56);
        BYTE8(v43) = 7;
        LOBYTE(v42) = v24;
        v44 = v9;
        v36.m128i_i64[0] = v30.m128i_i64[0];
LABEL_15:
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==();
        v17 = 0;
        v18 = a1[1];
        v19 = a2;
        if ( a2 )
        {
LABEL_9:
          v9 = a1[8];
          a2 = v19;
          a1[1] = v17 + v18;
          if ( v31 == v9 )
          {
LABEL_10:
            if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
              goto LABEL_11;
          }
          continue;
        }
LABEL_16:
        a1[2] = v19;
        a1[1] = a2 + v18;
LABEL_11:
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(7);
        return v45 - __readfsqword(0x28u);
    }
  }
}

