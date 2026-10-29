__int64 __fastcall boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
    case 6LL:
      result = 0;
      break;
    case 1LL:
    case 2LL:
    case 3LL:
    case 5LL:
      result = **(_QWORD **)(a2 + 8);
      break;
    case 4LL:
      result = *(_QWORD *)(a2 + 8) + 56LL;
      break;
  }
  return result;
}

