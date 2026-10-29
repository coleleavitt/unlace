unsigned __int64 __fastcall boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::consume(
        __int64 a1,
        unsigned __int64 a2)
{
  int v3; // eax
  unsigned __int64 v4; // rbp
  __m128i si128; // xmm1
  unsigned __int8 *v7; // rbp
  unsigned __int8 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // rax
  unsigned __int8 *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbp
  unsigned __int8 *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __m128 v23; // xmm4
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbp
  __m128i v27; // xmm6
  unsigned __int8 *v28; // rax
  __int64 v29; // rdx
  unsigned __int8 *v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbp
  unsigned __int8 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rcx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r11
  unsigned __int64 v50; // rax
  __int64 i; // rax
  unsigned __int8 *v52; // r14
  __m128 v53; // xmm3
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbp
  __m128i v57; // xmm5
  unsigned __int8 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdi
  __m128 v61; // [rsp+0h] [rbp-158h] BYREF
  __m128i v62; // [rsp+10h] [rbp-148h] BYREF
  unsigned __int8 *v63; // [rsp+28h] [rbp-130h] BYREF
  __int128 *v64; // [rsp+30h] [rbp-128h]
  __int64 *v65; // [rsp+38h] [rbp-120h]
  __m128i v66; // [rsp+40h] [rbp-118h]
  __int64 v67; // [rsp+50h] [rbp-108h]
  __int128 v68; // [rsp+58h] [rbp-100h]
  __int128 v69; // [rsp+68h] [rbp-F0h]
  _QWORD *v70; // [rsp+80h] [rbp-D8h]
  unsigned __int8 v71[8]; // [rsp+88h] [rbp-D0h] BYREF
  unsigned __int8 v72; // [rsp+90h] [rbp-C8h]
  unsigned __int8 *v73; // [rsp+98h] [rbp-C0h]
  unsigned __int8 v74; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v75; // [rsp+A8h] [rbp-B0h]
  __int64 v76; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-A0h] BYREF
  __int128 v78; // [rsp+C8h] [rbp-90h]
  __int64 v79; // [rsp+D8h] [rbp-80h]
  _QWORD *v80; // [rsp+E0h] [rbp-78h] BYREF
  __int128 v81; // [rsp+E8h] [rbp-70h] BYREF
  unsigned __int8 *v82; // [rsp+F8h] [rbp-60h]
  unsigned __int8 v83; // [rsp+100h] [rbp-58h]
  unsigned __int8 *v84; // [rsp+108h] [rbp-50h]
  unsigned __int64 v85; // [rsp+118h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 384);
  v85 = __readfsqword(0x28u);
  v4 = a2;
  if ( v3 == 70 )
  {
    v63 = v71;
    v52 = (unsigned __int8 *)(a1 + 128);
    v61.m128_u64[0] = (unsigned __int64)&v76;
    v53 = _mm_loadh_ps((const double *)&v63);
    v78 = 0;
    v76 = a1 + 128;
    BYTE8(v78) = 7;
    v62 = (__m128i)v53;
    v77 = 0;
    if ( a2 )
    {
      while ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
      {
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
          *(unsigned __int8 *)(a1 + 232),
          a1 + 200);
        v55 = *(_QWORD *)(a1 + 240);
        if ( v4 < v54 - v55 )
        {
          *(_QWORD *)(a1 + 240) = v4 + v55;
          break;
        }
        v66.m128i_i64[0] = a1 + 200;
        *(_QWORD *)(a1 + 240) = 0;
        v4 += v55 - v54;
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        if ( !v4 )
          break;
      }
    }
    v56 = 0;
    v64 = &v77;
    boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(7);
    v69 = 0;
    v68 = 0;
    BYTE8(v69) = 7;
    v76 = a1 + 128;
    LOBYTE(v77) = 0;
    BYTE8(v78) = 7;
    v79 = a1 + 128;
    boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
    v57 = _mm_load_si128(&v62);
    v83 = 0;
    v80 = v70;
    v66 = v57;
    boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
    v58 = v75;
    v84 = v75;
    while ( v52 != v58
         || !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
    {
      boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
      v66.m128i_i64[0] = (__int64)&v80;
      v56 += v59;
      boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
      v58 = v84;
    }
    boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v83);
    boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v74);
    boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(7);
    if ( !v56 )
    {
      *(_BYTE *)(a1 + 389) = 1;
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
        *(unsigned __int8 *)(a1 + 288),
        v52);
      *(_BYTE *)(a1 + 288) = 0;
      if ( !*(_BYTE *)(a1 + 390) )
        goto LABEL_40;
      goto LABEL_116;
    }
  }
  else
  {
    if ( v3 > 70 )
    {
      if ( v3 == 100 )
      {
        v30 = (unsigned __int8 *)(a1 + 128);
        v81 = 0;
        v80 = (_QWORD *)(a1 + 128);
        BYTE8(v81) = 9;
        if ( a2 )
        {
          while ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
          {
            boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
              *(unsigned __int8 *)(a1 + 248),
              a1 + 232);
            v32 = *(_QWORD *)(a1 + 256);
            if ( v4 < v31 - v32 )
            {
              *(_QWORD *)(a1 + 256) = v4 + v32;
              break;
            }
            v66.m128i_i64[0] = a1 + 232;
            *(_QWORD *)(a1 + 256) = 0;
            v4 += v32 - v31;
            boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
            if ( !v4 )
              break;
          }
        }
        v33 = 0;
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        v81 = 0;
        v76 = a1 + 128;
        LOBYTE(v77) = 0;
        BYTE8(v77) = 9;
        *(_QWORD *)&v78 = a1 + 128;
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
        BYTE8(v81) = 0;
        v80 = v70;
        v63 = v71;
        v62.m128i_i64[0] = v72;
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          v72,
          (__int64)&v81,
          v71);
        v34 = v73;
        v61.m128_u64[0] = (unsigned __int64)&v76;
        v82 = v73;
        while ( v30 != v34
             || !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
        {
          boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
          v66.m128i_i64[0] = (__int64)&v80;
          v33 += v35;
          boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
          v34 = v82;
        }
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        if ( !v33 )
        {
          boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
            *(unsigned __int8 *)(a1 + 288),
            v30);
          *(_BYTE *)(a1 + 288) = 0;
          *(_DWORD *)(a1 + 384) = 120;
        }
        return v85 - __readfsqword(0x28u);
      }
      if ( v3 > 100 )
      {
        if ( v3 == 110 )
        {
          v63 = v71;
          v61.m128_u64[0] = (unsigned __int64)&v76;
          v23 = _mm_loadh_ps((const double *)&v63);
          v78 = 0;
          v76 = a1 + 128;
          BYTE8(v78) = 10;
          v62 = (__m128i)v23;
          v77 = 0;
          if ( a2 )
          {
            while ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
            {
              boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                *(unsigned __int8 *)(a1 + 272),
                a1 + 240);
              v25 = *(_QWORD *)(a1 + 280);
              if ( v4 < v24 - v25 )
              {
                *(_QWORD *)(a1 + 280) = v4 + v25;
                break;
              }
              v66.m128i_i64[0] = a1 + 240;
              *(_QWORD *)(a1 + 280) = 0;
              v4 += v25 - v24;
              boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
              if ( !v4 )
                break;
            }
          }
          v26 = 0;
          v64 = &v77;
          boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(10);
          boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end();
          boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
          v27 = _mm_load_si128(&v62);
          v83 = 0;
          v80 = v70;
          v66 = v27;
          boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
          v28 = v75;
          v84 = v75;
          v62.m128i_i64[0] = v79;
          while ( (unsigned __int8 *)v62.m128i_i64[0] != v28
               || !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
          {
            boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
            v66.m128i_i64[0] = (__int64)&v80;
            v26 += v29;
            boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
            v28 = v84;
          }
          boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v83);
          boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v74);
          boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(BYTE8(v78));
          if ( !v26 )
          {
            *(_BYTE *)(a1 + 389) = 1;
            boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
              *(unsigned __int8 *)(a1 + 288),
              (unsigned __int8 *)(a1 + 128));
            *(_BYTE *)(a1 + 288) = 0;
            *(_DWORD *)(a1 + 384) = 120;
          }
        }
        return v85 - __readfsqword(0x28u);
      }
      if ( v3 != 82 )
      {
        if ( v3 == 91 )
        {
          boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume();
          if ( !boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>() )
          {
            boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
              *(unsigned __int8 *)(a1 + 288),
              (unsigned __int8 *)(a1 + 128));
            *(_BYTE *)(a1 + 288) = 0;
            goto LABEL_48;
          }
        }
        return v85 - __readfsqword(0x28u);
      }
      v15 = (unsigned __int8 *)(a1 + 128);
      v68 = 0;
      v67 = a1 + 128;
      BYTE8(v68) = 6;
      if ( a2 )
      {
        while ( !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
        {
          v3 = *(unsigned __int8 *)(a1 + 208);
          switch ( (char)v3 )
          {
            case 0:
            case 6:
              v16 = 0;
              break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
              v16 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8LL);
              break;
            default:
              goto LABEL_54;
          }
          v17 = *(_QWORD *)(a1 + 216);
          v18 = v17 + v4;
          if ( v4 < v16 - v17 )
          {
            *(_QWORD *)(a1 + 216) = v18;
            break;
          }
          *(_QWORD *)(a1 + 216) = 0;
          v4 = v18 - v16;
          v66.m128i_i64[0] = a1 + 192;
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
          if ( !v4 )
            break;
        }
      }
      v19 = 0;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      v81 = 0;
      v76 = a1 + 128;
      LOBYTE(v77) = 0;
      BYTE8(v77) = 6;
      *(_QWORD *)&v78 = a1 + 128;
      boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
      BYTE8(v81) = 0;
      v80 = v70;
      v63 = v71;
      v62.m128i_i64[0] = v72;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v72,
        (__int64)&v81,
        v71);
      v20 = v73;
      v61.m128_u64[0] = (unsigned __int64)&v76;
      v82 = v73;
      while ( v15 != v20
           || !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
      {
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        v66.m128i_i64[0] = (__int64)&v80;
        v19 += v21;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        v20 = v82;
      }
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      if ( v19 )
        return v85 - __readfsqword(0x28u);
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
        *(unsigned __int8 *)(a1 + 288),
        v15);
      *(_BYTE *)(a1 + 288) = 0;
      if ( !*(_BYTE *)(a1 + 390) )
      {
LABEL_40:
        *(_DWORD *)(a1 + 384) = 90;
        return v85 - __readfsqword(0x28u);
      }
LABEL_116:
      *(_DWORD *)(a1 + 384) = 81;
      return v85 - __readfsqword(0x28u);
    }
    if ( v3 == 42 )
    {
      v36 = a1 + 128;
      if ( v4 )
      {
        v37 = *(_QWORD *)(a1 + 144);
        v38 = a1 + 144;
        while ( v38 != v37 )
        {
          v39 = *(_QWORD *)(v37 + 8);
          v40 = *(_QWORD *)(v36 + 24);
          v41 = v39 - v40;
          v42 = v4 + v40;
          if ( v4 < v41 )
          {
            *(_QWORD *)(v36 + 24) = v42;
            break;
          }
          v37 += 16;
          *(_QWORD *)(v36 + 24) = 0;
          *(_QWORD *)(v36 + 16) = v37;
          v4 = v42 - v39;
          if ( v42 == v39 )
            break;
        }
      }
      v43 = *(_QWORD *)(v36 + 16);
      v44 = v36 + 16;
      if ( v36 + 16 == v43 )
        goto LABEL_103;
      v45 = v36 + 15;
      v46 = *(_QWORD *)(v36 + 16);
      if ( v43 <= v36 + 15 )
        v45 = *(_QWORD *)(v36 + 16);
      v47 = 0;
      do
      {
        v48 = *(_QWORD *)(v43 + 8);
        v49 = v48;
        if ( *(_QWORD *)(v36 + 24) <= v48 )
          v49 = *(_QWORD *)(v36 + 24);
        v43 += 16LL;
        v47 += v48 - v49;
      }
      while ( v45 >= v43 );
      v50 = (v45 - v46) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v45 + 1 < v46 + 1 )
        v50 = 0;
      for ( i = v46 + v50 + 16; v44 != i; i += 16 )
        v47 += *(_QWORD *)(i + 8);
      if ( !v47 )
      {
LABEL_103:
        boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
          *(unsigned __int8 *)(a1 + 288),
          (unsigned __int8 *)v36);
        *(_BYTE *)(a1 + 288) = 0;
        if ( *(_BYTE *)(a1 + 390) )
          goto LABEL_27;
        goto LABEL_48;
      }
    }
    else
    {
      if ( v3 > 42 )
      {
LABEL_54:
        if ( v3 != 60 )
          return v85 - __readfsqword(0x28u);
        boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::consume();
        if ( boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>>() )
          return v85 - __readfsqword(0x28u);
        if ( *(_BYTE *)(a1 + 16) )
          *(_BYTE *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 389) = 1;
        if ( *(_BYTE *)(a1 + 388) )
        {
          *(_DWORD *)(a1 + 384) = 80;
          return v85 - __readfsqword(0x28u);
        }
        goto LABEL_40;
      }
      if ( v3 == 20 )
      {
        boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::consume();
        if ( boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>>() )
          return v85 - __readfsqword(0x28u);
        if ( *(_BYTE *)(a1 + 16) )
          *(_BYTE *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 389) = 1;
        if ( *(_BYTE *)(a1 + 388) )
        {
          *(_DWORD *)(a1 + 384) = 40;
          return v85 - __readfsqword(0x28u);
        }
        goto LABEL_48;
      }
      if ( v3 == 30 )
      {
        v63 = v71;
        v62.m128i_i64[0] = a1 + 128;
        v61 = _mm_loadh_ps((const double *)&v63);
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::consume();
        v69 = 0;
        v76 = a1 + 128;
        v79 = a1 + 128;
        v68 = 0;
        BYTE8(v69) = 3;
        LOBYTE(v77) = 0;
        BYTE8(v78) = 3;
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::begin();
        si128 = _mm_load_si128((const __m128i *)&v61);
        v83 = 0;
        v80 = v70;
        v66 = si128;
        boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
        v7 = v75;
        v64 = nullptr;
        v8 = v83;
        v65 = &v76;
        v84 = v75;
        if ( (unsigned __int8 *)v62.m128i_i64[0] == v75 )
          goto LABEL_24;
        while ( 1 )
        {
          boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*();
          v61.m128_u64[0] = v9;
          if ( v8 == 1 )
            break;
          *(_QWORD *)&v81 = v81 + 16;
          v22 = (_QWORD *)v81;
          if ( v80 + 3 == (_QWORD *)v81 )
          {
LABEL_52:
            boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v83);
            LOBYTE(v81) = 0;
            v83 = 3;
            if ( (unsigned __int8 *)v62.m128i_i64[0] != v7 )
              goto LABEL_53;
LABEL_74:
            v8 = 3;
            v64 = (__int128 *)((char *)v64 + v61.m128_u64[0]);
LABEL_24:
            if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==() )
            {
              boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v8);
              boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v74);
              boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(3);
              if ( v64 )
                return v85 - __readfsqword(0x28u);
              *(_BYTE *)(a1 + 389) = 1;
              boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
                *(unsigned __int8 *)(a1 + 288),
                (unsigned __int8 *)v62.m128i_i64[0]);
              *(_BYTE *)(a1 + 288) = 0;
              if ( *(_BYTE *)(a1 + 390) )
              {
LABEL_27:
                *(_DWORD *)(a1 + 384) = 41;
                return v85 - __readfsqword(0x28u);
              }
LABEL_48:
              *(_DWORD *)(a1 + 384) = 120;
              return v85 - __readfsqword(0x28u);
            }
          }
          else
          {
            while ( !v22[1] )
            {
              v22 += 2;
              *(_QWORD *)&v81 = v22;
              if ( v22 == v80 + 3 )
                goto LABEL_52;
            }
LABEL_23:
            v8 = v83;
            v64 = (__int128 *)((char *)v64 + v61.m128_u64[0]);
            if ( (unsigned __int8 *)v62.m128i_i64[0] == v7 )
              goto LABEL_24;
          }
        }
        while ( 1 )
        {
          v66.m128i_i64[0] = (__int64)&v81;
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
          v11 = v80;
          v68 = 0;
          v12 = *v80;
          BYTE8(v68) = 6;
          v67 = v12;
          if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
            break;
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
            (unsigned __int8)v82,
            (__int64)&v81);
          if ( v10 )
            goto LABEL_22;
        }
        v13 = v11 + 3;
        boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v83);
        *(_QWORD *)&v81 = v14;
        v83 = 2;
        if ( v13 != v14 )
        {
          while ( !v14[1] )
          {
            v14 += 2;
            *(_QWORD *)&v81 = v14;
            if ( v14 == v13 )
            {
              v60 = v83;
              goto LABEL_73;
            }
          }
LABEL_22:
          v7 = v84;
          goto LABEL_23;
        }
        v60 = 2;
LABEL_73:
        boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v60);
        LOBYTE(v81) = 0;
        v7 = v84;
        v83 = 3;
        if ( (unsigned __int8 *)v62.m128i_i64[0] != v84 )
        {
LABEL_53:
          v3 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*();
          goto LABEL_54;
        }
        goto LABEL_74;
      }
    }
  }
  return v85 - __readfsqword(0x28u);
}

