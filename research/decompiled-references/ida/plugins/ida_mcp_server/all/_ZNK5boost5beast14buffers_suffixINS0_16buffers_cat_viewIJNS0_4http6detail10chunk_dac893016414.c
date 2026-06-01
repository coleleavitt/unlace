__int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(
        __int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)a1 == *(_QWORD *)(v1 + 64) && *(_BYTE *)(v1 + 80) == *(_BYTE *)(a1 + 16) )
  {
    switch ( *(_BYTE *)(a1 + 16) )
    {
      case 0:
      case 6:
        return 0;
      case 1:
        v6 = *(_QWORD **)(a1 + 8);
        if ( *(_QWORD **)(v1 + 72) != v6 )
          goto LABEL_4;
        v7 = *(_QWORD *)(v1 + 88);
        if ( v7 > v6[1] )
          v7 = v6[1];
        v3 = v7 + *v6;
        goto LABEL_5;
      case 2:
      case 3:
      case 4:
        v2 = *(_QWORD **)(a1 + 8);
        if ( v2 == *(_QWORD **)(v1 + 72) )
          goto LABEL_10;
        goto LABEL_4;
      case 5:
        v2 = *(_QWORD **)(a1 + 8);
        if ( v2 == *(_QWORD **)(v1 + 72) )
        {
LABEL_10:
          v5 = *(_QWORD *)(v1 + 88);
          if ( v2[1] <= v5 )
            v5 = v2[1];
          result = v5 + *v2;
        }
        else
        {
LABEL_4:
          v3 = **(_QWORD **)(a1 + 8);
LABEL_5:
          result = v3;
        }
        break;
    }
  }
  else
  {
    switch ( *(_BYTE *)(a1 + 16) )
    {
      case 0:
      case 6:
        return 0;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        goto LABEL_4;
      default:
        result = boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        break;
    }
  }
  return result;
}

