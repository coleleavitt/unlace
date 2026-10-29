__int64 __fastcall boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
      return result;
    case 1LL:
      result = *(_QWORD *)a3;
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = result;
      break;
    case 2LL:
      result = *(_QWORD *)a3;
      *(_BYTE *)(a2 + 8) = 2;
      *(_QWORD *)a2 = result;
      break;
    case 3LL:
      result = *(_QWORD *)a3;
      *(_BYTE *)(a2 + 8) = 3;
      *(_QWORD *)a2 = result;
      break;
    case 4LL:
      result = *(_QWORD *)a3;
      *(_BYTE *)(a2 + 8) = 4;
      *(_QWORD *)a2 = result;
      break;
    case 5LL:
      result = *(_QWORD *)a3;
      *(_BYTE *)(a2 + 8) = 5;
      *(_QWORD *)a2 = result;
      break;
    case 6LL:
      result = *a3;
      *(_BYTE *)(a2 + 8) = 6;
      *(_BYTE *)a2 = result;
      break;
  }
  return result;
}

