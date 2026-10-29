__int64 __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // al

  v2 = *(_QWORD *)(a2 + 40);
  switch ( *(_BYTE *)(a2 + 56) )
  {
    case 0:
      *(_QWORD *)a1 = v2;
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = a2;
      break;
    case 1:
      v6 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 8) = v6;
      *(_BYTE *)(a1 + 16) = 1;
      *(_QWORD *)(a1 + 24) = a2;
      break;
    case 2:
      v5 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 8) = v5;
      *(_BYTE *)(a1 + 16) = 2;
      *(_QWORD *)(a1 + 24) = a2;
      break;
    case 3:
      v3 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 8) = v3;
      *(_BYTE *)(a1 + 16) = 3;
      *(_QWORD *)(a1 + 24) = a2;
      break;
    case 4:
      v7 = *(_BYTE *)(a2 + 48);
      *(_QWORD *)a1 = v2;
      *(_BYTE *)(a1 + 8) = v7;
      *(_BYTE *)(a1 + 16) = 4;
      *(_QWORD *)(a1 + 24) = a2;
      break;
  }
  return a1;
}

