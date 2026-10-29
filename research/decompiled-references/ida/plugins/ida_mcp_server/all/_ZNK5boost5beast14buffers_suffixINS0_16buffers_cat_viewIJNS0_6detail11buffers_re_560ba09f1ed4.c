__int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::begin(
        __int64 a1,
        __int64 a2)
{
  char v2; // al
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-30h]
  unsigned __int8 v16[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int8 v17; // [rsp+18h] [rbp-20h]
  char v18; // [rsp+20h] [rbp-18h]
  unsigned __int64 v19; // [rsp+28h] [rbp-10h]

  v2 = *(_BYTE *)(a2 + 56);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = a1;
  v19 = __readfsqword(0x28u);
  if ( v2 == 2 )
  {
    v14 = *(_QWORD *)(a2 + 32);
    v18 = 2;
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 8) = v14;
    goto LABEL_7;
  }
  if ( (unsigned __int8)v2 > 2u )
  {
    v13 = *(_BYTE *)(a2 + 32);
    v18 = 3;
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 8) = v13;
    v2 = 3;
LABEL_7:
    *(_BYTE *)(a1 + 32) = v2;
    *(_QWORD *)(a1 + 40) = a2;
    return v4;
  }
  if ( v2 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(unsigned __int8 *)(a2 + 48);
    v17 = 0;
    v15 = v5;
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      v6,
      (__int64)v16,
      (unsigned __int8 *)(a2 + 40));
    *(_QWORD *)v7 = v8;
    *(_BYTE *)(v7 + 32) = 0;
    v9 = v17;
    *(_QWORD *)(v7 + 8) = v15;
    *(_BYTE *)(v7 + 24) = 0;
    v18 = 1;
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      v9,
      v7 + 16,
      v16);
    *(_BYTE *)(v10 + 32) = 1;
    *(_QWORD *)(v10 + 40) = v11;
    boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
  }
  else
  {
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = a2;
  }
  return v4;
}

