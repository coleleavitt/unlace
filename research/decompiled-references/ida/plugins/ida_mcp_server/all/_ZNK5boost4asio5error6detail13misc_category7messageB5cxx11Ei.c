char *__fastcall boost::asio::error::detail::misc_category::message[abi:cxx11](char *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rdx

  *(_QWORD *)a1 = a1 + 16;
  switch ( a3 )
  {
    case 1:
      strcpy(a1 + 16, "Already open");
      *((_QWORD *)a1 + 1) = 12;
      break;
    case 2:
      *((_QWORD *)a1 + 1) = 11;
      strcpy(a1 + 16, "End of file");
      break;
    case 3:
      v7 = std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E1E30);
      *(_QWORD *)a1 = v7;
      *((_QWORD *)a1 + 2) = 17;
      *(_BYTE *)(v7 + 16) = 100;
      *(__m128i *)v7 = si128;
      v9 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 1) = 17;
      *(_BYTE *)(v9 + 17) = 0;
      break;
    case 4:
      v4 = std::string::_M_create();
      v5 = _mm_load_si128((const __m128i *)&xmmword_3E1E40);
      *(_QWORD *)a1 = v4;
      *((_QWORD *)a1 + 2) = 57;
      *(__m128i *)v4 = v5;
      *(__m128i *)(v4 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E1E50);
      *(__m128i *)(v4 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E1E60);
      *(__m128i *)(v4 + 41) = _mm_load_si128((const __m128i *)&xmmword_3E1E70);
      v6 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 1) = 57;
      *(_BYTE *)(v6 + 57) = 0;
      break;
    default:
      *((_QWORD *)a1 + 1) = 15;
      strcpy(a1 + 16, "asio.misc error");
      break;
  }
  return a1;
}

