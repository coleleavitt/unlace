__int64 __fastcall boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  char v3; // dl
  __int64 v4; // rdx
  unsigned __int8 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx

  switch ( a1 )
  {
    case 0LL:
      return result;
    case 1LL:
      v5 = (unsigned __int8 *)a2[1];
      v6 = *a2 + 8;
      v7 = *(_QWORD *)v5;
      *(_BYTE *)(v6 + 8) = 0;
      *(_QWORD *)(v6 - 8) = v7;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v5[16],
        v6,
        v5 + 8);
      result = *v8;
      *(_BYTE *)(*v8 + 24) = 1;
      break;
    case 2LL:
      result = *a2;
      v9 = *(_QWORD *)a2[1];
      *(_BYTE *)(result + 24) = 2;
      *(_QWORD *)result = v9;
      break;
    case 3LL:
      result = *a2;
      v10 = *(_QWORD *)a2[1];
      *(_BYTE *)(result + 24) = 3;
      *(_QWORD *)result = v10;
      break;
    case 4LL:
      result = *a2;
      v11 = *(_QWORD *)a2[1];
      *(_BYTE *)(result + 24) = 4;
      *(_QWORD *)result = v11;
      break;
    case 5LL:
      result = *a2;
      v12 = *(_QWORD *)a2[1];
      *(_BYTE *)(result + 24) = 5;
      *(_QWORD *)result = v12;
      break;
    case 6LL:
      result = *a2;
      v4 = *(_QWORD *)a2[1];
      *(_BYTE *)(result + 24) = 6;
      *(_QWORD *)result = v4;
      break;
    case 7LL:
      result = *a2;
      v3 = *(_BYTE *)a2[1];
      *(_BYTE *)(result + 24) = 7;
      *(_BYTE *)result = v3;
      break;
  }
  return result;
}

