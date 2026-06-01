__int64 *__fastcall boost::asio::error::detail::netdb_category::message[abi:cxx11](__int64 *a1, __int64 a2, int a3)
{
  _OWORD *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rdx

  *a1 = (__int64)(a1 + 2);
  switch ( a3 )
  {
    case 1:
      v7 = std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E1E80);
      *a1 = v7;
      a1[2] = 30;
      *(__m128i *)v7 = si128;
      *(__m128i *)(v7 + 14) = _mm_load_si128((const __m128i *)&xmmword_3E1E90);
      v9 = *a1;
      a1[1] = 30;
      *(_BYTE *)(v9 + 30) = 0;
      break;
    case 2:
      v13 = std::string::_M_create();
      v14 = _mm_load_si128((const __m128i *)&xmmword_3E1E80);
      *a1 = v13;
      a1[2] = 51;
      *(__m128i *)v13 = v14;
      *(__m128i *)(v13 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E1EA0);
      *(__m128i *)(v13 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E1EB0);
      *(_DWORD *)(v13 + 47) = 1919251553;
      v15 = *a1;
      a1[1] = 51;
      *(_BYTE *)(v15 + 51) = 0;
      break;
    case 4:
      v16 = std::string::_M_create();
      v17 = _mm_load_si128((const __m128i *)&xmmword_3E1EC0);
      *a1 = v16;
      a1[2] = 56;
      *(__m128i *)v16 = v17;
      v18 = _mm_load_si128((const __m128i *)&xmmword_3E1ED0);
      *(_QWORD *)(v16 + 48) = 0x6174616420646574LL;
      *(__m128i *)(v16 + 16) = v18;
      *(__m128i *)(v16 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E1EE0);
      v19 = *a1;
      a1[1] = 56;
      *(_BYTE *)(v19 + 56) = 0;
      break;
    case 3:
      v10 = std::string::_M_create();
      v11 = _mm_load_si128((const __m128i *)&xmmword_3E1EF0);
      *a1 = v10;
      a1[2] = 55;
      *(__m128i *)v10 = v11;
      *(__m128i *)(v10 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E1F00);
      *(__m128i *)(v10 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E1F10);
      *(_QWORD *)(v10 + 47) = 0x70756B6F6F6C2065LL;
      v12 = *a1;
      a1[1] = 55;
      *(_BYTE *)(v12 + 55) = 0;
      break;
    default:
      v3 = (_OWORD *)std::string::_M_create();
      v4 = _mm_load_si128((const __m128i *)&xmmword_3E1F20);
      *a1 = (__int64)v3;
      a1[2] = 16;
      *v3 = v4;
      v5 = *a1;
      a1[1] = 16;
      *(_BYTE *)(v5 + 16) = 0;
      break;
  }
  return a1;
}

