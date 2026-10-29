__int64 __fastcall boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::begin(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v9[8]; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int8 v10; // [rsp+10h] [rbp-18h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v2 = *(unsigned __int8 *)(a2 + 24);
  v11 = __readfsqword(0x28u);
  v10 = 0;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v2,
    (__int64)v9,
    (unsigned __int8 *)(a2 + 16));
  *(_QWORD *)v3 = v4;
  v5 = v10;
  *(_BYTE *)(v3 + 16) = 0;
  boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v5,
    v3 + 8,
    v9);
  *(_QWORD *)(v6 + 24) = v7;
  return v6;
}

